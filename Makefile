ARCHIVE = libftprintf.a
GCC = gcc -c -Wall -Wextra -Werror

MANDATORY = ./*.c
LIBFT = ./libft/*
TESTER = ./Tester_printf/
OBJS = $(MANDATORY:.c=.o)

ARCHIVE = libftprintf.a
GCC = gcc -c -Wall -Wextra -Werror
MANDATORY = ./*.c
LIBFT_OBJS = ./libft/*.o
LIBFT_C = ./libft/*.c
OBJS = $(MANDATORY:.c=.o)
TARGET = ./*.o

all: $(ARCHIVE)

$(ARCHIVE) : $(TARGET)
	ar -rcs $(TARGET) $(LIBFT_OBJS)

$(TARGET) : $(LIBFT_OBJS) $(MANDATORY)  
	$(GCC) $(MANDATORY)

$(LIBFT_OBJS) : $(LIBFT_C)
	$(GCC) $(LIBFT_C)
	mv $(LIBFT_OBJS) .
clean :
	rm -f $(OBJS)
fclean : 
	rm -f $(ARCHIVE)

re: fclean all
