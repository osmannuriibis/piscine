/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:26:48 by oibis             #+#    #+#             */
/*   Updated: 2021/10/08 05:00:59 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_low_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_up_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	begin_word;

	i = 0;
	begin_word = 1;
	while (str[i])
	{
		if (i == 0 && is_low_alpha(str[0] == 1))
			str[i] -= 32;
		else if (is_low_alpha(str[i]) == 1)
		{
			if (is_alphanumeric(str[i - 1]) == 0)
				str[i] -= 32;
		}
		else if (is_up_alpha(str[i]) == 1)
		{
			if (is_alphanumeric(str[i - 1]) == 1)
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
