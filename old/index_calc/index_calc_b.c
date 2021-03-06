/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_calc_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:48:27 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 20:09:48 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
** index_calculator
*/

void    index_calculator_b(int **stack)
{
    reset_index_calc_b(stack);
    pos_calculator_b(stack);
    calc_moves_b(stack);
    ft_abs_b(stack);
    sum_move_b(stack);
}

/*
** pos_calculator - loop comparing all given numbers with each other sum one on
** stack[i][5] for every number that is bigger.
*/

void    pos_calculator_b(int **stack)
{
    int i;
    int j;

    i = 1;
    while(i < data.elements_b + 1)
    {
        j = 1;
        while(j <= data.elements_b)
        {
            if(stack[i][4] < stack[j][4])
                stack[i][5] += 1;
            j++;
        }
        i++;
    }
}

/*
** sum_move - sum all the moves on dP stack and store the result in [0][5]
*/

void    sum_move_b(int **stack)
{
    int i;

    i = data.elements_b;
    while(i >= 1)
    {
        data.index_b += stack[i][5];
        i--;
    }
}

/*
**  calc_moves subtract the pos in the array with the pos_calculator result
*/

void    calc_moves_b(int **stack)
{
    int i;

    i = 1;
    while(i < data.elements_b + 1)
    {
        stack[i][5] -= stack[i][3];
        i++; 
    }
}

/*
**  ft_abs transforms negative numbers into positive.
*/

void    ft_abs_b(int **stack)
{
    int i;

    i = 0;
    while(i < data.elements_b + 1)
    {
        if(stack[i][5] < 0)
            stack[i][5] = -stack[i][5];
        i++;
    }
}