/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** flavour hitbox
*/

#include "cook.h"
#include "thomas_cook.h"

void	hitbox_chocolate_cream(Entities **e, t_Elem **elem, sfRenderWindow *wi)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(wi);
	sfVector2f cupcake_pos = {887, 579};

	if (is_a_hit((*elem)->cream_chocolate->rect, mouse) == 1 &&
	(*elem)->cream_chocolate->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 1) {
		(*e)->game->which_selection = 2;
		(*e)->cream->rect.top = 0;
		sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
		sfSprite_setPosition((*e)->cream->sprite, cupcake_pos);
	}
}

void	hitbox_vanilla_cream(Entities **e, t_Elem **elem, sfRenderWindow *wi)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(wi);
	sfVector2f cupcake_pos = {887, 579};

	if (is_a_hit((*elem)->cream_vanilla->rect, mouse) == 1 && \
	(*elem)->cream_vanilla->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 1) {
		(*e)->game->which_selection = 2;
		(*e)->cream->rect.top = 155;
		sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
		sfSprite_setPosition((*e)->cream->sprite, cupcake_pos);
	}
}

void	hitbox_caramel_cream(Entities **e, t_Elem **elem, sfRenderWindow *wi)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(wi);
	sfVector2f cupcake_pos = {887, 579};

	if (is_a_hit((*elem)->cream_caramel->rect, mouse) == 1 && \
	(*elem)->cream_caramel->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 1) {
		(*e)->game->which_selection = 2;
		(*e)->cream->rect.top = 310;
		sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
		sfSprite_setPosition((*e)->cream->sprite, cupcake_pos);
	}
}

void	hitbox_strawberry_cream(Entities **e, t_Elem **elem, sfRenderWindow *w)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
	sfVector2f cupcake_pos = {887, 579};

	if (is_a_hit((*elem)->cream_strawberry->rect, mouse) == 1 && \
	(*elem)->cream_strawberry->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 1) {
		(*e)->game->which_selection = 2;
		(*e)->cream->rect.top = 465;
		sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
		sfSprite_setPosition((*e)->cream->sprite, cupcake_pos);
	}
}

void	hitbox_cherry_cream(Entities **e, t_Elem **elem, sfRenderWindow *wi)
{

	sfVector2i mouse = sfMouse_getPositionRenderWindow(wi);
	sfVector2f cupcake_pos = {887, 579};

	if (is_a_hit((*elem)->cream_pink->rect, mouse) == 1 && \
	(*elem)->cream_pink->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 1) {
		(*e)->game->which_selection = 2;
		(*e)->cream->rect.top = 620;
		sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
		sfSprite_setPosition((*e)->cream->sprite, cupcake_pos);
	}
}
