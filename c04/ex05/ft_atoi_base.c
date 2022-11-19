/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:18:15 by ubaglan           #+#    #+#             */
/*   Updated: 2022/02/24 14:28:03 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	if (ch == '\f' || ch == '\r' || ch == '\v')
		return (1);
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] <= 32 || base[i] >= 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_index(char ch, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == ch)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	multiplier;
	int	number;

	index = 0;
	multiplier = 1;
	number = 0;
	if (ft_check_base(base) == 0)
		return (0);
	while (ft_isspace(str[index]))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			multiplier *= -1;
		index++;
	}
	while (ft_base_index(str[index], base) != -1)
	{
		number = number * ft_strlen(base);
		number = number + ft_base_index(str[index], base);
		index++;
	}
	return (number * multiplier);
}
