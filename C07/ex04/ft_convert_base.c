/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:10:45 by oibis             #+#    #+#             */
/*   Updated: 2021/10/21 03:20:13 by oibis            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*itoa(int nb, char *base);
int		ft_atoi_base(char *str, char *base);
int		check_base(char *base);

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int	ft_digits(int nb)
{
	int	c;

	c = 1;
	if (nb < 0)
		nb *= -1;
	while (nb / 10 >= 1)
	{
		c++;
		nb /= 10;
	}
	return (c);
}

int	is_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\f' || c == '\n' || \
			c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num_int;

	if (check_base(base_from) && check_base(base_to))
	{
		num_int = ft_atoi_base(nbr, base_from);
		return (itoa(num_int, base_to));
	}
	else
		return (0);
}
