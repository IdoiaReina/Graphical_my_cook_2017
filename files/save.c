/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** save
*/

#include "cook.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int recup_save(char **av, Entities **e)
{
	int fd = open(av[1], O_RDONLY);
	char *buf = NULL;
	int i = 0;
	char *score = malloc(sizeof(char) * 2);

	buf = malloc(sizeof(char) * 2);
	read(fd, buf, 2);
	while (i < 2) {
		if (buf[i] < '0' || buf[i] > '9') {
			my_putstr("Couldn't open save file !\n");
			return (1);
		}
		score[i] = buf[i];
		i += 1;
	}
	(*e)->score = my_getnbr(score);
	(*e)->new = 0;
	return (0);
}

void what_to_save(Entities **e)
{
	char *score = malloc(sizeof(char) * 3);
	int modulo = 0;

	if ((*e)->score >= 10) {
		modulo = ((*e)->score % 10);
		score[0] = ((*e)->score - modulo) / 10 + 48;
		score[1] = modulo + 48;
		score[2] = '\0';
	}
	else {
		score[0] = (*e)->score + 48;
		score[1] = 48;
		score[2] = '\0';
	}
	save((*e)->name, score);
}

void save(char *name, char *saved)
{
	FILE *fp = fopen(name, "wb");

	fwrite(saved, 2, sizeof(saved), fp);
}
