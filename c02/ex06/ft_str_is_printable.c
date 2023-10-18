/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:31:49 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 18:01:53 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char    *str4 = "ierhghiuen\n";
	char	*str5 = "hjJHKHkjhkj\n";
	char	*str6 = "SKJHFKSDHFKn\n";

	printf("str: %d ", ft_str_is_printable(str));
	printf("str2: %d ", ft_str_is_printable(str2));
	printf("str3: %d ", ft_str_is_printable(str3));
	printf("str4: %d ", ft_str_is_printable(str4));
	printf("str5: %d ", ft_str_is_printable(str5));
	printf("str6: %d", ft_str_is_printable(str6));
	return (0);
}*/
