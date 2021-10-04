SRC=*.c
OBJ=$(SRC:.c=.o)
CFLAGS="-Wall -Wextra -Werror"

.c.o:
	gcc $(CFLAGS) $<

$(NAME): 
	ar rcs ${SRC}

