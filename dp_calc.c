/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/04 18:06:38 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack)
{
    int i;
    int j;
    
    i = 1;
    while(i < stack[0][0])
    {
        j = 1;
        while (stack[j][1] < stack[i + 1][1])
        {
            stack[j][2] += 1;
            j++;
        }
        j = 1;
        while (stack[j][1] > stack[i + 1][1])
        {
            stack[j][2] -= 1;
            j++;
        }
        i++;
    }
}