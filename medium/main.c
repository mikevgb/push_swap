/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:20:58 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/23 21:38:48 by mvillaes         ###   ########.fr       */
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

void    ft_3(int **stack)
{
    if(stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] < stack[3][1])
        sa(stack);
    if(stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] > stack[3][1])
    {
        sa(stack);
        rra(stack);
    }
    if(stack[1][1] > stack[2][1] && stack[2][1] < stack[3][1] && stack[1][1] > stack[3][1])
        ra(stack);
    if(stack[1][1] < stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] < stack[3][1])
    {
        sa(stack);
        ra(stack);
    }
    if(stack[1][1] > stack[2][1] && stack[2][1] > stack[3][1] && stack[1][1] > stack[3][1])
        rra(stack);    
}

void    ft_5(int **stack)
{
    pb(stack);
    pb(stack);
    ft_3(stack);
    print_arr(stack);
    int i = 4;

    //loop for all nums that are not max or min
    while(i >= 4)
    {
        if(stack[1][4] > stack[i][1])
            rra(stack);
        if(stack[1][4] < stack[i][1])
        {
            pa(stack);
            break;
        }  
        i--;
    }
    pa(stack);
}

void    set_b(int **stack)
{
    if(data.elements_b > 0)
    {
        find_small_b(stack);
        // move_top_b(stack);
    }
    pb(stack);
    find_small_b(stack);
}

// void    find_big_b(int **stack)
// {
//     int i;
//     int j;

//     i = 1;
//     reset_calc_b(stack);
//     while(i <= data.elements_b)
//     {
//         j = 1;
//         while(j <= data.elements_b)
//         {
//             if(j != i)
//             {
//                 if(stack[i][4] < stack[j][4])
//                     stack[i][5] += 1;
//             }
//             j++;
//         }
//         i++;
//     }
// }
void    do_a(int **stack)
{
    int i;
    
    i = 0;
    while(i < 500)
    {
        find_small(stack);
        hold_first(stack);
        hold_second(stack);
        choose_hold(stack);
        set_b(stack);
        i++;
    }
}

void    do_b(int **stack)
{
    int i;
    i = 0;

    while(i < 500)
    { 
        move_2_top_b(stack);
        find_small_b(stack);
        i++;
    }
}

void    back_up_array(int **stack)
{
    int **back_up;
    int i;

    back_up = (int **)calloc(data.total_elements, sizeof(int*));
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i] = (int*)calloc(6, sizeof(int));
        i++;
    }
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i][0] = stack[i][0];
        back_up[i][1] = stack[i][1];
        back_up[i][2] = stack[i][2];
        back_up[i][3] = stack[i][3];
        back_up[i][4] = stack[i][4];
        back_up[i][5] = stack[i][5];
        i++;
    }
}

void    restore_back_up(int **stack, int **back_up)
{
    int i;

    i = 0;
    while(i < data.total_elements)
    {
        stack[i][0] = back_up[i][0];
        stack[i][1] = back_up[i][1];
        stack[i][2] = back_up[i][2];
        stack[i][3] = back_up[i][3];
        stack[i][4] = back_up[i][4];
        stack[i][5] = back_up[i][5];
        i++;
    }
}

// void    loop(int **stack, int **back_up)
// {
//     back_up_array(stack);
//     do_a(stack);
//     do_b(stack);
//     while(data.moves >= 11500)
//     {
//         printf("moves = %i\n", data.moves);
//         data.moves = 0;
//         restore_back_up(stack, back_up);
//         chunk_tuner();
//         do_a(stack);
//         do_b(stack);
//     }
//     printf("moves = %i\n", data.moves);
// }

int     main(int argc, char **argv)
{
    int size;
    int **stack;
    int i;
    int **move;

    size = argc;
    data.total_elements = size;
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

    // Transform argc in int
    // and add pos values to 2d array
    
    i = 1;
    int x = -3; //
    while(i < size)
    {
        stack[i][1] = ft_atoi(argv[i]);
        stack[i][0] = i;
        // stack[i][2] = 1;
        // // stack[i][4] = x; //REMOVE!! FOR TESTING ONLY
        // stack[i][5] = 1;
        stack[i][3] = i;
        i++;
        x++; //
    }

    //Give value to the number of elements

    data.elements_a = size - 1;
	data.elements_b = 0; //FOR TESTING ONLY! SET TO 0

    // back up array
    int **back_up;

    back_up = (int **)calloc(data.total_elements, sizeof(int*));
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i] = (int*)calloc(6, sizeof(int));
        i++;
    }
    i = 0;
    while(i < data.total_elements)
    {
        back_up[i][0] = stack[i][0];
        back_up[i][1] = stack[i][1];
        back_up[i][2] = stack[i][2];
        back_up[i][3] = stack[i][3];
        back_up[i][4] = stack[i][4];
        back_up[i][5] = stack[i][5];
        i++;
    }

    data.increase = 0.001;
    data.chunk = 0.000;

    //// main loop
    
    do_a(stack);
    do_b(stack);
    while(data.moves >= 11500)
    {
        printf("moves = %i\n", data.moves);
        printf("chunk size = %f\n", data.chunk);
        data.chunk += 0.0001;
        data.moves = 0;
        restore_back_up(stack, back_up);
        // chunk_tuner();
        do_a(stack);
        do_b(stack);
    }
    printf("moves = %i\n", data.moves);
    // i = 0;
    // while(i < 500)
    // {
    //     find_small(stack);
    //     hold_first(stack);
    //     hold_second(stack);
    //     choose_hold(stack);
    //     set_b(stack);
    //     i++;
    // }
    // i = 0;
    // while(i < 500)
    // { 
    //     move_2_top_b(stack);
    //     find_small_b(stack);
    //     i++;
    // }
    // print_arr(stack);
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