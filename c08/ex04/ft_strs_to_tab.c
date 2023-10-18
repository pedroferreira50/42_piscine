/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:27:48 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/16 11:31:37 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*struct_arr;
	int					i;

	i = 0;
	struct_arr = malloc((ac + 1) * (sizeof(struct s_stock_str)));
	if (struct_arr == NULL)
		return (NULL);
	while (i < ac)
	{
		struct_arr[i].size = ft_strlen(av[i]);
		struct_arr[i].str = av[i];
		struct_arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	struct_arr[i].str = 0;
	struct_arr[i].copy = 0;
	return (struct_arr);
}
