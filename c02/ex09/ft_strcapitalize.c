/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:46:45 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/19 11:46:08 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
