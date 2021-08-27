/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:03:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 18:34:33 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
teste1 - fails
putnbr_fd 
strrchr

teste2 - fails
strrchr
!memcpy
!memmove
!trim
*/


#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

# define INT_MAX 2147483647

# define INT_MIN -2147483648


//*******************************-Part_1-***************************************

/**
 * @brief if ARG is a alphabetic value returns 1024.
 * @param	arg.
 * @return 1024.
*/		
int		ft_isalpha(int arg);

/**
 * @brief if ARG is a alphabetic value returns 8.
 * @param	arg.
 * @return 8.
*/
int		ft_isalnum(int arg);

/**
 * @brief if ARG is a ascii value returns 1.
 * @param	arg.
 * @return	1.
*/
int		ft_isascii(int arg);

/**
 * @brief if ARG is a number value returns 1.
 * @param	arg.
 * @return	2048.
*/
int		ft_isdigit(int arg);

/**
 * @brief if ARG is a printable value returns 16384.
 * @param	arg.
 * @return	16384.
*/
int		ft_isprint(int arg);

/**
 * @brief 	Function return the lentgh of STR
 * 
 * @param str string to be counted.
 * @return length of th STR.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief function fills the first N bytes of the memory area pointed to by PTR 
 * with the constant byte X.
 * @param	DEST pointer to the elements to be replaced.
 * @param	X caracter to be placed.
 * @param	N until the this bit.
 * @return	the dest with the copy of src.
*/
void	*ft_memset(void *ptr, int x, size_t n);

/**
 * @brief Addding a NULL byte in the address of STR and more N more addresses 
 * after.
 * @param str address to be addd \0.
 * @param n addd until this.
 */
void	ft_bzero(void *str, size_t n);

/**
 * @brief Copy the SRC to DEST, it copies only until the N byte and then 
 * complete with null byte.
 * @param	DEST to be sub.
 * @param	SRC to be copy.
 * @param	N until the this bit.
 * @return	the dest with the copy of src.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copy the SRC to DEST, it copies only until the N byte and then 
 * complete with null byte.
 * @param	DEST to be sub.
 * @param	SRC to be copy.
 * @param	N until the this bit.
 * @return	the dest with the copy of src.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Function copies the SRC to DEST,while dosen't reach the SIZE.
 * 
 * @param dest strign to be recieve the copy.
 * @param src string to be copied.
 * @param size copy until this number.
 * @return is the len of SRC + DEST if SIZE < DEST then SRC + SIze.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Function tries to concat the SRC to DEST,while dosen't reach the SIZE.
 * 
 * @param dest address to receive the concat 
 * @param src address to be concat
 * @param size tries to concat until this.
 * @return is the size of SRC.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief Function trasform lowercase letter into uppercase.
 * 
 * @param c to be verify
 * @return int
 */		
int		ft_toupper(int c);

/**
 * @brief Function trasform uppercase letter into lowercase.
 * 
 * @param c to be verify
 * @return int 
 */
int		ft_tolower(int c);

/**
 * @brief Function locates the first N in the STR.
 * 
 * @param str to be search
 * @param n to be find
 * @return the address of the first N.
 */
char	*ft_strchr(const char *str, int n);

/**
 * @brief Function locates the last N in the STR.
 * 
 * @param str to be search
 * @param n to be find
 * @return the address of the last N.
 */
char	*ft_strrchr(const char *str, int n);

/**
 * @brief Function Comparer the S1 with the S2, until the N byte.
 * 
 * @param s1 if the first difference is in this address greater the returns < 0
 * @param s2 if the first difference is in this address greater the returns > 0
 * @param n compare until this byte.
 * @return 0 for egual || > 0 for s1 || 0 < for s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);


/**
 * @brief Function locates the first C in the STR, it searches only until the N 
 * byte
 * @param str to be searched.
 * @param c to be finded.
 * @param n search until this byte.
 * @return the addrres of the first C
 */	
void	*ft_memchr(const void *str, int c, size_t n);

/**
 * @brief Function compares the STR to PTR.
 * @param str if the first difference is in this address greater the returns < 0
 * @param ptr if the first difference is in this address greater the returns > 0
 * @param n compare until this byte.
 * @return 0 for egual || > 0 for str || 0 < for ptr
 */
int		ft_memcmp(const void *str, const void *ptr, size_t n);


/**
 * @brief Function locates the first PTR in the STR, it searches only until the 
 * N byte.
 * @param str to be searched.
 * @param ptr to be finded.
 * @param n search until this byte.
 * @return the first ptr in str.
 */
char	*ft_strnstr(const char *str, const char *ptr, size_t n);

/**
 * @brief Transform a string witha  number in a integer with the same value.
 * @param dest string to be transforme in int.
 * @return int
 */
int		ft_atoi(const char *dest);

/**
 * @brief Allocates memory and in each memory put one 0.
 * 
 * @param nelem the amount of memory to be allocate
 * @param size the size of the memory to be allocate
 * @return address of the space that was allocated.
 */
void	*ft_calloc(size_t nelem, size_t size);

/**
 * @brief Copy the STR to a new pointer.
 * 
 * @param str the string to be copy
 * @return a new adrres with the same same string of str
 */
char	*ft_strdup(const char *str);

//*******************************-part_2-**************************************

/**
 * @brief Copy the from the (S + START) to (LEN).
 * 
 * @param s the adrres of the start of the string
 * @param start start the copie from here.
 * @param len number of the bytes to be copy.
 * @return a new andress to with the copie.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Copy the S1 concat with S2.
 * 
 * @param s1 string to start the new string.
 * @param s2 string to end the new string.
 * @return new address with the s1 + s2.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Create a new pointer that points to the S1 - all the ocurrencies of 
 * the caractes of SET in the start and in the end of the S1.
 * 
 * @param s1 string to be trimed 
 * @param set the caracteres to be trimed in s1
 * @return the new pointer with the string trimed
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Function separe the string S in a Matrix with the separator C
 * 
 * @param s string to be splited
 * @param c the caracter that will be used to separate the string
 * @return a pointer to the other pointer that have all the parters of the
 * splited string S
 */
char **ft_split(char const *s, char c);

/**
 * @brief Transform the int N in the a string with the value of N.
 * 
 * @param n transform the int in a string the represents the int.
 * @return the string thats is igual to the int.
 */
char	*ft_itoa(int n);

//		Create a new string with the function F() aplies to each char of S
char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char));

//		aplies the F() function to each char of the S
void	ft_striteri(char *s, void (*f)(unsigned int,
char*));

//		Print char C with the descriptor FD
void	ft_putchar_fd(char c, int fd);

//		Print string S with the descriptor FD
void	ft_putstr_fd(char *s, int fd);

//		print a integer N with the descriptor FD
void	ft_putnbr_fd(int n, int fd);

//		print the S strig with the \n in the end
void	ft_putendl_fd(char *s, int fd);

//		Create a new element for be linking tothe rest of the array 
t_list	*ft_lstnew(void *content);

#endif
