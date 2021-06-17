/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:56:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/15 21:08:54 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_a(int **stack, t_data *data)
{
	int	i;

	i = 1;
	while (i < data->total_elements)
	{
		find_small(stack, data);
		hold_first(stack, data);
		choose_hold(stack, data);
		pb(stack, data);
		i++;
	}
}

void	do_b(int **stack, t_data *data)
{
	int	i;

	i = 1;
	while (i < data->total_elements)
	{
		move_2_top_b(stack, data);
		find_small_b(stack, data);
		i++;
	}
}

void	ft_3(int **stack, t_data *data)
{
	if (data->elements_a > 2)
	{
		if (stack[2][1] > stack[3][1])
		{
			rra(stack, data);
			sa(stack, data);
		}
		if (stack[1][1] > stack[3][1])
			ra(stack, data);
	}
	if (stack[1][1] > stack[2][1])
		sa(stack, data);
}

void	ft_5(int **stack, t_data *data)
{
	find_small(stack, data);
	move_top_a(stack, data);
	pb(stack, data);
	find_small(stack, data);
	move_top_a(stack, data);
	pb(stack, data);
	ft_3(stack, data);
	pa(stack, data);
	ra(stack, data);
	pa(stack, data);
	ra(stack, data);
}
