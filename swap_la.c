/*
** EPITECH PROJECT, 2020
** SWAP LA
** File description:
** swap the first two elements of l_a
*/

#include "./include/push_swap.h"
#include "./include/my.h"

void swap_la(ps_list_t **l_a)
{
    ps_list_t *tmp = *l_a;

    tmp = tmp->next;
    (*l_a)->next = tmp->next;
    tmp->next = *l_a;
    if ((*l_a)->first == 1) {
        my_putstr("sa");
        (*l_a)->first = 0;
    } else
        my_putstr(" sa");
    *l_a = tmp;
}
