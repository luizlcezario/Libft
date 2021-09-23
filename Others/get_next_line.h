/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:16:46 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/23 14:43:26 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef MAX_FD
#  define MAX_FD 256
# endif

# include <unistd.h>
# include <stdlib.h>
#include "../libft.h"

typedef enum e_bool
{
	FALSE = 0,
	TRUE = !FALSE,
}			t_bool;

/**
 * @brief Get the next line linked, this funcitons is for get a next line of a
 * file descriptor is possible to be the standard input and output or others 
 * files that's open.
 * 
 * @param fd File Descriptor that's the addres of a file or somenthig thats is 
 * reachable by your program
 * @return returns the next line of the file thts is reading.
 */
char	*get_next_line_linked(int fd);

/**
 * @brief Get the next line, this funcitons is for get a next line of a
 * file descriptor is possible to be the standard input and output or others 
 * files that's open.
 * 
 * @param fd File Descriptor that's the addres of a file or somenthig thats is 
 * reachable by your program
 * @return returns the next line of the file thts is reading.
 */
char	*get_next_line(int fd);

#endif
