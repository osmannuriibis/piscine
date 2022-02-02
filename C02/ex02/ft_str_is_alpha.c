/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:01:13 by oibis             #+#    #+#             */
/*   Updated: 2021/10/13 15:43:50 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	char	ch;
	int		g_ctr;

	g_ctr = 0;
	while (*(str + g_ctr) != '\0')
	{
		ch = *(str + g_ctr);
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			g_ctr++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
