/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tuned.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:55:25 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/16 20:50:54 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_value(int str)
{
	if (str >= '0' && str <= '9')
		return (1);
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (0);
	return (0);
}

int	ft_atoi(char const *str)
{
	int					base;
	long unsigned int	res;
	int					sign;

	base = 10;
	sign = 1;
	res = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' && str++)
		sign = -1;
	else if (*str == '+')
		str++;
	if (!check_value(*str))
		ft_error();
	while (ft_isdigit(*str))
		res = (res * base) + (*str++ - 48);
	if (res < 2147483648)
		return ((int)res * sign);
	ft_error();
	return (0);
}
