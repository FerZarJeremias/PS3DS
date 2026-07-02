CC = gcc

CFLAGS = -Wall -Wextra -Iinclude

all: memory_test cpu_test

memory_test:
        $(CC) $(CFLAGS) \
        tests/test_memory.c \
        src/core/memory.c \
        src/core/bus.c \
        -o test_memory
cpu_test:
	$(CC) $(CFLAGS) tests/test_cpu.c src/cpu/arm_cpu.c -o test_cpu

clean:
	rm -f test_memory test_cpu
