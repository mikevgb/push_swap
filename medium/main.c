/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/29 22:50:50 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     main(int argc, char **argv)
{
    int size;
    int **stack;
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
    
    //set initial stack

    i = 1;
    while(i < size)
    {
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        stack[i][3] = i;
        i++;
    }

    //Give value to the number of elements

    data.elements_a = size - 1;
	data.elements_b = 0; //FOR TESTING ONLY! SET TO 0

    // back up array
    int **back_up;

    back_up = (int **)calloc(data.total_elements, sizeof(int*));
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i] = (int*)calloc(6, sizeof(int));
        i++;
    }

    //Callock check success

    if (!stack || !back_up)
    {
        printf("calloc failed\n");
        return(0);
    }

    save_bup(stack, back_up);

    // set values depending on size of stack

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

    // start ordering depending of the number of elements passed

    make_order(stack, back_up);
    find_small(stack);
    print_arr(stack);
    free(*stack);
    free(*back_up);
	return(0);
}
