/*
** EPITECH PROJECT, 2020
** ANALYSE LIST
** File description:
** TYPE HELP ... IT'S A PRANK
*/

#include "./include/push_swap.h"
#include "./include/my.h"

void analyse(ps_list_t **l_a, ps_list_t **l_b, int nbr)
{
    ps_list_t *tmp = *l_a;
    int i = 0;

    while (tmp->next != NULL && tmp->next->n > tmp->n) {
        i++;
        tmp = tmp->next;
    }
    if (i == nbr)
        my_putstr("");
    else
        pushswap(l_a, l_b);
}