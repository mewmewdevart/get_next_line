/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:28 by marvin            #+#    #+#             */
/*   Updated: 2022/10/22 23:53:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h> 
#include <fcntl.h> 


int main (void)
{
    int fd;
    char *line;

    fd = open("texto.txt", O_RDONLY);
    if(fd == -1)
    {
        printf("open() error\n");
        return (1);
    }
    
    line = get_next_line(fd);
    printf("%s\n", line); //Respeitar o printamento de linha por linha seguida de \n

    fd = close(fd);
    if(fd == -1)
    {
        printf("close() error\n");
        return(1);
    }
	printf("%d", fd); //checando se o fd foi zerado
	
    return(0);
}