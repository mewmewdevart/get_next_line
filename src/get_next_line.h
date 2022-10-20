/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:25 by marvin            #+#    #+#             */
/*   Updated: 2022/10/10 23:00:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h> //write and read
# include <stdlib.h> //malloc(), free() and size_t

/* -------◊	GNL	◊------- */
char	*get_next_line(int fd);

/* -------◊	UTILS	◊------- */

#endif