/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <jmichael@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:01:03 by jmichael          #+#    #+#             */
/*   Updated: 2019/07/23 18:53:13 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		get_info(int fd, char **store)
{
	char	temp[BUFF_SIZE + 1];
	char	*buffer;
	size_t	read_bytes;

	if (!(*store))
		*store = ft_strnew(0);
	while (!(ft_strchr(*store, '\n')))
	{
		read_bytes = read(fd, temp, BUFF_SIZE);
		if (read_bytes <= 0)
			return (0);
		temp[read_bytes] = '\0';
		buffer = ft_strjoin(*store, temp);
		free(*store);
		*store = buffer;
	}
	return (1);
}

static char		*dispense_line(char **store)
{
	char	*nl_ptr;
	char	*newstr;
	char	*temp;

	nl_ptr = ft_strchr(*store, '\n');
	if (nl_ptr)
	{
		*nl_ptr = '\0';
		newstr = ft_strdup(*store);
		temp = ft_strdup(nl_ptr + 1);
		free(*store);
		*store = temp;
	}
	else
	{
		newstr = ft_strdup(*store);
		ft_strdel(store);
	}
	return (newstr);
}

int				get_next_line(int const fd, char **line)
{
	static char		*temp[MAX_FD];

	if (fd < 0 || fd > MAX_FD || read(fd, temp[fd], 0) < 0 || !line)
		return (-1);
	if (get_info(fd, &temp[fd]) < 0)
		return (-1);
	if (ft_strlen(temp[fd]) == 0)
		return (0);
	*line = dispense_line(&temp[fd]);
	return (1);
}
