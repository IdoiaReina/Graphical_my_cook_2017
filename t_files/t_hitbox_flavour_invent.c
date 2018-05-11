/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** flavour hitbox
*/

#include "cook.h"
#include "thomas_cook.h"

void	hitbox_chocolate_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {878, 644};

	if (is_a_hit((*elem)->flavour_chocolate->rect, mouse) == 1 && \
	(*elem)->flavour_chocolate->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 2) {
		(*e)->flavour->rect.top = 0;
		sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
		sfSprite_setPosition((*e)->flavour->sprite, cupcake_pos);
	}
}

void	hitbox_vanilla_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {878, 644};

	if (is_a_hit((*elem)->flavour_vanilla->rect, mouse) == 1 && \
	(*elem)->flavour_vanilla->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 2) {
		(*e)->flavour->rect.top = 111;
		sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
		sfSprite_setPosition((*e)->flavour->sprite, cupcake_pos);
	}
}

void	hitbox_caramel_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {878, 644};

	if (is_a_hit((*elem)->flavour_caramel->rect, mouse) == 1 && \
	(*elem)->flavour_caramel->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 2) {
		(*e)->flavour->rect.top = 222;
		sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
		sfSprite_setPosition((*e)->flavour->sprite, cupcake_pos);
	}
}

void	hitbox_strawberry_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {878, 644};

	if (is_a_hit((*elem)->flavour_strawberry->rect, mouse) == 1 && \
	(*elem)->flavour_strawberry->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 2) {
		(*e)->flavour->rect.top = 333;
		sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
		sfSprite_setPosition((*e)->flavour->sprite, cupcake_pos);
	}
}

void	hitbox_banana_flavour(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {878, 644};

	if (is_a_hit((*elem)->flavour_banana->rect, mouse) == 1 && \
	(*elem)->flavour_banana->unlock == 1 && \
	(*e)->game->which_scene == 1 && (*e)->game->which_selection == 2) {
		(*e)->flavour->rect.top = 444;
		sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
		sfSprite_setPosition((*e)->flavour->sprite, cupcake_pos);
	}
}
