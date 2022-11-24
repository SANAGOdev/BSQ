/*
** EPITECH PROJECT, 2022
** convert map
** File description:
** convert file content in 2d array
*/

#include "../include/my.h"

char **convert_map(char *map)
{
    char **array;
    int y = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        array[y][i] = map[i];
        if (map[i] == '\n')
            y++;
    }
    char **res = array;
    return res;
}
