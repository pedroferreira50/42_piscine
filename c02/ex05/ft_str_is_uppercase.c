/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:22:50 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 17:59:19 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char	*str6 = "SKJHFKSDHFK";

	printf("str: %d ", ft_str_is_uppercase(str));
	printf("str2: %d ", ft_str_is_uppercase(str2));
	printf("str3: %d ", ft_str_is_uppercase(str3));
	printf("str4: %d ", ft_str_is_uppercase(str4));
	printf("str5: %d ", ft_str_is_uppercase(str5));
	printf("str6: %d", ft_str_is_uppercase(str6));
	return (0);
}*/
