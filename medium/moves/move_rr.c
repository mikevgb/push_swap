/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:14:23 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/28 20:04:08 by mvillaes         ###   ########.fr       */
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

    pos = data.elements_a;
    tmp = stack[pos][1];
    while(pos > 0 && data.elements_a > 1)
    {
        stack[pos][1] = stack[pos - 1][1];
        pos--;
    }
    stack[1][1] = tmp;
    // data.moves += 1;
}

/*
**  RRB - Shift down all elemnts in stack B by 1. The last element becomes
**  the first one.
*/

void    rrb(int **stack)
{
    int pos;
    int tmp;

    pos = data.elements_b;
    tmp = stack[pos][4];
    while(pos > 0 && data.elements_b > 1)
    {
        stack[pos][4] = stack[pos - 1][4];
        pos--;
    }
    stack[1][4] = tmp;
    // data.moves += 1;
}

/*
**  RRR - RRA and RRB at the same time.
*/

void    rrr(int **stack)
{
    if(data.elements_a > 1 && data.elements_b > 1)
    {
        rra(stack);
        rrb(stack); 
    }
}