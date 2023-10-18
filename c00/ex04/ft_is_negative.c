/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:37:55 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/26 13:02:02 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	char_n; 
	char	char_p;

	char_n = 'N';
	char_p = 'P';
	if (n < 0)
	{
		write(1, &char_n, 1);
	}
	else
	{
		write(1, &char_p, 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = -5;
	ft_is_negative(n);
	return (0);
}*/
