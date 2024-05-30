/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:03:29 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/30 16:05:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "minishell.h"
# include "me/types.h"

t_error	ft_add(t_i32 first, t_i32 second, t_i64 *result);
t_error	ft_subtract(t_i32 first, t_i32 second, t_i64 *result);
t_error	ft_multiply(t_i32 first, t_i32 second, t_i64 *result);
t_error	ft_divide(t_i32 first, t_i32 second, t_i64 *result);
t_error ft_modulo(t_i32 first, t_i32 second, t_i64 *result);
t_error ft_power(t_i32 base, t_i32 exponent, t_i64 *result);
t_error ft_incrimented(t_i64 *value);
t_error ft_decrimented(t_i64 *value);

#endif

