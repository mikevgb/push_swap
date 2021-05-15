/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/15 21:11:25 by mvillaes         ###   ########.fr       */
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
        if(stack[0][3] > 0) //stack B
        {
            sb(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _sb = stack[0][1];
            sb(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            rrb(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _rrb = stack[0][1];
            rb(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            pa(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _pa = stack[0][1];
            pb(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack); 

            rb(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _rb = stack[0][1];
            rrb(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
        }
        
        if(stack[0][1] > 0) //stack A
        {
            sa(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _sa = stack[0][1];
            sa(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            ra(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _ra = stack[0][1];
            rra(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            pb(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _pb = stack[0][1];
            pa(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            rra(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _rra = stack[0][1];
            ra(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack); 
        }

        if(stack[0][1] > 0 && stack[0][3] > 0)
        {
            rr(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _rr = stack[0][1];
            rrr(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);

            rrr(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _rrr = stack[0][1];
            rr(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack); 

            ss(stack);
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
            _ss = stack[0][1];
            ss(stack); //undo
            index_calculator_a(stack);
            index_calculator_b(stack);
            sum_dp(stack);
        }
        
        if(_sa <= _sb && _sa <= _ss && _sa <=_rra && _sa <= _rrb && _sa <= _pa && _sa <= _pb && _sa <= _rb && _sa <= _rr && _sa <= _rrr)
        {
            printf("Best move is sa with dP %i\n", _ra);
            sa(stack);
            stack[0][4] += 1; //move counter
            // move[i] = 1;
        }
            
        else if(_sb <= _sa && _sb <= _ss && _sb <=_rra && _sb <= _rrb && _sb <= _pa && _sb <= _pb && _sb <= _rb && _sb <= _rr && _sb <= _rrr)
        {
            printf("Best move is sb with dP %i\n", _sa);
            sb(stack);
            stack[0][4] += 1;
            // move[i] = 2;
        }
            
        else if(_ss <= _sa && _ss <= _sb && _ss <=_rra && _ss <= _rrb && _ss <= _pa && _ss <= _pb && _ss <= _rb && _ss <= _rr && _ss <= _rrr)
        {
            printf("Best move is ss with dP %i\n", _rra);
            ss(stack);
            stack[0][4] += 1;
            // move[i] = 3;
        }

        else if(_ra <= _sa && _ra <= _ss && _ra <=_rra && _ra <= _rrb && _ra <= _pa && _ra <= _pb && _ra <= _rb && _ra <= _rr && _ra <= _rrr)
        {
            printf("Best move is ra with dP %i\n", _pb);
            ra(stack);
            stack[0][4] += 1;
            // move[i] = 4;
        }

        else if(_rra <= _sa && _rra <= _ss && _rra <=_ra && _rra <= _rrb && _rra <= _pa && _rra <= _pb && _rra <= _rb && _rra <= _rr && _rra <= _rrr)
        {
            printf("Best move is rra with dP %i\n", _pb);
            rra(stack);
            stack[0][4] += 1;
            // move[i] = 6;
        }

        else if(_rrb <= _sa && _rrb <= _ss && _rrb <=_ra && _rrb <= _rra && _rrb <= _pa && _rrb <= _pb && _rrb <= _rb && _rrb <= _rr && _rrb <= _rrr)
        {
            printf("Best move is rrb with dP %i\n", _pb);
            rrb(stack);
            stack[0][4] += 1;
            // move[i] = 7;
        }

        else if(_pa <= _sa && _pa <= _ss && _pa <=_ra && _pa <= _rra && _pa <= _rrb && _pa <= _pb && _pa <= _rb && _pa <= _rr && _pa <= _rrr)
        {
            printf("Best move is pa with dP %i\n", _pb);
            pa(stack);
            stack[0][4] += 1;
            // move[i] = 8;
        }

        else if(_pb <= _sa && _pb <= _ss && _pb <=_ra && _pb <= _rra && _pb <= _rrb && _pb <= _pa && _pb <= _rb && _pb <= _rr && _pb <= _rrr)
        {
            printf("Best move is pb with dP %i\n", _pb);
            pb(stack);
            stack[0][4] += 1;
            // move[i] = 9;
        }

        else if(_rb <= _sa && _rb <= _ss && _rb <=_ra && _rb <= _rra && _rb <= _rrb && _rb <= _pa && _rb <= _pb && _rb <= _rr && _rb <= _rrr)
        {
            printf("Best move is rb with dP %i\n", _pb);
            rb(stack);
            stack[0][4] += 1;
            // move[i] = 5;
        }

        else if(_rr <= _sa && _rr <= _ss && _rr <=_ra && _rr <= _rra && _rr <= _rrb && _rr <= _pa && _rr <= _pb && _rr <= _rb && _rr <= _rrr)
        {
            printf("Best move is rr with dP %i\n", _pb);
            rr(stack);
            stack[0][4] += 1;
            // move[i] = 5;
        }

        else if(_rrr <= _sa && _rrr <= _ss && _rrr <=_ra && _rrr <= _rra && _rrr <= _rrb && _rrr <= _pa && _rrr <= _pb && _rrr <= _rb && _rrr <= _rr)
        {
            printf("Best move is rrr with dP %i\n", _pb);
            rrr(stack);
            stack[0][4] += 1;
            // move[i] = 5;
        }
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        

        if(stack[0][4] >= move[0])
        {
            printf("exit! moves 1\n");
            break; 
        }
        i++;
    }
    
    while(stack[0][5] == 0 && stack[0][3] > 0)
    {
        pa(stack);
        index_calculator_a(stack);
        index_calculator_b(stack);
        sum_dp(stack);
        if(stack[0][4] >= move[0])
        {
            printf("exit! moves 2\n");
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