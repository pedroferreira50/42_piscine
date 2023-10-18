/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:00:46 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/07 16:19:23 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size > 0)
	{
		while (k < size - 1 && src[k] != '\0')
		{
			dest[i + k] = src[k];
			k++;
		}
		dest[i + k] = '\0';
	}
	return (i + j);
}
/*
int main()
{
	char dest[20] = "Hello, ";
	char src[] = "world!";

	printf("Original dest: %s\n", dest);
	printf("Original src: %s\n", src);
	printf("Length concatenated: %d\n", ft_strlcat(dest, src, 4));
	printf("Concatenated: %s\n", dest);

	return 0;
}*/
