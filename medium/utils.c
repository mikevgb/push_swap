/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:55:25 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/14 22:10:46 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <ctype.h>

static int	norminette_made_me_do_it(int sign)
{
	if (sign == 1)
	{
		ft_putstr("Error -1\n");
		exit(1);
	}
	else
	{
		ft_putstr("Error 0\n");
		exit(1);
	}	
	return (0);
}

int	ft_atoi(char const *str)
{
	int					base;
	long unsigned int	res;
	int					sign;
	int					i;

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
	while (ft_isdigit(*str))
		res = (res * base) + (*str++ - 48);
	if (res < 2147483649)
		return ((int)res * sign);
	return (norminette_made_me_do_it(sign));
}
