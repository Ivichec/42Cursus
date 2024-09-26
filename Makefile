# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -Werror

# Source files
SRCS := $(wildcard *.c)

# Object files
OBJS := $(SRCS:.c=.o)

# Target executable
TARGET := libft.a

# Build rule
$(TARGET): $(OBJS)
	$(AR) rcs $@ $^

# Object file rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS)

# Clean and rebuild rule
re: clean $(TARGET)

# Phony targets
.PHONY: clean re