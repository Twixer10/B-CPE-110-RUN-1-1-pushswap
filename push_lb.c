/*
** EPITECH PROJECT, 2020
** PUSH LB
** File description:
** take the first element from l_b and move it to the first position on the l_B
*/

#include "./include/push_swap.h"
#include "./include/my.h"

void push_lb(ps_list_t **l_a, ps_list_t **l_b)
{
    if (*l_a == NULL)
        return;
    if ((*l_a)->first == 1) {
        my_putstr("pb");
        (*l_a)->first = 0;
    } else
        my_putstr(" pb");
    *l_b = add_to_list(*l_b, (*l_a)->n);
    *l_a = (*l_a)->next;
}
