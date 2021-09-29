/*
** EPITECH PROJECT, 2020
** UTILS
** File description:
** NO DESCRIPTION FOR YOU
*/

#include "./include/my.h"
#include "./include/push_swap.h"
#include <stdlib.h>

ps_list_t *insert_last(ps_list_t *ls, int nbr)
{
    ps_list_t *new = malloc(sizeof(ps_list_t));
    ps_list_t *tmp = ls;

    new->n = nbr;
    new->next = NULL;
    if (ls == NULL) {
        new->first = 1;
        return (new);
    }
    new->first = 0;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
    return (ls);
}

ps_list_t *add_to_list(ps_list_t *ls, int nbr)
{
    ps_list_t *tmp = malloc(sizeof(ps_list_t));

    tmp->n = nbr;
    tmp->next = ls;
    ls = tmp;
    return (ls);
}