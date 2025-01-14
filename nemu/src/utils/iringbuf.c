#include <utils.h>

void init_ring_buffer(RingBuffer *rb) {
    rb->head = 0;
    rb->tail = 0;
    rb->count = 0;
		rb->current_index = 0;
		for (int i = 0; i < RING_BUFFER_SIZE; ++i) {
        rb->entries[i].pc = 0; // 初始化程序计数器为 0
        rb->entries[i].inst = 0; // 初始化指令为 0
        memset(rb->entries[i].inst_str, 0, sizeof(rb->entries[i].inst_str)); // 初始化指令字符串为空
    }
}

void disassemble(char *str,int size,uint64_t pc,uint8_t *code,int nbyte);
void add_to_ringbuffer(RingBuffer *rb, uint64_t pc, uint32_t inst) {
    if (rb->count == RING_BUFFER_SIZE) {
        rb->tail = (rb->tail + 1) % RING_BUFFER_SIZE;
    } else {
        rb->count++;
    }

    // 获取下一个条目的索引
    int index = rb->head;
    rb->head = (rb->head + 1) % RING_BUFFER_SIZE;

    // 存储PC和指令
    rb->entries[index].pc = pc;
    rb->entries[index].inst = inst;

    // 将32位指令转换为字节序列
    uint8_t code[4];
    memcpy(code, &inst, sizeof(inst)); // 使用 memcpy 来复制指令到字节序列

    // 存储反汇编后的指令字符串
    disassemble(rb->entries[index].inst_str, sizeof(rb->entries[index].inst_str), pc, code, sizeof(code));
}

void print_ringbuffer(RingBuffer *rb) {
    int index = rb->tail;
    for (int i = 0; i < rb->count; ++i) {
        // 打印箭头符号 "->" 如果这是当前执行的代码
        if (index == rb->current_index) {
            printf("\t-->| ");
        } else {
            printf("\t   | "); // 保持对齐，打印空格
        }

        // 打印程序计数器和反汇编后的指令
        printf("0x%08lx: %s\n", rb->entries[index].pc, rb->entries[index].inst_str);

        // 移动到下一个条目
        index = (index + 1) % RING_BUFFER_SIZE;
    }
}
