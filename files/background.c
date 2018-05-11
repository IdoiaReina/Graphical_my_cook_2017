/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** beckground
*/

#include "cook.h"

void create_menu_ressources(Entities **e)
{
	char *cupcake = "Assets/Titlescreen/cupcakespritesheet.png";
	char *press_start = "Assets/Titlescreen/press_sheet.png";
	char *menu = "Assets/Main_Menu/main_menu2.png";

	(*e)->menu->menu = fct_create_sprite("Assets/Main_Menu/main_menu.png");
	(*e)->menu->menu_new = fct_create_sprite(menu);
	(*e)->menu->title = fct_create_sprite("Assets/Titlescreen/title.png");
	(*e)->menu->cupcake = fct_create_sprite(cupcake);
	(*e)->menu->pressStart = fct_create_sprite(press_start);
	(*e)->menu->cuprect.top = 0;
	(*e)->menu->cuprect.left = 0;
	(*e)->menu->cuprect.width = 472;
	(*e)->menu->cuprect.height = 459;
	sfSprite_setTextureRect((*e)->menu->cupcake, (*e)->menu->cuprect);
	sfSprite_setPosition((*e)->menu->cupcake, (*e)->menu->cuppos);
	(*e)->menu->pressrect.top = 0;
	(*e)->menu->pressrect.left = 0;
	(*e)->menu->pressrect.width = 1200;
	(*e)->menu->pressrect.height = 93;
	sfSprite_setTextureRect((*e)->menu->pressStart, (*e)->menu->pressrect);
	sfSprite_setPosition((*e)->menu->pressStart, (*e)->menu->presspos);
}

void    init_cursor(Entities **e, sfRenderWindow *window)
{
	char *name_cur = "Assets/cursor.png";

	(*e)->game->pause = fct_create_sprite("Assets/pause.png");
	(*e)->cursor->texture = sfTexture_createFromFile(name_cur, NULL);
	(*e)->cursor->sprite = sfSprite_create();
	sfSprite_setTexture((*e)->cursor->sprite, \
	(*e)->cursor->texture, sfTrue);
	(*e)->game->verif = fct_create_sprite("Assets/verif.png");
	(*e)->cursor->rect.top = 0;
	(*e)->cursor->rect.left = 0;
	(*e)->cursor->rect.width = 35;
	(*e)->cursor->rect.height = 35;
	(*e)->cursor->v_track = sfMouse_getPositionRenderWindow(window);
	(*e)->cursor->position.x = (*e)->cursor->v_track.x;
	(*e)->cursor->position.y = (*e)->cursor->v_track.y;
	sfSprite_setPosition((*e)->cursor->sprite, (*e)->cursor->position);
	sfSprite_setTextureRect((*e)->cursor->sprite, (*e)->cursor->rect);
}

void create_background(Entities **e, sfRenderWindow *window)
{
	(*e)->background = fct_create_sprite("Assets/base.png");
	(*e)->game->game_base = fct_create_sprite("Assets/game_base.png");
	init_cursor(e, window);
	create_menu_ressources(e);
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, (*e)->background, NULL);
}

void create_music(Entities **e, sfRenderWindow *window)
{
	create_background(e, window);
	(*e)->music = sfMusic_createFromFile("Assets/Music/NY_Bar_Jazz.ogg");
	sfMusic_setLoop((*e)->music, sfTrue);
	sfMusic_play((*e)->music);
	(*e)->music_stat = 1;
}
