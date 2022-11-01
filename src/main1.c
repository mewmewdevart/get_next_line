/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:00:38 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/01 20:04:28 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include "get_next_line.h" 

int	main(void)
{
	int	fd;

	fd = open("../tests/archive_music.txt", O_RDWR);
	if (fd == -1)
		return (-1);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	printf("%i", fd);
	return (0);
}
