/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/10 21:49:46 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    print_arr(int **stack)
{
    int i;

    i = 1;
    printf("N@  %i  dP %i  T%i  N@  %i  dP %i\n", stack[0][0], stack[0][2], stack[0][1], stack[0][3], stack[0][5]);
    printf("------------------------------\n");
    while(i <= stack[0][0] || i <= stack[0][3])
    { 
        printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stack[i][0], stack[i][1], stack[i][2], stack[i][3], stack[i][4], stack[i][5]);
        i++;
    }
    printf("------------------------------\n");
}

int     main(int argc, char **argv)
{
    int size;
    int **stack;
    int i;

    size = argc;
    stack = (int**)calloc(size, sizeof(int*));

    i = 0;
    while(i < size)
    {
        stack[i] = (int*)calloc(6, sizeof(int));
        i++;
    }
    
    //Callock check success

    if (!stack)
    {
        printf("calloc failed\n");
        return(0);
    }

    // Transform argc in int
    // and add pos values to 2d array
    
    i = 1;
    while(i < size)
    {
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        stack[i][2] = 1;
        // stack[i][4] = i; //REMOVE!! FOR TESTING ONLY
        stack[i][5] = 1;
        stack[i][3] = i;
        i++;
    }

    //Give value to the number of elements

    stack[0][0] = size - 1;
	stack[0][3] = 0; //FOR TESTING ONLY! SET TO 0
    // allok(argc, argv);
    check_dupe(stack);
    dp_calc(stack);
    print_arr(stack);

    free(*stack);
	return(0);
}
