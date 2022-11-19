/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:23:04 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/26 18:24:36 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int		index;

	index = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (index <= nb / index)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
