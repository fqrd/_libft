  
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:34:49 by fcaquard          #+#    #+#             */
/*   Updated: 2021/05/08 15:49:43 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// static size_t	count_splits(char *str, unsigned char c)
// {
// 	size_t n;

// 	n = 1;
// 	while (*str)
// 	{
// 		if (*str && *str == c)
// 		{
// 			while (*str && *str == c)
// 				str++;
// 			n++;
// 		}
// 		str++;
// 	}
// 	return (n);
// }

static char	**cmalloc(char *sub, char **arr, size_t cell)
{
	arr[cell] = sub;
	if (!arr[cell])
	{
		arr = arr - cell;
		while (*arr)
			free(*arr++);
		free(arr);
		return (NULL);
	}
	return (arr);
}

static char	**split(char **array, char *str, unsigned char c)
{
	size_t	i;
	size_t	start;
	size_t	cell;

	cell = 0;
	start = 0;
	i = start;
	while (str[i])
	{
		if (str[i] && str[i] == c)
		{
			if (!cmalloc(ft_substr(str, start, (i - start)), array, cell))
				return (NULL);
			cell++;
			while (str[i] && str[i] == c)
				i++;
			start = i;
		}
		i++;
	}
	if (!cmalloc(ft_substr(str, start, (i - start)), array, cell))
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	char	*ps;
	char	**array;


	printf("\n*** %s && %s ***\n", (char *) s, &c);
	printf("PROBLEM IS CASTING (char *) on a char. No \\0 at the end.\n");


	if (!s)
		return (NULL);
	n = 0;
	ps = ft_strtrim((char *) s, &c);
	if (!ps)
		return (NULL);
	if (ft_strlen(ps))
		n = ft_countchar(ps, c);
	array = malloc(sizeof(char *) * n + 1 );
	if (!array)
		return (NULL);
	array[n] = NULL;
	if (n)
		split(array, ps, c);
	free(ps);
	if (!array)
		return (NULL);
	return (array);
}