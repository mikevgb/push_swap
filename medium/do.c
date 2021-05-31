/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:56:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:36:15 by mvillaes         ###   ########.fr       */
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
	if (stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] \
	< stack[3][1])
		sa(stack, data);
	if (stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] \
	 > stack[3][1])
	{
		sa(stack, data);
		rra(stack, data);
	}
	if (stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] \
	> stack[3][1])
		ra(stack, data);
	if (stack[1][1] < stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] \
	< stack[3][1])
	{
		sa(stack, data);
		ra(stack, data);
	}
	if (stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] \
	> stack[3][1])
		rra(stack, data);
}

void	ft_5(int **stack, t_data *data)
{
	int	i;

	pb(stack, data);
	pb(stack, data);
	ft_3(stack, data);
	i = 4;
	find_small(stack, data);
	while (i >= 4)
	{
		if (stack[1][4] > stack[i][1])
			rra(stack, data);
		if (stack[1][4] < stack[i][1])
		{
			pa(stack, data);
			break ;
		}
		i--;
	}
	pa(stack, data);
}
