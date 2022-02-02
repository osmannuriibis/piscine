/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:03:15 by oibis             #+#    #+#             */
/*   Updated: 2021/10/11 22:00:52 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cnt;
	int	holder;

	cnt = 0;
	while (cnt < size / 2)
	{
		holder = tab[cnt];
		tab[cnt] = tab[size - 1 - cnt];
		tab[size - 1 - cnt] = holder;
		cnt++;
	}
}
