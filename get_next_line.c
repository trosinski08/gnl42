/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:57:30 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/24 07:03:40 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// typedef struct s_buff
// {
// 	char			*buff;
// 	struct s_buff	*next;	
// }					t_buff;
	// buff = (t_buff *)malloc(sizeof(t_buff));
	// buff->buff = str;
	// buff->next = NULL;

void	list_creator(t_list **list, int fd)
{
	char	*str;
	ssize_t	bytesread;

	str = (char *)malloc(BUFF_SIZE + 1);
	if (!str)
		return ;
	bytesread = read(fd, str, BUFF_SIZE);
	if (bytesread == -1)
	{
		free(str);
		return ;
	}
	str[bytesread] = '\0';
	ft_lstadd_back_gnl(list, str);
}

char	*get_next_line(int fd)
{
	static t_buff		*list;
	char				*next_line;

	list == NULL;
	next_line = "0";
	if (read(fd, &next_line, 0) < 0)
		return (NULL);
	ist_creator(&list, fd)

	return (str);
}

int	main(void)
{
	printf("%s", get_next_line(0));
	return (0);
}

//1. stworz funkcje ktora odczyta buff_size znakow ze stringu
//2. doloz warunek, dzieki ktoremu buff size albo \n bezie konczyc odczyt
//3. stworze petle, w ktorej przekazesz kolejne linine do struct list
// uzgodnij return tak, aby zwracalo string
// alokuj i zwalniej pamiec na kazdym etapie
