#include "libft.h"

int main()
{
	int a = 0;
	char **s = NULL;
	// char str[] ="Luiz s";
	// char str2[] = "  Luiz  42  ";

	// printf("1-test: %s\n",str2);
	// s = ft_split(str2, ' ');
	// while(s[a] != NULL)
	// 	printf("%d : %s \n", a, s[a]) && a++;
	// printf("cmp =%d cmp2=%d\n",strcmp(s[0], "Luiz"),strcmp(s[1], "42"));
	// free(s);

	// s = ft_split("tripouille", 0);
	// printf("2-test:\n");
	// printf("cmp=%d | cmp2=%s\n",strcmp(s[0], "tripouille"),s[0]);
	// free(s);


	printf("\n3-test: \n");
	s = ft_split("", 0);
	if(s[0] == NULL)
	/* 15 */ printf("3.ok  %d\n", *s[0]);
		else
			printf("3.ko\n");
	free(s);

	printf("\n4-test: \n");
	s = ft_split("     ",' ');
		if(s[0] == NULL)
	/* 15 */ printf("4.ok  %d\n", *s[0]);
		else
			printf("4.ko\n");
	free(s);



}
