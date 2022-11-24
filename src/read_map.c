/*
** EPITECH PROJECT, 2022
** open map
** File description:
** open map
*/

#include "../include/my.h"

char *read_map(int argc, char *file)
{
    int fd = open(file, O_RDONLY);
    int res;
    char buf[BUF_SIZE + 1];
    if (fd == -1) {
        printf("Error invalid pathname.\n");
        exit(84);
    }
    res = read(fd, buf, BUF_SIZE);
    buf[res] = '\0';
    char *resultat = buf;
    return resultat;
}
