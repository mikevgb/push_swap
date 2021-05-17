/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 22:30:16 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    print_arr(int **stack)
{
    int i;

    i = 1;
    printf("N@  %i  ix %i  T%i  N@  %i  ix %i\n", data.elements_a, data.index_a, data.total, data.elements_b, data.index_b);
    printf("------------------------------\n");
    while(i <= data.elements_a || i <= data.elements_b)
    { 
        printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stack[i][0], stack[i][1], stack[i][2], stack[i][3], stack[i][4], stack[i][5]);
        i++;
    }
    printf("----------Moves %i-------------\n", data.moves);
}

int     main(int argc, char **argv)
{
    int size;
    int **stack;
    int i;
    int **move;

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
    
    //allocate for moves storage
    // move = NULL;
    // if (data.elements_a <= MAX_3)
    //     move = (int*)calloc(MAX_3, sizeof(int));
    //     data.max_moves = MAX_3;
    // if (data.elements_a <= MAX_5)
    //     move = (int*)calloc(MAX_5, sizeof(int));
    //     data.max_moves = MAX_5;
    // if (data.elements_a <= MAX_100)
    //     move = (int*)calloc(MAX_100, sizeof(int));
    //     data.max_moves = MAX_100;
    // if (data.elements_a <= MAX_500)

    //array for saving move values
    move = (int**)calloc(12, sizeof(int*));

    i = 0;
    while(i < 12)
    {
        move[i] = (int*)calloc(2, sizeof(int));
        i++;
    }
    
    //set initial array move values to 333333
    i = 0;
    while(i < 12)
    {
        move[i][0] = 333333;
        move[i][1] = 333333;
        i++;
    }
    
    data.max_moves = MAX_500;

    // Transform argc in int
    // and add pos values to 2d array
    
    i = 1;
    int x = -3; //
    while(i < size)
    {
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        stack[i][2] = 1;
        // stack[i][4] = x; //REMOVE!! FOR TESTING ONLY
        stack[i][5] = 1;
        stack[i][3] = i;
        i++;
        x++; //
    }

    //Give value to the number of elements

    data.elements_a = size - 1;
	data.elements_b = 0; //FOR TESTING ONLY! SET TO 0
    // allok(argc, argv);
    check_dupe(stack);
    // pb(stack);
    // pb(stack);
    // pb(stack);
    // pa(stack);
    // index_calc(stack);
    // index_calculator_a(stack);
    // index_calculator_b(stack);
    dp_calc(stack, move);

    // pb(stack);
    // pb(stack);
    // pa(stack);

    print_arr(stack);
    // print_moves(move);


    free(*stack);
	return(0);
}

void    print_moves(int *move)
{
    int i = 1;
    while(move[i] != '\0')
    {
        printf("%i\n", move[i]);
        i++;
    }
}