/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:57:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/29 11:53:39 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_element)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new_element;
	else
	{
		tmp = new_element;
		tmp->next = *lst;
		*lst = tmp;
	}
}
