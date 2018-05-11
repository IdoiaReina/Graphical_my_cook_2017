/*
** EPITECH PROJECT, 2018
** score
** File description:
** score
*/

#include "cook.h"

void create_font(Entities **elem)
{
	char *name = "Assets/MontserratAlternates-Light.ttf";

	(*elem)->text->font = sfFont_createFromFile(name);
}

void text_score(Entities **e, sfRenderWindow *window)
{
	char score[11] = "Score :   ";
	int modulo;
	sfColor color = {127, 66, 73, 236};

	if ((*e)->score >= 10) {
		modulo = ((*e)->score % 10);
		score[8] = ((*e)->score - modulo) / 10 + 48;
		score[9] = modulo + 48;
	}
	else
		score[8] = (*e)->score + 48;
	(*e)->text->score = sfText_create();
	sfText_setFont((*e)->text->score, (*e)->text->font);
	sfText_setString((*e)->text->score, score);
	(*e)->text->position_score.x = 10;
	(*e)->text->position_score.y = 0;
	sfText_setPosition((*e)->text->score, (*e)->text->position_score);
	sfText_setColor((*e)->text->score, color);
	sfText_setCharacterSize((*e)->text->score, 60);
	sfRenderWindow_drawText(window, (*e)->text->score, NULL);
}
