/*
** EPITECH PROJECT, 2018
** reci
** File description:
** cc
*/

#include "cook.h"

void choose_recipe(Entities **e)
{
	if ((*e)->score == 0)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/1.png");
	if ((*e)->score == 1)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/2.png");
	if ((*e)->score == 2)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/3.png");
	if ((*e)->score == 3)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/4.png");
	if ((*e)->score == 4)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/5.png");
	if ((*e)->score == 5)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/6.png");
	if ((*e)->score == 6)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/7.png");
	if ((*e)->score == 7)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/8.png");
	if ((*e)->score == 8)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/9.png");
	if ((*e)->score == 9)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/10.png");
}

void choose_recipe_two(Entities **e)
{
	choose_recipe(e);
	if ((*e)->score == 10)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/11.png");
	if ((*e)->score == 11)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/12.png");
	if ((*e)->score == 12)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/13.png");
	if ((*e)->score == 13)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/14.png");
	if ((*e)->score == 14)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/15.png");
	if ((*e)->score == 15)
		(*e)->game->recipe = fct_create_sprite("Recipe/rec/16.png");
	sfSprite_setPosition((*e)->game->recipe, (*e)->game->pos_rec);
}
