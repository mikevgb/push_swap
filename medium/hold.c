/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:26:59 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/28 21:45:56 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    hold_first(int **stack)
// {
//     int i;
//     int j;
//     int chunk;
//     int tmp;

//     i = 1;
//     tmp = 333333;
//     // chunk = data.elements_a * 0.02;
//     chunk = data.elements_a * data.chunk1;
//     while(i <= chunk)
//     {
//         j = 1;
//         while(j <= chunk)
//         {
//             if (j != i)
//             {
//                 if(stack[i][2] < stack[j][2])
//                 {
//                     if(stack[i][2] < tmp)
//                     {
//                         tmp = stack[i][2];
//                         data.hold_first_pos = stack[i][0];
//                     }
//                 }
//             }
//             j++;
//         }
//         i++;
//     }
// }

// void    hold_first(int **stack)
// {
//     int i;
//     int first;

//     i = 1;
//     first = 1;
//     while(first <= data.elements_a)
//     {
//         while(stack[i][2] > first)
//         {
//             if(stack[i][2] == first)
//             {
//                 data.hold_first_pos = stack[i][0];
//             }
//             i++;
//         }
//         first++;
//     }
// }

void    hold_first(int **stack)
{
    int i;

    i = 1;
    while(i <= data.elements_a)
    {
        // find_small(stack);
        if(stack[i][2] > 0 && stack[i][2] < data.chunk1)
        {
            data.hold_first_pos = stack[i][0];
            // printf("hold first %i\n", data.hold_first_pos);
            break ;
        }   
        i++;
    }
}
//////////////////////////

// void    hold_first(int **stack)
// {
//     int i;
//     int j;

//     i = data.elements_a / data.chunk1;
//     j = 1;
//     while(j <= data.elements_a)
//     {
//         if(stack[j][2] <= i)
//         {
//             data.hold_first_pos = stack[j][0];
//             break;
//         }
//         j++;
//     }
// }
////////////////////////////////
// void    hold_second(int **stack)
// {
//     int i;
//     int j;
//     int chunk;
//     int tmp;


//     i = data.elements_a;
//     tmp = 333333;
//     // chunk = data.elements_a * 0.02;
//     chunk = data.elements_a * data.chunk1;
//     while(i >= chunk)
//     {
//         j = data.elements_a;
//         while (j >= chunk)
//         {
//             if (j != i)
//             {
//                 if(stack[i][2] < stack[j][2])
//                 {
//                     if(stack[i][2] < tmp)
//                     {
//                         tmp = stack[i][2];
//                         data.hold_second_pos = stack[i][0];
//                     }
//                 }
//             }
//             j--;
//         }
//         i--;
//     }
// }

// void    hold_second(int **stack)
// {
//     int i;
//     int second;

//     i = data.elements_a;
//     second = 2;
//     while(second <= data.elements_a)
//     {
//         while(stack[i][2] > second)
//         {
//             if(stack[i][2] == second)
//             {
//                 data.hold_second_pos = stack[i][0];
//             }
//             i--;
//         }
//         second++;
//     }
// }

void    hold_second(int **stack)
{
    int i;

    i = data.elements_a;
    while(i >= 1)
    {
        if(stack[i][2] > 0 && stack[i][2] < data.chunk2)
        {
            data.hold_second_pos = stack[i][0];
            break ;
        }
        i--;
    }
}

void    choose_hold(int **stack)
{
    int hold_1;
    int hold_2;
    int i;

    hold_1 = data.hold_first_pos;
    hold_2 = data.elements_a - data.hold_second_pos;
    if(hold_1 <= hold_2)
    {
        i = 1;
        while(i < hold_1)
        {
            // if(data.elements_b > 0)
            // {
            //     find_small_b(stack);
            //     // printf("stack15 1 = %i\n", stack[1][5]);
            //     if(stack[1][5] != data.elements_b)
            //     {
            //         rr(stack);
            //         data.moves += 1;
            //     }  
            // }
            // else
            // {
                ra(stack);
                data.moves += 1;
            // }
            i++;
        }    
    }
    if (hold_2 < hold_1)
    {
        i = 1;
        while(i < hold_2)
        {
            // if(data.elements_b > 0)
            // {
            //     find_small_b(stack);
            //     // printf("stack15 1 = %i\n", stack[1][5]);
            //     if(stack[1][5] != data.elements_b)
            //     {
            //         rrr(stack);
            //         data.moves += 1;
            //     }
            // }
            // else
            // {
                rra(stack);
                data.moves += 1;
            // }
            i++;
        }    
    }
}

// void    choose_hold(int **stack)
// {
//     int hold_1;
//     int hold_2;
//     int i;

//     hold_1 = data.hold_first_pos;
//     hold_2 = data.elements_a - data.hold_second_pos;
//     if(hold_1 <= hold_2)
//     {
//         i = 1;
//         while(i < hold_1)
//         {
//             // if(data.elements_b > 0)
//             // {
//             //     find_small_b(stack);
//             //     // printf("stack15 1 = %i\n", stack[1][5]);
//             //     if(stack[1][5] != 1)
//             //         rr(stack);
//             // }
//             // else
//                 ra(stack);
//             i++;
//         }    
//     }
//     if (hold_2 < hold_1)
//     {
//         i = 1;
//         while(i < hold_2)
//         {
//             // if(data.elements_b > 0)
//             // {
//             //     find_small_b(stack);
//             //     // printf("stack15 2 = %i\n", stack[1][5]);
//             //     if(stack[1][5] != 1)
//             //         rrr(stack);
//             // }
//             // else
//                 rra(stack);
//             i++;
//         }    
//     }
// }

// void    choose_hold(int **stack)
// {
//     int i;
//     int j;

//     i = data.elements_a / 2;
//     if (data.hold_first_pos <= i)
//     {
//         j = 0;
//         while(j < data.hold_first_pos)
//         {
//             ra(stack);
//             j++;
//         }  
//     }
//     if (data.hold_first_pos > i)
//     {
//         j = 0;
//         while(j < (data.elements_a - data.hold_first_pos))
//         {
//             rra(stack);
//             j++;
//         }
           
//     }
// }