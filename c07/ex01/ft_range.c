/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:19:37 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 19:06:30 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	length;
	int	i;

	length = max - min;
	arr = malloc(length * sizeof(int));
	i = 0;
	if (min >= max)
		return ((void *)0);
	if (arr == ((void *)0))
		return ((void *)0);
	while (i < length)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*arr;
	int	i;

	i = 0;
	a = 0;
	b = 50;
	arr = ft_range(a, b);
	while (i < (b - a))
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
