export CROSS_COMPILE := x86_64-linux-gnu-
CFLAGS  += -m64 -fPIC -mno-sse
<<<<<<< HEAD
CFLAGS  += --param=min-pagesize=0 # fix warning about "array subscript 0 is outside array bounds"
=======
>>>>>>> b1ee176f7ac9a57cfc933d78d73571c5a86484e2
ASFLAGS += -m64 -fPIC
LDFLAGS += -melf_x86_64
