/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:23:27 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/01 21:09:34 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

void    pa(int *stack_a, int *stack_b)
{
    int tmp;
    int pos;

    tmp = stack_b[1];
    pos = 1;
    stack_a[0] += 1;
    while(pos <= stack_b[0])
    {
        stack_b[pos] = stack_b[pos + 1];
        pos++;
    }
    pos = stack_a[0];
    stack_b[0] -= 1;
    while(pos > 0)
    {
        stack_a[pos] = stack_a[pos - 1];
        pos--;
    }
    stack_a[1] = tmp;
}

/*
**  PB - Take the first element at the top of A and put it at the top of B.
**  Do nothing if A is empty.
*/

void    pb(int *stack_a, int *stack_b)
{
    int tmp;
    int pos;

    tmp = stack_a[1];
    pos = 1;
    stack_b[0] += 1;
    while(pos <= stack_a[0])
    {
        stack_a[pos] = stack_a[pos + 1];
        pos++;
    }
    pos = stack_b[0];
    stack_a[0] -= 1;
    while(pos > 0)
    {
        stack_b[pos] = stack_b[pos - 1];
        pos--;
    }
    stack_b[1] = tmp; 
}