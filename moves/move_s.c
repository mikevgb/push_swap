/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:12:12 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/09 18:38:39 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  SA - Swap the first 2 elemnts at the top of the stack A, do nothing
**  if the is only one or no elemnts.
*/

void    sa(int **stack)
{
    int tmp;

    tmp = stack[1][1];
    if(stack[0][0] > 1)
    {
        stack[1][1] = stack[2][1];
        stack[2][1] = tmp;  
    }
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack B, do nothing
**  if the is only one or no elemnts.
*/

void    sb(int **stack)
{
    int tmp;

    tmp = stack[1][4];
    if(stack[0][1] > 1)
    {
        stack[1][4] = stack[2][4];
        stack[2][4] = tmp;   
    }
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int **stack)
{
    if(stack[0][0] > 1 && stack[0][1])
    {
        sa(stack);
        sb(stack);  
    }
}