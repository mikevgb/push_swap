/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/14 23:08:52 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack, int *move)
{
    if(stack[0][0] > 1)
    {
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        move_compare(stack, move);
        // c_sa(stack);
        // index_calculator(stack);
    }

    // if(stack[0][3] > 1)
    // {
    //     pos_calculator(stack);
    //     calc_moves(stack);
    //     ft_abs(stack);
    //     sum_move(stack);
    // }
}

void    sum_dp(int **stack)
{
    stack[0][1] = stack[0][2] + stack[0][5];
}

void    move_compare(int **stack, int *move)
{
    int _ra;
    int _rb;
    int _rr;
    int _sa;
    int _sb;
    int _ss;
    int _rra;
    int _rrb;
    int _rrr;
    int _pa;
    int _pb;
    int i;      
    // printf("move stack %i", move[0]);
    i = 1; //start in 1 because we use 0 as reference of max moves allowed


    while(stack[0][1] > 0)
    {
        sa(stack);
        index_calculator_a(stack);
        sum_dp(stack);
        _sa = stack[0][1];
        sa(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        sb(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _sb = stack[0][1];
        sb(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        ss(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _ss = stack[0][1];
        ss(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        ra(stack);
        index_calculator_a(stack);
        sum_dp(stack);
        _ra = stack[0][1];
        rra(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);
        
        rra(stack);
        index_calculator_a(stack);
        sum_dp(stack);
        _rra = stack[0][1];
        ra(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        rrb(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _rrb = stack[0][1];
        rb(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        pa(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _pa = stack[0][1];
        pb(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        pb(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _pb = stack[0][1];
        pa(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        rb(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _rb = stack[0][1];
        rrb(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        rr(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _rr = stack[0][1];
        rrr(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);

        rrr(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        _rrr = stack[0][1];
        rr(stack); //undo
        index_calculator_a(stack);
        sum_dp(stack);
        
        if(_ra < _sa && _ra < _rra && _ra < _pb && _ra < _sb && _ra < _ss && _ra < _rra )
        {
            printf("Best move is ra with dP %i\n", _ra);
            ra(stack);
            stack[0][4] += 1; //move counter
            move[i] = 1;
        }
            
        else if(_sa < _ra && _sa < _rra && _sa < _pb)
        {
            printf("Best move is sa with dP %i\n", _sa);
            sa(stack);
            stack[0][4] += 1;
            move[i] = 2;
        }
            
        else if(_rra < _sa && _rra < _ra && _rra < _pb)
        {
            printf("Best move is rra with dP %i\n", _rra);
            rra(stack);
            stack[0][4] += 1;
            move[i] = 3;
        }

        else if(_pb < _sa && _pb < _ra && _pb < _rra)
        {
            printf("Best move is rra with dP %i\n", _pb);
            rra(stack);
            stack[0][4] += 1;
            move[i] = 4;
        }
        // if(_ra <= _sa && _ra <= _rra)
        // {
        //     printf("Best move is ra with dP %i\n", _ra);
        //     ra(stack);
        //     stack[0][4] += 1; //move counter
        //     move[i] = 1;
        // }
            
        // else if(_sa <= _ra && _sa <= _rra)
        // {
        //     printf("Best move is sa with dP %i\n", _sa);
        //     sa(stack);
        //     stack[0][4] += 1;
        //     move[i] = 2;
        // }
            
        // else if(_rra <= _sa && _rra <= _ra)
        // {
        //     printf("Best move is rra with dP %i\n", _rra);
        //     rra(stack);
        //     stack[0][4] += 1;
        //     move[i] = 3;
        // }
        
        index_calculator_a(stack);
        sum_dp(stack);
        if(stack[0][4] >= move[0])
        {
            printf("exit! moves\n");
            break; 
        }
            

        i++;
    }
}

// void    swap_a(int **stack)
// {
//     if 
// }

// sa  1
// sb  2
// ss  12
// pa  4
// pb  5
// ra  6
// rb  7
// rr  13
// rra 8
// rrb 9
// rrr 11

/*
** dupe_move - function that checks if program is enterin in a loop
*/

// void    dupe_move(int **stack)
// {
//     int current_move;
//     int last_move;
//     int sa;
//     int sb;
//     int ss;

//     sa = 1;
//     sb = 2;
//     last_move = 0
//     if (last_move = current_move)
//     {
        
//     }

// }

// void    go_back(int **stack)
// {
//     int last_move;
//     int move_counter_max;
//     int move_counter;
//     int stored_move;

//     // check if has found an end
//     if(move_counter == move_counter_max)
//     {
//         // protect that it wont go below 0 moves
//         if(move_counter > 0)
//             move_counter -= 1;
//         //
//         // calculate the best move again
//         // compare with the last move stored in the list
//         // if its not the best, look at the second best ...
//         // loop comparing all the moves, if is equal to the
//         // worst move, go back and repeat.
//         //
//     }
// }