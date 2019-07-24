/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 09:31:09 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/24 10:46:48 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	nugget;

	nugget = 0;
	while (nugget < n)
	{
		if (((unsigned const char *)s)[nugget] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[nugget]);
		nugget++;
	}
	return (NULL);
}
