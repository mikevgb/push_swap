/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:13:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 20:44:44 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RA - Shift up all elemnts in stack A by 1. The first element becomes
**  the last one.
*/

// void    ra(int *stack_a)
// {
//     int pos;
//     int tmp;

//     pos = 1;
//     tmp = stack_a[1];
//     while(pos <= stack_a[0])
//     {
//         stack_a[pos] = stack_a[pos + 1];
//         pos++;
//     }
//     stack_a[stack_a[0]] = tmp;
// }

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

// void    rb(int *stack_b)
// {
//     int pos;
//     int tmp;

//     pos = 1;
//     tmp = stack_b[1];
//     while(pos <= stack_b[0])
//     {
//         stack_b[pos] = stack_b[pos + 1];
//         pos++;
//     }
//     stack_b[stack_b[0]] = tmp;
// }

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