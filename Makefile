##
## Makefile for Makefile in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
## 
## Made by PECHAYRE Arthur
## Login   <pechay_a@etna-alternance.net>
## 
## Started on  Sat Oct  3 23:51:05 2015 PECHAYRE Arthur
## Last update Mon Oct  5 21:50:45 2015 PECHAYRE Arthur
##
CC =	gcc

NAME =	octocat

SRC =	display.c 	\
	input_manager.c \
	maze_manager.c 	\
	stack_list.c 	\
	game.c			\
	maze_printer.c 		\
	main.c				\
	move.c 				\
	hello_bye.c 		\
	move_algo.c 		\
	libmy/my_putchar.c	\
	libmy/my_strcmp.c 	\
	libmy/my_strncat.c	\
	libmy/my_swap.c 	\
	libmy/my_getnbr.c 	\
	libmy/my_putstr.c	\
	libmy/my_strcpy.c	\
	libmy/my_strncmp.c 	\
	libmy/my_isneg.c	\
	libmy/my_str_to_wordtab.c \
	libmy/my_strdup.c		\
	libmy/my_strncpy.c 		\
	libmy/my_put_nbr.c		\
	libmy/my_strcat.c		\
	libmy/my_strlen.c		\
	libmy/my_strstr.c


RM =	rm -f

OBJ =	$(SRC:%.c=%.o)

$(NAME) :	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
