/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:39:41 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/15 21:07:40 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_loop(int **stack, int **back_up, t_data *data)
{
	data->moves = 333333;
	data->best_chunk1 = 333333;
	data->best_moves = 333333;
	while (data->moves > data->move_cap)
	{
		data->chunk1 += 1;
		data->moves = 0;
		restore_back_up(stack, back_up, data);
		do_a(stack, data);
		do_b(stack, data);
		if (data->moves < data->best_moves)
		{
			data->best_moves = data->moves;
			data->best_chunk1 = data->chunk1;
		}
		if (data->move_cap >= data->best_moves)
		{
			data->move_cap = data->best_moves - 1;
			data->move_s_pos = data->best_moves;
		}
		if (data->chunk1 > 30)
			break ;
	}
	final_loop(stack, back_up, data);
}

void	final_loop(int **stack, int **back_up, t_data *data)
{
	data->moves = 0;
	restore_back_up(stack, back_up, data);
	data->chunk1 = data->best_chunk1;
	data->save_move_flag = 1;
	do_a(stack, data);
	do_b(stack, data);
	ft_free_stack(back_up, data);
}

void	make_order(int **stack, int **back_up, t_data *data)
{
	if (data->total_elements - 1 <= 3)
	{
		data->save_move_flag = 1;
		ft_3(stack, data);
	}
	if (data->total_elements - 1 > 3 && data->total_elements - 1 <= 5)
	{
		data->save_move_flag = 1;
		ft_5(stack, data);
	}
	if (data->total_elements - 1 > 5)
		main_loop(stack, back_up, data);
}

void	loop(int **stack, int **back_up, t_data *data)
{
	check_alloc(stack, back_up);
	save_bup(stack, back_up, data);
	set_loop(data);
	make_order(stack, back_up, data);
	ft_free_stack(stack, data);
}
