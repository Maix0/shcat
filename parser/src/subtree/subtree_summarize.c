/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_summarize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:35:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 14:31:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/language.h"
#include "parser/subtree.h"

void	_summarize_loop_inner1(t_subtree self, \
		const t_language *language, struct s_summarize_state *s);
void	_summarize_loop_inner2(t_subtree self, \
		const t_language *language, struct s_summarize_state *s);
void	_summarize_loop_inner3(t_subtree self, \
		const t_language *language, struct s_summarize_state *s);
void	_summarize_loop_inner4(t_subtree self, \
		const t_language *language, struct s_summarize_state *s);

void	_sumarize_end(t_subtree self, t_subtree *children)
{
	t_subtree	first_child;
	t_subtree	last_child;

	if (self->child_count > 0)
	{
		first_child = children[0];
		last_child = children[self->child_count - 1];
		self->first_leaf.symbol = ts_subtree_leaf_symbol(first_child);
		self->first_leaf.parse_state = ts_subtree_leaf_parse_state(first_child);
		if (ts_subtree_fragile_left(first_child))
			self->fragile_left = true;
		if (ts_subtree_fragile_right(last_child))
			self->fragile_right = true;
		if (self->child_count >= 2 && !self->visible && !self->named
			&& ts_subtree_symbol(first_child) == self->symbol)
		{
			if (ts_subtree_repeat_depth(first_child) > \
				ts_subtree_repeat_depth(last_child))
				self->repeat_depth = ts_subtree_repeat_depth(first_child) + 1;
			else
				self->repeat_depth = ts_subtree_repeat_depth(last_child) + 1;
		}
	}
}

struct s_summarize_state	_init_sumnarize_state(t_subtree self,
		const t_language *language)
{
	struct s_summarize_state	s;

	s = (typeof(s)){};
	self->named_child_count = 0;
	self->visible_child_count = 0;
	self->error_cost = 0;
	self->repeat_depth = 0;
	self->visible_descendant_count = 0;
	self->has_external_tokens = false;
	self->depends_on_column = false;
	self->has_external_scanner_state_change = false;
	self->dynamic_precedence = 0;
	s.alias_sequence = \
		ts_language_alias_sequence(language, self->production_id);
	s.structural_index = 0;
	s.lookahead_end_byte = 0;
	s.children = ts_subtree_children(self);
	s.i = 0;
	return (s);
}

// Assign all of the node's properties that depend on its children.
void	ts_subtree_summarize_children(t_subtree self,
		const t_language *language)
{
	struct s_summarize_state	s;

	s = _init_sumnarize_state(self, language);
	while (s.i < self->child_count)
	{
		_summarize_loop_inner1(self, language, &s);
		_summarize_loop_inner2(self, language, &s);
		_summarize_loop_inner3(self, language, &s);
		_summarize_loop_inner4(self, language, &s);
	}
	self->lookahead_bytes = s.lookahead_end_byte - self->size.bytes
		- self->padding.bytes;
	if (self->symbol == ts_builtin_sym_error
		|| self->symbol == ts_builtin_sym_error_repeat)
		self->error_cost += ERROR_COST_PER_RECOVERY
			+ ERROR_COST_PER_SKIPPED_CHAR * self->size.bytes
			+ ERROR_COST_PER_SKIPPED_LINE * self->size.extent.row;
	_sumarize_end(self, s.children);
}
