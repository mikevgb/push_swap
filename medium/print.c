/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:58:29 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:44:31 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_arr(int **stack, t_data *data)
{
	int	i;

	i = 1;
	printf("N@  %i  ix %i  T%i  N@  %i  ix %i\n", data->elements_a, \
	data->index_a, data->total, data->elements_b, data->index_b);
	printf("------------------------------\n");
	while (i <= data->elements_a || i <= data->elements_b)
	{
		printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stack[i][0], stack[i][1], \
		stack[i][2], stack[i][3], stack[i][4], stack[i][5]);
		i++;
	}
	printf("--------- Chunk %i ------------\n", data->chunk1);
	printf("--------- Moves %i ------------\n", data->moves);
}

void	print_loop(t_data *data)
{
	printf("----------------\n");
	printf("total elements %i\n", data->total_elements - 1);
	printf("moves = %i\n", data->moves);
	printf("chunk1 size = %i\n", data->chunk1);
	printf("best chunk1 %i\n", data->best_chunk1);
	printf("best moves %i\n", data->best_moves);
	printf("move cap %i\n", data->move_cap);
}

void	print_moves(char *s_moves, t_data *data)
{
	int	i;

	i = 0;
	while (i <= data->move_s_pos)
	{
		printf("%c\n", s_moves[i]);
		i++;
	}
}
