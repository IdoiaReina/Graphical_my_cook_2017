/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init flavour inv
*/

#include "thomas_cook.h"
#include "cook.h"

void	init_all_flavour_inv(t_Elem **e)
{
	init_chocolate_flavour_inv(e);
	init_vanilla_flavour_inv(e);
	init_caramel_flavour_inv(e);
	init_banana_and_strawberry_flavour_inv(e);
}

void	init_chocolate_flavour_inv(t_Elem **e)
{
	(*e)->flavour_chocolate->sprite = fct_create_sprite("Assets/flavour/flavour1.png");
	(*e)->flavour_chocolate->unlock = 1;
	(*e)->flavour_chocolate->disp_status = 0;
	(*e)->flavour_chocolate->rect = put_button(1594, 463, 1877, 550);
}

void	init_vanilla_flavour_inv(t_Elem **e)
{
	(*e)->flavour_vanilla->sprite = fct_create_sprite("Assets/flavour/vannilla.png");
	(*e)->flavour_vanilla->unlock = 0;
	(*e)->flavour_vanilla->disp_status = 0;
	(*e)->flavour_vanilla->rect = put_button(1594, 563, 1877, 650);
}

void	init_caramel_flavour_inv(t_Elem **e)
{
	(*e)->flavour_caramel->sprite = fct_create_sprite("Assets/flavour/caramel.png");
	(*e)->flavour_caramel->unlock = 0;
	(*e)->flavour_caramel->disp_status = 0;
	(*e)->flavour_caramel->rect = put_button(1594, 662, 1871, 749);
}

void	init_banana_and_strawberry_flavour_inv(t_Elem **e)
{
	(*e)->flavour_banana->sprite = fct_create_sprite("Assets/flavour/banana.png");
	(*e)->flavour_banana->unlock = 0;
	(*e)->flavour_banana->disp_status = 0;
	(*e)->flavour_banana->rect = put_button(1588, 864, 1875, 951);
	(*e)->flavour_strawberry->sprite = fct_create_sprite("Assets/flavour/strawberry.png");
	(*e)->flavour_strawberry->unlock = 0;
	(*e)->flavour_strawberry->disp_status = 0;
	(*e)->flavour_strawberry->rect = put_button(1599, 759, 1886, 846);
}
