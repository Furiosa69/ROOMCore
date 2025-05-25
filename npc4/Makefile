# -------------------- files -------------------------
V_SRC = $(shell find $(WORK_DIR)/src/vsrc -name "*.v" -o -name "*.sv")
C_SRC += $(shell find $(WORK_DIR)/src/csrc -name "*.cpp" -o -name "*.c")
#C_SRC += $(shell find ./src/csrc -name "*.cc" -o -name "*.c")

# -------------------- verilator ---------------------

TOP_MODULE := ysyx_24080018_cpu
V_FLAGS += --cc --exe --build --trace --top-module $(TOP_MODULE)
VERILATOR = verilator

# --------------------- LIB ----------------------------
LDFLAGS += -L/usr/lib/x86_64-linux-gnu -lreadline -lhistory -lncurses
OBJ_DIR = ./obj_dir
WORK_DIR = /home/furiosa/ysyx-workbench/npc4

LOG ?= $(NPC_HOME)/obj_dir/log.txt
#IMG ?= /home/furiosa/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32-npc.bin
DIFFTEST := ${NEMU_HOME}/build/riscv32-nemu-interpreter-so
BIN := $(OBJ_DIR)/V$(TOP_MODULE)
RUN_FLAGS := --img=${IMG} --diff=${DIFFTEST} --log=${LOG}
NPC_EXEC := ${BIN} ${RUN_FLAGS}

# --------------------- C_FLAGS ---------------------
INC_PATH := $(WORK_DIR)/src/csrc/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))
C_FLAGS += -CFLAGS "$(INCLUDES) -g "
#C_FLAGS += -CFLAGS "-DSDB"
C_FLAGS += -CFLAGS "-DCONFIG_TARGET_AM"
C_FLAGS += -CFLAGS "-DCONFIG_TIMER_CLOCK_GETTIME"
C_FLAGS += -CFLAGS "-DCONFIG_VCD_TRACE_COND"
#C_FLAGS += -CFLAGS "-DCONFIG_ITRACE"

# --------------------- build ------------------------
.PHONY: run 

run:
	$(VERILATOR) $(C_FLAGS) $(V_FLAGS) $(C_SRC) $(V_SRC) --LDFLAGS "$(LDFLAGS)" $(NEMU_EXEC)
	${NPC_EXEC}

gdb: 
	$(VERILATOR) $(C_FLAGS) $(V_FLAGS) $(C_SRC) $(V_SRC) --gdb --LDFLAGS "$(LDFLAGS)"
	${NPC_EXEC}

gtk: sim
	gtkwave wave/sim_wave.vcd

clean:
	rm -r $(OBJ_DIR) *.vcd
