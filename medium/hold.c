/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:26:59 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/23 20:53:12 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    hold_first(int **stack)
{
    int i;
    int j;
    int chunk;
    int tmp;

    i = 1;
    tmp = 333333;
    // chunk = data.elements_a * 0.02;
    chunk = data.elements_a * data.chunk;
    while(i <= chunk)
    {
        j = 1;
        while(j <= chunk)
        {
            if (j != i)
            {
                if(stack[i][2] < stack[j][2])
                {
                    if(stack[i][2] < tmp)
                    {
                        tmp = stack[i][2];
                        data.hold_first_pos = stack[i][0];
                    }
                }
            }
            j++;
        }
        i++;
    }
}

void    hold_second(int **stack)
{
    int i;
    int j;
    int chunk;
    int tmp;


    i = data.elements_a;
    tmp = 333333;
    // chunk = data.elements_a * 0.02;
    chunk = data.elements_a * data.chunk;
    while(i >= chunk)
    {
        j = data.elements_a;
        while (j >= chunk)
        {
            if (j != i)
            {
                if(stack[i][2] < stack[j][2])
                {
                    if(stack[i][2] < tmp)
                    {
                        tmp = stack[i][2];
                        data.hold_second_pos = stack[i][0];
                    }
                }
            }
            j--;
        }
        i--;
    }
}

void    choose_hold(int **stack)
{
    int hold_1;
    int hold_2;
    int i;

    hold_1 = data.hold_first_pos;
    hold_2 = data.elements_a - data.hold_second_pos;
    if(hold_1 <= hold_2)
    {
        i = 1;
        while(i < hold_1)
        {
            ra(stack);
            i++;
        }    
    }
    if (hold_2 < hold_1)
    {
        i = 1;
        while(i < hold_2)
        {
            rra(stack);
            i++;
        }    
    }
}