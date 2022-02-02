/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:36:18 by oibis             #+#    #+#             */
/*   Updated: 2021/10/04 15:40:23 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	deger;

	deger = 0;
	while (deger <= '9')
	{
		write(1, &deger, 1);
		write(1, "\n", 1);
		deger++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
