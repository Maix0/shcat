/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_lexer.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:45:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:46:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_LEXER_H
# define TYPES_LEXER_H

# include "me/types.h"
# include "parser/types/types_symbol.h"

typedef struct s_lexer
{
	t_u32		lookahead;
	t_symbol	result_symbol;
	void		(*advance)(struct s_lexer *, bool);
	void		(*mark_end)(struct s_lexer *);
	t_u32		(*get_column)(struct s_lexer *);
	bool		(*is_at_included_range_start)(const struct s_lexer *);
	bool		(*eof)(const struct s_lexer *);
}				t_lexer;

#endif /* TYPES_LEXER_H */
