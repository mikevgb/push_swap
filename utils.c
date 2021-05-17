/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:55:25 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/06 18:01:51 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <ctype.h>

static int	norminette_made_me_do_it(int sign)
{
	if (sign == 1)
	{
		printf("Error -1\n");
		exit(1);
	}
	else
	{
		printf("Error 0\n");
		exit(1);
	}
		
	return(0);
}

int	ft_atoi(char const *str)
{
	int					base;
	long unsigned int	res;
	int					sign;
	int	i;

	base = 10;
	sign = 1;
	res = 0;
	i = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	else if (*str == '+')
		str++;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		i++;
		printf("Error atoi\n");
		exit(1);
	}
	while (isdigit(*str))
		res = (res * base) + (*str++ - 48);
	if (res < 2147483649)
		return ((int)res * sign);
	//check if nums are repeated
	return (norminette_made_me_do_it(sign));
}

int		ft_error()
{
	printf("Error\n");
	exit(1);
}

void	check_dupe(int **stack)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while(i < data.total_a)
	{
		j = i + 1;
		while(j < data.total_a + 1)
		{
			if(stack[i][1] == stack[j][1] && j != i)
			{
				printf("Dupe num\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}