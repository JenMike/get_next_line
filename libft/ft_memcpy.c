/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 09:29:46 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/21 09:29:49 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (n == 0 || dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (--n)
		*d++ = *s++;
	*d = *s;
	return (dst);
}
