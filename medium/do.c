/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:56:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/30 20:53:29 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    do_a(int **stack)
{
    int i;
    
    i = 1;
    while(i < data.total_elements)
    {
        find_small(stack);
        hold_first(stack);
        choose_hold(stack);
        pb(stack);
        i++;
    }
}

void    do_b(int **stack)
{
    int i;
    i = 1;

    while(i < data.total_elements)
    { 
        move_2_top_b(stack);
        find_small_b(stack);
        i++;
    }
}

void    ft_3(int **stack)
{
    if(stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] < stack[3][1])
        sa(stack);
    if(stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] > stack[3][1])
    {
        sa(stack);
        rra(stack);
    }
    if(stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] > stack[3][1])
        ra(stack);
    if(stack[1][1] < stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] < stack[3][1])
    {
        sa(stack);
        ra(stack);
    }
    if(stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] > stack[3][1])
        rra(stack);    
}

void    ft_5(int **stack)
{
    pb(stack);
    pb(stack);
    ft_3(stack);
    int i = 4;

    find_small(stack);

    while(i >= 4)
    {
        if(stack[1][4] > stack[i][1])
            rra(stack);
        if(stack[1][4] < stack[i][1])
        {
            pa(stack);
            break;
        }  
        i--;
    }
    pa(stack);
}