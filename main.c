
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

// void bzero(void *s, size_t n);
// size_t strlcat(char *restrict dst,const char * restrict src, size_t dstsize);
// gcc main.c -L. -lft
int	main(int argc,char **argv)
{
	// ***************MEMSET_C***************
	// char str[9] = "";
	// printf("Original MEMSET:%s \n", str);
	// memset(str , '.', 2*sizeof(char));
	// printf("Modifie by Orig: %s \n",str);
	// ft_memset(str , '.', 2*sizeof(char));
	// printf("Modifie by MyFT: %s \n", str);

	// ***************BZERO_C***************
	// char str[5] = "Geeks";
	// printf("Original: %s \n", str);
	// bzero(str + 6,(size_t)1);
	// printf("Modifie by Orig: %s \n", str);
	// ft_bzero(str + 6,(size_t)1);
	// printf("Modifie by MyFT: %s \n", str);

	// ***************ATOI***************
	// int n;
	// int d;
	// printf("Original ATOI: %s \n", argv[1]);
	// n = atoi(argv[1]);
	// printf("Orig: %d \n", n);
	// d = ft_atoi(argv[1]);
	// printf("MyFT: %d \n", d);
	// ft_memcpy(str + 8,ptr , 4);
	
	
	// ***************TOUPPER***************
    // char first[] = "This is ";
    // char last[] = "a potentially long string";
    // int r = 0;
    // int size = 0;
    // char buffer[size];
	// for(size = -1000; size <= 1000; size++)
	// {
	// 	if(toupper(size) != ft_toupper(size) )
	// 	{
	// 		printf("Value Ft: %d  Original: %d\n",ft_toupper(size),toupper(size));
	// 		r++;
	// 	}
	// }
	// printf("erros: %d \n", r);
	// }

	// *******************AULA*********************
	if(argc > 0 && *argv[0] != 0)
	{
	int r = 0;
	int size = 0;
	for(size = 0; size <= 200; size++)
	{
		if(isdigit(size) != ft_isdigit(size))
		{
			printf("Value Mc: %d Value Ft: %d size: %d\n",isdigit(size),ft_isdigit(size), size);
		}
		r++;
	}
	
	printf("erros: %d \n", r);
	}
	// if(argc > 0 && *argv[0] != 0)
	// {
	// 	char first[] = "a is is ";
	// 	char last[] = "a potenti2lly long string asd";
	// 	// int r = 0;
	// 	int size = 30;
	// 	char buffer[size];
		
	// 	strcpy(buffer , last);
	// 	printf("%d \n",strncmp( first, last , 5));
	// 	strcpy(buffer , last);
	// 	printf("%d \n",ft_strncmp(first, last , 5));
	// }
	return(0);
}
