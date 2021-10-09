/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:50:14 by oibis             #+#    #+#             */
/*   Updated: 2021/10/07 22:06:28 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	if (*temp == '\0')
		return (str);
	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp += -32;
		temp++;
	}
	return (str);
}
