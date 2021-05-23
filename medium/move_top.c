/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:25:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/23 17:35:52 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    move_top(int **stack)
{
    while(data.elements_a != 0)
    {
        while(stack[1][2] != data.elements_a)
        { 
            ra(stack);
            find_small(stack);
        }
            
        if(stack[1][2] == data.elements_a)
        {
            pb(stack);
            find_small(stack);
        }
    }
}

void    move_top_b(int **stack)
{
    if(data.elements_b != 0)
    {
        while(stack[1][5] != 1)
        { 
            rb(stack);
            find_small_b(stack);
        }
    }
}
