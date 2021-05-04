/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/04 18:00:20 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    print_arr(int **stack)
{
    int i;

    i = 1;
    printf("N@  %i  dP          N@  %i  dP\n", stack[0][0], stack[0][1]);
    printf("------------------------------\n");
    while(i <= stack[0][0] || i <= stack[0][1])
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

    if (stack == '\0')
        printf("calloc failed\n");

    //Transform argc in int
    //and add pos values to 2d array

    i = 1;
    while(i < size)
    {
        stack[i][1] = atoi(argv[i]);
        stack[i][0] = i;
        stack[i][3] = i;
        i++;
    }

    //Give value to the number of elements

    stack[0][0] = size - 1;
	stack[0][1] = 0;
    // alloc(argc, argv);

    printf(">-arr size = %i\n", stack[0][0]);
    dp_calc(stack);
    print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("pa");
    // pa(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);
    // printf("ra");
    // ra(stack);
    // print_arr(stack);
    // printf("rb");
    // rb(stack);
    // print_arr(stack);
    // printf("rr");
    // rr(stack);
    // print_arr(stack);
    // printf("sa");
    // sa(stack);
    // print_arr(stack);
    // printf("sb");
    // sb(stack);
    // print_arr(stack);
    // printf("ss");
    // ss(stack);
    // print_arr(stack);
    // printf("rra");
    // rra(stack);
    // print_arr(stack);
    // printf("rrb");
    // rrb(stack);
    // print_arr(stack);
    // printf("rrr");
    // rrr(stack);
    // print_arr(stack);
    // printf("pa");
    // pa(stack);
    // print_arr(stack);
    // printf("pb");
    // pb(stack);
    // print_arr(stack);

    
    free(*stack);
    // system("leaks push_swap");
	return(0);
}

// void    print_arr(int *stack_a, int *stack_b, int **calc_a, int **calc_b)
// {
//     int i;

//     i = 1;
//     printf("N@  %i  dP         N@  %i  dP\n", stack_a[0], stack_b[0]);
//     printf("------------------------------\n");
//     while(i <= stack_a[0])
//     { 
//         printf("%i*  %i  [%i]       %i*  %i  [%i]\n", calc_a[0][i], stack_a[i], calc_a[i][0], calc_b[0][i], stack_b[i], calc_b[i][0]);
//         i++;
//     }
//     printf("------------------------------\n");
// }

/*
**  Main: We declare two arrays (stack A and B) and are initialize with calloc,
**  for security we check that calloc has not failed.
**  After this we use atoi to transform the chars passed in argc to int's.
**  Once we have the values stored in the array, we use pos 0 as a element counter,
**  this is usefull because we wont modify the size of the array but we need to know
**  what values are used to work with.
*/

// int     main(int argc, char **argv)
// {
//     int size;
//     int *stack_a;
//     int *stack_b;
//     int **calc_a;
//     int **calc_b;
//     int i;

//     size = argc;
//     stack_a = (int*)calloc(size, sizeof(int));
//     stack_b = (int*)calloc(size, sizeof(int));
//     calc_a = (int**)calloc(size, sizeof(int*));
//     calc_b = (int**)calloc(size, sizeof(int*));

//     i = 0;
//     while(i < size)
//     {
//         calc_a[i] = (int*)calloc(size, sizeof(int));
//         calc_b[i] = (int*)calloc(size, sizeof(int));
//         i++;
//     }

//     //Callock check success

//     if ((stack_a || stack_b || calc_a || calc_b) == '\0')
//         printf("calloc failed\n");

//     //Transform argc in int
//     //and add pos values to 2d array

//     i = 1;
//     while(i < size)
//     {
//         stack_a[i] = atoi(argv[i]);
//         calc_a[0][i] = i;
//         calc_b[0][i] = i;
//         i++;
//     }

//     //Give value to the number of elements

//     stack_a[0] = size - 1;
//     stack_b[0] = 0;

//     dp_calc(stack_a, stack_b, calc_a, calc_b);

//     printf(">-arr_a_size = %i\n", stack_a[0]);
//     printf(">-arr_b_size = %i\n", stack_b[0]);
//     print_arr(stack_a, stack_b, calc_a, calc_b);

//     // printf(">-sa-<\n");
//     // sa(stack_a);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-sb-<\n");
//     // sb(stack_b);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-ss-<\n");
//     // ss(stack_a, stack_b);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-ra-<\n");
//     // ra(stack_a);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-rb-<\n");
//     // rb(stack_b);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-rr-<\n");
//     // rr(stack_a, stack_b, size);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-rra-<\n");
//     // rra(stack_a);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-rrb-<\n");
//     // rra(stack_b);
//     // print_arr(size, stack_a, stack_b);

//     // printf(">-rr-<\n");
//     // rrr(stack_a, stack_b, size);
//     // print_arr(size, stack_a, stack_b);


//     // printf(">-arr_a_size = %i\n", stack_a[0]);
//     // printf(">-arr_b_size = %i\n", stack_b[0]);
//     // printf(">-pb-<\n");
//     // pb(stack_a, stack_b);
//     // print_arr(size, stack_a, stack_b);
//     // printf(">-arr_a_size = %i\n", stack_a[0]);
//     // printf(">-arr_b_size = %i\n", stack_b[0]);

//     // printf(">-pb-<\n");
//     // pb(stack_a, stack_b);
//     // print_arr(stack_a, stack_b);
//     // printf(">-pb-<\n");
//     // pb(stack_a, stack_b);
//     // print_arr(stack_a, stack_b);
//     // printf(">-pa-<\n");
//     // pa(stack_a, stack_b);
//     // print_arr(stack_a, stack_b);
//     // printf(">-pa-<\n");
//     // pa(stack_a, stack_b);
//     // print_arr(stack_a, stack_b);

//     // printf(">-arr_b_size = %i\n", stack_b[0]);

//     // printf(">-arr_a_size = %i\n", size);
//     // printf(">-arr_b_size = %i\n", size_b);
//     // printf(">-pa-<\n");
//     // pb(stack_a, stack_b, size, size_b);
//     // print_arr(size, stack_a, stack_b);

//     // system("leaks push_swap");


//     //free
//     // i = 0;
//     // while(i < size)
//     // {
//     //     free(stack_a);
//     //     free(stack_b);
//     //     free(calc_a[i]);
//     //     free(calc_b[i]);
//     //     free(calc_a);
//     //     free(calc_b);
//     //     i++;
//     // }
//     return(0);
// }

