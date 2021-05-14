/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:36:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/14 21:57:07 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_3 2
#define MAX_5 12
#define MAX_100 700
#define MAX_500 5500

# endif

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head;
/* movement */

void    ra(int **stack);
void    rb(int **stack);
void    rr(int **stack);
void    sa(int **stack);
void    sb(int **stack);
void    ss(int **stack);
void    rra(int **stack);
void    rrb(int **stack);
void    rrr(int **stack);
void    pa(int **stack);
void    pb(int **stack);

/* calc */

void    dp_calc(int **stack, int *move);
void    move_compare(int **stack, int *move);
void    sum_dp(int **stack);

/* index calc a */

void    index_calculator_a(int **stack);
void    pos_calculator_a(int **stack);
void    sum_move_a(int **stack);
void    calc_moves_a(int **stack);
void    ft_abs_a(int **stack);
void    reset_index_calc_a(int **stack);

/* index calc b */

void    index_calculator_b(int **stack);
void    pos_calculator_b(int **stack);
void    sum_move_b(int **stack);
void    calc_moves_b(int **stack);
void    ft_abs_b(int **stack);
void    reset_index_calc_b(int **stack);

/* main */

void    print_arr(int **stack);
int     main(int argc, char **argv);
int 	**allok(int argc, char **argv);
void    array_init(char **argv, int size, int **stack);

/* utils */

int	    ft_atoi(char const *str);
void	check_dupe(int **stack);

void    print_moves(int *move);