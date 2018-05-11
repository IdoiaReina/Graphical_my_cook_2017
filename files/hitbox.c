/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** hitbox_function
*/

#include "cook.h"

sfIntRect put_button(int left, int top, int right, int bot)
{
	sfIntRect nb = {left, top, right, bot};

	return (nb);
}

void	mouse_position(Entities **e, sfRenderWindow *window)
{
	(*e)->cursor->v_track = sfMouse_getPositionRenderWindow(window);
	(*e)->cursor->position.x = (float) (*e)->cursor->v_track.x;
	(*e)->cursor->position.y = (float) (*e)->cursor->v_track.y;
	sfSprite_setPosition((*e)->cursor->sprite, (*e)->cursor->position);
	sfRenderWindow_setMouseCursorVisible(window, sfFalse);
}

int is_a_hit(sfIntRect elem_p, sfVector2i cursor_p)
{
	if (cursor_p.x >= elem_p.left && cursor_p.x <= elem_p.width) {
		if (cursor_p.y >= elem_p.top && cursor_p.y <= elem_p.height)
			return (1);
	}
	return (0);
}
