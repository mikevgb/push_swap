/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:12:12 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:32:35 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  SA - Swap the first 2 elemnts at the top of the stack A, do nothing
**  if the is only one or no elemnts.
*/

void	sa(int **stack, t_data *data)
{
	int	tmp;

	tmp = stack[1][1];
	if (data->elements_a > 1)
	{
		stack[1][1] = stack[2][1];
		stack[2][1] = tmp;
		data->moves += 1;
		if (data->save_move_flag == 1)
			printf("sa\n");
	}
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack B, do nothing
**  if the is only one or no elemnts.
*/

void	sb(int **stack, t_data *data)
{
	int	tmp;

	tmp = stack[1][4];
	if (data->elements_b > 1)
	{
		stack[1][4] = stack[2][4];
		stack[2][4] = tmp;
		data->moves += 1;
		if (data->save_move_flag == 1)
			printf("sb\n");
	}
}

/*
**  SS - Swap A and B at the same time.
*/

void	ss(int **stack, t_data *data)
{
	if (data->elements_a > 1 && data->elements_b)
	{
		sa(stack, data);
		sb(stack, data);
		if (data->save_move_flag == 1)
			printf("ss\n");
	}
}
