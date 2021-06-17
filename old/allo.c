/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:44:38 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 20:09:48 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//creates a new node and returns pointer to it
// struct node* getnewnode(int x)
// {
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = x;
//     newnode->prev = NULL;
//     newnode->next = NULL;
//     return newnode;
// }

// https://gist.github.com/mycodeschool/7429492

// int    **allok(int argc, char **argv)
// {
//     int size;
//     int **stack;
//     int i;

//     size = argc;
//     stack = (int**)calloc(size, sizeof(int*));

//     i = 0;
//     while(i < size)
//     {
//         stack[i] = (int*)calloc(6, sizeof(int));
//         i++;
//     }
    
//     //Callock check success

//     if (!stack)
//     {
//         printf("calloc failed\n");
//         return(0);
//     }
//     array_init(argv, size, stack);
//     return(**stack);
// }

// void    array_init(char **argv, int size, int **stack)
// {
//     int i;

//     i = 1;
//     while(i < size)
//     {
//         stack[i][1] = ft_atoi(argv[i]);
//         stack[i][0] = i;
//         stack[i][2] = 1;
//         stack[i][3] = i;
//         i++;
//     }

//     //Give value to the number of elements

//     data.elements_a = size - 1;
// 	data.elements_b = 0;
// }