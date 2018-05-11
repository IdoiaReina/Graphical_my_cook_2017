/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** .h
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>
#include "thomas_cook.h"

#ifndef STRUCT_LIST_
#define STRUCT_LIST_

typedef struct s_Game
{
	sfSprite *recipe;
	sfVector2f pos_rec;
	sfSprite *verif;
	sfSprite *game_base;
	int which_scene;
	int which_selection;
	sfSprite *pause;
}Game;

typedef struct s_Clock
{
	sfClock *clock;
	sfTime time;
	float seconds;
	float sec_temp;
	sfClock *clock2;
	sfTime time2;
	float seconds2;
	float sec_temp2;
}Clock;

typedef struct s_Menu
{
	sfSprite *menu;
	sfSprite *menu_new;
	sfSprite *title;
	sfSprite *cupcake;
	sfIntRect cuprect;
	sfVector2f cuppos;
	sfSprite *pressStart;
	sfIntRect pressrect;
	sfVector2f presspos;
	sfClock *clock;
	float second;
	float sectemp;
	sfTime time;
	int selec;
	int begining;
	int ready;
}Menu;

typedef struct s_Text
{
	sfFont *font;
	sfText *score;
	sfVector2f position_score;
}Text;

typedef struct s_Cursor
{
	sfTexture	*texture;
	sfSprite	*sprite;
	sfIntRect	rect;
	sfVector2f	position;
	int		offset;
	int		max_value;
	sfVector2i	v_track;
}Cursor;

typedef struct s_Button
{
	sfIntRect continue_b;
	sfIntRect quit;
	sfIntRect how_to;
	sfIntRect new;
}Button;

typedef struct s_Cupcake_hitbox
{
	sfIntRect hitbox;
}t_Cupcake_hitbox;

typedef struct s_food
{
	sfTexture	*texture;
	sfSprite	*sprite;
	sfIntRect	rect;
	sfVector2f	position;
	sfVector2f	speed;
	sfVector2f	scale;
	int		offset;
	int		max_value;
}t_food;

typedef struct s_Entities
{
	Clock *clockk;
	Text *text;
	Menu *menu;
	Cursor *cursor;
	Button *button;
	Game *game;
	sfSprite *background;
	t_Cupcake_hitbox *cupcake_hitbox;
	t_food *color;
	t_food *flavour;
	t_food *cream;
	t_food *deco;
	t_food *fruit;
	sfMusic *music;
	int score;
	int pause;
	int smenu;
	int ts;
	int music_stat;
	int start;
	char *name;
	int new;
	int how_to;
}Entities;

int     my_getnbr(char const *str);

/*INIT*/
int malloc_one(Entities **elem);
int malloc_two(Entities **elem);
void other_inits(Entities **elem);
void init_creations(Entities **e);
void init_cursor(Entities **e, sfRenderWindow *window);
void init_baker(t_Elem **elem);

/*Window*/
sfRenderWindow *create_window(void);

/*Events*/
void analyse_events(sfRenderWindow *w, sfEvent event, Entities **e, t_Elem **);
void key_pressed(sfRenderWindow *window, sfEvent eve, Entities **e, t_Elem **);
void click_scene(Entities **e, sfRenderWindow *win);

void choose_recipe_two(Entities **e);

/*Pause*/
void pause_screen(Entities **e, sfEvent event, sfRenderWindow *win, t_Elem **);
void pause_b(Entities **e, sfRenderWindow *window);
void detect_pause(Entities **e, sfEvent event, sfRenderWindow *win, t_Elem **);

/*Score*/
void text_score(Entities **e, sfRenderWindow *window);
void create_font(Entities **elem);

/*Hitbox*/
int is_a_hit(sfIntRect elem_p,  sfVector2i cursor_pos);

/*Inventory*/
void put_invent(Entities **e);

/*Button*/
sfIntRect put_button(int left, int top, int right, int bot);
void init_button(Entities **elem);

/*Background*/
void create_music(Entities **e, sfRenderWindow *window);

/*Usage*/
int usage(char **av);
int verif_env(char **env);

/*Main*/
void update(Entities **elem, t_Elem **, sfRenderWindow  *window);
void always_update(Entities **e);
void my_putstr(char *);
void destroy(sfRenderWindow *window, Entities **e);

/*Game*/
sfSprite *fct_create_sprite(char *name);
void game(Entities **e, t_Elem **elem, sfRenderWindow *window);
void baking(Entities **e, t_Elem **, sfRenderWindow *window);

/*Menu*/
void menu(Entities **e, sfRenderWindow *window, sfEvent event);
void key_pressed_menu(sfRenderWindow *window, sfEvent event, Entities **e);
void analyse_events_menu(sfRenderWindow *window, sfEvent event, Entities **e);

/*Mouse_pos*/
void mouse_position(Entities **e, sfRenderWindow *window);

/*Titlescreen*/
void titlescreen(Entities **e, sfRenderWindow *window, sfEvent event);
void key_pressed_ts(sfRenderWindow *window, sfEvent event, Entities **e);
void analyse_events_ts(sfRenderWindow *window, sfEvent event, Entities **e);

/*Food*/
int init_food(Entities **elem);
int init_color(Entities **e);
int init_flavour(Entities **e);
int init_cream(Entities **e);
int init_deco(Entities **e);
int init_fruit(Entities **e);
void drag_and_drop_cupcake(Entities **e, sfRenderWindow *window);
void is_unlocked_slot(Entities **e, t_Elem **elem);
void display_all_inv(Entities **ent, t_Elem **e, sfRenderWindow *win);

/*Save*/
int recup_save(char **av, Entities **e);
void what_to_save(Entities **e);
void save(char *name, char *saved);

/*Hitbox Inv*/
void check_hitbox_invent(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_orange_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_green_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_blue_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_yellow_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_red_color(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_flavour(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_chocolate_flavour(Entities **e, t_Elem **elem, sfRenderWindow *w);
void hitbox_chocolate_flavour(Entities **e, t_Elem **elem, sfRenderWindow *w);
void hitbox_vanilla_flavour(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_caramel_flavour(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_banana_flavour(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_strawberry_flavour(Entities **e, t_Elem **elem, sfRenderWindow *w);
void hitbox_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_chocolate_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_vanilla_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_caramel_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_cherry_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_strawberry_cream(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_deco(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_cookie_deco(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_sugar_deco(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_cherry_deco(Entities **e, t_Elem **elem, sfRenderWindow *win);
void hitbox_strawberry_deco(Entities **e, t_Elem **elem, sfRenderWindow *win);

#endif
