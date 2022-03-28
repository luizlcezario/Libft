/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:06:17 by llima-ce          #+#    #+#             */
/*   Updated: 2022/03/16 15:46:21 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new1;

	new1 = malloc(1 * sizeof(t_list));
	if (new1 == NULL)
		return (NULL);
	new1->content = content;
	new1->next = (NULL);
	return (new1);
}
