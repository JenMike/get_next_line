/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichael <jmichael@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:34:18 by jmichael          #+#    #+#             */
/*   Updated: 2019/07/30 07:53:18 by jmichael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int     main(int argc, char *argv[])
{
    char    *line;
    int     ret;
    int     fd;
    int     fd2;
    
    if (argc == 1)
    {
        while ((ret = get_next_line(0, &line)) > 0)
        {
            printf("ret - :%d: - >%s\n", ret, line);
            free(line);
        }
    }
    else if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        while ((ret = get_next_line(fd, &line)) > 0)
        {
            printf("ret - :%d: - >%s\n", ret, line);
            free(line);
        }
        printf("finret :: %d\n", ret);
    }
    else if (argc == 3)
    {
        fd = open(argv[1], O_RDONLY);
        fd2 = open(argv[2], O_RDONLY);
        char    *a;
        char    *b;
        
        while (get_next_line(fd, &a) > 0 || get_next_line(fd2, &b) > 0)
        {
            printf("f1:: %s\n", a);
            printf("f2:: %s\n", b);    
        }
    }
    return 0;
}