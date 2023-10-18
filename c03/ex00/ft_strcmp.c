/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:57:59 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/05 10:56:36 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
/*
int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd", str4[] = "abdd";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  result = ft_strcmp(str1, str4);
  printf("strcmp(str1, str4) = %d\n", result);

  return 0;
}*/
