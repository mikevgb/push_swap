/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:36:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/02 20:09:59 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

# endif

/* movement */
void    ra(int **stacks);
void    rb(int **stacks);
void    rr(int **stacks);
void    sa(int **stacks);
void    sb(int **stacks);
void    ss(int **stacks);
void    rra(int *stack_a);
void    rrb(int *stack_b);
void    rrr(int *stack_a, int *stack_b);
void    pa(int *stack_a, int *stack_b);
void    pb(int *stack_a, int *stack_b);



/* Calc */

void     dp_calc(int *stack_a, int *stack_b, int **calc_a, int **calc_b);

/* main */
// void    print_arr(int *stack_a, int *stack_b, int **calc_a, int **calc_b);
void    print_arr(int **stacks);
int     main(int argc, char **argv);
int		alloc(int argc, char ** argv);