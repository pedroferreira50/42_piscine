/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:54 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/07 17:14:47 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd", str4[] = "abdd";
  int result;

  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2, 4);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strncmp(str1, str3, 4);
  printf("strcmp(str1, str3) = %d\n", result);

  result = ft_strncmp(str1, str4, 4);
  printf("strcmp(str1, str4) = %d\n", result);

  return 0;
}*/
