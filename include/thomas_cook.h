/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** .h
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>

#ifndef T_COOK_
#define T_COOK_

typedef struct s_invent
{
	sfTexture	*texture;
	sfSprite	*sprite;
	sfIntRect	rect;
	sfVector2f	position;
	sfVector2f	speed;
	sfVector2f	scale;
	int		offset;
	int		max_value;
	int		unlock;
	int		disp_status;
}t_invent;

typedef struct s_Elem
{
	t_invent *color_orange;
	t_invent *color_green;
	t_invent *color_blue;
	t_invent *color_yellow;
	t_invent *color_red;
	t_invent *flavour_chocolate;
	t_invent *flavour_vanilla;
	t_invent *flavour_caramel;
	t_invent *flavour_strawberry;
	t_invent *flavour_banana;
	t_invent *cream_chocolate;
	t_invent *cream_vanilla;
	t_invent *cream_caramel;
	t_invent *cream_pink;
	t_invent *cream_strawberry;
	t_invent *deco_locked;
	t_invent *deco_caramel;
	t_invent *deco_sugar;
	t_invent *fruit_cherry;
	t_invent *fruit_strawberry;
	t_invent *baker;
	t_invent *flame;
}t_Elem;

/*PROTO*/
void malloc_inv_elem(t_Elem **e);
void init_inv(t_Elem **e);
/*INIT COLOR*/
void init_all_color_inv(t_Elem **e);
void init_green_color(t_Elem **e);
void init_blue_color(t_Elem **e);
void init_yellow_and_red_color(t_Elem **e);
void init_orange_color(t_Elem **e);
/*INIT_FLAVOUR*/
void init_all_flavour_inv(t_Elem **e);
void init_chocolate_flavour_inv(t_Elem **e);
void init_vanilla_flavour_inv(t_Elem **e);
void init_caramel_flavour_inv(t_Elem **e);
void init_banana_and_strawberry_flavour_inv(t_Elem **e);
/*INIT_CREAM*/
void init_all_cream_inv(t_Elem **e);
void init_chocolate_cream_inv(t_Elem **e);
void init_vanilla_cream_inv(t_Elem **e);
void init_caramel_cream_inv(t_Elem **e);
void init_cherry_and_strawberry_cream_inv(t_Elem **e);

/*INIT DECO AND FRUIT*/
void init_all_deco_inv(t_Elem **e);
void init_locked_elem(t_Elem **e);
void init_sugar_deco_inv(t_Elem **e);
void init_cookie_deco_inv(t_Elem **e);
void init_fruit_inv(t_Elem **e);

/*DISP_INV*/
void display_color_inv(t_Elem **e, sfRenderWindow *win);
void display_flavour_inv(t_Elem **e, sfRenderWindow *win);
void display_cream_inv(t_Elem **e, sfRenderWindow *win);
void display_deco_inv(t_Elem **e, sfRenderWindow *win);
#endif /*T_COOK*/
