/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:33:23 by oibis             #+#    #+#             */
/*   Updated: 2021/10/21 03:28:12 by oibis            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{	
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

char	*ft_strdup(char *str)
{
	char	*s;

	s = malloc(sizeof(char) * ft_strlen(str) + 1);
	return (ft_strcpy(s, str));
}
