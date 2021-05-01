/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/01 20:11:46 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_arr(int size_a, int stack_a[], int stack_b[])
{
    int num;
    int pos;

    num = 1;
    pos = 1;
    printf("N@  %i             N@  %i     \n", stack_a[0], stack_b[0]);
    while(pos < size_a)
    {
        
        printf("%d*  %i  [dP]       %d*  %i  [dP]\n", pos, stack_a[num], pos, stack_b[num]);
        pos++;
        num++;
    }
}

int     main(int argc, char **argv)
{
    int size_a;
    int size_b;
    int *stack_a;
    int *stack_b;
    int i;
    int j;

    // size_a = argc - 1;
    size_a = argc;
    size_b = 0;
    stack_a = (int*)calloc(size_a, sizeof(int));
    stack_b = (int*)calloc(size_a, sizeof(int));
    

    if ((stack_a || stack_b) == '\0')
        printf("malloc failed\n");

    i = 1;
    j = 1;
    while(i < size_a)
    {
        stack_a[i] = atoi(argv[j]);
        i++;
        j++;
    }

    stack_a[0] = size_a - 1;
    stack_b[0] = size_b;

    // int stack_a[] = {1, 2, 3, 4, 5};
    // int stack_b[] = {5, 7, 1, 3, 2};
    // int size_a;
    // int size_a;

    // size_a = size_aof(stack_a)/size_aof(stack_a[0]);
    // size_a = size_aof(stack_b)/size_aof(stack_b[0]);

    printf(">-arr_a_size = %i\n", size_a);
    printf(">-arr_b_size = %i\n", size_b);
    print_arr(size_a, stack_a, stack_b);

    // printf(">-sa-<\n");
    // sa(stack_a);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-sb-<\n");
    // sb(stack_b);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-ss-<\n");
    // ss(stack_a, stack_b);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-ra-<\n");
    // ra(stack_a);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-rb-<\n");
    // rb(stack_b);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-rr-<\n");
    // rr(stack_a, stack_b, size_a);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-rra-<\n");
    // rra(stack_a);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-rrb-<\n");
    // rra(stack_b);
    // print_arr(size_a, stack_a, stack_b);

    // printf(">-rr-<\n");
    // rrr(stack_a, stack_b, size_a);
    // print_arr(size_a, stack_a, stack_b);


    // printf(">-arr_a_size = %i\n", stack_a[0]);
    // printf(">-arr_b_size = %i\n", stack_b[0]);
    // printf(">-pb-<\n");
    // pb(stack_a, stack_b);
    // print_arr(size_a, stack_a, stack_b);
    // printf(">-arr_a_size = %i\n", stack_a[0]);
    // printf(">-arr_b_size = %i\n", stack_b[0]);

    printf(">-pb-<\n");
    pb(stack_a, stack_b);
    print_arr(size_a, stack_a, stack_b);
    printf(">-pb-<\n");
    pb(stack_a, stack_b);
    print_arr(size_a, stack_a, stack_b);
    printf(">-pa-<\n");
    pa(stack_a, stack_b);
    print_arr(size_a, stack_a, stack_b);
    printf(">-pa-<\n");
    pa(stack_a, stack_b);
    print_arr(size_a, stack_a, stack_b);

    // printf(">-arr_b_size = %i\n", stack_b[0]);

    // printf(">-arr_a_size = %i\n", size_a);
    // printf(">-arr_b_size = %i\n", size_b);
    // printf(">-pa-<\n");
    // pb(stack_a, stack_b, size_a, size_b);
    // print_arr(size_a, stack_a, stack_b);

    // system("leaks push_swap");
    return(0);
}

