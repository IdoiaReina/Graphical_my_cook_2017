/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** window
*/

#include "cook.h"

sfRenderWindow *create_window(void)
{
	sfRenderWindow	*win;
	sfVideoMode	video_mode;
	char *name = "My_Cook";

	video_mode.width = 1920;
	video_mode.height = 1080;
	video_mode.bitsPerPixel = 72;
	win = sfRenderWindow_create(video_mode, name, sfClose,  NULL);
	sfRenderWindow_setFramerateLimit(win, 120);
	return (win);
}
