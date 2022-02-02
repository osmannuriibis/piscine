/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:06:27 by oibis             #+#    #+#             */
/*   Updated: 2021/10/04 15:35:28 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	deger;

	deger = 'z';
	while (deger >= 'a' )
	{
		write(1, &deger, 1);
		write(1, "\n", 1);
		deger--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
