/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** food functions
*/

#include "cook.h"

void	tp_all_food_at_the_top(Entities **e)
{
	(*e)->color->position.x = 0;
	(*e)->color->position.y = -200;
	(*e)->flavour->position.x = 207;
	(*e)->flavour->position.y = -200;
	(*e)->cream->position.x = 418;
	(*e)->cream->position.y = -200;
	(*e)->deco->position.x = 603;
	(*e)->deco->position.y = -200;
	(*e)->fruit->position.x = 740;
	(*e)->fruit->position.y = -200;
	sfSprite_setPosition((*e)->color->sprite, (*e)->color->position);
	sfSprite_setPosition((*e)->flavour->sprite, (*e)->flavour->position);
	sfSprite_setPosition((*e)->cream->sprite, (*e)->cream->position);
	sfSprite_setPosition((*e)->deco->sprite, (*e)->deco->position);
	sfSprite_setPosition((*e)->fruit->sprite, (*e)->fruit->position);
}
void	drag_food(Entities **e)
{
	if ((*e)->color->position.y == -200)
		sfSprite_setPosition((*e)->color->sprite, (*e)->cursor->position);
	if ((*e)->flavour->position.y == -200)
		sfSprite_setPosition((*e)->flavour->sprite, (*e)->cursor->position);
	if ((*e)->cream->position.y == -200)
		sfSprite_setPosition((*e)->cream->sprite, (*e)->cursor->position);
	if ((*e)->deco->position.y == -200)
		sfSprite_setPosition((*e)->deco->sprite, (*e)->cursor->position);
	if ((*e)->fruit->position.y == -200)
		sfSprite_setPosition((*e)->fruit->sprite, (*e)->cursor->position);
}

void	tp_food_to_initial_pos(Entities **e)
{
	sfVector2f color_initial_pos = {875, 684};
	sfVector2f flavour_initial_pos = {878, 644};
	sfVector2f cream_initial_pos = {887, 579};
	sfVector2f deco_initial_pos = {905, 611};
	sfVector2f fruit_initial_pos = {934, 546};

	sfSprite_setPosition((*e)->color->sprite, color_initial_pos);
	sfSprite_setPosition((*e)->flavour->sprite, flavour_initial_pos);
	sfSprite_setPosition((*e)->cream->sprite, cream_initial_pos);
	sfSprite_setPosition((*e)->deco->sprite, deco_initial_pos);
	sfSprite_setPosition((*e)->fruit->sprite, fruit_initial_pos);
}

void	drag_and_drop_cupcake(Entities **e, sfRenderWindow *window)
{
	static int status = 0;
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfIntRect trash = {12, 603, 346, 995};
	if (is_a_hit((*e)->cupcake_hitbox->hitbox, mouse) == 1 && \
	sfMouse_isButtonPressed(sfMouseLeft) == 1) {
		if ((*e)->smenu == 1)
			status = 1;
	}
	if (status >= 1) {
		drag_food(e);
		if (is_a_hit(trash, mouse) == 1 && \
		sfMouse_isButtonPressed(sfMouseLeft) == 0) {
			tp_all_food_at_the_top(e);
			status = 0;
		}
		else if (is_a_hit(trash, mouse) == 0 && \
		sfMouse_isButtonPressed(sfMouseLeft) == 0) {
			tp_food_to_initial_pos(e);
			status = 0;
		}
	}
}
