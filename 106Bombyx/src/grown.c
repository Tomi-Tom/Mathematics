/*
** EPITECH PROJECT, 2022
** grown method
** File description:
** grown
*/

#include "bombyx.h"

int grown_method(char **av)
{
    double x0 = atof(av[1]);
    double k = atof(av[2]);
    int tmp = 1;
    double x1;

    for (; tmp <= 100; tmp++) {
        printf("%d " "%.2f\n", tmp, x0);
        x1 = k * x0 *((1000 - x0) /1000);
        x0 = x1;
        if (x0 < 0)
            x0 = 0;
    }
    return (0);
}
