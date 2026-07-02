CC = gcc

CFLAGS = -Wall -Wextra -Iinclude

TEST_SRC = \
	tests/test_memory.c \
	src/core/memory.c

TARGET = test_memory

all:
	$(CC) $(CFLAGS) $(TEST_SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
