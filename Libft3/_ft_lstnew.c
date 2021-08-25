/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:06:17 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/24 22:12:32 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	size_t	len;

	new = malloc(2 *sizeof(t_list));
	len = ft_strlen(content);
	new->content = ft_strdup(content);
	new->next = (NULL);
	return(new);
}
