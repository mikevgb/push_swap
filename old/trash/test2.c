/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 20:02:32 by mvillaes          #+#    #+#             */
/*   Updated: 2021/04/30 20:52:12 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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

int     main(int argc, char **argv)
{
    int size;
    int *stack_a;
    int *stack_b;
    int i;
    int j;

    size = argc - 1;
    stack_a = (int*)calloc(size, sizeof(int));
    stack_b = (int*)calloc(size, sizeof(int));

    if ((stack_a || stack_b) == '\0')
        printf("malloc failed\n");

    printf("Size = %d\n", size);

    i = 0;
    j = 1;
    while(i < size)
    {
        stack_a[i] = atoi(argv[j]);
        i++;
        j++;
    }
    
    print_arr(size, stack_a, stack_b);
    return(0);

}