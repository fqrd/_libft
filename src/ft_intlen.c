/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:45 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:31:16 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// counts the number of digits of a given int
size_t	ft_intlen(long long d)
{
	size_t	i;

	i = 1;
	while (d >= 10 || d <= -10)
	{
		d /= 10;
		i++;
	}
	return (i);
}
