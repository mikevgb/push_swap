/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_dp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/02 21:09:11 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int *stack_a, int *stack_b, int **calc_a, int **calc_b)
{
    int i;

    i = 1;
    while(i <= stack_a[0])
    {
        while(stack_a[i] > stack_a[i + 1])
            calc_a[i][0] += 1;
        while(stack_a[i] < stack_a[i + 1])
            calc_a[i][0] -= 1;
        i++;
    }
    i = 1;
    while(i < stack_b[0])
    {
        if(stack_b[i] > stack_b[i + 1])
            calc_b[i][0] += 1;
        i++;
    }
}