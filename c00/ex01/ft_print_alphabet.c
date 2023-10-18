/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:02:41 by pviegas-          #+#    #+#             */
/*   Updated: 2023/07/27 19:20:05 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet_char;

	alphabet_char = 'a';
	while (alphabet_char <= 'z')
	{
		write(1, &alphabet_char, 1);
		alphabet_char++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
