/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaltine <akaltine@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:13:15 by akaltine          #+#    #+#             */
/*   Updated: 2023/06/19 03:17:09 by akaltine         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i - 0;
	while (s1[i] == s2[i] && s1[i] || s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int	main()
{
	ft_strcmp("altiner", "akif");
}
