#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int c,d;

	c = 3;
	d = 1;

	ft_swap(&c, &d);
	printf("%d", c);
	printf("%d", d);
}
