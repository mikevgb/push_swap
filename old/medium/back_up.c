/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:08:08 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:33:10 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	save_bup(int **stack, int **back_up, t_data *data)
{
	int	i;

	i = 0;
	while (i < data->total_elements)
	{
		back_up[i][0] = stack[i][0];
		back_up[i][1] = stack[i][1];
		back_up[i][2] = stack[i][2];
		back_up[i][3] = stack[i][3];
		back_up[i][4] = stack[i][4];
		back_up[i][5] = stack[i][5];
		i++;
	}
}

void	restore_back_up(int **stack, int **back_up, t_data *data)
{
	int	i;

	i = 0;
	while (i < data->total_elements)
	{
		stack[i][0] = back_up[i][0];
		stack[i][1] = back_up[i][1];
		stack[i][2] = back_up[i][2];
		stack[i][3] = back_up[i][3];
		stack[i][4] = back_up[i][4];
		stack[i][5] = back_up[i][5];
		i++;
	}
}
