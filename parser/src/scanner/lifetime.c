/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lifetime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:17:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 17:45:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "parser/inner/scanner.h"

void	*tree_sitter_sh_external_scanner_create(void)
{
	t_scanner	*scanner;

	scanner = mem_alloc(sizeof(*scanner));
	scanner->heredocs = vec_heredoc_new(16, heredoc_free);
	return (scanner);
}

bool	tree_sitter_sh_external_scanner_scan(\
	void *payload, TSLexer *lexer, const bool *valid_symbols)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	return (scan(scanner, lexer, valid_symbols));
}

void	tree_sitter_sh_external_scanner_destroy(void *payload)
{
	vec_heredoc_free(((t_scanner *)payload)->heredocs);
	mem_free((t_scanner *)payload);
}

void	reset(t_scanner *scanner)
{
	t_usize	i;

	i = 0;
	while (i < scanner->heredocs.len)
		reset_heredoc(&scanner->heredocs.buffer[i++]);
}
