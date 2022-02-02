/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:48:18 by oibis             #+#    #+#             */
/*   Updated: 2021/10/21 03:18:01 by oibis            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_base(char c, char *base);
int	is_space(char c);
int	ft_strlen(char *s);

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	index_of_base(unsigned char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	sign;
	int	i;
	int	num;

	num = 0;
	sign = 0;
	if (!check_base(base))
		return (0);
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
		nbr++;
	while ((*nbr == '+' || *nbr == '-') && *nbr)
	{
		if (*nbr++ == '-')
			sign = !sign;
	}
	i = 0;
	while (is_in_base(nbr[i], base) && nbr[i])
	{
		num = (num * check_base(base)) + (index_of_base(nbr[i], base));
		i++;
	}
	if (sign)
		num *= -1;
	return (num);
}

void	ft_rev_s(char *tab)
{
	int	temp;
	int	i;
	int	half;
	int	size;

	i = 0;
	temp = 0;
	size = 0;
	while (tab[i++])
		size++;
	i = 0;
	half = size / 2;
	if (*tab == '-')
		i++;
	while (half-- > 0)
	{
		temp = tab[i];
		tab[i++] = tab[size - 1];
		tab[size-- - 1] = temp;
	}
}

char	*itoa(int nb, char *base)
{
	int				i;
	unsigned int	n;
	char			*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(base));
	if (!tmp)
		return (0);
	i = 0;
	if (nb < 0)
	{
		tmp[i++] = '-';
		n = nb * -1;
	}
	else
		n = nb;
	if (n == 0)
		tmp[i++] = base[0];
	while (n)
	{
		tmp[i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	tmp[i] = '\0';
	ft_rev_s(tmp);
	return (tmp);
}
