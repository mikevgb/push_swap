/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:14:23 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 20:44:44 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RRA - Shift down all elemnts in stack A by 1. The last element becomes
**  the first one.
*/

void    rra(int **stack)
{
    int pos;
    int tmp;

    pos = stack[0][0];
    tmp = stack[pos][1];
    while(pos > 0)
    {
        stack[pos][1] = stack[pos - 1][1];
        pos--;
    }
    stack[1][1] = tmp;
}

/*
**  RRB - Shift down all elemnts in stack B by 1. The last element becomes
**  the first one.
*/

void    rrb(int **stack)
{
    int pos;
    int tmp;

    pos = stack[0][0];
    tmp = stack[pos][4];
    while(pos > 0)
    {
        stack[pos][4] = stack[pos - 1][4];
        pos--;
    }
    stack[1][4] = tmp;
}

/*
**  RRR - RRA and RRB at the same time.
*/

void    rrr(int **stack)
{
    rra(stack);
    rrb(stack);
}