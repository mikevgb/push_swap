/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:39:41 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/30 21:04:32 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    main_loop(int **stack, int **back_up)
{
    data.moves = 333333;
    data.best_chunk1 = 333333;
    data.best_moves = 333333;
    while(data.moves > data.move_cap)
    {
        if(data.total_elements >= 5)
            data.chunk1 += 1;
        data.moves = 0;
        restore_back_up(stack, back_up);
        do_a(stack);
        do_b(stack);
        if(data.moves < data.best_moves)
        {
            data.best_moves = data.moves;
            data.best_chunk1 = data.chunk1;
        }
        // print_loop();
        // getchar();
        if (data.move_cap >= data.best_moves)
        {
            data.move_cap = data.best_moves - 1;
            data.move_s_pos = data.best_moves;
        }
        if (data.chunk1 > 30)
            break;
    }
    final_loop(stack, back_up);
}

void    final_loop(int **stack, int **back_up)
{
    data.moves = 0;
    restore_back_up(stack, back_up);
    data.chunk1 = data.best_chunk1;
    data.save_move_flag = 1;
    do_a(stack);
    do_b(stack);
}

void    make_order(int **stack, int **back_up)
{
    if (data.total_elements - 1 <= 3)
        ft_3(stack);
    
    if (data.total_elements - 1 > 3 && data.total_elements - 1 <= 5)
        ft_5(stack);
    
    if(data.total_elements > 5)
        main_loop(stack, back_up);
}

void    loop(int **stack, int **back_up)
{
    check_alloc(stack, back_up);
    save_bup(stack, back_up);
    set_loop();
    make_order(stack, back_up);
    find_small(stack);
    // print_arr(stack);
    free(*stack);
    free(*back_up);
}