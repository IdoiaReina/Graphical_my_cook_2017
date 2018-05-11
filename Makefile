##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC=		gcc

RM=		rm -f

SRC=		files/main.c				\
		files/usage.c				\
		files/window.c				\
		files/event.c				\
		files/titlescreen.c			\
		files/background.c			\
		files/menu.c				\
		files/init.c				\
		files/game.c				\
		t_files/food_init.c			\
		t_files/drag_and_drop.c			\
		files/hitbox.c				\
		files/pause.c				\
		files/score.c				\
		t_files/t_init_color_invent.c		\
		t_files/t_init_flavour_invent.c		\
		t_files/t_init_cream_invent.c		\
		t_files/t_init_deco_and_fruit_invent.c	\
		t_files/t_malloc_invent.c		\
		t_files/t_disp_inv.c			\
		t_files/t_hitbox_invent.c		\
		t_files/t_hitbox_color_invent.c		\
		t_files/t_hitbox_flavour_invent.c	\
		t_files/t_hitbox_cream_invent.c		\
		t_files/t_init_cuiseur.c		\
		t_files/t_hitbox_deco_invent.c		\
		t_files/make_cupcake.c			\
		t_files/baking.c			\
		files/save.c				\
		files/recipic.c				\
		lillib/my_getnbr.c			\
		lillib/my_putstr.c 			\

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra

CFLAGS+=	-I./include

LDFLAGS=	-lc_graph_prog

NAME=		my_cook

all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
