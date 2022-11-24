/*
** EPITECH PROJECT, 2022
** my header file
** File description:
** my header file
*/

#ifndef MY_
    #define MY_
    #define BUF_SIZE 4096


    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    char *read_map(int argc, char *file);
    char **convert_map(char *map);

#endif /* !MY_ */
