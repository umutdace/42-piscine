/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:56:54 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/13 11:39:29 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ngtve;
	char	pztve;

	pztve = 'P';
	ngtve = 'N';
	if (n < 0)
	{
		write(1, &ngtve, 1);
	}
	else
	{
		write(1, &pztve, 1);
	}
}
