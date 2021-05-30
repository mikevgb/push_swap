/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/30 20:55:04 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     main(int argc, char **argv)
{
    int size;
    int **stack;
    int **back_up;
    int i;

    size = argc;
    data.total_elements = size;
    stack = (int**)calloc(size, sizeof(int*));
    i = 0;
    while(i < size)
    {
        stack[i] = (int*)calloc(6, sizeof(int));
        i++;
    }
    init_stack(stack, size, argv);
    back_up = (int **)calloc(data.total_elements, sizeof(int*));
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i] = (int*)calloc(6, sizeof(int));
        i++;
    }
    loop(stack, back_up);
	return(0);
}
