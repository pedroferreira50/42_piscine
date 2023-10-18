/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:03:32 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/27 16:54:13 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	if (a < '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	number_a;
	char	number_b;
	char	number_c;

	number_a = '0';
	while (number_a <= '7')
	{
		number_b = number_a + 1;
		while (number_b <= '8')
		{
			number_c = number_b + 1;
			while (number_c <= '9')
			{
				ft_putchar(number_a, number_b, number_c);
				number_c++;
			}
			number_b++;
		}
		number_a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
