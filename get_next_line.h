/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <jmichael@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 13:23:36 by jmichael          #+#    #+#             */
/*   Updated: 2019/07/17 16:24:44 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

# define BUFF_SIZE 75
# define MAX_FD 4096

int		get_next_line(const int fd, char **line);

#endif
