/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/05 16:38:05 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack)
{
    // int tmp;

    
    if(stack[0][0] > 1)
    {
        pos_calculator(stack);
        calc_moves(stack);
        ft_abs(stack);
        sum_move(stack);
    }
       
    // if(stack[0][1] > 1)
    // {
    //     pos_calculator(stack);
    //     calc_moves(stack);
    //     ft_abs(stack);
    //     sum_move(stack);
    // }
     
}

/*
**
*/

void    pos_calculator(int **stack)
{
    //  printf("i = %i j = %i && stack[i][2] = %i && stack[i][1] = %i && stack[j][1] = %i \n", i, j, stack[i][2], stack[i][1], stack[j][1]);
    int i;
    int j;

    i = 1;
    while(i < stack[0][0] + 1)
    {
        j = 1;
        while(j <= stack[0][0])
        {
            if(stack[i][1] > stack[j][1])
                stack[i][2] += 1;
            j++;
        }
        i++;
    }
}

/*
** sum_move - sum all the moves in dP and store the result
*/

void    sum_move(int **stack)
{
    int i;

    i = stack[0][0];
    while(i >= 1)
    {
        stack[0][2] += stack[i][2];
        i--;
    }
}



void    calc_moves(int **stack)
{
    int i;

    i = 1;
    while(i < stack[0][0] + 1)
    {
        stack[i][2] -= stack[i][0];
        i++; 
    }
}

/*
**  ft_abs transforms negative numbers into positive.
*/

void    ft_abs(int **stack)
{
    int i;

    i = 0;
    while(i < stack[0][0] + 1)
    {
        if(stack[i][2] < 0)
            stack[i][2] = -stack[i][2];
        i++;
    }
}

void    move_compare(int **stack)
{
    int i;
    
    i = stack[0][2];
    while(!(i == 0))
    {
        ra(stack);
        rb(stack);
        rr(stack);
        sa(stack);
        sb(stack);
        ss(stack);
        rra(stack);
        rrb(stack);
        rrr(stack);
        pa(stack);
        pb(stack);
    }
}
