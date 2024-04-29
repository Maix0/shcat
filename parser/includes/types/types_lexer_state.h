/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_lexer_state.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:50:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:51:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_LEXER_STATE_H
# define TYPES_LEXER_STATE_H

# include "me/types.h"
# include "parser/types/types_state_id.h"

typedef struct s_lexer_state
{
	t_u32		lookahead;
	t_state_id	state;
	bool		result;
	bool		skip;
	bool		eof;
}				t_lexer_state;

#endif /* TYPES_LEXER_STATE_H */
