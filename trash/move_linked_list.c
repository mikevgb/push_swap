/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:35:25 by mvillaes          #+#    #+#             */
/*   Updated: 2021/04/27 20:40:54 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

typedef struct numbers {
    int value;
    struct numbers * next;
} numbers_t;


int     main()
{
    // int head;
    numbers_t * head = NULL;
    head = (numbers_t*)malloc(sizeof(numbers_t));
    if (head == NULL)
        return(1);
    
    head->value = 1;
    head->next = NULL;

}


