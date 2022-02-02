/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:31:44 by oibis             #+#    #+#             */
/*   Updated: 2021/10/11 22:00:00 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	status;
	int	holder;

	status = 1;
	while (status == 1)
	{	
		counter = 0;
		status = 0;
		while (counter < size - 1)
		{
			if (*(tab + counter) > *(tab + 1 + counter))
			{
				holder = *(tab + counter);
				*(tab + counter) = *(tab + counter + 1);
				*(tab + counter + 1) = holder;
				status = 1;
			}
			counter++;
		}
	}
}
