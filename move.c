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

void    print_arr(int arr_len1, int num, int pos, int array1[], int array2[])
{
    while(array1[num] < arr_len1 + 1 && pos < arr_len1 + 1)
    {
        printf("[%d] = %i       [%d] = %i\n", pos, array1[num], pos, array2[num]);
        pos++;
        num++;
    }
}

/*
**  SA - Swap the first 2 elemnts at the top of the stack a, do nothing
**  if the is only one or no elemnts.
*/

void    swap_a(int temp1, int array1[])
{
    temp1 = array1[0];
    array1[0] = array1[1];
    array1[1] = temp1;
}

/*
**  SB - Swap the first 2 elemnts at the top of the stack b, do nothing
**  if the is only one or no elemnts.
*/

void    swap_b(int temp1, int array2[])
{
    temp1 = array2[0];
    array2[0] = array2[1];
    array2[1] = temp1;
}

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

// void    push_a(int temp1, int temp2, int array1[], int array2[])
// {
//     temp1 = array2[0];
    
// }
/*
**  RA - Shift up all elemnts in stack a by 1. The first element becomes
**  the last one.
*/

void    rotate_a(int array1[], int arr_len1)
{
    int pos = 0;
    int temp1 = array1[0];
    while(array1[pos] <= arr_len1)
    {
        array1[pos] = array1[pos + 1];
        pos++;
    }
    array1[arr_len1 - 1] = temp1;
}

/*
**  SS - Swap A and B at the same time.
*/

void    ss(int temp1, int temp2, int array1[], int array2[])
{
    swap_a(temp1, array1);
    swap_b(temp2, array2);
}
int     main()
{
    int array1[] = {2, 1, 3, 5, 4};
    int array2[] = {5, 7, 1, 3, 2};
    int temp1;
    int temp2;
    int arr_len1;
    int arr_len2;
    int num;
    int pos;

    arr_len1 = sizeof(array1)/sizeof(array1[0]);
    arr_len2 = sizeof(array2)/sizeof(array2[0]);

    num = 0;
    pos = 1;
    temp1 = 0;
    temp2 = 0;

    printf(">-arr_size = %i\n", arr_len1);
    print_arr(arr_len1, num, pos, array1, array2);

    printf(">-swap_a-<\n");
    swap_a(temp1, array1);
    print_arr(arr_len1, num, pos, array1, array2);

    printf(">-swap_b-<\n");
    swap_b(temp1, array2);
    print_arr(arr_len1, num, pos, array1, array2);

    printf(">-ss-<\n");
    ss(temp1, temp2, array1, array2);
    print_arr(arr_len1, num, pos, array1, array2);
    // printf(">-pa-<\n");
    // temp1 = array2[0];
    // while()
    // print_arr(arr_len1, num, pos, array1, array2);


    printf(">-rotate_a-<\n");
    rotate_a(array1, arr_len1);
    // num = 0;
    // pos = 0;
    // temp1 = array1[0];
    // while(array1[pos] <= arr_len1)
    // {
    //     array1[pos] = array1[pos + 1];
    //     pos++;
    // }
    // array1[arr_len1 - 1] = temp1;
    // num = 0;
    // pos = 1;
    print_arr(arr_len1, num, pos, array1, array2);

    // system("leaks push_swap");
    return(0);
}

