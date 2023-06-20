#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a,b,c,d;

	a = 10;
	b = 2;
    int *div, *mod;

	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	printf("%d", a);
	printf("%d", b);
}
