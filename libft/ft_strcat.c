/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:25:05 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/24 10:33:31 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		biteme;
	int		incest;

	biteme = 0;
	incest = 0;
	while (s1[biteme])
		biteme++;
	while (s2[incest])
	{
		s1[biteme] = s2[incest];
		biteme++;
		incest++;
	}
	s1[biteme] = '\0';
	return (s1);
}
