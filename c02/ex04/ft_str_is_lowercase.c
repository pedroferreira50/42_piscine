/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:04:47 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 17:58:18 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char    *str = "1234567890";
	char    *str2 = "43568943865g";
	char    *str3 = "$#^%wqefwq";
	char    *str4 = "ierhghiue";
	char	*str5 = "hjJHKHkjhkj";

	printf("str: %d ", ft_str_is_lowercase(str));
	printf("str2: %d ", ft_str_is_lowercase(str2));
	printf("str3: %d ", ft_str_is_lowercase(str3));
	printf("str4: %d ", ft_str_is_lowercase(str4));
	printf("str5: %d", ft_str_is_lowercase(str5));
	return (0);
}*/
