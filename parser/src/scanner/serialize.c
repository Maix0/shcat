/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:06:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 19:28:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/array.h"
#include "parser/inner/heredoc.h"
#include "parser/inner/scanner.h"
#include "parser/parser.h"

t_error	serialize_heredocs(t_scanner *scanner, t_u8 *buffer, t_u32 *size,
		t_usize i)
{
	t_heredoc	*heredoc;

	heredoc = vec_heredoc_get(&scanner->heredocs, i);
	if (heredoc->delimiter.len + 1 + sizeof(t_usize)
		+ (*size) >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
		return (ERROR);
	buffer[(*size)++] = (char)heredoc->is_raw;
	buffer[(*size)++] = (char)heredoc->started;
	buffer[(*size)++] = (char)heredoc->allows_indent;
	heredoc->delimiter.len++;
	mem_copy(&buffer[(*size)], &heredoc->delimiter.len, sizeof(t_usize));
	size += sizeof(t_usize);
	if (heredoc->delimiter.len > 0)
	{
		mem_copy(&buffer[(*size)], heredoc->delimiter.buf,
			heredoc->delimiter.len);
		(*size) += heredoc->delimiter.len;
	}
	heredoc->delimiter.len--;
	return (NO_ERROR);
}

t_u32	tree_sitter_sh_external_scanner_serialize(t_scanner *scanner,
		t_u8 *buffer)
{
	t_u32	size;
	t_usize	i;

	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	buffer[size++] = (char)scanner->heredocs.len;
	i = 0;
	while (i < scanner->heredocs.len)
		if (serialize_heredocs(scanner, buffer, &size, i++))
			return (0);
	return (size);
}
