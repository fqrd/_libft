/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:42:29 by fcaquard          #+#    #+#             */
/*   Updated: 2022/04/08 19:52:46 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// frees the malloc'd array and its content
// clear_array(array, ft_arrlen(array));
// return 0
int	ft_clear_array(char **array, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
	return (0);
}
