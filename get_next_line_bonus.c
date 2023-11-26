/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:37:39 by trosinsk          #+#    #+#             */
/*   Updated: 2023/11/25 23:45:27 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*l_c(char *str)
{
	char	*rest_line;

	rest_line = ft_substr(str, ((ft_strchr(str, '\n') - str) + 1),
			ft_strlen(str));
	if (!rest_line)
		return (NULL);
	return (free(str), rest_line);
}

char	*line_maker(char *str)
{
	char	*new_line;

	new_line = ft_substr(str, 0, ((ft_strchr(str, '\n') - str) + 1));
	if (!new_line)
		return (NULL);
	return (new_line);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	char		*line;
	char		buff[BUFFER_SIZE + 1];
	int			r;

	if ((fd < 0) || fd > OPEN_MAX || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (free(str[fd]), str[fd] = NULL, NULL);
	r = 1;
	while (r > 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r == -1 || (r == 0 && str[fd] == NULL))
			return (free(str[fd]), str[fd] = NULL, NULL);
		buff[r] = '\0';
		str[fd] = ft_strjoin(str[fd], buff);
		if (ft_strchr(str[fd], '\n'))
			return (line = line_maker(str[fd]), str[fd] = l_c(str[fd]), line);
	}
	if (r == 0 && *str[fd])
	{
		line = ft_strdup(str[fd]);
		return (free(str[fd]), str[fd] = NULL, line);
	}
	return (free(str[fd]), str[fd] = NULL, NULL);
}
