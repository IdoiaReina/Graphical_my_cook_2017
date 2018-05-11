/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main
*/

#include "cook.h"

void update(Entities **elem, t_Elem **l, sfRenderWindow *win)
{
	sfRenderWindow_clear(win, sfBlack);
	mouse_position(elem, win);
	sfRenderWindow_drawSprite(win, (*elem)->game->game_base, NULL);
	text_score(elem, win);
	if ((*elem)->game->which_scene == 2)
		sfRenderWindow_drawSprite(win, (*l)->baker->sprite, NULL);
	sfRenderWindow_drawText(win, (*elem)->text->score, NULL);
	choose_recipe_two(elem);
	sfRenderWindow_drawSprite(win, (*elem)->game->recipe, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->game->verif, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->color->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*l)->flame->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->flavour->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->cream->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->deco->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->fruit->sprite, NULL);
	sfRenderWindow_drawSprite(win, (*elem)->cursor->sprite, NULL);
}

void always_update(Entities **e)
{
	(*e)->clockk->time2 = sfClock_getElapsedTime((*e)->clockk->clock2);
	(*e)->clockk->seconds2 = (*e)->clockk->time2.microseconds / 1000000.0;
	(*e)->clockk->time = sfClock_getElapsedTime((*e)->clockk->clock);
	(*e)->clockk->seconds = (*e)->clockk->time.microseconds / 1000000.0;
}

void	 destroy(sfRenderWindow *window, Entities **e)
{
	sfRenderWindow_destroy(window);
	sfMusic_destroy((*e)->music);
	sfClock_destroy((*e)->clockk->clock);
	sfClock_destroy((*e)->clockk->clock2);
	free((*e)->clockk);
	free((*e)->text);
	free((*e)->cursor);
	free((*e)->button);
	free((*e)->game);
	free((*e)->menu);
	free(*e);
}

void	before_game(Entities **e, sfRenderWindow *window, sfEvent event)
{
	while ((*e)->ts != 1)
		titlescreen(e, window, event);
	while ((*e)->smenu != 1)
		menu(e, window, event);
}

int	main(int ac, char **av, char **env)
{
	sfRenderWindow *window;
	sfEvent event;
	t_Elem *elem;
	Entities *e;

	if (ac >= 2)
		if (usage(av) == 0)
			return (0);
	if (verif_env(env) == 1)
		return (84);
	window = create_window();
	malloc_one(&e);
	init_inv(&elem);
	init_all_color_inv(&elem);
	init_all_flavour_inv(&elem);
	init_all_cream_inv(&elem);
	init_all_deco_inv(&elem);
	init_baker(&elem);
	create_music(&e, window);
	if (ac == 1) {
		e->new = 1;
		e->name = "Save/new_save";
	}
	if (ac == 2)
		recup_save(av, &e);
	while (sfRenderWindow_isOpen(window)) {
		before_game(&e, window, event);
		game(&e, &elem, window);
		while (sfRenderWindow_pollEvent(window, &event))
			analyse_events(window, event, &e, &elem);
		sfRenderWindow_display(window);
	}
	destroy(window, &e);
}
