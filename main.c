
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

// void bzero(void *s, size_t n);
// size_t strlcat(char *restrict dst,const char * restrict src, size_t dstsize);
// gcc main.c -L. -lft
static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

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

	if(argc > 0 && *argv[0] != 0)
	{
		// "a is is ";
		char last[] = "***189543***";
		char first[] = "asdasdasdasd";
		char *p;
		p = ft_strjoin(last,first);
		printf("MyFt: %s \n",p);
		printf("MyFt: %s \n",last);
		// printf("frase: %s \n",last);
		// printf("Orig: %s \n",r);
		// strcpy(buffer , last);
		// printf("%d \n",ft_strncmp(r, last , 5));
		
	}
	return(0);
}
