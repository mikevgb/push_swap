/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resets.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:22:33 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:45:01 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_calc(int **stack, t_data *data)
{
	int	i;

	i = 1;
	while (i <= data->elements_a)
	{
		stack[i][2] = 1;
		i++;
	}
}

void	reset_calc_b(int **stack, t_data *data)
{
	int	i;

	i = 1;
	while (i <= data->elements_b)
	{
		stack[i][5] = 1;
		i++;
	}
}
