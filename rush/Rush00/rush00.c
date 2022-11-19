/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:07:21 by ubaglan           #+#    #+#             */
/*   Updated: 2022/11/19 18:09:12 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	h;
	int	w;

	h = 0;
	while (++h <= y)
	{
		w = 0;
		while (++w <= x)
		{
			if ((h == y || h == 1) && (w == x || w == 1))
				ft_putchar('o');
			else if (w == 1 || w == x)
				ft_putchar('|');
			else if (h == 1 || h == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
