/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_symbol.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:43:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 16:41:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_SYMBOL_H
#define TYPES_SYMBOL_H

#include "me/types.h"

typedef t_u16 t_symbol;

#define ts_builtin_sym_end (t_symbol)0
#define ts_builtin_sym_error (t_symbol)(-1)

#endif /* TYPES_SYMBOL_H */
