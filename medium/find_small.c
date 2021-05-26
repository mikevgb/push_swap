/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:24:34 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/25 21:33:59 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    find_small(int **stack)
{
    int i;
    int j;

    i = 1;
    reset_calc(stack);
    while(i <= data.elements_a)
    {
        j = 1;
        while(j <= data.elements_a)
        {
            if (j != i)
            {
                if(stack[i][1] > stack[j][1])
                    stack[i][2] += 1; 
            }
            j++;
        }
        i++;
    }
}

void    find_small_b(int **stack)
{
    int i;
    int j;

    i = 1;
    reset_calc_b(stack);
    while(i <= data.elements_b)
    {
        j = 1;
        while(j <= data.elements_b)
        {
            if (j != i)
            {
                if(stack[i][4] > stack[j][4])
                    stack[i][5] += 1; 
            }
            j++;
        }
        i++;
    }
}

// void    find_small_b(int **stack)
// {
//     int i;
//     int j;

//     i = 1;
//     reset_calc_b(stack);
//     if(data.elements_b > 1)
//     {
//         while(i <= data.elements_b)
//         {
//             j = 1;
//             while(j <= data.elements_b)
//             {
//                 if (j != i)
//                 {
//                     if(stack[i][4] > stack[j][4])
//                         stack[i][5] += 1; 
//                 }
//                 j++;
//             }
//             i++;
//         }   
//     }
// }