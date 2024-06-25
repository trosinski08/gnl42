/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:57:30 by trosinsk          #+#    #+#             */
/*   Updated: 2024/06/25 11:18:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

char	*line_cleaner(char *str)
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
	static char	*str = NULL;
	char		*line;
	char		buff[BUFFER_SIZE + 1];
	int			r;

	if ((fd < 0) || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 10000001
		|| read(fd, 0, 0) == -1)
		return (free(str), str = NULL, NULL);
	r = 1;
	while (r > 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r == -1 || (r == 0 && str == NULL))
			return (free(str), str = NULL, NULL);
		buff[r] = '\0';
		str = ft_strjoin(str, buff);
		if (ft_strchr(str, '\n'))
			return (line = line_maker(str), str = line_cleaner(str), line);
	}
	if (r == 0 && *str)
	{
		line = ft_strdup(str);
		return (free(str), str = NULL, line);
	}
	return (free(str), str = NULL, NULL);
}
