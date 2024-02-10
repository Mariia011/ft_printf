ARCHIVE = libftprintf.a
GCC = gcc -c -Wall -Wextra -Werror

MANDATORY = ./*.c
LIBFT = ./libft/*
TESTER = ./Tester_printf/
OBJS = $(MANDATORY:.c=.o)

all: $(ARCHIVE)

$(ARCHIVE) : $(OBJS)
	ar -rcs $(ARCHIVE) $(OBJS)

$(OBJS) : $(MANDATORY)
	$(GCC) $(MANDATORY)

clean :
	rm -f $(OBJS)
fclean :
	rm -f $(ARCHIVE)

re: fclean all
