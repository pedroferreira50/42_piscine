/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:13:48 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/13 19:02:40 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		length;

	if (src == (void *)0)
		return ((void *)0);
	length = ft_strlen(src);
	str = malloc((length + 1) * sizeof(char));
	if (str != (void *)0)
		ft_strcpy(str, src);
	return (str);
}
/*
int	main(void)
{
	char	*str = "ola amiguinho";
	char	*test1;
	char	*test2;

	test1 = ft_strdup(str);
	test2 = strdup(str);

	printf("%s\n", test1);
	printf("%s", test2);
	free(test1);
	free(test2);
	return (0);
}*/
