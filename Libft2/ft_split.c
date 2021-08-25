/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/25 20:09:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fill_matrix(char const *s, char c, size_t num, char **res);
static size_t	CountN(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	num;

	res = NULL;
	if (!*s)
	{
		res = ft_calloc(1, sizeof(char *));
		return (res);
	}
	num = CountN(s, c);
	res = (char **)ft_calloc(num + 1, sizeof(char *));
	ft_fill_matrix(s, c, num, res);
	return (res);
}

static size_t	CountN(char const *s, char c)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	while (s[len])
	{
		if (s[len] == c)
		{
			while (s[len] == c)
				len++;
			count++;
		}
		else
			len++;
	}
	if (count == 0)
		count++;
	return (count);
}

static void	ft_fill_matrix(char const *s, char c, size_t num, char **res)
{
	size_t	count;
	int		start;
	int		lenWord;

	count = 0;
	lenWord = 0;
	// printf("%zu", num);
	while (count <= num)
	{
		start = lenWord;
		while (s[start] == c && s[start] != 0)
			++start && ++lenWord;
		while (s[lenWord] != c && s[lenWord] != 0)
			lenWord++;
		res[count] = ft_substr(s, start, lenWord - start);
		if(s[start] == 0 )
			res[count] = 0;
		count++;
	}
	res[count] = 0;
}
