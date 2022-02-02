/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:58 by oibis             #+#    #+#             */
/*   Updated: 2021/10/04 22:14:33 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);

}

void    ft_putnbr(int sayi)
{

    if (sayi < 0)
    {
        sayi = -sayi;
        ft_putchar('-');
    }

    if (sayi >= 10)  ft_putnbr(sayi / 10);

    ft_putchar((sayi % 10) + '0');
}

void    ft_print_comb2(void)
{
    int tab[2];
	
	tab[0] = 0;
	
	while (tab[0] < 99)
	{
		tab[1] = tab[0];
		while (tab[1] < 99)
		{
		ft_putnbr(tab[0]/10);
		ft_putnbr(tab[0] % 10);
		ft_putchar(' ');
		ft_putnbr(tab[1]/10);
		ft_putnbr((tab[1]+1) % 10);
		ft_putchar(',');

		tab[1]++;
		}


		tab[0]++;
	}
	
}
int main(){
    ft_print_comb2();
}
