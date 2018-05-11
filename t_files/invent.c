/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** inventory
*/

#include "cook.h"

/*
int create_invent(Entities **elem)
{
	char *str = "000000000-o....-c....-c....-..-..";
	int i = 0;

	while (str[i] != '\0') {
		(*elem)->game->inventory[i] = str[i];
		i++;
	}
	return (0);
}

int put_in_case(Entities **e, char *str, int ptr)
{
	int i = 0;

	while ((*e)->game->inventory[ptr] != '-' && (*e)->game->inventory[ptr] != '\0') {
		str[i] = (*e)->game->inventory[ptr];
		ptr += 1;
		i += 1;
	}
	ptr += 1;
	return (ptr);
}

void put_invent(Entities **e)
{
	int ptr = 0;
	int i = 0;

	create_invent(e);
	while ((*e)->game->inventory[ptr] != '-') {
		(*e)->game->money *= 10 + (*e)->game->inventory[ptr] - 48;
		ptr += 1;
	}
	ptr += 1;
	ptr = put_in_case(e, (*e)->game->color, ptr);
	ptr = put_in_case(e, (*e)->game->flavour, ptr);
	ptr = put_in_case(e, (*e)->game->cream, ptr);
	ptr = put_in_case(e, (*e)->game->deco, ptr);
	ptr = put_in_case(e, (*e)->game->fruit, ptr);
}*/
