/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:18:19 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/18 19:11:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATTER_H
# define FORMATTER_H
# include "me/printf/printf.h"
# include "me/types.h"

void	printf_x_low(t_printf_arg data, t_printf_func f);
void	printf_x_up(t_printf_arg data, t_printf_func f);
void	printf_o(t_printf_arg data, t_printf_func f);
void	printf_d(t_printf_arg data, t_printf_func f);
void	printf_u(t_printf_arg data, t_printf_func f);
void	printf_c(t_printf_arg data, t_printf_func f);
void	printf_s(t_printf_arg data, t_printf_func f);
void	printf_p(t_printf_arg data, t_printf_func f);

#endif
