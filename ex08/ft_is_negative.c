#include <unistd.h>

char ft_putchar(char x)
{
	write(1, &x, 1);

	return(x);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int	main()
{
	ft_is_negative(-3);
}
