/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:05:20 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/30 19:13:04 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_stack(int **stack, int size, char **argv)
{
    int i;

    i = 1;
    while(i < size)
    {
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        stack[i][3] = i;
        i++;
    }

    data.elements_a = size - 1;
	data.elements_b = 0;
}

void    set_loop()
{
    if(data.total_elements >= 500)
    {
        data.move_cap = 11500;
        data.chunk1 = 1;
    }
        
    else if(data.total_elements >= 100)
    {
        data.move_cap = 1100;
        data.chunk1 = 1;
    }
}

void    check_alloc(int **stack, int **back_up)
{
    if (!stack || !back_up)
        printf("calloc failed\n");
}