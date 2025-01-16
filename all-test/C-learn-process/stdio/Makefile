.PHONY : all clean

SRC := $(shell find ./src/ -name "*.c")
DEP := $(shell find ./src/ -name "*.h")
CC  := gcc
CFLAGS := -g
OBJ := $(SRC:%.c=%.o)
EXE := $(notdir $(shell pwd))
#EXE_s := $(addsuffix .s,$(basename $(EXE)))

all : $(EXE)

#$(info SRC is$(SRC)) #输出信息
#$(info EXE is$(EXE))

$(EXE) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
#	objdump -s -d $(EXE) > $(EXE_s)	#可执行文件反汇编
# g++ -S -o <file.S> <file.cpp> #源文件汇编

$(OBJ) : %.o : %.c $(DEP)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ) 



