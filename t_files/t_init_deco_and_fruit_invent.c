/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init deco and fruit inv
*/

#include "thomas_cook.h"
#include "cook.h"

void init_all_deco_inv(t_Elem **e)
{
	init_locked_elem(e);
	init_sugar_deco_inv(e);
	init_cookie_deco_inv(e);
	init_fruit_inv(e);
}

void init_locked_elem(t_Elem **e)
{
	(*e)->deco_locked->sprite = fct_create_sprite("Assets/deco/deco1.png");
	(*e)->deco_locked->unlock = 1;
}

void init_sugar_deco_inv(t_Elem **e)
{
	(*e)->deco_sugar->sprite = fct_create_sprite("Assets/deco/sugar.png");
	(*e)->deco_sugar->unlock = 0;
	(*e)->deco_sugar->rect = put_button(1739, 450, 1857, 594);
}

void init_cookie_deco_inv(t_Elem **e)
{
	(*e)->deco_caramel->sprite = fct_create_sprite("Assets/deco/cookie.png");
	(*e)->deco_caramel->unlock = 0;
	(*e)->deco_caramel->rect = put_button(1600, 600, 1737, 716);
}

void init_fruit_inv(t_Elem **e)
{
	(*e)->fruit_cherry->sprite = fct_create_sprite("Assets/deco/cherry.png");
	(*e)->fruit_cherry->unlock = 0;
	(*e)->fruit_cherry->rect = put_button(1775, 743, 1872, 854);
	(*e)->fruit_strawberry->sprite = fct_create_sprite("Assets/deco/strawberry.png");
	(*e)->fruit_strawberry->unlock = 0;
	(*e)->fruit_strawberry->rect = put_button(1621, 852, 1707, 935);
}
