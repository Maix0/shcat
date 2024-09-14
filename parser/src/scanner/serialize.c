/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:08:04 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/14 16:21:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner_inner.h"

bool	in_error_recovery(const bool *valid_symbols);
void	reset(t_scanner *scanner);
bool	advance_word(t_lexer *lexer, t_string *unquoted_word);
t_u32	serialize(t_scanner *scanner, t_u8 *buffer);
void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length);
bool	scan_bare_dollar(t_lexer *lexer);
bool	scan_heredoc_start(t_heredoc *heredoc, t_lexer *lexer);
bool	scan_heredoc_end_identifier(t_heredoc *heredoc, t_lexer *lexer);
bool	scan_heredoc_content(t_scanner *scanner, t_lexer *lexer,
		enum e_token_type middle_type, enum e_token_type end_type);
bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_concat(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_heredoc_end(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_literals(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols);
void	*tree_sitter_sh_external_scanner_create(void);
bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer,
		const bool *valid_symbols);
t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state);
void	tree_sitter_sh_external_scanner_deserialize(void *payload,
		const t_u8 *state, t_u32 length);
void	tree_sitter_sh_external_scanner_destroy(void *payload);

bool	advance_word(t_lexer *lexer, t_string *unquoted_word)
{
	bool	empty;
	t_i32	quote;

	empty = true;
	quote = 0;
	if (lexer->data.lookahead == '\'' || lexer->data.lookahead == '"')
	{
		quote = lexer->data.lookahead;
		lexer->data.advance((void *)lexer, false);
	}
	while (lexer->data.lookahead && !((quote && (lexer->data.lookahead == quote
					|| lexer->data.lookahead == '\r'
					|| lexer->data.lookahead == '\n')) || (!quote
				&& me_isspace(lexer->data.lookahead))))
	{
		if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, false);
			if (!lexer->data.lookahead)
				return (false);
		}
		empty = false;
		string_push_char(unquoted_word, lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	string_push_char(unquoted_word, '\0');
	if (quote && lexer->data.lookahead == quote)
		lexer->data.advance((void *)lexer, false);
	return (!empty);
}

t_u32	serialize(t_scanner *scanner, t_u8 *buffer)
{
	t_u32		size;
	t_usize		delimiter_size;
	t_usize		i;
	t_heredoc	*heredoc;

	i = 0;
	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	buffer[size++] = (char)scanner->heredocs.len;
	while (i < scanner->heredocs.len)
	{
		heredoc = vec_heredoc_get(&scanner->heredocs, i);
		if (heredoc->delimiter.len + 3
			+ size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
			return (0);
		buffer[size++] = (char)heredoc->is_raw;
		buffer[size++] = (char)heredoc->started;
		buffer[size++] = (char)heredoc->allows_indent;
		delimiter_size = heredoc->delimiter.len;
		mem_copy(&buffer[size], &delimiter_size, sizeof(t_usize));
		size += sizeof(t_usize);
		if (heredoc->delimiter.len > 0)
		{
			mem_copy(&buffer[size], heredoc->delimiter.buf,
				heredoc->delimiter.len);
			size += heredoc->delimiter.len;
		}
		i++;
	}
	return (size);
}

void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length)
{
	t_u32		size;
	t_u32		heredoc_count;
	t_usize		i;
	t_usize		delimiter_size;
	t_heredoc	*heredoc;
	t_heredoc	new_heredoc;

	if (length == 0)
		reset(scanner);
	else
	{
		i = 0;
		heredoc_count = 0;
		size = 0;
		scanner->last_glob_paren_depth = buffer[size++];
		scanner->ext_was_in_double_quote = buffer[size++];
		scanner->ext_saw_outside_quote = buffer[size++];
		heredoc_count = (t_u8)buffer[size++];
		while (i < heredoc_count)
		{
			heredoc = NULL;
			if (i < scanner->heredocs.len)
				heredoc = vec_heredoc_get(&scanner->heredocs, i);
			else
			{
				new_heredoc = heredoc_new();
				vec_heredoc_push(&scanner->heredocs, new_heredoc);
				heredoc = vec_heredoc_last(&scanner->heredocs);
			}
			heredoc->is_raw = buffer[size++];
			heredoc->started = buffer[size++];
			heredoc->allows_indent = buffer[size++];
			mem_copy(&delimiter_size, &buffer[size], sizeof(t_usize));
			size += sizeof(t_usize);
			heredoc->delimiter.len = delimiter_size;
			string_reserve(&heredoc->delimiter, heredoc->delimiter.len);
			if (heredoc->delimiter.len > 0)
			{
				mem_copy(heredoc->delimiter.buf, &buffer[size],
					heredoc->delimiter.len);
				size += heredoc->delimiter.len;
			}
			i++;
		}
		if (!(size == length))
			me_abort("assertion failed: size == length");
	}
}
