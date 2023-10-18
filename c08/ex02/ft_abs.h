/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:49:05 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/14 13:14:30 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) \
		({ \
		int abs_value; \
		if ((value) < 0) { \
			 abs_value = -(value); \
		} else { \
			abs_value = (value); \
			} \
			abs_value; \
		})

#endif
