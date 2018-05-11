/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init cream inv
*/

#include "thomas_cook.h"
#include "cook.h"

void	init_all_cream_inv(t_Elem **e)
{
	init_chocolate_cream_inv(e);
	init_vanilla_cream_inv(e);
	init_caramel_cream_inv(e);
	init_cherry_and_strawberry_cream_inv(e);
}

void	init_chocolate_cream_inv(t_Elem **e)
{
	(*e)->cream_chocolate->sprite = fct_create_sprite("Assets/cream/cream1.png");
	(*e)->cream_chocolate->unlock = 1;
	(*e)->cream_chocolate->disp_status = 1;
	(*e)->cream_chocolate->rect = put_button(1666, 428, 1811, 543);
}

void	init_vanilla_cream_inv(t_Elem **e)
{
	(*e)->cream_vanilla->sprite = fct_create_sprite("Assets/cream/vanilla.png");
	(*e)->cream_vanilla->unlock = 0;
	(*e)->cream_vanilla->disp_status = 0;
	(*e)->cream_vanilla->rect = put_button(1594, 548, 1728, 663);
}

void	init_caramel_cream_inv(t_Elem **e)
{
	(*e)->cream_caramel->sprite = fct_create_sprite("Assets/cream/caramel.png");
	(*e)->cream_caramel->unlock = 0;
	(*e)->cream_caramel->disp_status = 0;
	(*e)->cream_caramel->rect = put_button(1742, 660, 1876, 775);
}

/*NOTE : PINK = CHERRY (RED CREAM) and STRAWBERRY = PINK CREAM*/

void	init_cherry_and_strawberry_cream_inv(t_Elem **e)
{
	(*e)->cream_pink->sprite = fct_create_sprite("Assets/cream/cherry.png");
	(*e)->cream_pink->unlock = 0;
	(*e)->cream_pink->disp_status = 0;
	(*e)->cream_pink->rect = put_button(1737, 876, 1880, 993);
	(*e)->cream_strawberry->sprite = fct_create_sprite("Assets/cream/strawberry.png");
	(*e)->cream_strawberry->unlock = 0;
	(*e)->cream_strawberry->disp_status = 0;
	(*e)->cream_strawberry->rect = put_button(1596, 770, 1737, 885);
}
