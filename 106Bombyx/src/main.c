/*
** EPITECH PROJECT, 2022
** main 
** File description:
** main
*/

#include "bombyx.h"

int main(int ac , char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return help();
    if (error_handling(ac, av) == 84)
        return (84);
    if (ac == 3)
        return grown_method(av);
    if (ac == 4)
        return generation_method(av);
    return (0);
}
