/*
** EPITECH PROJECT, 2022
** main function
** File description:
** main function
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    char *file = argv[1];

    if (argc != 2) {
        printf("Pathname in first argument is required.\n");
        exit(84);
    }
    open_map(argc, file);
    return 0;
}
