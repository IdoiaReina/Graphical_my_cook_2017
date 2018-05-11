/*
** EPITECH PROJECT, 2017
** my_game
** File description:
** game
*/

#include "cook.h"
#include "thomas_cook.h"

sfSprite *fct_create_sprite(char *name)
{
	sfTexture *texture;
	sfSprite *sprite;

	texture = sfTexture_createFromFile(name, NULL);
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	return (sprite);
}

void    is_unlocked_slot(Entities **e, t_Elem **elem)
{
	if ((*e)->score >= 1) {
		(*elem)->fruit_cherry->unlock = 1;
	}
	if ((*e)->score >= 2) {
		(*elem)->color_green->unlock = 1;
		(*elem)->flavour_vanilla->unlock = 1;
		(*elem)->cream_vanilla->unlock = 1;
		(*elem)->deco_caramel->unlock = 1;
	}
	if ((*e)->score >= 5) {
		(*elem)->color_blue->unlock = 1;
		(*elem)->flavour_caramel->unlock = 1;
		(*elem)->cream_caramel->unlock = 1;
		(*elem)->deco_sugar->unlock = 1;
	}
	if ((*e)->score >= 10) {
		(*elem)->color_yellow->unlock = 1;
		(*elem)->flavour_strawberry->unlock = 1;
		(*elem)->cream_strawberry->unlock = 1;
		(*elem)->fruit_strawberry->unlock = 1;
	}
	if ((*e)->score >= 15) {
		(*elem)->color_red->unlock = 1;
		(*elem)->flavour_banana->unlock = 1;
		(*elem)->cream_pink->unlock = 1;
	}
}

void click_scene(Entities **e, sfRenderWindow *win)
{
	sfIntRect batter = {428, 893, 735, 987};
	sfIntRect bake = {816, 894, 1123, 988};
	sfIntRect build = {1205, 893, 1512, 987};
	sfIntRect music = {18, 181, 128, 291};
	sfVector2i mouse = sfMouse_getPositionRenderWindow(win);
	sfIntRect verif = {1480, 57, 1600, 175};

	if (is_a_hit(music, mouse)) {
		if ((*e)->music_stat == 0) {
			sfMusic_play((*e)->music);
			(*e)->music_stat = 1;
		}
		else {
			sfMusic_pause((*e)->music);
			(*e)->music_stat = 0;
		}
	}
	if (is_a_hit(verif, mouse))
		(*e)->score += 1;
	if (is_a_hit(batter, mouse)) {
		(*e)->game->which_scene = 1;
		(*e)->game->which_selection = 1;
	}
	if (is_a_hit(bake, mouse)) {
		(*e)->game->which_scene	= 2;
		(*e)->game->which_selection = 1;
	}
	if (is_a_hit(build, mouse)) {
		(*e)->game->which_selection = 1;
		(*e)->game->which_scene	= 3;
	}
}

void game(Entities **e, t_Elem **l, sfRenderWindow *w)
{
	if ((*e)->pause == 0 && (*e)->smenu == 1) {
		always_update(e);
		if ((*e)->game->which_scene == 2)
			sfRenderWindow_drawSprite(w, (*l)->baker->sprite, NULL);
		update(e, l, w);
		is_unlocked_slot(e, l);
		display_all_inv(e, l, w);
		sfRenderWindow_drawSprite(w, (*e)->cursor->sprite, NULL);
		if ((*e)->game->which_scene != 2)
			drag_and_drop_cupcake(e, w);
	}
}
