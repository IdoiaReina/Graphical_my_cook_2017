/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init invent
*/

#include "thomas_cook.h"
#include "cook.h"

void	init_inv(t_Elem **e)
{
	*e = (t_Elem *)malloc(sizeof(t_Elem));
	malloc_inv_elem(e);
}

void	malloc_inv_elem(t_Elem **e)
{
	(*e)->color_orange = (t_invent *)malloc(sizeof(t_invent));
	(*e)->color_green = (t_invent *)malloc(sizeof(t_invent));
	(*e)->color_blue = (t_invent *)malloc(sizeof(t_invent));
	(*e)->color_yellow = (t_invent *)malloc(sizeof(t_invent));
	(*e)->color_red = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flavour_chocolate = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flavour_vanilla = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flavour_caramel = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flavour_strawberry = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flavour_banana = (t_invent *)malloc(sizeof(t_invent));
	(*e)->cream_vanilla = (t_invent *)malloc(sizeof(t_invent));
	(*e)->cream_chocolate = (t_invent *)malloc(sizeof(t_invent));
	(*e)->cream_caramel = (t_invent *)malloc(sizeof(t_invent));
	(*e)->cream_pink = (t_invent *)malloc(sizeof(t_invent));
	(*e)->cream_strawberry = (t_invent *)malloc(sizeof(t_invent));
	(*e)->deco_caramel = (t_invent *)malloc(sizeof(t_invent));
	(*e)->deco_sugar = (t_invent *)malloc(sizeof(t_invent));
	(*e)->fruit_cherry = (t_invent *)malloc(sizeof(t_invent));
	(*e)->fruit_strawberry = (t_invent *)malloc(sizeof(t_invent));
	(*e)->deco_locked = (t_invent *)malloc(sizeof(t_invent));
	(*e)->baker = (t_invent *)malloc(sizeof(t_invent));
	(*e)->flame = (t_invent *)malloc(sizeof(t_invent));
}
