/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/05 19:38:26 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		**stack;
	int		**back_up;

	ft_bzero(&data, sizeof(t_data));
	data.total_elements = argc;
	stack = alloc_stack(&data);
	init_stack(stack, argv, &data);
	back_up = back_up_stack(&data);
	check_dupe(stack, &data);
	if (check_in_order(stack, &data) == 1)
		loop(stack, back_up, &data);
	return (0);
}

int	check_in_order(int **stack, t_data *data)
{
	int	i;
	int	j;

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
