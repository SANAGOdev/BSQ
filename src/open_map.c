/*
** EPITECH PROJECT, 2022
** open map
** File description:
** open map
*/

#include "../include/my.h"

char *open_map(char *buf,int buf_size, char *file)
{
    buf[buf_size];
    int fd = open(file, O_RDWR, 0700);
    if (fd == -1) {
        exit(84);
    }
    
    read(fd, buf, buf_size);
    buf[buf_size] = '\0';

    close(fd);
    return buf;
}
