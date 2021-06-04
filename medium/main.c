/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/04 21:15:51 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		size;
	int		**stack;
	int		**back_up;
	int		i;

	ft_bzero(&data, sizeof(t_data));
	size = argc;	
	data.total_elements = size;
	stack = (int **)calloc(size, sizeof(int *));
	i = 0;
	while (i < size)
	{
		stack[i] = (int *)calloc(6, sizeof(int));
		i++;
	}
	init_stack(stack, size, argv, &data);
	back_up = (int **)calloc(data.total_elements, sizeof(int *));
	i = 0;
	while (i < data.total_elements)
	{
		back_up[i] = (int *)calloc(6, sizeof(int));
		i++;
	}
	check_dupe(stack, &data);
	if (check_in_order(stack, &data) == 1)
		loop(stack, back_up, &data);
	print_arr(stack, &data);
	return (0);
}

int	check_in_order(int **stack, t_data *data)
{
	int i;
	int j;

	i = 1;
	j = 2;
	while (i <= data->elements_a && j <= data->elements_a)
	{
		if (stack[i][1] > stack[j][1])
			return (1);
		if (i == data->elements_a)
			return (0);
		i++;
		j++;
	}
	return (0);
}