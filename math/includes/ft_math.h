/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:16:08 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/28 15:43:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./types.h"

typedef struct s_number
{
	t_str		number;
	t_str		int_part;
	t_str		float_part;
	t_usize		int_size;
	t_usize		float_size;
}				t_number;

t_error	ft_nblen(const t_str str, t_usize *interger, t_usize *floating);
t_error	ft_init_numbers(t_str str, t_number *nb);
char	**ft_split(char const *s, char c);

#endif
