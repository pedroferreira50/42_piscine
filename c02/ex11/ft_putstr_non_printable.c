/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:57:32 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/02 16:41:57 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_hex(char character, char *hex_representation)
{
	const char	hex_lookup[] = "0123456789abcdef";

	hex_representation[0] = hex_lookup[(unsigned char)character / 16];
	hex_representation[1] = hex_lookup[(unsigned char)character % 16];
	hex_representation[2] = '\0';
}

int	ft_str_is_printable(char c)
{
	if (c < 32 || c == 127)
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]) == 0)
		{
			char_to_hex(str[i], hex);
			ft_putchar('\\');
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
/*
int	main(void)
{
	char str[] = "Hello!\n";
	char str2[] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(str);
	ft_putstr_non_printable(str2);
	return (0);
}*/
