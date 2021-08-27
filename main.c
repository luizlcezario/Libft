#include "libft.h"

int main(int argc, char **argv)
{

	int a = 0;
	char **s = NULL;
	int arg;
	// char str[] ="Luiz s";
	// char str2[] = "  Luiz  42  ";

	// printf("1-test: %s\n",str2);
	// s = ft_split(str2, ' ');
	// while(s[a] != NULL)
	// 	printf("%d : %s \n", a, s[a]) && a++;
	// printf("cmp =%d cmp2=%d\n",strcmp(s[0], "Luiz"),strcmp(s[1], "42"));
	// free(s);


	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
	{
		if(ft_split("          ", ' ') == NULL)
			printf("OK");
		else
			printf("KO");
	}
	else if (arg == 2)
	{
		char *r[] ={"lorem","ipsum","dolor","sit","amet,","consectetur","adipiscing","elit.","Sed","non","risus.","Suspendisse"};
		s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non makrisus. Suspendisse", ' ');
		printf("2-test:\n");
		while(s[a] != 0)
		{
			printf("%d-%s=%s|cmp=%d \n",a, s[a],r[a], s[a] == r[a]);
			a++;
		}
		free(s);
	}
	else if (arg == 3)
	{
		char *r[] ={"lorem","ipsum","dolor","sit","amet,","consectetur","adipiscing","elit.","Sed","non","risus.","Suspendisse"};
		s = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
		printf("2-test:\n");
		while(s[a] != 0)
		{
			printf("%d-%s=%s|cmp=%d \n",a, s[a],r[a], s[a] == r[a]);
			a++;
		}
		free(s);
	}
	else if (arg == 4)
	{
		char *r[] ={"lorem ","psum dolor s","t amet, consectetur ad","p","sc","ng el","t. Sed non r","sus. Suspend","sse lectus tortor, d","gn","ss","m s","t amet, ad","p","sc","ng nec, ultr","c","es sed, dolor. Cras elementum ultr","c","es d","am. Maecenas l","gula massa, var","us a, semper congue, eu","smod non, m",".",};
		s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
		printf("2-test:\n");
		while(s[a] != 0)
		{
			printf("%d-%s=%s|cmp=%d \n",a, s[a],r[a], s[a] == r[a]);
			a++;
		}
		free(s);
	}
	else if (arg == 5)
	{
		char *r[] ={"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.",""};
		s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
		printf("2-test:\n");
		while(s[a] != 0)
		{
			printf("%d-%s=%s|cmp=%d \n",a, s[a],r[a], s[a] == r[a]);
			a++;
		}
		free(s);
	}
	else if(arg == 6)
	{
		printf("memcmp:\t\t");
	if(ft_memcmp("", "test", 4) == memcmp("", "test", 4))
		printf("5.OK ");
	else
	{
		printf("5.KO ");
		printf("{ %d = %d }",ft_memcmp("", "test", 4) ,memcmp("", "test", 4));
	}
	if(ft_memcmp("test", "", 4) == memcmp("test", "", 4))
		printf("6.OK ");
	else
	{
		printf("6.KO ");
		printf("{ %d = %d }",ft_memcmp("test", "", 4) ,memcmp("test", "", 4));
	}
	printf("\n");
	}
	else if(arg == 8)
	{
		printf("itoa:\t\t");
		printf("1.%s ",ft_itoa(-9));
		printf("2.%s ",ft_itoa(-INT_MAX));
		printf("3.%s ",ft_itoa(INT_MIN));
		printf("\n");
	}
	

	// printf("\n3-test: \n");
	// s = ft_split("", 0);
	// if(s[0] == NULL)
	// /* 15 */ printf("3.ok  %d\n", *s[0]);
	// 	else
	// 		printf("3.ko\n");
	// free(s);

	// printf("\n4-test: \n");
	// s = ft_split("     ",' ');
	// 	if(s[0] == NULL)
	// /* 15 */ printf("4.ok  %d\n", *s[0]);
	// 	else
	// 		printf("4.ko\n");
	// free(s);



}
