/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:28:37 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/14 21:56:41 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

typedef struct s_data
{
	int		move_s_pos;
	int		save_move_flag;
	int		best_moves;
	int		best_chunk1;
	int		move_cap;
	int		chunk1;
	int		total_elements;
	int		hold_first_pos;
	int		elements_a;
	int		elements_b;
	int		total;
	int		index_a;
	int		index_b;
	int		moves;
}	t_data;

/* alloc */

int		**alloc_stack(t_data *data);
int		**back_up_stack(t_data *data);
void	check_alloc(int **stack, int **back_up);

/* init */

void	init_stack(char **argv, t_data *data, int k);
void	set_loop(t_data *data);
void	init_stack_helper(int **stack, t_data *data);

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
void	ft_3(int **stack, t_data *data);
void	ft_5(int **stack, t_data *data);

/* move 2 top */

void	move_2_top_b(int **stack, t_data *data);
void	mv2tb_helper(int **stack, t_data *data, int i);
void	move_top_a(int **stack, t_data *data);

/* reset */

void	reset_calc(int **stack, t_data *data);
void	reset_calc_b(int **stack, t_data *data);

/* find small */

void	find_small(int **stack, t_data *data);
void	find_small_b(int **stack, t_data *data);

/* hold */

void	hold_first(int **stack, t_data *data);
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

/* main */

int		main(int argc, char **argv);
int		check_in_order(int **stack, t_data *data);
void	array_init(char **argv, int size, int **stack);

/* utils */

int		ft_atoi(char const *str);
void	check_dupe(int **stack, t_data *data);
void	*ft_bzero(void *ft, size_t i);
void	ft_putstr(char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *restrict dst, \
const char *restrict src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t	ft_strlen_array(char **s);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

#endif