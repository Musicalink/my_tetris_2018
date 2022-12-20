SRC	=	my_putchar.c		\
		my_puterror.c		\
		my_fact_rec.c		\
		my_find_prime_sup.c	\
		my_getnbr_base.c	\
		my_getnbr.c		\
		my_power_rec.c		\
		my_putnbr_base.c	\
		my_put_nbr.c		\
		my_putstr.c		\
		my_revstr.c		\
		my_show_wordtab.c	\
		my_strcat.c		\
		my_strcmp.c		\
		my_strdup.c		\
		my_strlen.c		\
		my_strncmp.c		\
		my_strstr.c		\
		my_memset.c		\
		my_int_to_str.c		\
		get_next_line.c		\
		get_next_line_2.c	\
		my_strsplit.c		\
		my_strmcat.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

MV	=	mv

CP	=	cp

CC	=	gcc

AR	=	ar rc

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -w -c $(SRC) -Wall -pedantic
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
