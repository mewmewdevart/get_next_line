/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:14:26 by larcrist          #+#    #+#             */
/*   Updated: 2022/10/29 21:14:27 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int			ft_found_error(int fd);
static void			ft_free(char **str);
static char			*ft_slice(char **str);
static char			*ft_substr(char const *str, unsigned int start, size_t len);

char	*get_next_line(int fd)
{
	int			size;
	char		*buffer;
	char		*support;
	static char	*string[1024];

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	size = read(fd, buffer, BUFFER_SIZE);
	if (ft_found_error(fd))
		return (NULL);
	while (size > 0)
	{
		buffer[size] = '\0';
		if (!string[fd])
			string[fd] = ft_strdup(buffer);
		else
		{
			support = ft_strjoin(string[fd], buffer);
			ft_free(&string[fd]);
			string[fd] = support;
		}
		if (ft_strchr(string[fd], '\n'))
			break ;
		size = read(fd, buffer, BUFFER_SIZE);
	}
	return (ft_free(&buffer), ft_slice(&string[fd]));
}

//finds an error in input
static int	ft_found_error(int fd)
{
	if (fd == -1 || BUFFER_SIZE < 1)
		return (1);
	return (0);
}

//de-allocate the memory
static	void	ft_free(char **str)
{
	if (str[0])
	{
		free(str[0]);
		str[0] = NULL;
	}
}

//slice the string into pieces
static char	*ft_slice(char **str)
{
	int		i;
	char	*ret;
	char	*aux;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[0][i] != '\n' && str[0][i] != '\0')
		i++;
	ret = ft_substr(str[0], 0, i + 1);
	aux = ft_strdup(str[0]);
	ft_free(str);
	str[0] = ft_substr(aux, i + 1, ft_strlen(aux));
	ft_free(&aux);
	if (!ft_strchr(ret, '\n'))
	{
		if (!ft_strlen(ret))
			ft_free(&ret);
		ft_free(str);
	}
	return (ret);
}

//returns a substring from a string
static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str = (char *)malloc(sizeof(*s));
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(len + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
