/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:43:25 by oibis             #+#    #+#             */
/*   Updated: 2021/10/05 14:02:57 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_exponent(int value, int pow)
{
	int pow_counter;
	int last_value;
	
	pow_counter = 0;
	last_value = value;
	while (pow_counter < pow - 1)
	{
		last_value = last_value * value;
		pow_counter++;
	}
	return last_value;
}

void	ft_print_combn(int n)
{
	int	digit_counter;
	int	comp_counter;
	int	comp_num;
	char	num[n];
	int	isContinue;

	digit_counter = 0;
	while (digit_counter < ft_exponent(10, n))
	{
		comp_counter = 0;
		comp_num = digit_counter * 10;
		isContinue = 1;

		while (comp_counter < n - 1)
		{
			comp_num = comp_num / 10;
			if (comp_num % 10 > (comp_num / 10) % 10)
			{
				num[n - 1 - comp_counter] = (comp_num % 10) + 48;
				num[n - 2 - comp_counter] = ((comp_num / 10) % 10) + 48;
			}
			else
				isContinue = 0;
			if (isContinue == 1)
			{
                if (comp_counter == n - 2)
                {
                    write(1, num, n);
                    write(1, " ,", 2);
                }
                else
                {
                    comp_counter++;
                    continue;
                }
            }
            else
                break;

            comp_counter++;
        }
        digit_counter++;
    }
}

int main()
{
    ft_print_combn(1);
}
