/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:03:48 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/12 18:16:09 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin_two(int size, char **strs, char *sep, char *str)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i + 1 == size)
			str = ft_strcat(str, strs[i]);
		else
		{
			str = ft_strcat(str, strs[i]);
			str = ft_strcat(str, sep);
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		count;
	int		length;

	i = 0;
	count = 0;
	length = 0;
	if (size <= 0)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	while (size > count)
	{
		length = length + ft_strlen(strs[i]);
		i++;
		count++;
	}
	length = length + (ft_strlen(sep) * (size - 1));
	str = malloc((length + 1) * sizeof(char));
	str[0] = '\0';
	return (ft_strjoin_two(size, strs, sep, str));
}
/*
int	main(void)
{
	char	**strarr = malloc(6 * sizeof(char *));
	char	*str1 = "ola";
	char	*str2 = "eu";
	char	*str3 = "sou";
	char	*str4 = "o";
	char	*str5 = "Pedro";
	char	*str6 = "!";
	char	*sep = " - ";
	char	*test_string;

	strarr[0] = str1;
	strarr[1] = str2;
	strarr[2] = str3;
	strarr[3] = str4;
	strarr[4] = str5;
	strarr[5] = str6;

	test_string = ft_strjoin(6, strarr, sep);
	printf("%s", test_string);
	free(strarr);
	free(test_string);
	return (0);
}*/
