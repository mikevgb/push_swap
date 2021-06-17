/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:05:20 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/16 20:53:07 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	***parser(char **argv, t_data *data)
{
	int		i;
	int		j;
	char	***ptr;

	ptr = malloc(sizeof(char **) * (ft_strlen_array(&argv[1]) + 1));
	data->total_elements = 0;
	i = 0;
	while (argv[i + 1] != NULL)
	{
		j = 0;
		ptr[i] = ft_split(argv[i + 1], ' ');
		while (ptr[i][j] != NULL)
		{
			data->total_elements++;
			j++;
		}
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

void	init_stack_helper(int **stack, t_data *data)
{
	int	**back_up;

	back_up = back_up_stack(data);
	data->elements_a = data->total_elements - 1;
	data->elements_b = 0;
	check_dupe(stack, data);
	if (check_in_order(stack, data) == 1)
		loop(stack, back_up, data);
}

void	init_stack(char **argv, t_data *data, int k)
{
	int		i;
	int		j;
	char	***ptr;
	int		**stack;

	ptr = parser(argv, data);
	stack = alloc_stack(data);
	data->total_elements += 1;
	i = 0;
	while (ptr[i] != NULL)
	{
		j = 0;
		while (ptr[i][j] != NULL)
		{
			stack[k][1] = ft_atoi(ptr[i][j]);
			stack[k][0] = k;
			stack[k][3] = k;
			k++;
			j++;
		}
		i++;
	}
	ft_free_parser(ptr);
	init_stack_helper(stack, data);
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
