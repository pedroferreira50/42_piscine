/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:59 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 12:16:05 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else 
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(15));
	return (0);
}*/
