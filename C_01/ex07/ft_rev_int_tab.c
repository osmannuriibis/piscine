/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:03:15 by oibis             #+#    #+#             */
/*   Updated: 2021/10/05 23:30:56 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	holder;

	holder = 0;
	count = 0;
	while (count < size / 2)
	{
		holder = *(tab + count);
		*(tab + count) = *(tab + size - count - 1);
		*(tab + size - 1 - count) = holder;
		count++;
	}
