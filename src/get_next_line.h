/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42Projects                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by larcrist          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h> //write
# include <stdlib.h> //malloc(), free() and size_t

/* -------◊	GNL	◊------- */
char				*get_next_line(int fd);
/* -------◊	UTILS	◊------- */
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strdup(const char *s1);

#endif
