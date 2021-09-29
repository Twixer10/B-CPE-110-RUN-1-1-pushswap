/*
** EPITECH PROJECT, 2020
** PUSH LA
** File description:
** take the first element from l_b and move it to the first position on the l_a
*/

#include "./include/my.h"
#include "./include/push_swap.h"

void push_la(ps_list_t **l_a, ps_list_t **l_b)
{
    if (*l_b == NULL)
        return;
    if ((*l_a)->first == 1) {
        my_putstr("pa");
        (*l_a)->first = 0;
    } else
        my_putstr(" pa");
    *l_a = add_to_list(*l_a, (*l_b)->n);
    *l_b = (*l_b)->next;
}