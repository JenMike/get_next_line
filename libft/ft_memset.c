/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <jmichael@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:07:49 by jmichael          #+#    #+#             */
/*   Updated: 2019/07/22 12:37:36 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)b;
	while (len > 0)
	{
		temp[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
