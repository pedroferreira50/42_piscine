/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:27:51 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/29 15:35:00 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 54;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d b = %d", a, b);
	return (0);
}*/
