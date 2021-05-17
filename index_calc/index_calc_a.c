/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_calc_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:46:51 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/09 19:31:28 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
** index_calculator
*/

void    index_calculator_a(int **stack)
{
    reset_index_calc_a(stack);
    pos_calculator_a(stack);
    calc_moves_a(stack);
    ft_abs_a(stack);
    sum_move_a(stack);
}

/*
** pos_calculator - loop comparing all given numbers with each other sum one on
** stack[i][2] for every number that is bigger.
*/

void    pos_calculator_a(int **stack)
{
    int i;
    int j;

    i = 1;
    while(i < data.total_a + 1)
    {
        j = 1;
        while(j <= data.total_a)
        {
            if(stack[i][1] > stack[j][1])
                stack[i][2] += 1;
            j++;
        }
        i++;
    }
}

/*
** sum_move - sum all the moves on dP stack and store the result in [0][2]
*/

void    sum_move_a(int **stack)
{
    int i;

    i = data.total_a;
    while(i >= 1)
    {
        data.index_a += stack[i][2];
        i--;
    }
}

/*
**  calc_moves subtract the pos in the array with the pos_calculator result
*/

void    calc_moves_a(int **stack)
{
    int i;

    i = 1;
    while(i < data.total_a + 1)
    {
        stack[i][2] -= stack[i][0];
        i++; 
    }
}

/*
**  ft_abs transforms negative numbers into positive.
*/

void    ft_abs_a(int **stack)
{
    int i;

    i = 0;
    while(i < data.total_a + 1)
    {
        if(stack[i][2] < 0)
            stack[i][2] = -stack[i][2];
        i++;
    }
}