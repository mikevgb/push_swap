/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:23:27 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 20:13:03 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

void    pa(int **stacks)
{
    int tmp;
    int pos;

    tmp = stacks[1][4];
    pos = 1;
    stacks[0][0] += 1;
    while(pos <= stacks[0][1])
    {
        stacks[pos][4] = stacks[pos + 1][4];
        pos++;
    }
    pos = stacks[0][0];
    stacks[0][1] -= 1;
    while(pos > 0)
    {
        stacks[pos][1] = stacks[pos - 1][1];
        pos--;
    }
    stacks[1][1] = tmp;
}

/*
**  PB - Take the first element at the top of A and put it at the top of B.
**  Do nothing if A is empty.
*/

void    pb(int **stacks)
{
    int tmp;
    int pos;

    tmp = stacks[1][1];
    pos = 1;
    stacks[0][1] += 1;
    while(pos < stacks[0][0])
    {
        stacks[pos][1] = stacks[pos + 1][1];
        pos++;
    }
    pos = stacks[0][1];
    stacks[0][0] -= 1;
    while(pos > 0)
    {
        stacks[pos][4] = stacks[pos - 1][4];
        pos--;
    }
    stacks[1][4] = tmp; 
}