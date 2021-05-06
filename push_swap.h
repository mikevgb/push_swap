/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:36:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/06 16:48:22 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MIN_INT -2147483648
#define MAX_INT 2147483647

# endif

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



/* Calc */

void    dp_calc(int **stack);
void    copy_and_bubble_a(int **stack);
void    copy_and_bubble_b(int **stack);

/* main */

void    print_arr(int **stack);
int     main(int argc, char **argv);
int		alloc(int argc, char ** argv);

/* utils */

// static int	norminette_made_me_do_it(int sign);
int	    ft_atoi(char const *str);
void	check_dupe(int **stack);