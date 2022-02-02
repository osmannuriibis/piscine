/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:47:32 by oibis             #+#    #+#             */
/*   Updated: 2021/10/14 21:47:42 by oibis            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_baselen(char *base)
{
	int	size;

	size = -1;
	while (base[++size])
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1) >= 0
			|| (base[size] >= 9 && base[size] <= 13))
			return (0);
	return (size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	negative;

	if (ft_baselen(base) < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = !negative;
	n = 0;
	while (ft_in_base(*str, base) >= 0)
	{
		n = n * ft_baselen(base) + ft_in_base(*str, base);
		str++;
	}
	if (negative)
		n *= -1;
	return (n);
}
