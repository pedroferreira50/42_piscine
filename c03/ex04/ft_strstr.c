/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:31:01 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/07 16:21:33 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return ((void *)0);
}
/*
int main() {
    char haystack[] = "Hello, world!llo";
    char needle[] = "llo";

    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Needle found at index: %ld\n", result - haystack);
        printf("Matched substring: %s\n", result);
    } else {
        printf("Needle not found.\n");
    }

    return 0;
}*/
