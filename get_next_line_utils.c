/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 03:51:18 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/24 06:53:28 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstadd_gnl(t_list **lst, char *str)
{
	t_list	*new_one;
	t_list	*last_one;

	last_one = funkcja_do_znajdowania_ostatniego_elementu;
	new_one = NULL;
	if (NULL == new_one)
		return ;
	if (NULL == last_one)
		*list = new_pne;
	else
		last_one -> next == new_one;
	new_one ->buff = new_one;
	new_one -> next = NULL;
}
