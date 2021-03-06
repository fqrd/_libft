/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charpos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:54:00 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:30:15 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// return the char position on success
// returns -1 if not found
int	ft_charpos(char *str, char c)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
