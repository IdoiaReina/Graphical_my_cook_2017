/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** deco
*/

#include "cook.h"
#include "thomas_cook.h"

void	hitbox_cookie_deco(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {905, 611};

	if (is_a_hit((*elem)->deco_caramel->rect, mouse) == 1 && \
	(*elem)->deco_caramel->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 2) {
		(*e)->deco->rect.top = 0;
		sfSprite_setTextureRect((*e)->deco->sprite, (*e)->deco->rect);
		sfSprite_setPosition((*e)->deco->sprite, cupcake_pos);
	}
}
void	hitbox_sugar_deco(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {930, 611};

	if (is_a_hit((*elem)->deco_sugar->rect, mouse) == 1 && \
	(*elem)->deco_sugar->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 2) {
		(*e)->deco->rect.top = 108;
		sfSprite_setTextureRect((*e)->deco->sprite, (*e)->deco->rect);
		sfSprite_setPosition((*e)->deco->sprite, cupcake_pos);
	}
}
void	hitbox_cherry_deco(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {934, 546};

	if (is_a_hit((*elem)->fruit_cherry->rect, mouse) == 1 && \
	(*elem)->fruit_cherry->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 2) {
		(*e)->fruit->rect.top = 0;
		sfSprite_setTextureRect((*e)->fruit->sprite, (*e)->fruit->rect);
		sfSprite_setPosition((*e)->fruit->sprite, cupcake_pos);
	}
}
void	 hitbox_strawberry_deco(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f cupcake_pos = {934, 546};

	if (is_a_hit((*elem)->fruit_strawberry->rect, mouse) == 1 && \
	(*elem)->fruit_strawberry->unlock == 1 && \
	(*e)->game->which_scene == 3 && (*e)->game->which_selection == 2) {
		(*e)->fruit->rect.top = 147;
		sfSprite_setTextureRect((*e)->fruit->sprite, (*e)->fruit->rect);
		sfSprite_setPosition((*e)->fruit->sprite, cupcake_pos);
	}
}
