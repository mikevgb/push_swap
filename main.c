/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/05 21:31:27 by mvillaes         ###   ########.fr       */
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
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        stack[i][3] = i;
        i++;
    }

    //Check that numbers dont exceed max and min int
    i = 1;
    while(i < size)
    {
        int len_argv;
        char *tmp;

        tmp = argv[i];
        len_argv = strlen(argv[i]);
        if (len_argv >= 10)
        {
            if(stack[i][1] == -1 || stack[i][1] == 0)
            {
                printf("Error: num is too big\n");
                exit(1);
            }
            else
                i++;
        }  
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
