/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "bombyx.h"
#include <stdio.h>

int check_i(int ac, char **av)
{
    int i0 = atoi(av[2]);
    int i1 = atoi(av[3]);

    for(int i = 2; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9'))
                j++;
            else {
                write(2, "It's not a number\n", 18);
                write(2, "Check -h\n", 9);
                return (84);
            }
        }
    if (i0 > i1) {
        write(2, "i1 can not be smaller than i0\n", 30);
        return (84);
    }
    return (0);
}

int check_k(int ac, char **av)
{
    double k = atof(av[2]);

    for(int i = 2; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '.')
                j++;
            else {
                write(2, "It's not a number\n", 18);
                write(2, "Check -h\n", 9);
                return (84);
            }
        }
    if (k < 1 || k > 4) {
        write(2, "k must be between 1 and 4\n", 27);
        write(2, "Check -h\n", 9);
        return (84);
    }
    return (0);
}

int check_first_arg(char *n)
{
    for (int i = 0; n[i] != '\0';) {
        if (n[i] >= '0' && n[i] <= '9')
            i++;
        else {
            write(2, "n must be positive\n", 19);
            write(2, "Check -h\n", 9);
            return (84);
        }
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac <= 2) {
        write (2, "Not enough arg\n", 15);
        return (84);
    }
    if (ac == 0) {
        write (2, "Any arg here\n", 13);
        return(84);
    }
    if (ac > 4) {
        write (2, "Too much arg\n", 14);
        return (84);
    }
    if (check_first_arg(av[1]) == 84)
        return (84);
    if (ac == 3)
        return (check_k(ac, av));
    return (check_i(ac, av));
}
