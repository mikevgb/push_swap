/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:55:25 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/05 18:58:29 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <ctype.h>

static int	norminette_made_me_do_it(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(char const *str)
{
	char const			*ptr;
	int					base;
	long unsigned int	res;
	int					sign;

	ptr = str;
	base = 10;
	sign = 1;
	res = 0;
	while (*ptr == '\t' || *ptr == '\n' || *ptr == '\v'
		|| *ptr == '\f' || *ptr == '\r' || *ptr == ' ')
		ptr++;
	if (*ptr == '-')
	{
		ptr++;
		sign = -1;
	}
	else if (*ptr == '+')
		ptr++;
	while (isdigit(*ptr))
		res = (res * base) + (*ptr++ - 48);
	if (res < 2147483649)
		return ((int)res * sign);
	return (norminette_made_me_do_it(sign));
}