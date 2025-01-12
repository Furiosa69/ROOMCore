.PHONY : all clean

SRC = $(shell find ./src/ -name "*.cpp")
CC  = g++
OBJ = $(SRC:%.cpp=%.o)
EXE = test1
EXE_s = $(addsuffix .s,$(basename $(EXE)))

all : $(EXE)

#$(info SRC is$(SRC)) #输出信息
#$(info OBJ is$(OBJ))

$(EXE) : $(OBJ)
	$(CC) -o $@ $^
#	objdump -s -d $(EXE) > $(EXE_s)	#可执行文件反汇编
# g++ -S -o <file.S> <file.cpp> #源文件汇编

$(OBJ) : $(SRC)
	$(CC) -c -o $@ $<

clean:
	rm -rf $(OBJ) $(EXE_s)



