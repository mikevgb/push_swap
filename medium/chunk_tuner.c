/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_tuner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:30:15 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/28 19:40:46 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    chunk_tuner()
{
    float increase;

    increase = 0.001;
    data.chunk1 = 0.000;
    data.chunk1 += increase;
}

// void    chunk_finder(int **stack)
// {
//     if(!(data.moves <= 11500))
//         chunk_tuner(stack);
// }