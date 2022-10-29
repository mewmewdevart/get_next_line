/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:00:20 by marvin            #+#    #+#             */
/*   Updated: 2022/10/28 21:32:42 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//calculate the length of a string
size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

//locate character in string
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char) c)
		return ((char *)s);
	return (NULL);
}

//concatenates two strings
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		str[len_s1] = s1[len_s1];
		len_s1++;
	}
	len_s2 = 0;
	while (s2[len_s2] != '\0')
	{
		str[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	str[len_s1 + len_s2] = '\0';
	return (str);
}

//concatenate string to an specific size
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	index = 0;
	while (index < (size - 1) && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len_src);
}

//creates a dupplicate for the string passed as parameter
char	*ft_strdup(const char *s1)
{
	int		index;
	int		size;
	char	*s2;

	size = ft_strlen(s1);
	s2 = malloc (sizeof(char ) * (size + 1));
	index = 0;
	while (s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
