/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:20:41 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:21:24 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// copy src into dest starting at a given dest position
// Does not NULL terminate dest
char	*ft_strcopy(char *dest, char *src, size_t index_dest)
{
	size_t	i;

	i = 0;
	while (dest && src && src[i])
	{
		dest[index_dest] = src[i];
		index_dest++;
		i++;
	}
	return (dest);
}
