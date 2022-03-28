/*
** EPITECH PROJECT, 2022
** generation
** File description:
** generation
*/

#include "bombyx.h"
#include <stdio.h>

int generation_method(char **av)
{
    double x0 = atof(av[1]);
    double k = 100;
    double tmp = x0;
    double i = 1;
    double i0 = atof(av[2]);
    double i1 = atof(av[3]);

    while (k <= 400) {
        for (; i < i0; i++)
            x0 = k / 100 * x0 *(1000 - x0) /1000;
        for(; i <= i1; i++) {
            printf("%.2f %.2f\n", k ,x0);
            x0 = k / 100 * x0 *(1000 - x0) /1000;
        }
        k += 1;
        i = 1;
        x0 = tmp;
    }
    return (0);
}
