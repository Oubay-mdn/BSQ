##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC  =   gcc

SRC =   src/main.c 		\
		src/bsq.c		\
		src/check.c

OBJ =   $(SRC:.c=.o)

NAME    =   bsq

CFLAGS  =   -W -Wall -I ./include/ -g3

LDFLAGS =   -L./lib -lmy

all: $(NAME)

$(NAME):    $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~
	cd lib/my/ && make clean

fclean: clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re: fclean all

.PHONY: all clean fclean re
