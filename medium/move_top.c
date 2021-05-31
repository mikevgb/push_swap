/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:25:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:42:35 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_top(int **stack, t_data *data)
{
	while (data->elements_a != 0)
	{
		while (stack[1][2] != data->elements_a)
		{
			ra(stack, data);
			find_small(stack, data);
		}
		if (stack[1][2] == data->elements_a)
		{
			pb(stack, data);
			find_small(stack, data);
		}
	}
}

void	move_top_b(int **stack, t_data *data)
{
	if (data->elements_b != 0)
	{
		while (stack[1][5] != 1)
		{
			rb(stack, data);
			find_small_b(stack, data);
		}
	}
}
