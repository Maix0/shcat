/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_scanner.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:42:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:34:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_SCANNER_H
# define TYPES_SCANNER_H

# include "me/types.h"
# include "parser/types/types_lexer.h"
# include "parser/types/types_symbol.h"

typedef bool				(*t_scanner_scan)(void *self, t_lexer *lex,
					const bool *symbol_whitelist);
typedef void				*(*t_scanner_create)(void);
typedef void				(*t_scanner_destroy)(void *ctx);
typedef unsigned			(*t_scanner_serialize)(void *self, t_str s);
typedef void				(*t_scanner_deserialize)(void *self, t_const_str s,
					t_u32 len);

typedef struct s_scanner
{
	const bool				*states;
	const t_symbol			*symbol_map;
	t_scanner_create		create;
	t_scanner_destroy		destroy;
	t_scanner_scan			scan;
	t_scanner_serialize		serialize;
	t_scanner_deserialize	deserialize;
}							t_scanner;

#endif /* TYPES_SCANNER_H */
