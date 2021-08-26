/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:53:59 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 12:55:19 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int arg)
{
	if ((arg <= 'z' && arg >= 'a') || (arg <= 'Z' && arg >= 'A'))
		return (1024);
	return (0);
}
