/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:27:33 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/23 15:27:36 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int fuck;
	int this;
	int function;

	fuck = 0;
	this = 0;
	function = 0;
	while (needle[function] != '\0')
		function++;
	if (function == 0)
		return ((char *)haystack);
	while (haystack[fuck])
	{
		while (needle[this] == haystack[fuck + this])
		{
			if (this == function - 1)
				return ((char *)haystack + fuck);
			this++;
		}
		this = 0;
		fuck++;
	}
	return (0);
}
