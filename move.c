/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/04/28 21:36:49 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    print_arr(int arr_len_a, int stack_a[], int stack_b[])
{
    int num;
    int pos;

    num = 0;
    pos = 1;
    while(stack_a[num] < arr_len_a + 1 && pos < arr_len_a + 1)
    {
        printf("%d*  %i  [P]       %d*  %i  [P]\n", pos, stack_a[num], pos, stack_b[num]);
        pos++;
        num++;
    }
}

/*
**  SA - Swap the first 2 elemnts at the top of the stack a, do nothing
**  if the is only one or no elemnts.
*/

void    sa(int stack_a[])
{
    int tmp;

    tmp = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = tmp;
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack b, do nothing
**  if the is only one or no elemnts.
*/

void    sb(int stack_b[])
{
    int tmp;

    tmp = stack_b[0];
    stack_b[0] = stack_b[1];
    stack_b[1] = tmp;
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int stack_a[], int stack_b[])
{
    sa(stack_a);
    sb(stack_b);
}

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

void    pa(int stack_a[], int stack_b[], int arr_len_a, int arr_len_b)
{
    int tmp;
    int pos;

    pos = 0;
    tmp = stack_b[0];
    while(pos <= arr_len_b)
    {
        stack_b[pos] = stack_b[pos + 1];
        pos++;
    }
    // printf("%i\n", arr_len_b);
    stack_b[arr_len_b - 1] = 9;
    
    pos = arr_len_a;
    while(pos <= arr_len_a)
    {
        stack_b[pos] = stack_b[pos - 1];
        pos--;
    }
    stack_a[0] = tmp;
}

/*
**  RA - Shift up all elemnts in stack a by 1. The first element becomes
**  the last one.
*/

void    ra(int stack_a[], int arr_len_a)
{
    int pos;
    int tmp;

    pos = 0;
    tmp = stack_a[0];
    while(pos <= arr_len_a)
    {
        stack_a[pos] = stack_a[pos + 1];
        pos++;
    }
    stack_a[arr_len_a - 1] = tmp;
}

/*
**  RB - Shift up all elemnts in stack b by 1. The first element becomes
**  the last one.
*/

void    rb(int stack_b[], int arr_len_b)
{
    int pos;
    int tmp;

    pos = 0;
    tmp = stack_b[0];
    while(pos <= arr_len_b)
    {
        stack_b[pos] = stack_b[pos + 1];
        pos++;
    }
    stack_b[arr_len_b - 1] = tmp;
}

/*
**  RR - Rotate A and B at the same time.
*/

void    rr(int stack_a[], int stack_b[], int arr_len_a, int arr_len_b)
{
    ra(stack_a, arr_len_a);
    rb(stack_b, arr_len_b);
}

/*
**  RRA - Shift down all elemnts in stack a by 1. The last element becomes
**  the first one.
*/

void    rra(int stack_a[], int arr_len_a)
{
    int pos;
    int tmp;

    pos = arr_len_a - 1;
    tmp = stack_a[arr_len_a - 1];
    while(pos > 0)
    {
        stack_a[pos] = stack_a[pos - 1];
        pos--;
    }
    stack_a[0] = tmp;
}

/*
**  RRB - Shift down all elemnts in stack b by 1. The last element becomes
**  the first one.
*/

void    rrb(int stack_b[], int arr_len_b)
{
    int pos;
    int tmp;

    pos = arr_len_b - 1;
    tmp = stack_b[arr_len_b - 1];
    while(pos > 0)
    {
        stack_b[pos] = stack_b[pos - 1];
        pos--;
    }
    stack_b[0] = tmp;
}

/*
**  RRR - rra and rrb at the same time.
*/

void    rrr(int stack_a[], int stack_b[], int arr_len_a, int arr_len_b)
{
    rra(stack_a, arr_len_a);
    rrb(stack_b, arr_len_b);
}
// void    increase_stack_a(int stack_a, int arr_len_a)
// {
//     // int new_stack;

//     stack_a = realloc(stack_a, 3 * sizeof(int));
//     arr_len_a = sizeof(stack_a)/sizeof(stack_a[0]);
//     // stack_a = new_stack;
// }



int     main()
{
    int stack_a[] = {1, 2, 3, 4, 5};
    int stack_b[] = {5, 7, 1, 3, 2};
    int arr_len_a;
    int arr_len_b;

    arr_len_a = sizeof(stack_a)/sizeof(stack_a[0]);
    arr_len_b = sizeof(stack_b)/sizeof(stack_b[0]);

    printf(">-arr_a_size = %i\n", arr_len_a);
    print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-sa-<\n");
    // sa(stack_a);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-sb-<\n");
    // sb(stack_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-ss-<\n");
    // ss(stack_a, stack_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-ra-<\n");
    // ra(stack_a, arr_len_a);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-rb-<\n");
    // rb(stack_b, arr_len_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-rr-<\n");
    // rr(stack_a, stack_b, arr_len_a, arr_len_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-rra-<\n");
    // rra(stack_a, arr_len_a);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-rrb-<\n");
    // rra(stack_b, arr_len_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    // printf(">-rr-<\n");
    // rrr(stack_a, stack_b, arr_len_a, arr_len_b);
    // print_arr(arr_len_a, stack_a, stack_b);

    printf(">-pa-<\n");
    pa(stack_a, stack_b, arr_len_a, arr_len_b);
    print_arr(arr_len_a, stack_a, stack_b);

    // system("leaks push_swap");
    return(0);
}

