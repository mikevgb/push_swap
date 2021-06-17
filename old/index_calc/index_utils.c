/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:15:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 20:09:48 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  reset_index_calc - reset the dP counter and put all the dP values to 1.
*/

void    reset_index_calc_a(int **stack)
{
    int i;

    i = 1;
    data.index_a = 0;
    while(i <= data.elements_a)
    {
        stack[i][2] = 1;
        i++;
    }
}

void    reset_index_calc_b(int **stack)
{
    int i;

    i = 1;
    data.index_b = 0;
    while(i <= data.elements_b)
    {
        stack[i][5] = 1;
        i++;
    }
}

void    sum_dp()
{
    data.total = data.index_a + data.index_b;
}

void    index_calc(int **stack)
{
    index_calculator_a(stack);
    index_calculator_b(stack);
    sum_dp();
}