/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:36:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/03 19:28:47 by mvillaes         ###   ########.fr       */
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
void    rra(int **stacks);
void    rrb(int **stacks);
void    rrr(int **stacks);
void    pa(int **stacks);
void    pb(int **stacks);



/* Calc */

void     dp_calc(int *stack_a, int *stack_b, int **calc_a, int **calc_b);

/* main */
// void    print_arr(int *stack_a, int *stack_b, int **calc_a, int **calc_b);
void    print_arr(int **stacks);
int     main(int argc, char **argv);
int		alloc(int argc, char ** argv);