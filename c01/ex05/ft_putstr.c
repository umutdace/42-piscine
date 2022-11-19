/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:44:00 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/13 15:05:37 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		ft_putchar(*str);
		s++;
	}
}

int main(void)
{
    char *c = "Umut";
    
    ft_putstr(c);
}
