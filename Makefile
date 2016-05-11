##
## Makefile for  in /Users/stevemanogarane/La Roulette/manoga_s
## 
## Made by MANOGARANE Steve »
## Login   <manoga_s »@etna-alternance.net>
## 
## Started on  Wed May 11 14:40:22 2016 MANOGARANE Steve »
## Last update Wed May 11 14:44:15 2016 MANOGARANE Steve »
##

CC      = 	gcc -W -Werror -Wall -g3

NAME	=	roulette

SRC	= 	my_getnbr.c \
		my_is_odd.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_readLine.c \
		my_strcmp.c \
		my_strcpy.c \
		roulette.c

OBJ	= 	$(SRC:%.c=%.o)
RM	= 	rm -f

$(NAME):	$(OBJ)
		$(CC)  $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all