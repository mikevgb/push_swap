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
    if(data.total_a > 1)
    {
        index_calc(stack);
        move_compare(stack, move);
        // c_sa(stack);
        // index_calculator(stack);
    }

    // if(data.total_b > 1)
    // {
    //     pos_calculator(stack);
    //     calc_moves(stack);
    //     ft_abs(stack);
    //     sum_move(stack);
    // }
}

void    compare_a(int **stack)
{
    sa(stack);
    index_calc(stack);
    data.sa = data.total;
    sa(stack); //undo
    index_calc(stack);

    ra(stack);
    index_calc(stack);
    data.ra = data.total;
    rra(stack); //undo
    index_calc(stack);

    pb(stack);
    index_calc(stack);
    data.pb = data.total;
    pa(stack); //undo
    index_calc(stack);

    rra(stack);
    index_calc(stack);
    data.rra = data.total;
    ra(stack); //undo
    index_calc(stack);
}

void    compare_b(int **stack)
{
    sb(stack);
    index_calc(stack);
    data.rb = data.total;
    sb(stack); //undo
    index_calc(stack);

    rrb(stack);
    index_calc(stack);
    data.rrb = data.total;
    rb(stack); //undo
    index_calc(stack);

    pa(stack);
    index_calc(stack);
    data.pa = data.total;
    pb(stack); //undo
    index_calc(stack); 

    rb(stack);
    index_calc(stack);
    data.rb = data.total;
    rrb(stack); //undo
    index_calc(stack);
}

void    compare_double(int **stack)
{
    rr(stack);
    index_calc(stack);
    data.rr = data.total;
    rrr(stack); //undo
    index_calc(stack);

    rrr(stack);
    index_calc(stack);
    data.rrr = data.total;
    rr(stack); //undo
    index_calc(stack); 

    ss(stack);
    index_calc(stack);
    data.ss = data.total;
    ss(stack); //undo
    index_calc(stack);
}

void    move_compare(int **stack, int *move)
{
    int i;      

    i = 1; //start in 1 because we use 0 as reference of max moves allowed
    while(data.total > 0)
    {
        if(data.total_b > 0) //stack B
            compare_b(stack);
        
        if(data.total_a > 0) //stack A
            compare_a(stack);

        if(data.total_a > 0 && data.total_b > 0)
            compare_double(stack);
        
        if(data.sa <= data.sb && data.sa <= data.ss && data.sa <= data.rra && data.sa <= data.rrb && data.sa <= data.pa && data.sa <= data.pb && data.sa <= data.rb && data.sa <= data.rr && data.sa <= data.rrr)
        {
            printf("Best move is sa with dP %i\n", data.ra);
            sa(stack);
            data.moves += 1; //move counter
            // move[i] = 1;
        }
            
        else if(data.sb <= data.sa && data.sb <= data.ss && data.sb <=data.rra && data.sb <= data.rrb && data.sb <= data.pa && data.sb <= data.pb && data.sb <= data.rb && data.sb <= data.rr && data.sb <= data.rrr)
        {
            printf("Best move is sb with dP %i\n", data.sa);
            sb(stack);
            data.moves += 1;
            // move[i] = 2;
        }
            
        else if(data.ss <= data.sa && data.ss <= data.sb && data.ss <=data.rra && data.ss <= data.rrb && data.ss <= data.pa && data.ss <= data.pb && data.ss <= data.rb && data.ss <= data.rr && data.ss <= data.rrr)
        {
            printf("Best move is ss with dP %i\n", data.rra);
            ss(stack);
            data.moves += 1;
            // move[i] = 3;
        }

        else if(data.ra <= data.sa && data.ra <= data.ss && data.ra <=data.rra && data.ra <= data.rrb && data.ra <= data.pa && data.ra <= data.pb && data.ra <= data.rb && data.ra <= data.rr && data.ra <= data.rrr)
        {
            printf("Best move is ra with dP %i\n", data.pb);
            ra(stack);
            data.moves += 1;
            // move[i] = 4;
        }

        else if(data.rra <= data.sa && data.rra <= data.ss && data.rra <=data.ra && data.rra <= data.rrb && data.rra <= data.pa && data.rra <= data.pb && data.rra <= data.rb && data.rra <= data.rr && data.rra <= data.rrr)
        {
            printf("Best move is rra with dP %i\n", data.pb);
            rra(stack);
            data.moves += 1;
            // move[i] = 6;
        }

        else if(data.rrb <= data.sa && data.rrb <= data.ss && data.rrb <=data.ra && data.rrb <= data.rra && data.rrb <= data.pa && data.rrb <= data.pb && data.rrb <= data.rb && data.rrb <= data.rr && data.rrb <= data.rrr)
        {
            printf("Best move is rrb with dP %i\n", data.pb);
            rrb(stack);
            data.moves += 1;
            // move[i] = 7;
        }

        else if(data.pa <= data.sa && data.pa <= data.ss && data.pa <=data.ra && data.pa <= data.rra && data.pa <= data.rrb && data.pa <= data.pb && data.pa <= data.rb && data.pa <= data.rr && data.pa <= data.rrr)
        {
            printf("Best move is pa with dP %i\n", data.pb);
            pa(stack);
            data.moves += 1;
            // move[i] = 8;
        }

        else if(data.pb <= data.sa && data.pb <= data.ss && data.pb <=data.ra && data.pb <= data.rra && data.pb <= data.rrb && data.pb <= data.pa && data.pb <= data.rb && data.pb <= data.rr && data.pb <= data.rrr)
        {
            printf("Best move is pb with dP %i\n", data.pb);
            pb(stack);
            data.moves += 1;
            // move[i] = 9;
        }

        else if(data.rb <= data.sa && data.rb <= data.ss && data.rb <=data.ra && data.rb <= data.rra && data.rb <= data.rrb && data.rb <= data.pa && data.rb <= data.pb && data.rb <= data.rr && data.rb <= data.rrr)
        {
            printf("Best move is rb with dP %i\n", data.pb);
            rb(stack);
            data.moves += 1;
            // move[i] = 5;
        }

        else if(data.rr <= data.sa && data.rr <= data.ss && data.rr <=data.ra && data.rr <= data.rra && data.rr <= data.rrb && data.rr <= data.pa && data.rr <= data.pb && data.rr <= data.rb && data.rr <= data.rrr)
        {
            printf("Best move is rr with dP %i\n", data.pb);
            rr(stack);
            data.moves += 1;
            // move[i] = 5;
        }

        else if(data.rrr <= data.sa && data.rrr <= data.ss && data.rrr <=data.ra && data.rrr <= data.rra && data.rrr <= data.rrb && data.rrr <= data.pa && data.rrr <= data.pb && data.rrr <= data.rb && data.rrr <= data.rr)
        {
            printf("Best move is rrr with dP %i\n", data.pb);
            rrr(stack);
            data.moves += 1;
            // move[i] = 5;
        }
        index_calc(stack);
        

        if(data.moves >= move[0])
        {
            printf("exit! moves 1\n");
            break; 
        }
        i++;
    }
    
    while(data.index_b == 0 && data.total_b > 0)
    {
        pa(stack);
        index_calc(stack);
        if(data.moves >= move[0])
        {
            printf("exit! moves 2\n");
            break; 
        }
        i++;
    }
}
