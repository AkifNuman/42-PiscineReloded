#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int *nbr;
	int nb;

	nbr = &nb;
	ft_ft(nbr);
	printf("%d", nb);
}
