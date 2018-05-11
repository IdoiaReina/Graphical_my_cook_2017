/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cuiseur
*/

#include "thomas_cook.h"
#include "cook.h"

void	init_baker(t_Elem **elem)
{
	(*elem)->baker->sprite = fct_create_sprite("Assets/cuiseur.png");
	(*elem)->baker->rect = put_button(929, 264, 1228, 654);
	(*elem)->flame->position.x = -2000;
	(*elem)->flame->position.y = -2000;
	(*elem)->flame->sprite = fct_create_sprite("Assets/flame.png");
	sfSprite_setPosition((*elem)->flame->sprite, (*elem)->flame->position);
}
