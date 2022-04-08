/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:34:25 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:48:48 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// substr that frees the given string (char *s)
char	*ft_substr_f(char *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			llock;

	llock = 0;
	if (!s || len == 0 || start > ft_strlen(s))
	{
		substring = malloc(sizeof(char) * 1);
		if (!substring)
			return (NULL);
		ft_strlcpy(substring, "\0", 1);
		if (s)
			free(s);
		return (substring);
	}
	while (start + llock < ft_strlen(s) && llock < len)
		llock++;
	substring = malloc(sizeof(char) * (llock + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, llock + 1);
	if (s)
		free(s);
	return (substring);
}
