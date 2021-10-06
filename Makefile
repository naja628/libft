SRC=case_convert.c mem_manip.c strs1.c strs2.c char_predicates.c mem_manip2.c \
	 ft_atoi.c ft_strtrim.c ft_split.c ft_itoa.c ft_putnbr_fd.c output.c \
	 strmapping.c
OBJ=${SRC:.c=.o}
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a

.c.o:
	gcc -c ${CFLAGS} $<

$(NAME):	${OBJ}
	ar rcs ${NAME} ${OBJ}

all:$(NAME) 

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
