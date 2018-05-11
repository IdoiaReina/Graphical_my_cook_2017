/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init color_invent
*/

#include "thomas_cook.h"
#include "cook.h"

void	init_all_color_inv(t_Elem **e)
{
	init_orange_color(e);
	init_green_color(e);
	init_blue_color(e);
	init_yellow_and_red_color(e);
}

void	init_orange_color(t_Elem **e)
{
	(*e)->color_orange->sprite = fct_create_sprite("Assets/color/color1.png");
	(*e)->color_orange->unlock = 1;
	(*e)->color_orange->disp_status = 1;
	(*e)->color_orange->rect = put_button(1682, 451, 1800, 553);
}

void	init_green_color(t_Elem **e)
{
	(*e)->color_green->sprite = fct_create_sprite("Assets/color/green.png");
	(*e)->color_green->position.x = 0;
	(*e)->color_green->position.y = 0;
	(*e)->color_green->unlock = 0;
	(*e)->color_green->disp_status = 0;
	(*e)->color_green->rect = put_button(1603, 586, 1721, 688);
}

void	init_blue_color(t_Elem **e)
{
	(*e)->color_blue->sprite = fct_create_sprite("Assets/color/blue.png");
	(*e)->color_blue->position.x = 0;
	(*e)->color_blue->position.y = 0;
	(*e)->color_blue->unlock = 0;
	(*e)->color_blue->disp_status = 0;
	(*e)->color_blue->rect = put_button(1750, 685, 1868, 787);
}

void	init_yellow_and_red_color(t_Elem **e)
{
	(*e)->color_yellow->sprite = fct_create_sprite("Assets/color/yellow.png");
	(*e)->color_yellow->position.x = 0;
	(*e)->color_yellow->position.y = 0;
	(*e)->color_yellow->unlock = 0;
	(*e)->color_yellow->disp_status = 0;
	(*e)->color_yellow->rect = put_button(1601, 766, 1719, 868);
	(*e)->color_red->sprite = fct_create_sprite("Assets/color/rose.png");
	(*e)->color_red->position.x = 0;
	(*e)->color_red->position.y = 0;
	(*e)->color_red->unlock = 0;
	(*e)->color_red->disp_status = 0;
	(*e)->color_red->rect = put_button(1752, 862, 1870, 964);
}
