/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:05:46 by fcaquard          #+#    #+#             */
/*   Updated: 2021/08/06 12:42:05 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

// ascii
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c );
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

// char change
int		ft_tolower(int c);
int		ft_toupper(int c);

// type change
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

// print
void	ft_putnbr(long long nb);
void	ft_putchar(unsigned char c);
void	ft_putstr(char *s);

// sizes
size_t	ft_strlen(const char *str);
size_t	ft_intlen(long long d);

// math
int		ft_power(int nb, int power);
size_t	ft_countchar(char *str, char c);

// strings
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

// memory
void	*ft_calloc(size_t nmemb, size_t size);
#endif