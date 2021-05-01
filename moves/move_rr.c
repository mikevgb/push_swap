/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:14:23 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/01 21:09:38 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RRA - Shift down all elemnts in stack A by 1. The last element becomes
**  the first one.
*/

void    rra(int *stack_a)
{
    int pos;
    int tmp;

    pos = stack_a[0];
    tmp = stack_a[stack_a[0]];
    while(pos > 0)
    {
        stack_a[pos] = stack_a[pos - 1];
        pos--;
    }
    stack_a[1] = tmp;
}

/*
**  RRB - Shift down all elemnts in stack B by 1. The last element becomes
**  the first one.
*/

void    rrb(int *stack_b)
{
    int pos;
    int tmp;

    pos = stack_b[0];
    tmp = stack_b[stack_b[0]];
    while(pos > 0)
    {
        stack_b[pos] = stack_b[pos - 1];
        pos--;
    }
    stack_b[0] = tmp;
}

/*
**  RRR - RRA and RRB at the same time.
*/

void    rrr(int *stack_a, int *stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}