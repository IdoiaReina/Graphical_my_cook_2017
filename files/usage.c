/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** usage
*/

#include "cook.h"

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

int	usage(char **av)
{
	if (av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("USAGE\n\t./my_cook [save]");
		my_putstr("\nDESCRIPTION\n\tsave:  Only if you already have ");
		my_putstr("a saved file.\n\tThe game will load your saved ");
		my_putstr("game.\n");
		return (0);
	}
	return (1);
}

int	verif_env(char **env)
{
	if (*env == NULL) {
		my_putstr("Please don't remove the environment !\n");
		return (84);
	}
	return (0);
}
