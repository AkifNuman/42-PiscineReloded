/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaltine <akaltine@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:40:11 by akaltine          #+#    #+#             */
/*   Updated: 2023/06/18 01:42:59 by akaltine         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_numbers(void)
{
	char a;

	a = '0';
	while(a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int	main()
{
	ft_print_numbers();
}
