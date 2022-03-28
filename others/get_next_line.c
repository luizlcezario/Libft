/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:16:44 by llima-ce          #+#    #+#             */
/*   Updated: 2022/03/16 20:26:58 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*concat_all(size_t end, int len, t_list **buffer_lists);
static char	*read_text(t_list **buffer_lists, t_list *last, int len, int fd);
static void	lts_to_str(t_list **buffer_lists, int str_len, char *res);

static void	free_ptr(void **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

char	*get_next_line(int fd)
{
	static t_list	*buffer_lists[MAX_FD + 1];
	char			*resf;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > MAX_FD)
		return (NULL);
	if (buffer_lists[fd] == NULL)
		buffer_lists[fd] = ft_lstnew(ft_strdup(""));
	resf = read_text(&buffer_lists[fd], buffer_lists[fd],
			ft_strlen(buffer_lists[fd]->content), fd);
	return (resf);
}

char	*read_text(t_list **buffer_lists, t_list *last, int len, int fd)
{
	char	*content;
	ssize_t	bytes_read;
	t_list	*end;

	content = ft_strchr(last->content, '\n');
	if (content != NULL)
	{
		bytes_read = ft_strlen(content + 1);
		return (concat_all(bytes_read, len, &buffer_lists[0]));
	}
	content = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	bytes_read = read(fd, content, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free_ptr((void **)&content);
		return (concat_all(bytes_read, len, &buffer_lists[0]));
	}
	else
		len += bytes_read;
	content[bytes_read] = 0;
	end = ft_lstnew(content);
	last->next = end;
	return (read_text(&buffer_lists[0], end, len, fd));
}

char	*concat_all(size_t end, int len, t_list **buffer_lists)
{
	int		str_len;
	char	*res;

	res = NULL;
	if (len <= 0)
	{
		free_ptr((void **)&buffer_lists[0]->content);
		free_ptr((void **)buffer_lists);
		return (NULL);
	}
	str_len = len - end;
	res = (char *)malloc(str_len + 1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[str_len] = 0;
	lts_to_str(buffer_lists, str_len, res);
	return (res);
}

static void	lts_to_str(t_list **buffer_lists, int str_len, char *res)
{
	t_list	*tmp;
	char	*content;
	int		a;

	a = 0;
	while (a < str_len)
	{
		tmp = buffer_lists[0];
		content = (char *)tmp->content;
		while (*content != 0 && a < str_len)
		{
			res[a] = *content;
			content++;
			a++;
		}
		if (*content != 0)
			buffer_lists[0]->next = ft_lstnew(ft_strdup(content));
		buffer_lists[0] = buffer_lists[0]->next;
		free_ptr((void **)&tmp->content);
		free_ptr((void **)&tmp);
	}
}
