/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:02:21 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/29 15:21:22 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(arr, 5);
	for (int i = 0; i < 5; i++)
	{     
		printf("%d", arr[i]);     
	}      
	return 0;
}*/
