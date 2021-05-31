/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:13:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:30:49 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  RA - Shift up all elemnts in stack A by 1. The first element becomes
**  the last one.
*/

void	ra(int **stack, t_data *data)
{
	int	pos;
	int	tmp;

	pos = 1;
	tmp = stack[1][1];
	while (pos < data->elements_a && data->elements_a > 1)
	{
		stack[pos][1] = stack[pos + 1][1];
		pos++;
	}
	stack[pos][1] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		printf("ra\n");
}

/*
**  RB - Shift up all elemnts in stack B by 1. The first element becomes
**  the last one.
*/

void	rb(int **stack, t_data *data)
{
	int	pos;
	int	tmp;

	pos = 1;
	tmp = stack[1][4];
	while (pos < data->elements_b && data->elements_b > 1)
	{
		stack[pos][4] = stack[pos + 1][4];
		pos++;
	}
	stack[pos][4] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		printf("rb\n");
}

/*
**  RR - Rotate A and B at the same time.
*/

void	rr(int **stack, t_data *data)
{
	if (data->elements_a > 1 && data->elements_b > 1)
	{
		ra(stack, data);
		rb(stack, data);
		if (data->save_move_flag == 1)
			printf("rr\n");
	}
}
