/*
** EPITECH PROJECT, 2020
** MAIN
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include "./include/push_swap.h"

int	main(int ac, char **av)
{
    ps_list_t *l_a = NULL;
    ps_list_t *l_b = NULL;
    int i = 0;

    if (ac < 3) {
        my_putchar('\n');
        return (0);
    }
    while (av[++i] != NULL) {
        l_a = insert_last(l_a,  my_getnbr(av[i]));
    }
    analyse(&l_a, &l_b, (ac - 2));
    my_putchar('\n');
    return (0);
}
