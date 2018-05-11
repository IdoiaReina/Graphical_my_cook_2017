/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cupcake built functions
*/

#include "thomas_cook.h"
#include "cook.h"

void	hitbox_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	hitbox_orange_color(e, elem, window);
	hitbox_green_color(e, elem, window);
	hitbox_blue_color(e, elem, window);
	hitbox_yellow_color(e, elem, window);
	hitbox_red_color(e, elem, window);
	(*elem)->color_orange->disp_status = 1;
	(*elem)->color_green->disp_status = 1;
	(*elem)->color_blue->disp_status = 1;
	(*elem)->color_yellow->disp_status = 1;
	(*elem)->color_red->disp_status = 1;
}

void	hitbox_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	hitbox_chocolate_flavour(e, elem, window);
	hitbox_vanilla_flavour(e, elem, window);
	hitbox_caramel_flavour(e, elem, window);
	hitbox_strawberry_flavour(e, elem, window);
	hitbox_banana_flavour(e, elem, window);
}

void	hitbox_cream(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	hitbox_chocolate_cream(e, elem, window);
	hitbox_vanilla_cream(e, elem, window);
	hitbox_caramel_cream(e, elem, window);
	hitbox_cherry_cream(e, elem, window);
	hitbox_strawberry_cream(e, elem, window);
	(*elem)->cream_chocolate->disp_status = 1;
	(*elem)->cream_vanilla->disp_status = 1;
	(*elem)->cream_caramel->disp_status = 1;
	(*elem)->cream_strawberry->disp_status = 1;
	(*elem)->cream_pink->disp_status = 1;
}

void	hitbox_deco(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	hitbox_cookie_deco(e, elem, window);
	hitbox_sugar_deco(e, elem, window);
	hitbox_cherry_deco(e, elem, window);
	hitbox_strawberry_deco(e, elem, window);
	(*elem)->deco_caramel->disp_status = 1;
	(*elem)->deco_sugar->disp_status = 1;
	(*elem)->fruit_cherry->disp_status = 1;
	(*elem)->fruit_strawberry->disp_status = 1;
}
