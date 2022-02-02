/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:44:35 by oibis             #+#    #+#             */
/*   Updated: 2021/10/03 19:45:13 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char chr);

void	ft_print(int x, int left, int mid, int right)
{
	ft_putchar(left);

	while(x < 2)
	{
		ft_putchar(mid);
		x--;
	}
	if(x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x,int y)
{
	if(x > 0 && y > 0)
	{
		ft_print(x, 'o', '-', 'o');
		y--;

		while (y>1)
		{
			ft_print(x ,'|', ' ', '|');
				y--;
		}
		if(y>0)
		{
			ft_print(x, 'o', '-', 'o');
		}
	}
}
