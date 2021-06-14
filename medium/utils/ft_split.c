/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:02:39 by mvillaes          #+#    #+#             */
/*   Updated: 2021/06/14 20:03:56 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_contador(char const *s, char c)
{
	unsigned int	i;
	int				cntr;
	int				tiene;

	i = 0;
	cntr = 0;
	tiene = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i])
			tiene = 1;
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				cntr++;
		}
		else
			i++;
	}
	return (cntr + tiene);
}

static char	*ft_alc(const char *s, char c)
{
	char	*tb;
	int		i;

	i = 0;
	tb = 0;
	while (s[i] && s[i] != c)
		i++;
	tb = malloc(i + 1);
	if (!(tb))
		return (NULL);
	ft_strlcpy(tb, s, i + 1);
	return (tb);
}

static int 	ft_counter(int words, char **tab, char const *s, char c)
{
	int	count;

	count = -1;
	while (++count < words)
	{
		while (s[0] == c)
			s++;
		tab[count] = ft_alc(s, c);
		if (!(tab[count]))
		{
			while (count > 0)
				free(tab[count--]);
			free(tab);
			return (0);
		}
		s += ft_strlen(tab[count]);
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		words;
	char	**tab;

	count = -1;
	if (!s)
		return (NULL);
	words = ft_contador(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!(tab))
		return (NULL);
	count = ft_counter(words, tab, s, c);
	tab[count] = NULL;
	return (tab);
}
