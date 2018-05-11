/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** food management and init
*/

#include "cook.h"

int	init_food(Entities **elem)
{
	(*elem)->color = (t_food *)malloc(sizeof(t_food));
	if ((*elem)->color == NULL)
		return (1);
	(*elem)->flavour = (t_food *)malloc(sizeof(t_food));
	if ((*elem)->flavour == NULL)
		return (1);
	(*elem)->cream = (t_food *)malloc(sizeof(t_food));
	if ((*elem)->cream == NULL)
		return (1);
	(*elem)->deco = (t_food *)malloc(sizeof(t_food));
	if ((*elem)->deco == NULL)
		return (1);
	(*elem)->fruit = (t_food *)malloc(sizeof(t_food));
	if ((*elem)->fruit == NULL)
		return (1);
	return (0);
}

int	init_color(Entities **e)
{
	(*e)->color->sprite = fct_create_sprite("Assets/sprite_sheet.png");
	(*e)->color->rect.top = 0;
	(*e)->color->rect.left = 0;
	(*e)->color->rect.width = 177;
	(*e)->color->rect.height = 143;
	(*e)->color->position.x = 0;
	(*e)->color->position.y = -200;
	sfSprite_setTextureRect((*e)->color->sprite, (*e)->color->rect);
	sfSprite_setPosition((*e)->color->sprite, (*e)->color->position);
	return (0);
}

int    	init_flavour(Entities **e)
{
	(*e)->flavour->sprite = fct_create_sprite("Assets/sprite_sheet.png");
	(*e)->flavour->rect.top = 0;
	(*e)->flavour->rect.left = 207;
	(*e)->flavour->rect.width = 180;
	(*e)->flavour->rect.height = 81;
	(*e)->flavour->position.x = 207;
	(*e)->flavour->position.y = -200;
	sfSprite_setTextureRect((*e)->flavour->sprite, (*e)->flavour->rect);
	sfSprite_setPosition((*e)->flavour->sprite, (*e)->flavour->position);
	return (0);
}

int	init_cream(Entities **e)
{
	(*e)->cream->sprite = fct_create_sprite("Assets/sprite_sheet.png");
	(*e)->cream->rect.top = 0;
	(*e)->cream->rect.left = 418;
	(*e)->cream->rect.width = 155;
	(*e)->cream->rect.height = 125;
	(*e)->cream->position.x = 418;
	(*e)->cream->position.y = -200;
	sfSprite_setTextureRect((*e)->cream->sprite, (*e)->cream->rect);
	sfSprite_setPosition((*e)->cream->sprite, (*e)->cream->position);
	return (0);
}

int	init_deco(Entities **e)
{
	(*e)->deco->sprite = fct_create_sprite("Assets/sprite_sheet.png");
	(*e)->deco->rect.top = 0;
	(*e)->deco->rect.left = 603;
	(*e)->deco->rect.width = 108;
	(*e)->deco->rect.height = 88;
	(*e)->deco->position.x = 603;
	(*e)->deco->position.y = -200;
	sfSprite_setTextureRect((*e)->deco->sprite, (*e)->deco->rect);
	sfSprite_setPosition((*e)->deco->sprite, (*e)->deco->position);
	return (0);
}

int	init_fruit(Entities **e)
{
	(*e)->fruit->sprite = fct_create_sprite("Assets/sprite_sheet.png");
	(*e)->fruit->rect.top = 0;
	(*e)->fruit->rect.left = 740;
	(*e)->fruit->rect.width = 59;
	(*e)->fruit->rect.height = 117;
	(*e)->fruit->position.x = 740;
	(*e)->fruit->position.y = -200;
	sfSprite_setTextureRect((*e)->fruit->sprite, (*e)->fruit->rect);
	sfSprite_setPosition((*e)->fruit->sprite, (*e)->fruit->position);
	return (0);
}
