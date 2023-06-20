int	ft_iterative_factrorial(int nb)
{
	unsigned int result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return(0);
	}
	return (result);
}
