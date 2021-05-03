/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:14:23 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 20:28:53 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RRA - Shift down all elemnts in stack A by 1. The last element becomes
**  the first one.
*/

void    rra(int **stacks)
{
    int pos;
    int tmp;

    pos = stacks[0][0];
    tmp = stacks[pos][1];
    while(pos > 0)
    {
        stacks[pos][1] = stacks[pos - 1][1];
        pos--;
    }
    stacks[1][1] = tmp;
}

/*
**  RRB - Shift down all elemnts in stack B by 1. The last element becomes
**  the first one.
*/

void    rrb(int **stacks)
{
    int pos;
    int tmp;

    pos = stacks[0][0];
    tmp = stacks[pos][4];
    while(pos > 0)
    {
        stacks[pos][4] = stacks[pos - 1][4];
        pos--;
    }
    stacks[1][4] = tmp;
}

/*
**  RRR - RRA and RRB at the same time.
*/

void    rrr(int **stacks)
{
    rra(stacks);
    rrb(stacks);
}