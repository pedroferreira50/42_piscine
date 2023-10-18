/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:03:39 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/29 15:18:48 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				min = j;
				ft_swap(&tab[min], &tab[i]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	arr[7] = {5, 4, 7, 2, 3, 1, 6};

	ft_sort_int_tab(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	return (0);
	
}*/
