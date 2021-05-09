/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/09 19:34:29 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack)
{
    if(stack[0][0] > 1)
    {
        index_calculator_a(stack);
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

void    move_compare(int **stack)
{
    int _ra;
    // int _rb;
    // int _rr;
    int _sa;
    // int _sb;
    // int _ss;
    int _rra;
    // int _rrb;
    // int _rrr;
    // int _pa;
    // int _pb;

    while(stack[0][2] > 0)
    {
        sa(stack);
        index_calculator_a(stack);
        _sa = stack[0][2];
        sa(stack); //undo
        index_calculator_a(stack);
        ra(stack);
        index_calculator_a(stack);
        _ra = stack[0][2];
        rra(stack); //undo
        index_calculator_a(stack);
        rra(stack);
        index_calculator_a(stack);
        _rra = stack[0][2];
        ra(stack); //undo
        index_calculator_a(stack);
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
        index_calculator_a(stack);
    }
}
