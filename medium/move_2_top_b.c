/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_2_top_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:24:04 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:50:22 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_2_top_b(int **stack, t_data *data)
{
	int	i;
	int	j;

	i = 1;
	find_small_b(stack, data);
	while (i <= data->elements_b)
	{
		if (stack[i][5] == data->elements_b)
		{
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
		i++;
	}
	pa(stack, data);
}
