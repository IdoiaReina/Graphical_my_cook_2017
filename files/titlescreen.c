/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** titlescreen
*/

#include "cook.h"

void	key_pressed_ts(sfRenderWindow *window, sfEvent event, Entities **e)
{
	if (event.key.code == sfKeyEscape) {
		(*e)->ts = 1;
		(*e)->smenu = 1;
		sfRenderWindow_close(window);
	}
	else
		(*e)->ts = 1;
}

void	analyse_events_ts(sfRenderWindow *win, sfEvent event, Entities **e)
{
	if (event.type == sfEvtKeyPressed)
		key_pressed_ts(win, event, e);
	if (event.type == sfEvtMouseButtonPressed)
		(*e)->ts = 1;
	if (event.type == sfEvtClosed) {
		(*e)->ts = 1;
		(*e)->smenu = 1;
		sfRenderWindow_close(win);
	}
}

void move_ts(Entities **e)
{
	if ((*e)->menu->cuprect.left < 2360)
		(*e)->menu->cuprect.left += 472;
	else
		(*e)->menu->cuprect.left = 0;
	sfSprite_setTextureRect((*e)->menu->cupcake, (*e)->menu->cuprect);
	if ((*e)->menu->pressrect.top < 1395)
		(*e)->menu->pressrect.top += 93;
	else
		(*e)->menu->pressrect.top = 0;
	sfSprite_setTextureRect((*e)->menu->pressStart, (*e)->menu->pressrect);
}

void	titlescreen(Entities **e, sfRenderWindow *window, sfEvent event)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, (*e)->background, NULL);
	sfRenderWindow_drawSprite(window, (*e)->menu->title, NULL);
	mouse_position(e, window);
	if ((*e)->menu->second - (*e)->menu->sectemp > 0.1) {
		move_ts(e);
		(*e)->menu->sectemp = (*e)->menu->second;
	}
	sfRenderWindow_drawSprite(window, (*e)->menu->cupcake, NULL);
	sfRenderWindow_drawSprite(window, (*e)->menu->pressStart, NULL);
	sfRenderWindow_drawSprite(window, (*e)->cursor->sprite, NULL);
	(*e)->menu->time = sfClock_getElapsedTime((*e)->menu->clock);
	(*e)->menu->second = (*e)->menu->time.microseconds / 1000000.0;
	while (sfRenderWindow_pollEvent(window, &event))
		analyse_events_ts(window, event, e);
	sfRenderWindow_display(window);
}
