/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/08 21:43:12 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack)
{
    if(stack[0][0] > 1)
    {
        index_calculator(stack);
        move_compare(stack);
        // c_sa(stack);
        // index_calculator(stack);
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
**  reset_index_calc - reset the dP counter and put all the dP values to 1.
*/

void    reset_index_calc(int **stack)
{
    int i;

    i = 1;
    stack[0][2] = 0;
    while(i <= stack[0][0])
    {
        stack[i][2] = 1;
        i++;
    }
}

/*
** index_calculator
*/

void    index_calculator(int **stack)
{
    reset_index_calc(stack);
    pos_calculator(stack);
    calc_moves(stack);
    ft_abs(stack);
    sum_move(stack);
}

/*
** pos_calculator - loop comparing all given numbers with each other sum one on
** stack[i][2] for every number that is bigger.
*/

void    pos_calculator(int **stack)
{
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
** sum_move - sum all the moves on dP stack and store the result in [0][2]
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

/*
**  calc_moves subtract the pos in the array with the pos_calculator result
*/

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
    int _ra;
    int _sa;
    int _rra;

    while(stack[0][2] > 0)
    {
        sa(stack);
        index_calculator(stack);
        _sa = stack[0][2];
        sa(stack); //undo
        index_calculator(stack);
        ra(stack);
        index_calculator(stack);
        _ra = stack[0][2];
        rra(stack); //undo
        index_calculator(stack);
        rra(stack);
        index_calculator(stack);
        _rra = stack[0][2];
        ra(stack); //undo
        index_calculator(stack);
        if(_ra <= _sa && _ra <= _rra)
        {
            printf("Best move is ra with dP %i\n", _ra);
            ra(stack);
        }
            
        else if(_sa <= _ra && _sa <= _rra)
        {
            printf("Best move is sa with dP %i\n", _sa);
            sa(stack);
        }
            
        else if(_rra <= _sa && _rra <= _ra)
        {
            printf("Best move is rra with dP %i\n", _rra);
            rra(stack);
        }
        index_calculator(stack);
    }
}
