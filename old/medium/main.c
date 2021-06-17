/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/15 20:48:20 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		k;

	k = 1;
	ft_bzero(&data, sizeof(t_data));
	data.total_elements = argc;
	init_stack(argv, &data, k);
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
