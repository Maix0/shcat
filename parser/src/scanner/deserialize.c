/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:06:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 20:08:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/inner/heredoc.h"
#include "parser/inner/scanner.h"

void	reset(t_scanner *scanner);

void	actual_reset(\
	t_scanner *scanner, const t_u8 *buffer, t_usize i, t_u32 *size)
{
	t_heredoc	*heredoc;
	t_usize		delim_size;

	heredoc = NULL;
	if (i < scanner->heredocs.len)
		heredoc = vec_heredoc_get(&scanner->heredocs, i);
	else
	{
		vec_heredoc_push(&scanner->heredocs, heredoc_new());
		heredoc = vec_heredoc_last(&scanner->heredocs);
	}
	heredoc->is_raw = buffer[(*size)++];
	heredoc->started = buffer[(*size)++];
	heredoc->allows_indent = buffer[(*size)++];
	mem_copy(&delim_size, &buffer[(*size)], sizeof(t_usize));
	(*size) += sizeof(t_usize);
	string_reserve(&heredoc->delimiter, delim_size + 1);
	heredoc->delimiter.len = delim_size - 1;
	if (delim_size > 0)
	{
		mem_copy(heredoc->delimiter.buf, &buffer[(*size)], delim_size);
		(*size) += delim_size;
	}
}

void	tree_sitter_sh_external_scanner_deserialize(t_scanner *scanner,
		const t_u8 *buffer, t_u32 length)
{
	t_u32		size;
	t_u32		heredoc_count;
	t_usize		i;

	if (length == 0)
		return (reset(scanner));
	size = 0;
	scanner->last_glob_paren_depth = buffer[size++];
	scanner->ext_was_in_double_quote = buffer[size++];
	scanner->ext_saw_outside_quote = buffer[size++];
	heredoc_count = (t_u8)buffer[size++];
	i = 0;
	while (i < heredoc_count)
		actual_reset(scanner, buffer, i++, &size);
	if (size != length)
		me_abort("size != length");
}