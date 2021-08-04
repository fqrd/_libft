/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:05:46 by fcaquard          #+#    #+#             */
/*   Updated: 2021/08/04 19:14:45 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c );
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

void	ft_putnbr(long long nb);
void	ft_putchar(unsigned char c);
void	ft_putstr(char *s);

size_t	ft_strlen(const char *str);
size_t	ft_intlen(long long d);

int		ft_power(int nb, int power);

#endif