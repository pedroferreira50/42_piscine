/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:33:04 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 19:20:31 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	length;
	int	i;

	length = max - min;
	arr = malloc(length * sizeof(int));
	i = 0;
	if (min >= max)
	{
		*range = ((void *)0);
		return (0);
	}
	if (arr == ((void *)0))
	{
		*range = ((void *)0);
		return (-1);
	}
	while (i < length)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
/*
int	main(void)
{
	int	*arr;
	int	a;
	int	b;
	int	i;

	i = 0;
	a = 2;
	b = 5;
	printf("%d\n", ft_ultimate_range(&arr, a, b));
	while (i < (b - a))
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
}*/
