/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/04/27 21:44:13 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    print_arr(int arr_len1, int stack_a[], int stack_b[])
{
    int num;
    int pos;

    num = 0;
    pos = 1;
    while(stack_a[num] < arr_len1 + 1 && pos < arr_len1 + 1)
    {
        printf("[%d] = %i       [%d] = %i\n", pos, stack_a[num], pos, stack_b[num]);
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
    int temp;

    temp = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = temp;
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack b, do nothing
**  if the is only one or no elemnts.
*/

void    sb(int stack_b[])
{
    int temp;

    temp = stack_b[0];
    stack_b[0] = stack_b[1];
    stack_b[1] = temp;
}

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

// void    push_a(int temp1, int temp2, int stack_a[], int stack_b[])
// {
//     temp1 = stack_b[0];
    
// }
/*
**  RA - Shift up all elemnts in stack a by 1. The first element becomes
**  the last one.
*/

void    ra(int stack_a[], int arr_len1)
{
    int pos = 0;
    int temp1 = stack_a[0];
    while(stack_a[pos] <= arr_len1)
    {
        stack_a[pos] = stack_a[pos + 1];
        pos++;
    }
    stack_a[arr_len1 - 1] = temp1;
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int stack_a[], int stack_b[])
{
    sa(stack_a);
    sb(stack_b);
}

int     main()
{
    int stack_a[] = {2, 1, 3, 5, 4};
    int stack_b[] = {5, 7, 1, 3, 2};
    int arr_len1;
    // int arr_len2;

    arr_len1 = sizeof(stack_a)/sizeof(stack_a[0]);
    // arr_len2 = sizeof(stack_b)/sizeof(stack_b[0]);

    printf(">-arr_size = %i\n", arr_len1);
    print_arr(arr_len1, stack_a, stack_b);

    printf(">-sa-<\n");
    sa(stack_a);
    print_arr(arr_len1, stack_a, stack_b);

    printf(">-sb-<\n");
    sb(stack_b);
    print_arr(arr_len1, stack_a, stack_b);

    printf(">-ss-<\n");
    ss(stack_a, stack_b);
    print_arr(arr_len1, stack_a, stack_b);

    printf(">-ra-<\n");
    ra(stack_a, arr_len1);
    print_arr(arr_len1, stack_a, stack_b);

    // system("leaks push_swap");
    return(0);
}

