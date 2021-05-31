/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:28:37 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/31 19:47:15 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

# define MAX_3 2
# define MAX_5 12
# define MAX_100 700
# define MAX_500 5500

typedef struct s_data
{
	int		move_s_pos;
	int		save_move_flag;
	int		best_moves;
	int		best_chunk1;
	int		best_chunk2;
	char	valid_moves;
	int		move_cap;
	int		increase;
	int		chunk1;
	int		small_b;
	int		total_elements;
	int		hold_second_pos;
	int		hold_first_pos;
	int		elements_a;
	int		elements_b;
	int		total;
	int		index_a;
	int		index_b;
	int		moves;
	int		max_moves;
	int		ra;
	int		rb;
	int		rr;
	int		sa;
	int		sb;
	int		ss;
	int		rra;
	int		rrb;
	int		rrr;
	int		pa;
	int		pb;
}	t_data;

/* init */

void	init_stack(int **stack, int size, char **argv, t_data *data);
void	set_loop(void);
void	check_alloc(int **stack, int **back_up);

/* loop */

void	main_loop(int **stack, int **back_up, t_data *data);
void	final_loop(int **stack, int **back_up, t_data *data);
void	make_order(int **stack, int **back_up, t_data *data);
void	loop(int **stack, int **back_up, t_data *data);

/* back_up.c */

void	save_bup(int **stack, int **back_up, t_data *data);
void	restore_back_up(int **stack, int **back_up, t_data *data);

/* print.c */

void	print_arr(int **stack, t_data *data);
void	print_loop(t_data *data);
void	print_moves(char *s_moves, t_data *data);

/* do.c */

void	do_a(int **stack, t_data *data);
void	do_b(int **stacks, t_data *data);

void	move_store(char str);

void	ft_3(int **stack, t_data *data);

void	ft_5(int **stack, t_data *data);

/* chunk tuning */
void	chunk_tuner(void);
void	back_up_array(int **stack);

void	move_2_top_b(int **stack, t_data *data);

/* reset */

void	reset_calc(int **stack, t_data *data);
void	reset_calc_b(int **stack, t_data *data);

/* find small */

void	find_small(int **stack, t_data *data);
void	find_small_b(int **stack, t_data *data);

/* move_top */

void	move_top(int **stack, t_data *data);
void	move_top_b(int **stack, t_data *data);

/* hold */

void	hold_first(int **stack, t_data *data);
void	hold_second(int **stack, t_data *data);
void	choose_hold(int **stack, t_data *data);

/* movement */

void	ra(int **stack, t_data *data);
void	rb(int **stack, t_data *data);
void	rr(int **stack, t_data *data);
void	sa(int **stack, t_data *data);
void	sb(int **stack, t_data *data);
void	ss(int **stack, t_data *data);
void	rra(int **stack, t_data *data);
void	rrb(int **stack, t_data *data);
void	rrr(int **stack, t_data *data);
void	pa(int **stack, t_data *data);
void	pb(int **stack, t_data *data);

/* calc */

void	dp_calc(int **stack, int **move);
void	move_compare(int **stack, int **move);
void	sum_dp(void);
void	index_calc(int **stack);
void	compare_a(int **stack, int **move);
void	compare_b(int **stack, int **move);
void	compare_double(int **stack, int **move);
void	choose_less(int **move);
void	reset_move(int **move);

/* index calc a */

void	index_calculator_a(int **stack);
void	pos_calculator_a(int **stack);
void	sum_move_a(int **stack);
void	calc_moves_a(int **stack);
void	ft_abs_a(int **stack);
void	reset_index_calc_a(int **stack);

/* index calc b */

void	index_calculator_b(int **stack);
void	pos_calculator_b(int **stack);
void	sum_move_b(int **stack);
void	calc_moves_b(int **stack);
void	ft_abs_b(int **stack);
void	reset_index_calc_b(int **stack);

/* main */

int		main(int argc, char **argv);
int		**allok(int argc, char **argv);
void	array_init(char **argv, int size, int **stack);

/* utils */

int		ft_atoi(char const *str);
void	check_dupe(int **stack, t_data *data);

#endif