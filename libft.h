/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:03:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 20:19:53 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
 
#define isdigitMC(c) (c <= '9') && (c >= '0') ?{ 2048} : (c < 0) ? 0 :  
#include <unistd.h>
#include <stdlib.h>
int		ft_isalpha(int arg);
void	*ft_memcpy(void *dest,const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
int		ft_atoi(const char *dest);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *restrict dest,const char *restrict src, size_t size);
// ver se precisa de restrict tag
char	*ft_strcpy(char *dest,const char *src);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int n);
char	*ft_strrchr(const char *str, int n);
int		ft_strncmp(const char *s1,const char *s2,size_t n);

#endif
