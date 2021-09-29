/*
** EPITECH PROJECT, 2020
** PUSH SWAP
** File description:
** NO DESCRIPTION FOUND
*/

#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

#include <stddef.h>

typedef struct ps_list_h {
    int n;
    struct ps_list_h *next;
    int first;
} ps_list_t;

ps_list_t *insert_last(ps_list_t *ls, int nbr);
void analyse(ps_list_t **l_a, ps_list_t **l_b, int nbr);
void swap_la(ps_list_t **l_a);
void push_lb(ps_list_t **l_a, ps_list_t **l_b);
void push_la(ps_list_t **l_a, ps_list_t **l_b);
ps_list_t *add_to_list(ps_list_t *ls, int nbr);
void pushswap(ps_list_t **l_a, ps_list_t **l_b);


#endif /* !PUSH_SWAP_H_ */
