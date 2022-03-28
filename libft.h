/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:03:35 by llima-ce          #+#    #+#             */
/*   Updated: 2022/03/28 17:16:22 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include "others/get_next_line.h"
#include "others/printf/ft_printf.h"

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#define INT_MAX 2147483647

#define INT_MIN -2147483648

//*******************************-Part_1-***************************************

/**
 * @brief if ARG is an alphabetic value returns 1024.
 * @param	arg.
 * @return 1024.
 */
int ft_isalpha(int arg);

/**
 * @brief if ARG is an alphabetic value returns 8.
 * @param	arg.
 * @return 8.
 */
int ft_isalnum(int arg);

/**
 * @brief if ARG is an ASCII value returns 1.
 * @param	arg.
 * @return	1.
 */
int ft_isascii(int arg);

/**
 * @brief if ARG is a number value returns 1.
 * @param	arg.
 * @return	2048.
 */
int ft_isdigit(int arg);

/**
 * @brief if ARG is a printable value returns 16384.
 * @param	arg.
 * @return	16384.
 */
int ft_isprint(int arg);

/**
 * @brief Function returns the lentgh of STR.
 *
 * @param str string to be counted.
 * @return length of the STR.
 */
size_t ft_strlen(const char *str);

/**
 * @brief function fills the first N bytes of the memory area pointed to by PTR
 * with the constant byte X.
 * @param	DEST pointer to the elements to be replaced.
 * @param	X character to be placed.
 * @param	N until the this bit.
 * @return	the dest with the copy of src.
 */
void *ft_memset(void *ptr, int x, size_t n);

/**
 * @brief Adding a NULL byte in the address of STR and more N more addresses
 * after.
 * @param str address to be add \0.
 * @param n add until this.
 */
void ft_bzero(void *str, size_t n);

/**
 * @brief Copy the SRC to DEST, it copies only until the N byte and then
 * complete with a null byte.
 * @param	DEST to be sub.
 * @param	SRC to be copy.
 * @param	N until this bit.
 * @return	the dest with the copy of src.
 */
void *ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copy the SRC to DEST, it copies only until the N byte and then
 * complete with a null byte.
 * @param	DEST to be sub.
 * @param	SRC to be copy.
 * @param	N until the this bit.
 * @return	the dest with the copy of src.
 */
void *ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Function copies the SRC to DEST,while dosen't reach the SIZE.
 *
 * @param dest strign to be recieve the copy.
 * @param src string to be copied.
 * @param size copy until this number.
 * @return is the len of SRC + DEST if SIZE < DEST then SRC + SIze.
 */
size_t ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Function tries to concat the SRC to DEST,while dosen't reach the SIZE.
 *
 * @param dest address to receive the concat
 * @param src address to be concat
 * @param size tries to concat until this.
 * @return is the size of SRC.
 */
size_t ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief Function trasform lowercase letter into uppercase.
 *
 * @param c to be verify
 * @return int
 */
int ft_toupper(int c);

/**
 * @brief Function trasform uppercase letter into lowercase.
 *
 * @param c to be verify
 * @return int
 */
int ft_tolower(int c);

/**
 * @brief Function locates the first N in the STR.
 *
 * @param str to be search
 * @param n to be find
 * @return the address of the first N.
 */
char *ft_strchr(const char *str, int n);

/**
 * @brief Function locates the last N in the STR.
 *
 * @param str to be search
 * @param n to be find
 * @return the address of the last N.
 */
char *ft_strrchr(const char *str, int n);

/**
 * @brief Function Comparer the S1 with the S2, until the N byte.
 *
 * @param s1 if the first difference is in this address greater the returns < 0
 * @param s2 if the first difference is in this address greater the returns > 0
 * @param n compare until this byte.
 * @return 0 for egual || > 0 for s1 || 0 < for s2
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Function locates the first C in the STR, it searches only until the N
 * byte
 * @param str to be searched.
 * @param c to be finded.
 * @param n search until this byte.
 * @return the addrres of the first C
 */
void *ft_memchr(const void *str, int c, size_t n);

/**
 * @brief Function compares the STR to PTR.
 * @param str if the first difference is in this address greater the returns < 0
 * @param ptr if the first difference is in this address greater the returns > 0
 * @param n compare until this byte.
 * @return 0 for egual || > 0 for str || 0 < for ptr
 */
int ft_memcmp(const void *str, const void *ptr, size_t n);

/**
 * @brief Function locates the first PTR in the STR, it searches only until the
 * N byte.
 * @param str to be searched.
 * @param ptr to be found.
 * @param n search until this byte.
 * @return the first ptr in str.
 */
char *ft_strnstr(const char *str, const char *ptr, size_t n);

/**
 * @brief Transform a string with a number in an integer with the same value.
 * @param dest string to be transformed in int.
 * @return int
 */
int ft_atoi(const char *dest);

/**
 * @brief Allocates memory and in each memory put one 0.
 *
 * @param nelem the amount of memory to be allocate.
 * @param size the size of the memory to be allocate.
 * @return address of the space that was allocated.
 */
void *ft_calloc(size_t nelem, size_t size);

/**
 * @brief Copy the STR to a new pointer.
 *
 * @param str the string to be copy
 * @return a new address with the same string of str.
 */
char *ft_strdup(const char *str);

//*******************************-part_2-**************************************

/**
 * @brief Copy the from the (S + START) to (LEN).
 *
 * @param s the address of the start of the string
 * @param start start the copy from here.
 * @param len number of the bytes to be copy.
 * @return a new address to with the copy.
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Copy the S1 concatenate with S2.
 *
 * @param s1 string to start the new string.
 * @param s2 string to end the new string.
 * @return new address with the s1 + s2.
 */
char *ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Create a new pointer that points to the S1 - all the ocurrencies of
 * the character of SET at the start and at the end of the S1.
 *
 * @param s1 string to be trimmed.
 * @param set the characteres to be trimmed in s1.
 * @return the new pointer with the string trimmed.
 */
char *ft_strtrim(char const *s1, char const *set);

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
 * @brief Transform the int N in the string with the value of N.
 *
 * @param n transform the int in a string the represents the int.
 * @return the string that's is equal to the int.
 */
char *ft_itoa(int n);

/**
 * @brief Applies the function F to each character of the string S to create
 * a new string resulting from successive applications of F.
 *
 * @param s string to be copy and modify.
 * @param f pointer to function to be used in each char of the S.
 * @return the string with the F applied in each Character of S.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as the first argument. Each character is
 * passed by address to f to be modified if necessary.
 *
 * @param s string to be copied and modified .
 * @param f pointer to function to be used in each char of the S.
 * @return the string with the F applied in each Character of S.
 */
void ft_striteri(char *s, void (*f)(unsigned int,
									char *));

/**
 * @brief Outputs the character C to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string S to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void ft_putstr_fd(char *s, int fd);

/**
 * @brief  write Description Outputs the string ’s’ to the given file
 * descriptor, followed by a newline.
 * @param s  The string to output.
 * @param fd The file descriptor on which to write.
 */
void ft_putendl_fd(char *s, int fd);
/**
 * @brief Outputs the integer N to the given file descriptor.
 * @param n	the integer to be printed.
 * @param fd the descriptor.
 */
void ft_putnbr_fd(int n, int fd);

//****************************** bonus ***************************************

/**
 * @brief Allocates and returns a new element of t_list. with the value of
 * CONTENT and the variable NEXT is initialized to NULL.
 *
 * @param content the string to be created to the new t_list.
 * @return returns the address of the new t_list element.
 */
t_list *ft_lstnew(void *content);

/**
 * @brief Add a new element to the start of the linked list appointed by lst.
 *
 * @param lst list of address of t_lists.
 * @param new elemt to be add to the start of the LST.
 */
void ft_lstadd_front(t_list **lst, t_list *new_element);

/**
 * @brief find the length of the linked list appointed by LST
 *
 * @param lst linked list to be count.
 * @return length of LST
 */
int ft_lstsize(t_list *lst);

/**
 * @brief find the last element of the linked list.
 *
 * @param lst address of a linked list.
 * @return the address of the linked list.
 */
t_list *ft_lstlast(t_list *lst);

/**
 * @brief add a new element to the linked list in the end.
 *
 * @param lst appointed a linked list.
 * @param new the new element to be added.
 */
void ft_lstadd_back(t_list **lst, t_list *new_element);

/**
 * @brief aplies the function DEL to the LST and them free the LST.
 *
 * @param lst linked element to be deleted and free.
 * @param del function to delete the element.
 */
void ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief applies the del function to the all elements of the linked list and
 * the free all
 *
 * @param lst list be clear and deleted.
 * @param del functions to delete the elements.
 */
void ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element.
 *
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element. Creates a new list resulting of the successive applications
 * of the function ’f’.
 *
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of an
 * element if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/****************************** others ****************************************/
/**
 * @brief Function search if have one letter of ptr in str and return the firts
 * letter
 *
 * @param str to be searched
 * @param ptr to search all
 * @return char* the address of the first letters of ptr
 */
char *ft_strfstr(const char *str, const char *ptr);
/**
 * @brief function transforma a number in base 10 to base that was passed in
 * the variable BASE
 *
 * @param number number to be transfomrmad
 * @param base the base
 * @return char* a adress with the number transformed
 */
char *ft_itoa_base(size_t number, char *base);

/**
 * @brief transform a string in a number and leaading with errors of the string
 *
 * @param str string
 * @param err number of errors
 * @return int number of the string
 */
int ft_new_atoi(const char *str, int *err);

#endif
