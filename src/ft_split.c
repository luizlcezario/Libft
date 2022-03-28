/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 17:02:55 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fill_matrix(char const *s, char c, size_t num, char **res);
static size_t	count_s(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	num;

	res = NULL;
	if (!s)
		return (NULL);
	num = count_s(s, c);
	res = (char **)malloc(sizeof(char *) * (num + 1));
	if (!res)
		return (NULL);
	ft_fill_matrix(s, c, num, res);
	return (res);
}

static size_t	count_s(char const *s, char c)
{
	size_t		count;
	char		*tmp;

	tmp = (char *)s;
	count = 0;
	while (*tmp != 0)
	{
		while (*tmp == c && *tmp != 0)
			++tmp;
		while (*tmp != c && *tmp != 0)
			++tmp;
		if (*(tmp - 1) != c)
			count++;
	}
	return (count);
}

static void	ft_fill_matrix(char const *s, char c, size_t num, char **res)
{
	size_t	count;
	char	*start_str;
	int		len_word;

	count = 0;
	start_str = (char *)s;
	while (count < num)
	{
		len_word = 0;
		while (*start_str == c && *start_str != 0)
			++start_str;
		while (start_str[len_word] != c && start_str[len_word] != 0)
			len_word++;
		res[count] = ft_substr(start_str, 0, len_word);
		start_str += len_word;
		count++;
	}
	res[count] = 0;
}
