ARCHIVE = libftprintf.a
GCC = gcc -c -Wall -Wextra -Werror


MANDATORY = ./*.c
LIBFTPATH = ./libft/
TESTER = ./Tester_printf/
OBJS = $(MANDATORY:.c=.o)

ARCHIVE = libftprintf.a
MANDATORY = ./*.c
LIBFT_OBJS = ./libft/*.o
LIBFT_C = ./libft/*.c
OBJS = $(MANDATORY:.c=.o)

all: $(ARCHIVE)

$(ARCHIVE) : $(LIBFT_OBJS) $(OBJS)
	ar -rcs $(ARCHIVE) $(OBJS) $(LIBFT_OBJS)

$(OBJS) : $(MANDATORY)
	$(GCC) $(MANDATORY)

$(LIBFT_OBJS) :
	make -C $(LIBFTPATH) all

clean :
	make -C $(LIBFTPATH) clean
	rm -f $(OBJS)
fclean : clean
	make -C $(LIBFTPATH) fclean
	rm -f $(ARCHIVE)


re: fclean all
