/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_scanner_ctx.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 13:50:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_SCANNER_CTX_H
#define TYPES_SCANNER_CTX_H

#include "me/types.h"
#include "me/vec/vec_parser_heredoc.h"

typedef struct s_scanner_ctx
{
	t_u8				 last_glob_paren_depth;
	bool				 ext_was_in_double_quote;
	bool				 ext_saw_outside_quote;
	t_vec_parser_heredoc heredocs;
} t_scanner_ctx;

#endif /* TYPES_SCANNER_CTX_H */
