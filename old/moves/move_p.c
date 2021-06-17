/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:23:27 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 20:09:48 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  PA - Take the first element at the top of B and put it at the top of A.
**  Do nothing if B is empty.
*/

void    pa(int **stack)
{
    int tmp;
    int pos;

    tmp = stack[1][4];
    pos = 1;
    data.elements_a += 1;
    while(pos < data.elements_b && data.elements_b > 0)
    // while(pos < data.elements_b)
    {
        stack[pos][4] = stack[pos + 1][4];
        pos++;
    }
    pos = data.elements_a;
    data.elements_b -= 1;
    while(pos > 0)
    {
        stack[pos][1] = stack[pos - 1][1];
        pos--;
    }
    stack[1][1] = tmp;
}

/*
**  PB - Take the first element at the top of A and put it at the top of B.
**  Do nothing if A is empty.
*/

void    pb(int **stack)
{
    int tmp;
    int pos;

    tmp = stack[1][1];
    pos = 1;
    data.elements_b += 1;
    while(pos < data.elements_a && data.elements_a > 0)
    // while(pos < data.elements_a)
    {
        stack[pos][1] = stack[pos + 1][1];
        pos++;
    }
    pos = data.elements_b;
    data.elements_a -= 1;
    while(pos > 0)
    {
        stack[pos][4] = stack[pos - 1][4];
        pos--;
    }
    stack[1][4] = tmp; 
}

// void    pb(int **stack)
// {
    
// }