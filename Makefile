##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## For tetris
##

SRC	=	src/tetris.c		\
		src/parser.c		\
		src/parser_utils.c		\
		src/parser_setter.c		\
		src/setupterm.c		\
		src/utils.c			\
		src/mini_utils.c		\
		src/title.c			\
		src/tools.c			\
		src/debug.c			\
		src/pause.c			\
		src/display.c		\
		src/display_utils.c		\
		src/drawer.c		\
		src/tetrimino.c		\
		src/check_tetrimino.c	\
		src/check.c			\
		src/set_rotated.c		\
		src/game.c			\
		src/game_utils.c		\
		src/score.c			\
		src/action_game.c		\
		src/remove_line.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	tetris

CC	=	gcc

HEADER	=	include/

RM	=	rm -f

LIB_P	=	-Llib/my

LIB	=	-lmy -lncurses

all:	$(NAME)

$(NAME):
	cd lib/my/ && make
	$(CC) -o $(NAME) -I$(HEADER) $(SRC) $(LIB_P) $(LIB)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
