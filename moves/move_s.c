/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:12:12 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 18:06:51 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  SA - Swap the first 2 elemnts at the top of the stack A, do nothing
**  if the is only one or no elemnts.
*/

void    sa(int **stacks)
{
    int tmp;

    tmp = stacks[1][1];
    stacks[1][1] = stacks[2][1];
    stacks[2][1] = tmp;
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack B, do nothing
**  if the is only one or no elemnts.
*/

void    sb(int **stacks)
{
    int tmp;

    tmp = stacks[1][4];
    stacks[1][4] = stacks[2][4];
    stacks[2][4] = tmp;
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int **stacks)
{
    sa(stacks);
    sb(stacks);
}