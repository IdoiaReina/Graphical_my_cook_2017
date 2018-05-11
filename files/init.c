/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** init
*/

#include "cook.h"
#include "thomas_cook.h"

int	 malloc_one(Entities **elem)
{
	*elem = (Entities *)malloc(sizeof(Entities));
	if (elem == NULL)
		return (1);
	malloc_two(elem);
	other_inits(elem);
	init_button(elem);
	init_creations(elem);
	init_color(elem);
	init_flavour(elem);
	init_cream(elem);
	init_deco(elem);
	init_fruit(elem);
	return (0);
}

int	malloc_two(Entities**elem)
{
	(*elem)->clockk = (Clock *)malloc(sizeof(Clock));
	if ((*elem)->clockk == NULL)
		return (1);
	(*elem)->text = (Text *)malloc(sizeof(Text));
	if ((*elem)->text == NULL)
		return (1);
	(*elem)->menu = (Menu *)malloc(sizeof(Menu));
	if ((*elem)->menu == NULL)
		return (1);
	(*elem)->cursor = (Cursor *)malloc(sizeof(Cursor));
	if ((*elem)->cursor == NULL)
		return (1);
	(*elem)->button = (Button *)malloc(sizeof(Button));
	if ((*elem)->button == NULL)
		return (1);
	(*elem)->game = (Game *)malloc(sizeof(Game));
	if ((*elem)->game == NULL)
		return (1);
	(*elem)->cupcake_hitbox = (t_Cupcake_hitbox *)malloc(sizeof(t_Cupcake_hitbox));
	init_food(elem);
	return (0);
}

void init_button(Entities **elem)
{
	(*elem)->button->continue_b = put_button(655, 288, 1266, 405);
	(*elem)->button->quit = put_button(813, 879, 1117, 1004);
	(*elem)->button->new = put_button(569, 466, 1346, 602);
	(*elem)->button->how_to = put_button(543, 652, 1379, 792);
	(*elem)->cupcake_hitbox->hitbox = put_button(868, 567, 1060, 818);
}

void	 other_inits(Entities **elem)
{
	(*elem)->score = 0;
	(*elem)->pause = 0;
	(*elem)->start = 0;
	(*elem)->smenu = 0;
	(*elem)->game->which_scene = 1;
	(*elem)->game->which_selection = 1;
	(*elem)->ts = 0;
	(*elem)->new = 0;
	(*elem)->how_to = 0;
	(*elem)->music_stat = 0;
	(*elem)->menu->cuppos.x = 724;
	(*elem)->menu->cuppos.y	= 16;
	(*elem)->menu->presspos.x = 360;
	(*elem)->menu->presspos.y = 820;
	(*elem)->menu->second = 0;
	(*elem)->menu->sectemp = 0;
	(*elem)->clockk->sec_temp = 0;
	(*elem)->clockk->sec_temp2 = 0;
}

void	init_creations(Entities **e)
{
	(*e)->game->pos_rec.x = 1615;
	(*e)->game->pos_rec.y = 20;
	create_font(e);
	(*e)->menu->clock = sfClock_create();
	(*e)->clockk->clock = sfClock_create();
	(*e)->clockk->clock2 = sfClock_create();
}
