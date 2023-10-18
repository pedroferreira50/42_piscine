/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:02:17 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/30 16:09:26 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, char a, char b, char c)
{
	int	i;

	i = 3;
	if (x > 0)
	{
		ft_putchar(a);
	}
	if (x > 1)
	{
		while (x >= i)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 3;
	if (x >= 1 && y >= 1)
	{
		if (y == 1)
		{
			first_line(x, 'A', 'B', 'C');
		}
		else
		{
			first_line(x, 'A', 'B', 'C');
			while (y >= i)
			{
				first_line(x, 'B', ' ', 'B');
				i++;
			}
			first_line(x, 'A', 'B', 'C');
		}
	}
}
