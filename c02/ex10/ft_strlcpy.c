/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:53:42 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 18:44:24 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (temp < size - 1 && src[temp] != '\0')
		{
			dest[temp] = src[temp];
			temp++;
		}
		dest[temp] = '\0';
	}
	return (i);
}
/*
int	main()
{
	char	str[6] = "Hello";
	char	str2[6];

	ft_strlcpy(str2, str, 4);
	printf("%s\n", str2);
	printf("%s\n", str);
	printf("%d", ft_strlcpy(str2, str, 4));
	return 0;
}*/
