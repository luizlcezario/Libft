
int ft_atoi(const char *dest)
{
	int	sign;
	int	num;
	int	a;

	a = 0;
	while (dest[a] == 32)
		a++;
	sign = 1;
	if (dest[a] == '+' || dest[a] == '-')
	{
		if (dest[a] == '-')
			sign = -sign;
		a++;
	}
	num = 0;
	while (dest[a] <= '9' && dest[a] >= '0')
	{
		num *= 10;
		num = num + dest[a] - 48; 
		a++;
	}
	return (num * sign);
}
