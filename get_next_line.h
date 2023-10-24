/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:56:35 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/24 03:56:15 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFF_SIZE
#  define BUFF_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct s_buff
{
	char			*buff;
	struct s_buff	*next;	
}					t_buff;

char	*get_next_line(int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif