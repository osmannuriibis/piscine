/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:25:41 by oibis             #+#    #+#             */
/*   Updated: 2021/10/04 19:16:24 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nmbrs_will_be_printed(char f, char m, char l)
{
	if (f < m && m < l)
	{
		ft_putchar(f);
		ft_putchar(m);
		ft_putchar(l);
		if (f != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	f;
	int	m;
	int	l;

	f = 0;
	while (f <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			l = 0;
			while (l <= 9)
			{
				nmbrs_will_be_printed(f + '0', m + '0', l + '0');
				l++;
			}
			m++;
		}
		f++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
