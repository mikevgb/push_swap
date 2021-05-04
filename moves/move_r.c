/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:13:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/04 21:02:52 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RA - Shift up all elemnts in stack A by 1. The first element becomes
**  the last one.
*/

void    ra(int **stack)
{
    int pos;
    int tmp;

    pos = 1;
    tmp = stack[1][1];
    while(pos < stack[0][0])
    {
        stack[pos][1] = stack[pos + 1][1];
        pos++;
    }
    stack[pos][1] = tmp;
}

/*
**  RB - Shift up all elemnts in stack B by 1. The first element becomes
**  the last one.
*/

void    rb(int **stack)
{
    int pos;
    int tmp;

    pos = 1;
    tmp = stack[1][4];
    while(pos < stack[0][1])
    {
        stack[pos][4] = stack[pos + 1][4];
        pos++;
    }
    stack[pos][4] = tmp;
}


/*
**  RR - Rotate A and B at the same time.
*/

void    rr(int **stack)
{
    ra(stack);
    rb(stack);
}