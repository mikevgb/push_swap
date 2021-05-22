/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resets.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:22:33 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/22 19:15:10 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reset_calc(int **stack)
{
    int i;

    i = 1;
    while(i <= data.elements_a)
    {
        stack[i][2] = 1;
        i++;
    }
}

void    reset_calc_b(int **stack)
{
    int i;

    i = 1;
    while(i <= data.elements_b)
    {
        stack[i][5] = 1;
        i++;
    }
}