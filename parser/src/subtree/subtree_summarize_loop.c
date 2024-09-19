/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_summarize_loop.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:30:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 14:33:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/language.h"
#include "parser/subtree.h"

void	_summarize_loop_inner1(t_subtree self,
		const t_language *language, struct s_summarize_state *s)
{
	(void)(language);
	s->child = s->children[s->i];
	if (self->size.extent.row == 0 && ts_subtree_depends_on_column(s->child))
		self->depends_on_column = true;
	if (ts_subtree_has_external_scanner_state_change(s->child))
		self->has_external_scanner_state_change = true;
	if (s->i == 0)
	{
		self->padding = ts_subtree_padding(s->child);
		self->size = ts_subtree_size(s->child);
	}
	else
		self->size = length_add(self->size, ts_subtree_total_size(s->child));
	s->child_lookahead_end_byte = self->padding.bytes + self->size.bytes
		+ ts_subtree_lookahead_bytes(s->child);
	if (s->child_lookahead_end_byte > s->lookahead_end_byte)
		s->lookahead_end_byte = s->child_lookahead_end_byte;
	if (ts_subtree_symbol(s->child) != ts_builtin_sym_error_repeat)
		self->error_cost += ts_subtree_error_cost(s->child);
	s->grandchild_count = ts_subtree_child_count(s->child);
}

void	_summarize_loop_inner2(t_subtree self,
		const t_language *language, struct s_summarize_state *s)
{
	(void)(language);
	if (self->symbol == ts_builtin_sym_error
		|| self->symbol == ts_builtin_sym_error_repeat)
	{
		if (!ts_subtree_extra(s->child) && !(ts_subtree_is_error(s->child)
				&& s->grandchild_count == 0))
		{
			if (ts_subtree_visible(s->child))
				self->error_cost += ERROR_COST_PER_SKIPPED_TREE;
			else if (s->grandchild_count > 0)
				self->error_cost += ERROR_COST_PER_SKIPPED_TREE
					* s->child->visible_child_count;
		}
	}
	self->dynamic_precedence += ts_subtree_dynamic_precedence(s->child);
	self->visible_descendant_count
		+= ts_subtree_visible_descendant_count(s->child);
}

void	_summarize_loop_inner3(t_subtree self,
		const t_language *language, struct s_summarize_state *s)
{
	(void)(language);
	if (s->alias_sequence && s->alias_sequence[s->structural_index] != 0
		&& !ts_subtree_extra(s->child))
	{
		self->visible_descendant_count++;
		self->visible_child_count++;
		if (ts_language_symbol_metadata(language,
				s->alias_sequence[s->structural_index]).named)
			self->named_child_count++;
	}
	else if (ts_subtree_visible(s->child))
	{
		self->visible_descendant_count++;
		self->visible_child_count++;
		if (ts_subtree_named(s->child))
			self->named_child_count++;
	}
	else if (s->grandchild_count > 0)
	{
		self->visible_child_count += s->child->visible_child_count;
		self->named_child_count += s->child->named_child_count;
	}
}

void	_summarize_loop_inner4(t_subtree self,
		const t_language *language, struct s_summarize_state *s)
{
	(void)(language);
	if (ts_subtree_has_external_tokens(s->child))
		self->has_external_tokens = true;
	if (ts_subtree_is_error(s->child))
	{
		self->fragile_left = true;
		self->fragile_right = true;
		self->parse_state = TS_TREE_STATE_NONE;
	}
	if (!ts_subtree_extra(s->child))
		s->structural_index++;
	s->i++;
}
