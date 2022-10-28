/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:28 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 19:24:44 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <fcntl.h> 
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    char    *line;

    (void)argc;
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        printf("open() error\n");
        return (1);
    }
    
    line = "";
    while (line != NULL)
    {
		line = get_next_line(fd);
		printf("%s\n", line);
    }

    fd = close(fd);
    if (fd == -1)
    {
        printf("close() error\n");
        return(1);
    }
    printf("%d", fd);
	
    return(0);
}
