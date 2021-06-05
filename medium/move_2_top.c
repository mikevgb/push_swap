/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_2_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:24:04 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/05 19:32:48 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_2_top_b(int **stack, t_data *data)
{
	int	i;

	i = 1;
	find_small_b(stack, data);
	while (i <= data->elements_b)
	{
		if (stack[i][5] == data->elements_b)
			mv2tb_helper(stack, data, i);
		i++;
	}
	pa(stack, data);
}

void	mv2tb_helper(int **stack, t_data *data, int i)
{
	int	j;

	if ((data->elements_b / 2) >= stack[i][3])
	{
		j = 1;
		while (j < stack[i][3])
		{
			rb(stack, data);
			j++;
		}
	}
	else if ((data->elements_b / 2) < stack[i][3])
	{
		j = 0;
		while (j < data->elements_b - stack[i][3] + 1)
		{
			rrb(stack, data);
			j++;
		}
	}
}

void	move_top_a(int **stack, t_data *data)
{
	int	i;
	int	j;

	i = 1;
	while (i <= data->elements_a)
	{
		if (stack[i][2] == data->elements_a)
		{
			if ((data->elements_a / 2) >= stack[i][0])
			{
				j = 1;
				while (j++ < stack[i][0])
					ra(stack, data);
			}
			else if ((data->elements_a / 2 < stack[i][0]))
			{
				j = 0;
				while (j++ < data->elements_a - stack[i][0] + 1)
					rra(stack, data);
			}
		}
		i++;
	}
}
