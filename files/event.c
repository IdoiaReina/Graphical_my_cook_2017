/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** event
*/

#include "cook.h"

void key_pressed(sfRenderWindow *win, sfEvent eve, Entities **e, t_Elem **l)
{
	if (eve.key.code == sfKeyEscape) {
		if ((*e)->pause == 0) {
			(*e)->pause = 1;
			pause_screen(e, eve, win, l);
		}
		else
			(*e)->pause = 0;
	}
}

void analyse_events(sfRenderWindow *win, sfEvent eve, Entities **e, t_Elem **el)
{
	if (eve.type == sfEvtMouseButtonPressed) {
		if (eve.mouseButton.button == sfMouseLeft) {
			click_scene(e, win);
			check_hitbox_invent(e, el, win);
			detect_pause(e, eve, win, el);
			baking(e, el, win);
			pause_b(e, win);
		}
	}
	if (eve.type == sfEvtKeyPressed)
		key_pressed(win, eve, e, el);
	if (eve.type == sfEvtClosed) {
		(*e)->pause = 0;
		sfRenderWindow_close(win);
	}
}
