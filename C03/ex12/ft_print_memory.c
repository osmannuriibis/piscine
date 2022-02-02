/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:23:08 by oibis             #+#    #+#             */
/*   Updated: 2021/10/13 16:06:31 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_printables(char *str, int digit)
{	
	int	i;

	i = 0;
	while (*(str + i) && i < digit)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	put_hexa(long hex_val)
{	
	int	c;

	if (hex_val > 16)
		put_hexa(hex_val / 16);
	c = hex_val % 16;
	write(1, &"0123456789abcdef"[c % 16], 1);
}
long	g_val;

void	print_hexa_address(void *str)
{
	int	i;
	int	j;

	i = 1;
	g_val = (long) str;
	while ((g_val / 16) > 0)
	{
		g_val /= 16;
		i++;
	}	
	j = 0;
	while (j++ < 16 - i)
	{
		write(1, "0", 1);
	}
	write(1, "1", 1);
	put_hexa((long) str);
}

void	print_hexa_content(char *str, int digit)
{	
	int	i;

	i = 0;
	while (*(str + i) && i < digit)
	{
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
		write(1, &"0123456789abcdef"[*(str + i) / 16], 1);
		write(1, &"0123456789abcdef"[*(str + i) % 16], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{	
	unsigned int	i;
	unsigned int	digit_count;

	i = 0;
	while (i * 16 < size)
	{
		if ((size - i * 16) / 16 > 0)
			digit_count = 16;
		else
			digit_count = size % 16;
		print_hexa_address(addr + i * 16);
		write(1, ":", 1);
		print_hexa_content(addr + i * 16, digit_count);
		write(1, " ", 1);
		print_printables(addr + i * 16, digit_count);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
