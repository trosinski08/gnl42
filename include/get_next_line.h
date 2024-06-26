/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:56:35 by trosinsk          #+#    #+#             */
/*   Updated: 2024/06/27 21:19:39 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

# include "../../libft/include/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
// char	*ft_strjoin(char *s1, char *s2);
// char	*ft_strchr(char *s, int c);
// size_t	ft_strlen(char *str);
// char	*ft_substr(char *s, unsigned int start, size_t len);
// char	*ft_strdup(char *s);
char	*line_cleaner(char *str);
char	*line_maker(char *str);

#endif
