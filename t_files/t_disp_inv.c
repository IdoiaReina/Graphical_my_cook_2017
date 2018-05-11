/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** display_inv
*/

#include "thomas_cook.h"
#include "cook.h"

void	display_all_inv(Entities **ent, t_Elem **e, sfRenderWindow *win)
{
	if ((*ent)->game->which_scene == 1 && (*ent)->game->which_selection == 1)
		display_color_inv(e, win);
	if ((*ent)->game->which_scene == 1 && (*ent)->game->which_selection == 2)
		display_flavour_inv(e, win);
	if ((*ent)->game->which_scene == 3 && (*ent)->game->which_selection == 1)
		display_cream_inv(e, win);
	if ((*ent)->game->which_scene == 3 && (*ent)->game->which_selection == 2)
		display_deco_inv(e, win);
}

//DISPLAY COLOR
void	display_color_inv(t_Elem **e, sfRenderWindow *win)
{
	sfRenderWindow_drawSprite(win, (*e)->color_orange->sprite, NULL);
	if ((*e)->color_green->unlock == 1 && (*e)->color_green->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->color_green->sprite, NULL);
	if ((*e)->color_blue->unlock == 1 && (*e)->color_blue->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->color_blue->sprite, NULL);
	if ((*e)->color_yellow->unlock == 1 && (*e)->color_yellow->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->color_yellow->sprite, NULL);
	if ((*e)->color_red->unlock == 1 && (*e)->color_red->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->color_red->sprite, NULL);
}
//DISPLAY FLAVOUR
void	display_flavour_inv(t_Elem **e, sfRenderWindow *win)
{
	if ((*e)->flavour_chocolate->unlock == 1 && (*e)->flavour_chocolate->disp_status == 1)
	sfRenderWindow_drawSprite(win, (*e)->flavour_chocolate->sprite, NULL);
	if ((*e)->flavour_vanilla->unlock == 1 && (*e)->flavour_vanilla->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->flavour_vanilla->sprite, NULL);
	if ((*e)->flavour_caramel->unlock == 1 && (*e)->flavour_caramel->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->flavour_caramel->sprite, NULL);
	if ((*e)->flavour_strawberry->unlock == 1 && (*e)->flavour_strawberry->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->flavour_strawberry->sprite, NULL);
	if ((*e)->flavour_banana->unlock == 1 && (*e)->flavour_banana->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->flavour_banana->sprite, NULL);
}
//DISPLAY CREAM
void	display_cream_inv(t_Elem **e, sfRenderWindow *win)
{
	sfRenderWindow_drawSprite(win, (*e)->cream_chocolate->sprite, NULL);
	if ((*e)->cream_vanilla->unlock == 1 && (*e)->cream_vanilla->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->cream_vanilla->sprite, NULL);
	if ((*e)->cream_caramel->unlock == 1 && (*e)->cream_caramel->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->cream_caramel->sprite, NULL);
	if ((*e)->cream_strawberry->unlock == 1 && (*e)->cream_strawberry->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->cream_strawberry->sprite, NULL);
	if ((*e)->cream_pink->unlock == 1 && (*e)->cream_pink->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->cream_pink->sprite, NULL);
}
//DISPLAY DECO
void	display_deco_inv(t_Elem **e, sfRenderWindow *win)
{
	sfRenderWindow_drawSprite(win, (*e)->deco_locked->sprite, NULL);
	if ((*e)->deco_caramel->unlock == 1 && (*e)->deco_caramel->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->deco_caramel->sprite, NULL);
	if ((*e)->deco_sugar->unlock == 1 && (*e)->deco_sugar->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->deco_sugar->sprite, NULL);
	if ((*e)->fruit_cherry->unlock == 1 && (*e)->fruit_cherry->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->fruit_cherry->sprite, NULL);
	if ((*e)->fruit_strawberry->unlock == 1 && (*e)->fruit_strawberry->disp_status == 1)
		sfRenderWindow_drawSprite(win, (*e)->fruit_strawberry->sprite, NULL);
}
//DISPLAY FRUIT
