/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:33:37 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/29 11:53:47 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_element)
{
	t_list	*tmp;

	if (new_element == NULL)
		return ;
	if (lst[0] == NULL)
		lst[0] = new_element;
	else
	{
		tmp = lst[0];
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_element;
	}
}
