/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:15:57 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/09 19:31:34 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**  reset_index_calc - reset the dP counter and put all the dP values to 1.
*/

void    reset_index_calc_a(int **stack)
{
    int i;

    i = 1;
    stack[0][2] = 0;
    while(i <= stack[0][0])
    {
        stack[i++][2] = 1;
        // i++;
    }
}

void    reset_index_calc_b(int **stack)
{
    int i;

    i = 1;
    stack[0][3] = 0;
    while(i <= stack[0][1])
    {
        stack[i][3] = 1;
        i++;
    }
}