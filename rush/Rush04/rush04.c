/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:13:30 by ubaglan           #+#    #+#             */
/*   Updated: 2022/11/19 18:13:30 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	h;
	int	w;

	w = 0;
	while ((++w <= y) && (x > 0))
	{
		h = 0;
		while (++h <= x)
		{
			if ((h == 1 && w == 1) || (h == x && w == y && x != 1 && y != 1))
				ft_putchar('A');
			else if ((h == 1 && w == y) || (h == x && w == 1))
				ft_putchar('C');
			else if (w == 1 || w == y || h == 1 || h == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
