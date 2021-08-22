/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:03:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/22 20:10:20 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

//		if ARG is a alphabetic value returns 1028.
int		ft_isalpha(int arg);
//		if ARG is a alphanumeric value returns 8.
int		ft_isalnum(int arg);
//		if ARG is part of ascii table then returns 1.
int		ft_isascii(int arg);
//		if ARG is a numeric value returns 2048.
int		ft_isdigit(int arg);
//		if ARG is printable value returns 16384.
int		ft_isprint(int arg);
//		Copy the SRC to DEST, it copies only until the N byte and then 
//		complete with null byte.
void	*ft_memcpy(void *dest, const void *src, size_t n);
//		Copy the SRC to DEST, it copies only until the N byte and then 
//		complete with null byte.
void	*ft_memmove(void *dest, const void *src, size_t n);
//		function fills the first N bytes of the memory area pointed to by PTR 
//		with the constant byte X.
void	*ft_memset(void *ptr, int x, size_t n);
//		Transform a string witha  number in a integer with the same value.
int		ft_atoi(const char *dest);
//		Adding a NULL byte in the adress of STR and more N more adresses after.
void	ft_bzero(void *str, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
//		Function locates the first N in the STR
char	*ft_strchr(const char *str, int n);
char	*ft_strrchr(const char *str, int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//		Function locates the first C in the STR, it searches only 
//		until the N byte
void	*ft_memchr(const void *str, int c, size_t n);
/// Function compares the STR to PTR if the first diference between the
/// STR and PTR, if the STR is greater then return a number > 0 if STR is 
/// greater the return a number < 0 if the compare ends with no difference 
/// then return 0,this funcitons compare the two pointer until the N Byte.
int		ft_memcmp(const void *str, const void *ptr, size_t n);
//		Function locates the first PTR in the STR, it searches only until the 
//		N byte.
char	*ft_strnstr(const char *str, const char *ptr, size_t n);
//		Allocate NELEM elements of SIZE bytes each, all initialized to 0.
void	*ft_calloc(size_t nelem, size_t size);
//		Copy the STR to a new pointer.
char	*ft_strdup(const char *str);
//		Copy the pointer of (S + START) and ends in the (LEN + START).
char	*ft_substr(char const *s, unsigned int start, size_t len);
//		Copy the S1 concat with S2.
char	*ft_strjoin(char const *s1, char const *s2);
//		Create a new pointer that points to the S1 - all the ocurrencies of 
//		the caractes of SET in the start and in the end of the S1.
char	*ft_strtrim(char const *s1, char const *set);

#endif
