/*
** EPITECH PROJECT, 2018
** cook
** File description:
** baking
*/

#include "cook.h"
#include "thomas_cook.h"

void	baking(Entities **e, t_Elem **elem, sfRenderWindow  *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f baking_pos_color = {868, 330};
	sfVector2f baking_pos_flavour = {868, 290};
	sfVector2f debug_pos = {418, -200};
	sfVector2f baking_pos_flame = {0, 0};
	sfVector2f color_original_pos = {875, 684};
	sfVector2f flavour_original_pos = {878, 644};

	if (is_a_hit((*e)->cupcake_hitbox->hitbox, mouse) == 1) {
		sfSprite_setPosition((*e)->color->sprite, baking_pos_color);
		sfSprite_setPosition((*elem)->flame->sprite, baking_pos_flame);
		sfSprite_setPosition((*e)->flavour->sprite, baking_pos_flavour);
		sfSprite_setPosition((*e)->cream->sprite, debug_pos);
		sfSprite_setPosition((*e)->deco->sprite, debug_pos);
		sfSprite_setPosition((*e)->fruit->sprite, debug_pos);
	}
	if (is_a_hit((*elem)->baker->rect, mouse) == 1) {
		sfSprite_setPosition((*e)->color->sprite, color_original_pos);
		sfSprite_setPosition((*e)->flavour->sprite, flavour_original_pos);
		sfSprite_setPosition((*elem)->flame->sprite, (*elem)->flame->position);
	}
}
