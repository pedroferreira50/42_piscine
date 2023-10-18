/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:32:06 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 21:39:57 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str = "1234567890";
	char	*str2 = "43568943865g";
	char	*str3 = "$#^%wqefwq";
	char	*str4 = "ierhghiue";

	printf("str: %d ", ft_str_is_alpha(str));
	printf("str1: %d ", ft_str_is_alpha(str2));
	printf("str2: %d ", ft_str_is_alpha(str3));
	printf("str3: %d", ft_str_is_alpha(str4));
	return (0);
}*/
