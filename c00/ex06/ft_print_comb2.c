/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:02:15 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/27 16:52:38 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	organize_numbers(int a)
{
	int	b;
	int	c;

	b = a / 10;
	c = a % 10;
	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		ft_putchar(b + '0');
		ft_putchar(c + '0');
	}
}

void	print_numbers(int c, int d)
{
	if (c < 98)
	{
		organize_numbers(c);
		ft_putchar(' ');
		organize_numbers(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		organize_numbers(c);
		ft_putchar(' ');
		organize_numbers(d);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
