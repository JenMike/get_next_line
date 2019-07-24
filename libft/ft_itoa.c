/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:30:16 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/23 15:30:20 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		negative;
	int		tmp;
	char	*str;

	negative = 0;
	if (n < 0)
		negative = 1;
	tmp = n;
	size = 1;
	while ((tmp /= 10))
		size++;
	str = ft_strnew(size + negative);
	if (str == NULL)
		return (NULL);
	if (negative)
		str[0] = '-';
	while (size--)
	{
		str[size + negative] = (negative ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (str);
}
