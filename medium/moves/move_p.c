/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:23:27 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/05 19:10:39 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

void	pa(int **stack, t_data *data)
{
	int	tmp;
	int	pos;

	tmp = stack[1][4];
	pos = 1;
	data->elements_a += 1;
	while (pos < data->elements_b)
	{
		stack[pos][4] = stack[pos + 1][4];
		pos++;
	}
	pos = data->elements_a;
	data->elements_b -= 1;
	while (pos > 0)
	{
		stack[pos][1] = stack[pos - 1][1];
		pos--;
	}
	stack[1][1] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		ft_putstr("pa\n");
}

/*
**  PB - Take the first element at the top of A and put it at the top of B.
**  Do nothing if A is empty.
*/

void	pb(int **stack, t_data *data)
{
	int	tmp;
	int	pos;

	tmp = stack[1][1];
	pos = 1;
	data->elements_b += 1;
	while (pos < data->elements_a)
	{
		stack[pos][1] = stack[pos + 1][1];
		pos++;
	}
	pos = data->elements_b;
	data->elements_a -= 1;
	while (pos > 0)
	{
		stack[pos][4] = stack[pos - 1][4];
		pos--;
	}
	stack[1][4] = tmp;
	data->moves += 1;
	if (data->save_move_flag == 1)
		ft_putstr("pb\n");
}
