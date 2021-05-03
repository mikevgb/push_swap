/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/02 21:00:45 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    print_arr(int **stacks)
{
    int i;

    i = 1;
    printf("N@  %i  dP          N@  %i  dP\n", stacks[0][0], stacks[0][1]);
    printf("------------------------------\n");
    while(i <= stacks[0][0] || i <= stacks[0][1])
    { 
        printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stacks[i][0], stacks[i][1], stacks[i][2], stacks[i][3], stacks[i][4], stacks[i][5]);
        i++;
    }
    printf("------------------------------\n");
}

int     main(int argc, char **argv)
{
//     int size;
//     int **stacks;
//     int i;

//     size = argc;
//     stacks = (int**)calloc(size, sizeof(int*));

//     i = 0;
//     while(i < size)
//     {
//         stacks[i] = (int*)calloc(6, sizeof(int));
//         i++;
//     }

//     //Callock check success

//     if (stacks == '\0')
//         printf("calloc failed\n");

//     //Transform argc in int
//     //and add pos values to 2d array

//    i = 1;
//     while(i < size)
//     {
//         stacks[i][1] = atoi(argv[i]);
//         stacks[i][0] = i;
//         stacks[i][3] = i;
//         i++;
//     }

//     //Give value to the number of elements

//     stacks[0][0] = size - 1;
// 	stacks[0][1] = 0;
    alloc(argc, argv);

    printf(">-arr size = %i\n", stacks[0][0]);
    print_arr(stacks);
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

