/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/10 23:47:54 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fill_matrix(char const *s, char c, size_t num, char **res);
static size_t	CountS(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	num;

	res = NULL;
	if (!s)
		return (NULL);
	num = CountS(s, c);
	res = (char **)malloc(sizeof(char *) * (num + 1));
	if (!res)
		return (NULL);
	ft_fill_matrix(s, c, num, res);
	return (res);
}


static size_t	CountS(char const *s, char c)
{
	size_t		count;
	char		*tmp;

	tmp = (char *)s;
	count = 0;
	while(*tmp != 0)
	{
		while (*tmp == c && *tmp != 0)
			++tmp;
		while (*tmp != c && *tmp != 0)
			++tmp;
		if(*(tmp - 1) != c)
			count++;
	}
	return(count);
}

static void	ft_fill_matrix(char const *s, char c, size_t num, char **res)
{
	size_t	count;
	char	*start_str;
	int		lenWord;

	count = 0;
	start_str = (char *)s;
	while (count < num)
	{
		lenWord = 0;
		while (*start_str == c && *start_str != 0)
			++start_str;
		while (start_str[lenWord] != c && start_str[lenWord] != 0)
			lenWord++;
		res[count] = ft_substr(start_str, 0, lenWord);
		start_str += lenWord;
		count++;
	}
	res[count] = 0;
}
