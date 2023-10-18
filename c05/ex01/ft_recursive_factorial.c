/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:26:58 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 12:19:53 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/
