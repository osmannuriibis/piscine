/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 02:21:05 by oibis             #+#    #+#             */
/*   Updated: 2021/10/19 02:24:25 by oibis            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writestr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcompare(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

int	main(int ac, char **av)
{
	int		k;
	int		l;
	char	*src;

	if (ac > 1)
	{
		k = 0;
		while (++k < ac)
		{
			l = k;
			while (++l < ac)
			{
				if (ft_strcompare(av[k], av[l]) > 0)
				{
					src = av[k];
					av[k] = av[l];
					av[l] = src;
				}
			}
		}
		k = 0;
		while (++k < ac)
			ft_writestr(av[k]);
	}
	return (0);
}
