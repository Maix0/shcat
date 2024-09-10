/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner_inner.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:57:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/10 13:57:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANNER_INNER_H
#define SCANNER_INNER_H

#include "me/char/char.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/inner/heredoc.h"
#include "parser/lexer.h"
#include "parser/parser.h"

typedef struct s_heredoc	t_heredoc;
typedef struct s_scanner	t_scanner;

enum e_token_type
{
	HEREDOC_START,
	SIMPLE_HEREDOC_BODY,
	HEREDOC_BODY_BEGINNING,
	HEREDOC_CONTENT,
	HEREDOC_END,
	FILE_DESCRIPTOR,
	EMPTY_VALUE,
	CONCAT,
	VARIABLE_NAME,
	REGEX,
	EXPANSION_WORD,
	EXTGLOB_PATTERN,
	BARE_DOLLAR,
	IMMEDIATE_DOUBLE_HASH,
	HEREDOC_ARROW,
	HEREDOC_ARROW_DASH,
	NEWLINE,
	OPENING_PAREN,
	ESAC,
	ERROR_RECOVERY,
};

struct s_scanner
{
	t_u8			last_glob_paren_depth;
	bool			ext_was_in_double_quote;
	bool			ext_saw_outside_quote;
	t_vec_heredoc	heredocs;
};


#endif /* SCANNER_INNER_H */
