Library = libft
Compiler = gcc
CmpFlags = -Wall -Wextra -Werror
OUTN = $(Library).a
CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)
NAME = $(OUTN)

$(NAME): $(OFILES)
	$(Compiler) $(CmpFlags) -c $^ -I./
	ar -rc $@ $^

all: $(NAME)

clean:
	rm -f $(NAME) $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
