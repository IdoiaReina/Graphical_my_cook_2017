/*
** EPITECH PROJECT, 2018
** ause
** File description:
** pause
*/

#include "cook.h"

void detect_pause(Entities **e, sfEvent event, sfRenderWindow *win, t_Elem **l)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(win);
	sfIntRect pause_b = {17, 325, 129, 426};

	if (is_a_hit(pause_b, mouse) == 1 && (*e)->pause != 1) {
		(*e)->pause = 1;
		pause_screen(e, event, win, l);
	}
}

void pause_b(Entities **e, sfRenderWindow *window)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfIntRect resume = {464, 286, 1451, 407};
	sfIntRect save = {798, 472, 1121, 593};
	sfIntRect menu = {550, 652, 1379, 773};
	sfIntRect quit = {810, 884, 1111, 1005};

	if (is_a_hit(menu, mouse) == 1 && (*e)->pause == 1) {
		(*e)->smenu = 0;
		(*e)->pause = 0;
	}
	if (is_a_hit(quit, mouse) == 1 && (*e)->pause == 1) {
		(*e)->pause = 0;
		sfRenderWindow_close(window);
	}
	if (is_a_hit(save, mouse) == 1)
		what_to_save(e);
	if (is_a_hit(resume, mouse) == 1 && (*e)->pause == 1)
		(*e)->pause = 0;
}

void pause_screen(Entities **e, sfEvent event, sfRenderWindow *win, t_Elem **l)
{
	while ((*e)->pause != 0) {
		sfRenderWindow_clear(win, sfBlack);
		sfRenderWindow_drawSprite(win, (*e)->game->pause, NULL);
		mouse_position(e, win);
		sfRenderWindow_drawSprite(win, (*e)->cursor->sprite, NULL);
		while (sfRenderWindow_pollEvent(win, &event))
			analyse_events(win, event, e, l);
		sfRenderWindow_display(win);
	}
}
