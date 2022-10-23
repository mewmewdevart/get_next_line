/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:28 by marvin            #+#    #+#             */
/*   Updated: 2022/10/23 00:37:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h> 
#include <fcntl.h> 

int	main(int argc, char **argv)
{
    int fd;
    char *line;

    (void)argc;
    fd = open(argv[1], O_RDONLY); //Entrada pelo teclado
    if(fd == -1)
    {
        printf("open() error\n");
        return (1);
    }
    
    line = "";
    while (line != NULL) //Enquanto a linha nao estiver lida 
    {
		line = get_next_line(fd);
		printf("%s", line); //Seguido de uma new line
    }

    fd = close(fd);
    if(fd == -1)
    {
        printf("close() error\n");
        return(1);
    }
    printf("%d", fd);
	
    return(0);
}