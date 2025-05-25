#include <utils.h>

//--------------------------------ftrace(jal/jalr识别相关)-----------------------------------------
#define OPCODE_JAL 0x6f
#define OPCODE_JALR 0x67

int jal_or_jalr(uint32_t inst) {
	uint32_t opcode = (inst & 0x7f);
	return (opcode == OPCODE_JAL) || (opcode == OPCODE_JALR);
}

int check_jal_or_jalr(uint32_t inst){
	int flag = 0;
  if (jal_or_jalr(inst)) {
      if ((inst & 0x7f) == OPCODE_JAL) {
					flag = 1;
      } else if ((inst & 0x7f) == OPCODE_JALR) {
					flag = 2;
      }
  }
	return flag ;
}

//------------------------------------------------------------------------------------------------
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
#ifdef CONFIG_IRINGBUF
		void disassemble(char *str,int size,uint64_t pc ,uint8_t *code,int nbype);
    disassemble(rb->entries[index].inst_str, sizeof(rb->entries[index].inst_str), pc, code, sizeof(code));
#endif
}

void print_ringbuffer(RingBuffer *rb) {
    int index = rb->tail;
    for (int i = 0; i < rb->count; ++i) {
        if (index == rb->current_index) {
            printf("\t-->| ");
        } else {
            printf("\t   | "); 
        }

        // 打印pc和inst
        printf("0x%08lx: %s\n", rb->entries[index].pc, rb->entries[index].inst_str);

        // 移动到下一个条目
        index = (index + 1) % RING_BUFFER_SIZE;
    }
}
