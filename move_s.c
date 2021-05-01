/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:12:12 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/01 21:01:41 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**  SA - Swap the first 2 elemnts at the top of the stack A, do nothing
**  if the is only one or no elemnts.
*/

void    sa(int *stack_a)
{
    int tmp;

    tmp = stack_a[1];
    stack_a[1] = stack_a[2];
    stack_a[2] = tmp;
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack B, do nothing
**  if the is only one or no elemnts.
*/

void    sb(int *stack_b)
{
    int tmp;

    tmp = stack_b[1];
    stack_b[1] = stack_b[2];
    stack_b[2] = tmp;
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int *stack_a, int *stack_b)
{
    sa(stack_a);
    sb(stack_b);
}