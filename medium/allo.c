/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:16:49 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/05 19:18:20 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**alloc_stack(t_data *data)
{
	int	i;
	int	**stack;

	stack = (int **)calloc(data->total_elements, sizeof(int *));
	i = 0;
	while (i < data->total_elements)
	{
		stack[i] = (int *)calloc(6, sizeof(int));
		i++;
	}
	return (stack);
}

int	**back_up_stack(t_data *data)
{
	int	i;
	int	**back_up;

	back_up = (int **)calloc(data->total_elements, sizeof(int *));
	i = 0;
	while (i < data->total_elements)
	{
		back_up[i] = (int *)calloc(6, sizeof(int));
		i++;
	}
	return (back_up);
}

void	check_alloc(int **stack, int **back_up)
{
	if (!stack || !back_up)
		printf("calloc failed\n");
}
