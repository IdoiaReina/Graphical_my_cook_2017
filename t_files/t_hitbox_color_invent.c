/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cupcake built functions
*/

#include "thomas_cook.h"
#include "cook.h"

void	hitbox_orange_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {875, 684};

	if (is_a_hit((*elem)->color_orange->rect, mouse) == 1 && \
	(*elem)->color_orange->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 1) {
		(*e)->color->rect.top = 0;
		sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
		sfSprite_setPosition((*e)->color->sprite, cupcake_pos);
		(*e)->game-> which_selection = 2;
		(*elem)->flavour_chocolate->disp_status = 1;
		(*elem)->flavour_vanilla->disp_status = 1;
		(*elem)->flavour_caramel->disp_status = 1;
		(*elem)->flavour_strawberry->disp_status = 1;
		(*elem)->flavour_banana->disp_status = 1;
	}
}

void	hitbox_green_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {875, 684};

	if (is_a_hit((*elem)->color_green->rect, mouse) == 1 && \
	(*elem)->color_green->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 1) {
		(*e)->color->rect.top = 173;
		sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
		sfSprite_setPosition((*e)->color->sprite, cupcake_pos);
		(*e)->game-> which_selection = 2;
		(*elem)->flavour_chocolate->disp_status = 1;
		(*elem)->flavour_vanilla->disp_status = 1;
		(*elem)->flavour_caramel->disp_status = 1;
		(*elem)->flavour_strawberry->disp_status = 1;
		(*elem)->flavour_banana->disp_status = 1;
	}
}

void	hitbox_blue_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {875, 684};

	if (is_a_hit((*elem)->color_blue->rect, mouse) == 1 && \
	(*elem)->color_blue->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 1) {
		(*e)->color->rect.top = 519;
		sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
		sfSprite_setPosition((*e)->color->sprite, cupcake_pos);
		(*e)->game-> which_selection = 2;
		(*elem)->flavour_chocolate->disp_status = 1;
		(*elem)->flavour_vanilla->disp_status = 1;
		(*elem)->flavour_caramel->disp_status = 1;
		(*elem)->flavour_strawberry->disp_status = 1;
		(*elem)->flavour_banana->disp_status = 1;
	}
}

void	hitbox_yellow_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {875, 684};

	if (is_a_hit((*elem)->color_yellow->rect, mouse) == 1 && \
	(*elem)->color_yellow->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 1) {
		(*e)->color->rect.top = 346;
		sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
		sfSprite_setPosition((*e)->color->sprite, cupcake_pos);
		(*e)->game-> which_selection = 2;
		(*elem)->flavour_chocolate->disp_status = 1;
		(*elem)->flavour_vanilla->disp_status = 1;
		(*elem)->flavour_caramel->disp_status = 1;
		(*elem)->flavour_strawberry->disp_status = 1;
		(*elem)->flavour_banana->disp_status = 1;
	}
}

void	hitbox_red_color(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {875, 684};

	if (is_a_hit((*elem)->color_red->rect, mouse) == 1 && \
	(*elem)->color_red->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 1) {
		(*e)->color->rect.top = 692;
		sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
		sfSprite_setPosition((*e)->color->sprite, cupcake_pos);
		(*e)->game-> which_selection = 2;
		(*elem)->flavour_chocolate->disp_status = 1;
		(*elem)->flavour_vanilla->disp_status = 1;
		(*elem)->flavour_caramel->disp_status = 1;
		(*elem)->flavour_strawberry->disp_status = 1;
		(*elem)->flavour_banana->disp_status = 1;
	}
}
