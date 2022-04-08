/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcompare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:21:38 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:27:19 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// checks that the strings provided are the same
// returns 1 on success, 0 on error
int	ft_strcompare(const char *str, const char *test)
{
	size_t	i;

	i = 0;
	while (str && str[i] && test && test[i])
	{
		if (str[i] != test[i])
			return (0);
		i++;
	}
	if (str[i] != test[i])
		return (0);
	return (1);
}
