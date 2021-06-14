/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:16:49 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/12 20:06:54 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**alloc_stack(t_data *data)
{
	int	i;
	int	**stack;

	stack = (int **)ft_calloc(data->total_elements + 1, sizeof(int *));
	i = 0;
	while (i < data->total_elements + 1)
	{
		stack[i] = (int *)ft_calloc(6, sizeof(int));
		i++;
	}
	return (stack);
}

int	**back_up_stack(t_data *data)
{
	int	i;
	int	**back_up;

	back_up = (int **)ft_calloc(data->total_elements + 1, sizeof(int *));
	i = 0;
	while (i < data->total_elements + 1)
	{
		back_up[i] = (int *)ft_calloc(6, sizeof(int));
		i++;
	}
	return (back_up);
}

void	check_alloc(int **stack, int **back_up)
{
	if (!stack || !back_up)
		printf("calloc failed\n");
}
