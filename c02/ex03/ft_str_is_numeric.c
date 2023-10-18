/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:54:14 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 17:51:35 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char    *str = "1234567890";
	char	*str2 =	"972549872498g";
	char	*str3 =	"$^%&^&$@%wrwr";
	char	*str4 =	"wergergrwrgwerg";

	printf("str: %d ", ft_str_is_numeric(str));
	printf("str1: %d ", ft_str_is_numeric(str2));
	printf("str2: %d ", ft_str_is_numeric(str3));
	printf("str3: %d", ft_str_is_numeric(str4));
}*/
