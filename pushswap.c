/*
** EPITECH PROJECT, 2020
** PUSHSWAP MANAGER
** File description:
** HELLO :D
*/

#include "./include/push_swap.h"
#include "./include/my.h"

void pushswap(ps_list_t **l_a, ps_list_t **l_b)
{
    ps_list_t *tmp;
    my_bool b = TRUE;

    while (b) {
        tmp = *l_a;
        b = FALSE;
        while ((*l_a)->next != NULL) {
            if ((*l_a)->n > (*l_a)->next->n) {
                swap_la(l_a);
                b = TRUE;
            }
            push_lb(l_a, l_b);
            tmp = tmp->next;
        }
        while (*l_b != NULL)
            push_la(l_a, l_b);
    }
}
