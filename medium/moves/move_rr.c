/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:14:23 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:31:37 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RRA - Shift down all elemnts in stack A by 1. The last element becomes
**  the first one.
*/

void	rra(int **stack, t_data *data)
{
	int	pos;
	int	tmp;

	pos = data->elements_a;
	tmp = stack[pos][1];
	while (pos > 0 && data->elements_a > 1)
	{
		stack[pos][1] = stack[pos - 1][1];
		pos--;
	}
	stack[1][1] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		printf("rra\n");
}

/*
**  RRB - Shift down all elemnts in stack B by 1. The last element becomes
**  the first one.
*/

void	rrb(int **stack, t_data *data)
{
	int	pos;
	int	tmp;

	pos = data->elements_b;
	tmp = stack[pos][4];
	while (pos > 0 && data->elements_b > 1)
	{
		stack[pos][4] = stack[pos - 1][4];
		pos--;
	}
	stack[1][4] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		printf("rrb\n");
}

/*
**  RRR - RRA and RRB at the same time.
*/

void	rrr(int **stack, t_data *data)
{
	if (data->elements_a > 1 && data->elements_b > 1)
	{
		rra(stack, data);
		rrb(stack, data);
		if (data->save_move_flag == 1)
			printf("rrr\n");
	}
}
