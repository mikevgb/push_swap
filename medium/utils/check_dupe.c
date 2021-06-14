/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:46:20 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/14 22:00:19 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_dupe(int **stack, t_data *data)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < data->elements_a)
	{
		j = i + 1;
		while (j < data->elements_a + 1)
		{
			if (stack[i][1] == stack[j][1])
			{
				printf("Dupe num\n");
				exit (1);
			}
			j++;
		}
		i++;
	}
}
