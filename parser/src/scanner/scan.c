/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:40:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 17:41:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "parser/inner/scanner.h"

static bool scan2(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.len > 0 && vec_heredoc_last(&scanner->heredocs)->started &&
		!valid_symbols[ERROR_RECOVERY])
		return (scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT, HEREDOC_END));
	if (valid_symbols[HEREDOC_START] && !valid_symbols[ERROR_RECOVERY] && scanner->heredocs.len > 0)
		return (scan_heredoc_start(vec_heredoc_last(&scanner->heredocs), lexer));
	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[HEREDOC_ARROW]) && !valid_symbols[ERROR_RECOVERY])
		return (scan_varname(scanner, lexer, valid_symbols));
	if (valid_symbols[BARE_DOLLAR] && !valid_symbols[ERROR_RECOVERY] && scan_bare_dollar(lexer))
		return (true);
	if (valid_symbols[EXPANSION_WORD])
		return (scan_expansion_word(scanner, lexer, valid_symbols));
	return (false);
}

bool scan(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	if (check_scan_concat(scanner, lexer, valid_symbols))
		return (scan_concat(scanner, lexer, valid_symbols));
	if (scan_double_hash(scanner, lexer, valid_symbols))
		return (true);
	if (valid_symbols[EMPTY_VALUE] &&
		(me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == ';' || lexer->lookahead == '&'))
		return (lexer->result_symbol = EMPTY_VALUE, true);
	if ((valid_symbols[HEREDOC_BODY_BEGINNING] || valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.len > 0 &&
		!vec_heredoc_last(&scanner->heredocs)->started && !valid_symbols[ERROR_RECOVERY])
		return (scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY));
	if (valid_symbols[HEREDOC_END] && scanner->heredocs.len > 0 && scan_heredoc_end_identifier(vec_heredoc_last(&scanner->heredocs), lexer))
		return (scan_heredoc_end(scanner, lexer));
	return (scan2(scanner, lexer, valid_symbols));
}
