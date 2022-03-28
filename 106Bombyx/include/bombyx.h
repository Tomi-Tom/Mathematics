/*
** EPITECH PROJECT, 2021
** 105torus
** File description:
** 
*/
#ifndef BOMBYX_H
    #define BOMBYX_H

    #include <math.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>

int help(void);
int check_i(int ac, char **av);
int check_k(int ac, char **av);
int check_first_arg(char *n);
int error_handling(int ac, char **av);
int grown_method(char **av);
int generation_method(char **av);

#endif
