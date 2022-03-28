/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:54:40 by llima-ce          #+#    #+#             */
/*   Updated: 2022/03/16 15:46:13 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new1;

	if (!lst || !f)
		return (NULL);
	new1 = ft_lstnew(f(lst->content));
	if (new1 == NULL)
	{
		ft_lstclear(&new1, del);
		return (NULL);
	}
	new1->next = ft_lstmap(lst->next, f, del);
	return (new1);
}
