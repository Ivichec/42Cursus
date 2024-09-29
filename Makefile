# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -Werror

# Nombre de la biblioteca
Library		= libft

# Archivos fuente
files := $(wildcard *.c)

# Nombre del archivo de salida
OUTN	= $(Library).a

# Lista de archivos fuente en C
CFILES	= $(files)

# Lista de archivos objeto
OFILES	= $(CFILES:.c=.o)

# Nombre del archivo de salida
NAME	= $(OUTN)

# Construir la biblioteca
$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

# Construir la biblioteca por defecto
all: $(NAME)

# Limpiar los archivos objeto
clean:
	$(RM) $(OFILES)

# Clean object files and the library
fclean: clean
	$(RM) $(OUTN)

# Rebuild the library
re: fclean all

# Phony targets
.PHONY: all clean fclean re
	rm -f $(OFILES)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Clean object files, the library, and rebuild
re: fclean all

# Declare the targets that are not associated with files
.PHONY: all clean fclean re