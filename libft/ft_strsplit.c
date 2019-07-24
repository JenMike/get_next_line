/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:29:52 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/23 15:29:55 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *str, char c)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	while (str[j])
	{
		while (str[j] == c)
			j++;
		if (str[j] != c && str[j] != '\0')
			i++;
		while (str[j] != c && str[j] != '\0')
			j++;
	}
	return (i);
}

static int		word_length(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**fuckingstr2;

	if (!s || !(fuckingstr2 = (char **)malloc(sizeof(*fuckingstr2) *
		(word_count(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < word_count(s, c))
	{
		k = 0;
		if (!(fuckingstr2[i] = ft_strnew(word_length(&s[j], c) + 1)))
			fuckingstr2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			fuckingstr2[i][k++] = s[j++];
		fuckingstr2[i][k] = '\0';
	}
	fuckingstr2[i] = 0;
	return (fuckingstr2);
}
