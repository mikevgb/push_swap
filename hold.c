/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:26:59 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:49:55 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hold_first(int **stack, t_data *data)
{
	int	i;

	i = 1;
	while (i <= data->elements_a)
	{
		if (stack[i][2] > 0 && stack[i][2] < data->chunk1)
		{
			data->hold_first_pos = stack[i][0];
			break ;
		}
		i++;
	}
}

void	choose_hold(int **stack, t_data *data)
{
	int	hold_1;
	int	i;

	hold_1 = data->hold_first_pos;
	i = 1;
	while (i < hold_1)
	{
		ra(stack, data);
		i++;
	}
}
