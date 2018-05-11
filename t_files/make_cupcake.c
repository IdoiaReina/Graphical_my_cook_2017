/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cupcake built functions
*/

#include "thomas_cook.h"
#include "cook.h"

void	check_hitbox_invent(Entities **e, t_Elem **elem, sfRenderWindow *window)
{
	hitbox_color(e, elem, window);
	hitbox_flavour(e, elem, window);
	hitbox_cream(e, elem, window);
	hitbox_deco(e, elem, window);
}
