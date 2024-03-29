/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:41:29 by jmichael          #+#    #+#             */
/*   Updated: 2019/06/24 10:57:15 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int i)
{
	if (i == '\t' || i == '\v' || i == '\n' || i == '\f' || i == ' ')
		return (1);
	return (0);
}
