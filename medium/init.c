/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:05:20 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/05 20:01:42 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(int **stack, char **argv, t_data *data)
{
	int	i;

	i = 1;
	while (i < data->total_elements)
	{
		stack[i][1] = ft_atoi(argv[i]);
		stack[i][0] = i;
		stack[i][3] = i;
		i++;
	}
	data->elements_a = data->total_elements - 1;
	data->elements_b = 0;
}

void	set_loop(t_data *data)
{
	if (data->total_elements >= 500)
	{
		data->move_cap = 11500;
		data->chunk1 = 1;
	}
	else if (data->total_elements >= 100)
	{
		data->move_cap = 1100;
		data->chunk1 = 1;
	}
}

int		parse_input(const char *string)
{
	char const *copy = strdup(string);
}