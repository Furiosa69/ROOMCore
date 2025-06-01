# -------------------- Basic Setup --------------------
TOP_MODULE := top
OBJ_DIR := ./obj_dir

# -------------------- File Lists --------------------
V_SRC := $(shell find $(NPC_HOME)/vsrc -name "*.v")
C_SRC += $(shell find $(NPC_HOME)/csrc -name "*.cpp")
C_SRC += $(shell find $(NPC_HOME)/csrc -name "*.c")
C_SRC += $(shell find $(NPC_HOME)/csrc -name "*.cc")

# -------------------- Verilator Flags ----------------
V_FLAGS += --cc --exe --build
V_FLAGS += --Wall --trace
V_FLAGS += -x-assign fast
V_FLAGS += --top-module $(TOP_MODULE)
V_FLAGS += -I$(NPC_HOME)/vsrc
V_FLAGS += -MMD 

# -------------------- Compiler Flags ----------------
INC_PATH := $(NPC_HOME)/csrc/include
INCLUDES := $(addprefix -I, $(INC_PATH))

# C++ Compiler Flags (passed via -CFLAGS)
CXXFLAGS += $(INCLUDES)
CXXFLAGS += -g
#CXXFLAGS += -DCONFIG_TARGET_AM
CXXFLAGS += -DCONFIG_TIMER_CLOCK_GETTIME
CXXFLAGS += $(shell llvm-config --cxxflags | sed 's/-D__STDC_[A-Z_]*//g')
CXXFLAGS += -fPIE
C_FLAGS += -CFLAGS "-DCONFIG_VCD_TRACE_COND"
_FLAGS += -CFLAGS "-DCONFIG_ITRACE"

# Linker Flags
LDFLAGS += -L/usr/lib/x86_64-linux-gnu
LDFLAGS += -lreadline -lhistory -lncurses -lrt
LDFLAGS += $(shell llvm-config --ldflags --libs all)

# -------------------- Build Targets -----------------
BIN := $(OBJ_DIR)/V$(TOP_MODULE)
#LOG ?= $(NPC_HOME)/obj_dir/log.txt
DIFFTEST := $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
RUN_FLAGS := --img=$(IMG) --diff=$(DIFFTEST) 
NPC_EXEC := $(BIN) $(RUN_FLAGS)

.PHONY: all run clean debug

all: run

run:
	verilator $(V_FLAGS) \
	-CFLAGS "$(CXXFLAGS)" \
	-LDFLAGS "$(LDFLAGS)" \
	$(C_SRC) $(V_SRC)
	$(NPC_EXEC)

debug: 
	CXXFLAGS += -O0 -ggdb3
debug: run

clean:
	rm -rf $(OBJ_DIR) $(LOG)
	rm -r $(OBJ_DIR) *.vcd       
