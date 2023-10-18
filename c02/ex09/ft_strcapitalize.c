/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:08:39 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/01 21:44:45 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	is_new_word(char c)
{
	if ((c < 'A' || (c > 'Z' && c < 'a') || c > 'z') && (c < '0' || c > '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || is_new_word(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "kjshfkHKHKJHjfh 435wergew DFSDFdfgfd ADSFSsdfs34fsdf 234dsf";
	char	str2[] = "kwejflLDFGHFsdf WQERW	GERGdfgdf $#^sadf,qwerJHGJHG";
	char	str3[] = "354kjhkjHJ45";
	char	str4[] = "#$^%wetr#%HJHJH345jhjh";
	char	str5[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	return (0);
}*/
