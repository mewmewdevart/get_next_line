/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:23 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 22:21:54 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//statoic function to clean 

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);

}
