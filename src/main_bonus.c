/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:51:45 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/03 10:59:14 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include "get_next_line.h" 

int	main(void)
{
	int	fd1;
	int	fd2;
	int	fd3;
	int	fd4;

	fd1 = open("../tests/archive_unholy.txt", O_RDWR);
	fd2 = open("../tests/archive_unholy.txt", O_RDWR);
	fd3 = open("../tests/archive_unholy.txt", O_RDWR);
	fd4 = open("../tests/archive_unholy.txt", O_RDWR);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1 || fd4 == -1)
		return (-1);

	printf("[%d] %s", fd1, get_next_line(fd1));
	printf("[%d] %s", fd2, get_next_line(fd2));
	printf("[%d] %s", fd3, get_next_line(fd3));
	printf("[%d] %s", fd4, get_next_line(fd4));

	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return (0);
}
