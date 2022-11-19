/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:10:23 by ubaglan           #+#    #+#             */
/*   Updated: 2022/11/19 18:12:24 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include "ft_square.h"

void			ft_putchar(char ch, int type);
void			ft_putstr(char *str, int type);
int				ft_strlen(char *str);
char			ft_get_char(char *str, int row, int column);
void			get_infos(char *map, char *chars, int *length);
int				ft_cont_sq(char *str, char emp, int *len, struct s_square sq);
void			ft_up_sq(char *str, char emp, int *len, struct s_square *sq);
struct s_square	ft_create_square(char *str, char emp, int *len, int *coord);
struct s_square	*ft_get_squares(char *str, int *len, char emp, char obs);
struct s_square	find_biggest_square(struct s_square *squares);

#endif
