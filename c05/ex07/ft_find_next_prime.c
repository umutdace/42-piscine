/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:28:03 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/26 18:22:13 by ubaglan          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime (nb) == 0)
		nb++;
	return (nb);
}
