/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:25 by marvin            #+#    #+#             */
/*   Updated: 2022/10/28 10:32:27 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h> //write
# include <stdlib.h> //malloc(), free() and size_t

/* -------◊	GNL	◊------- */
int				ft_found_error(int fd);
void			ft_free(char **str);
char			*ft_slice(char **str);
char			*ft_substr(char const *str, unsigned int start, size_t len);
char			*get_next_line(int fd);
/* -------◊	UTILS	◊------- */
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strdup(const char *s1);

#endif
