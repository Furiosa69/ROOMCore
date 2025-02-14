BUILD_DIR = ./build
VERILATOR = verilator
VERI_F += --cc --exe --build --trace --top-module ysyx_24080018_cpu
OBJ_DIR = ./obj_dir
SIM_TOPNAME = top
WORK_DIR = $(shell pwd)
INC_PATH := $(WORK_DIR)/src/csrc/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))
C_F += -CFLAGS "$(INCLUDES) -g "

#C_F += -CFLAGS "-DSDB"
C_F += -CFLAGS "-DCONFIG_TARGET_AM"

C_F += -CFLAGS "-DCONFIG_TIMER_CLOCK_GETTIME"
C_F += -CFLAGS "-DCONFIG_VCD_TRACE_COND"

# 将 LDFLAGS 传递给 g++
LDFLAGS += -L/usr/lib/x86_64-linux-gnu -lreadline -lhistory -lncurses

# 查找需要的源文件
V_FILE = $(shell find ./src/vsrc -name "*.v" -o -name "*.sv")
C_FILE += $(shell find ./src/csrc -name "*.cpp" -o -name "*.c")

sim:
	$(call git_commit, "sim RTL")
	$(VERILATOR) $(C_F) $(VERI_F) $(C_FILE) $(V_FILE) --LDFLAGS "$(LDFLAGS)"
	$(OBJ_DIR)/Vysyx_24080018_cpu

gdb: 
	$(VERILATOR) $(C_F) $(VERI_F) $(C_FILE) $(V_FILE) --gdb --LDFLAGS "$(LDFLAGS)"
	$(OBJ_DIR)/Vysyx_24080018_cpu

gtk: sim
	gtkwave wave/sim_wave.vcd

clean:
	rm -r $(OBJ_DIR) *.vcd
