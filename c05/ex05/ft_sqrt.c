/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:41:07 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 16:18:28 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	num;

	num = 1;
	if (nb == 1 || nb == 0)
		return (nb);
	if (nb < 0)
		return (0);
	while (num * num <= nb)
		num++;
	if ((num - 1) * (num - 1) == nb)
		return (num - 1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}*/
