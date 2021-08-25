#include "libft.h"
#include <stdio.h>

int main()
{
	char **s;
	s = ft_split("luiz lima cezario", ' ');
	/* 5 */ printf("%s",s[0]);
}
