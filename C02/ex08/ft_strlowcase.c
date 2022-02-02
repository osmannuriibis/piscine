/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 04:01:11 by oibis             #+#    #+#             */
/*   Updated: 2021/10/08 04:21:20 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	if (*temp == '\0')
		return (str);
	while (*temp)
	{
		if (*temp >= 'A' && *temp <= 'Z')
			*temp += +32;
		temp++;
	}
	return (str);
}
