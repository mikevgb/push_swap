/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/04 21:14:39 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack)
{
    int tmp;

    if(stack[0][0] > 1)
        copy_and_bubble_a(stack);
    if(stack[0][1] > 1)
        copy_and_bubble_b(stack);
     
}

/*
**  copy_and_bubble_a & b - copy stack[1][1] to stack[1][2] then use bubble short algo
**  for ordering values on it. Same thing for b but with stack[1][4] to stack[1][5]
*/

void    copy_and_bubble_a(int **stack)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while(i < stack[0][0] + 1)
    {
        stack[i][2] = stack[i][1];
        i++;
    }
    i = 0;
    while(i < (stack[0][0]))
    {
        j = 0;
        while(j < (stack[0][0] - i))
        {
            if(stack[j][2] > stack[j + 1][2])
            {
                tmp = stack[j][2];
                stack[j][2] = stack[j + 1][2];
                stack[j + 1][2] = tmp;
            }
            j++;
        }
        i++;
    }
}

void    copy_and_bubble_b(int **stack)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while(i < stack[0][1] + 1)
    {
        stack[i][5] = stack[i][4];
        i++;
    }
    i = 0;
    while(i < (stack[0][1]))
    {
        j = 0;
        while(j < (stack[0][1] - i))
        {
            if(stack[j][5] > stack[j + 1][5])
            {
                tmp = stack[j][5];
                stack[j][5] = stack[j + 1][5];
                stack[j + 1][5] = tmp;
            }
            j++;
        }
        i++;
    }
}