/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu
*/

#include "cook.h"

void menu_button(sfRenderWindow *win, Entities **e)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(win);

	if (is_a_hit((*e)->button->continue_b, mouse) && (*e)->new != 1)
		(*e)->smenu = 1;
	if (is_a_hit((*e)->button->quit, mouse) == 1) {
		(*e)->smenu = 1;
		sfRenderWindow_close(win);
	}
	if (is_a_hit((*e)->button->how_to, mouse) == 1)
		(*e)->how_to = 1;
	if (is_a_hit((*e)->button->new, mouse) == 1) {
		(*e)->new = 0;
		(*e)->score = 0;
		(*e)->smenu = 1;
		what_to_save(e);
	}
}

void menu_button_cursor(sfRenderWindow *win, Entities **e)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(win);

	if (is_a_hit((*e)->button->continue_b, mouse) == 1) {
		if ((*e)->new == 1)
			(*e)->cursor->rect.left = 35;
		else
			(*e)->cursor->rect.left = 105;
	}
	else if (is_a_hit((*e)->button->quit, mouse) == 1)
		(*e)->cursor->rect.left = 105;
	else if (is_a_hit((*e)->button->how_to, mouse) == 1)
		(*e)->cursor->rect.left = 105;
	else if (is_a_hit((*e)->button->new, mouse) == 1)
		(*e)->cursor->rect.left = 105;
	else
		(*e)->cursor->rect.left = 0;
	sfSprite_setTextureRect((*e)->cursor->sprite, (*e)->cursor->rect);
}

void	key_pressed_menu(sfRenderWindow *win, sfEvent event, Entities **e)
{
	if (event.key.code == sfKeyEscape) {
		(*e)->smenu = 1;
		sfRenderWindow_close(win);
	}
}

void analyse_events_menu(sfRenderWindow *win, sfEvent event, Entities **e)
{
	if (event.type == sfEvtMouseButtonPressed) {
		if (event.mouseButton.button == sfMouseLeft) {
			menu_button(win, e);
		}
	}
	if (event.type == sfEvtKeyPressed)
		key_pressed_menu(win, event, e);
	if (event.type == sfEvtClosed) {
		(*e)->smenu = 1;
		sfRenderWindow_close(win);
	}
}

void	menu(Entities **e, sfRenderWindow *win, sfEvent event)
{
	sfRenderWindow_clear(win, sfBlack);
	sfRenderWindow_drawSprite(win, (*e)->background, NULL);
	if ((*e)->new == 1)
		sfRenderWindow_drawSprite(win, (*e)->menu->menu_new, NULL);
	else
		sfRenderWindow_drawSprite(win, (*e)->menu->menu, NULL);
	mouse_position(e, win);
	menu_button_cursor(win, e);
	sfRenderWindow_drawSprite(win, (*e)->cursor->sprite, NULL);
	while (sfRenderWindow_pollEvent(win, &event))
		analyse_events_menu(win, event, e);
	sfRenderWindow_display(win);
}
