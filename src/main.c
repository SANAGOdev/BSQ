/*
** EPITECH PROJECT, 2022
** main function
** File description:
** main function
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    int buf_size = 251;
    char *buf;
    char *file = argv[1];
    if (argc != 2) {
        printf("Pathname in second argument is required.\n");
        exit(84);
    }
    buf = open_map(buf, buf_size, file);
    printf("%s\n", buf);

    return 0;
}
