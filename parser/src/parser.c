/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:08:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:28:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void ts_lexer__mark_end(TSLexer *_self);

// Parser - Private
bool ts_parser__breakdown_top_of_stack(TSParser *self, t_stack_version version)
{
	TSStateId			state;
	bool				did_break_down;
	bool				pending;
	t_stack_slice		slice;
	t_stack_slice_array pop;
	t_subtree			child;
	t_subtree			parent;
	t_subtree			tree;
	t_u32				i;
	t_u32				j;
	t_u32				n;
	bool				first;

	first = true;
	did_break_down = false;
	pending = false;
	while (pending || first)
	{
		first = false;
		pop = ts_stack_pop_pending(self->stack, version);
		if (!pop.size)
			break;
		did_break_down = true;
		pending = false;
		i = 0;
		while (i < pop.size)
		{
			slice = pop.contents[i];
			state = ts_stack_state(self->stack, slice.version);
			parent = *slice.subtrees.buffer;
			j = 0;
			n = ts_subtree_child_count(parent);
			while (j < n)
			{
				child = ts_subtree_children(parent)[j];
				pending = ts_subtree_child_count(child) > 0;
				if (ts_subtree_is_error(child))
					state = ERROR_STATE;
				else if (!ts_subtree_extra(child))
					state = ts_language_next_state(self->language, state, ts_subtree_symbol(child));
				child->ref_count++;
				ts_stack_push(self->stack, slice.version, child, pending, state);
				j++;
			}
			j = 1;
			while (j < slice.subtrees.len)
			{
				tree = slice.subtrees.buffer[j];
				ts_stack_push(self->stack, slice.version, tree, false, state);
				j++;
			}
			ts_subtree_release(parent);
			array_delete(&slice.subtrees);
			i++;
		}
	};
	return (did_break_down);
}

t_error_comparison ts_parser__compare_versions(TSParser *self, t_error_status a, t_error_status b)
{
	(void)self;
	if (!a.is_in_error && b.is_in_error)
	{
		if (a.cost < b.cost)
			return (ECTakeLeft);
		else
			return (ECPreferLeft);
	}
	if (a.is_in_error && !b.is_in_error)
	{
		if (b.cost < a.cost)
			return (ECTakeRight);
		else
			return (ECPreferRight);
	}
	if (a.cost < b.cost)
	{
		if ((b.cost - a.cost) * (1 + a.node_count) > MAX_COST_DIFFERENCE)
			return (ECTakeLeft);
		else
			return (ECPreferLeft);
	}
	if (b.cost < a.cost)
	{
		if ((a.cost - b.cost) * (1 + b.node_count) > MAX_COST_DIFFERENCE)
			return (ECTakeRight);
		else
			return (ECPreferRight);
	}
	if (a.dynamic_precedence > b.dynamic_precedence)
		return (ECPreferLeft);
	if (b.dynamic_precedence > a.dynamic_precedence)
		return (ECPreferRight);
	return (ECNone);
}

t_error_status ts_parser__version_status(TSParser *self, t_stack_version version)
{
	t_u32 cost;
	bool  is_paused;

	cost = ts_stack_error_cost(self->stack, version);
	is_paused = ts_stack_is_paused(self->stack, version);
	if (is_paused)
		cost += ERROR_COST_PER_SKIPPED_TREE;
	return ((t_error_status){.cost = cost,
							 .node_count = ts_stack_node_count_since_error(self->stack, version),
							 .dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
							 .is_in_error = is_paused || ts_stack_state(self->stack, version) == ERROR_STATE});
}

bool ts_parser__better_version_exists(TSParser *self, t_stack_version version, bool is_in_error, t_u32 cost)
{
	t_error_status	   status_i;
	Length			   position;
	t_error_status	   status;
	t_stack_version	   i;
	t_stack_version	   n;
	t_error_comparison cmp;

	if (self->finished_tree && ts_subtree_error_cost(self->finished_tree) <= cost)
		return (true);
	position = ts_stack_position(self->stack, version);
	status = (t_error_status){
		.cost = cost,
		.is_in_error = is_in_error,
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.node_count = ts_stack_node_count_since_error(self->stack, version),
	};
	i = 0;
	n = ts_stack_version_count(self->stack);
	while (i < n)
	{
		if (i == version || !ts_stack_is_active(self->stack, i) || ts_stack_position(self->stack, i).bytes < position.bytes)
		{
			i++;
			continue;
		}
		status_i = ts_parser__version_status(self, i);
		cmp = ts_parser__compare_versions(self, status, status_i);
		if (cmp == ECTakeRight)
		{
			return (true);
		}
		if (cmp == ECPreferRight && ts_stack_can_merge(self->stack, i, version))
			return (true);
		i++;
	}
	return (false);
}

t_subtree ts_parser__lex(TSParser *self, t_stack_version version, TSStateId parse_state)
{
	Length	  current_position;
	Length	  error_end_position;
	Length	  error_start_position;
	Length	  padding;
	Length	  size;
	Length	  start_position;
	TSLexMode lex_mode;
	TSSymbol  symbol;
	bool	  called_get_column;
	bool	  error_mode;
	bool	  external_scanner_state_changed;
	bool	  found_external_token;
	bool	  found_token;
	bool	  is_keyword;
	bool	  skipped_error;
	t_i32	  first_error_character;
	t_subtree external_token;
	t_subtree result;
	t_u32	  end_byte;
	t_u32	  external_scanner_state_len;
	t_u32	  lookahead_bytes;
	t_u32	  lookahead_end_byte;

	lex_mode = self->language->lex_modes[parse_state];
	if (lex_mode.lex_state == (t_u16)-1)
		return NULL;
	start_position = ts_stack_position(self->stack, version);
	external_token = ts_stack_last_external_token(self->stack, version);
	found_external_token = false;
	error_mode = parse_state == ERROR_STATE;
	skipped_error = false;
	called_get_column = false;
	first_error_character = 0;
	error_start_position = length_zero();
	error_end_position = length_zero();
	lookahead_end_byte = 0;
	external_scanner_state_len = 0;
	external_scanner_state_changed = false;
	ts_lexer_reset(&self->lexer, start_position);
	while (true)
	{
		found_token = false;
		current_position = self->lexer.current_position;
		if (lex_mode.external_lex_state != 0)
		{
			ts_lexer_start(&self->lexer);
			ts_parser__external_scanner_deserialize(self, external_token);
			found_token = ts_parser__external_scanner_scan(self, lex_mode.external_lex_state);
			if (self->has_scanner_error)
				return NULL;
			ts_lexer_finish(&self->lexer, &lookahead_end_byte);
			if (found_token)
			{
				external_scanner_state_len = ts_parser__external_scanner_serialize(self);
				external_scanner_state_changed = !ts_external_scanner_state_eq(ts_subtree_external_scanner_state(external_token),
																			   self->lexer.debug_buffer, external_scanner_state_len);
				if (self->lexer.token_end_position.bytes <= current_position.bytes &&
					(error_mode || !ts_stack_has_advanced_since_error(self->stack, version)) && !external_scanner_state_changed)
					found_token = false;
			}
			if (found_token)
			{
				found_external_token = true;
				called_get_column = self->lexer.did_get_column;
				break;
			}
			ts_lexer_reset(&self->lexer, current_position);
		}
		ts_lexer_start(&self->lexer);
		found_token = self->language->lex_fn(&self->lexer.data, lex_mode.lex_state);
		ts_lexer_finish(&self->lexer, &lookahead_end_byte);
		if (found_token)
			break;
		if (!error_mode)
		{
			error_mode = true;
			lex_mode = self->language->lex_modes[ERROR_STATE];
			ts_lexer_reset(&self->lexer, start_position);
			continue;
		}
		if (!skipped_error)
		{
			skipped_error = true;
			error_start_position = self->lexer.token_start_position;
			error_end_position = self->lexer.token_start_position;
			first_error_character = self->lexer.data.lookahead;
		}
		if (self->lexer.current_position.bytes == error_end_position.bytes)
		{
			if (self->lexer.data.eof(&self->lexer.data))
			{
				self->lexer.data.result_symbol = ts_builtin_sym_error;
				break;
			}
			self->lexer.data.advance(&self->lexer.data, false);
		}
		error_end_position = self->lexer.current_position;
	}
	if (skipped_error)
	{
		padding = length_sub(error_start_position, start_position);
		size = length_sub(error_end_position, error_start_position);
		lookahead_bytes = lookahead_end_byte - error_end_position.bytes;
		result = ts_subtree_new_error(first_error_character, padding, size, lookahead_bytes, parse_state, self->language);
	}
	else
	{
		is_keyword = false;
		symbol = self->lexer.data.result_symbol;
		padding = length_sub(self->lexer.token_start_position, start_position);
		size = length_sub(self->lexer.token_end_position, self->lexer.token_start_position);
		lookahead_bytes = lookahead_end_byte - self->lexer.token_end_position.bytes;
		if (found_external_token)
		{
			symbol = self->language->external_scanner.symbol_map[symbol];
		}
		else if (symbol == self->language->keyword_capture_token && symbol != 0)
		{
			end_byte = self->lexer.token_end_position.bytes;
			ts_lexer_reset(&self->lexer, self->lexer.token_start_position);
			ts_lexer_start(&self->lexer);
			is_keyword = self->language->keyword_lex_fn(&self->lexer.data, 0);
			if (is_keyword && self->lexer.token_end_position.bytes == end_byte &&
				ts_language_has_actions(self->language, parse_state, self->lexer.data.result_symbol))
			{
				symbol = self->lexer.data.result_symbol;
			}
		}
		result = ts_subtree_new_leaf(symbol, padding, size, lookahead_bytes, parse_state, found_external_token, called_get_column,
									 is_keyword, self->language);
		if (found_external_token)
		{
			ts_external_scanner_state_init(&result->external_scanner_state, self->lexer.debug_buffer, external_scanner_state_len);
			result->has_external_scanner_state_change = external_scanner_state_changed;
		}
	}
	return result;
}

// Determine if a given tree should be replaced by an
// alternative tree.
//
// The decision is based on the trees' error costs (if any),
// their dynamic precedence, and finally, as a default, by a
// recursive comparison of the trees' symbols.
bool ts_parser__select_tree(TSParser *self, t_subtree left, t_subtree right)
{
	int comparison;

	(void)(self);
	if (!left)
		return true;
	if (!right)
		return false;
	if (ts_subtree_error_cost(right) < ts_subtree_error_cost(left))
		return true;
	if (ts_subtree_error_cost(left) < ts_subtree_error_cost(right))
		return false;
	if (ts_subtree_dynamic_precedence(right) > ts_subtree_dynamic_precedence(left))
		return true;
	if (ts_subtree_dynamic_precedence(left) > ts_subtree_dynamic_precedence(right))
		return false;
	if (ts_subtree_error_cost(left) > 0)
		return true;
	comparison = ts_subtree_compare(left, right);
	return (comparison == 1);
}

// Determine if a given tree's children should be replaced
// by an alternative array of children.
bool ts_parser__select_children(TSParser *self, t_subtree left, const t_vec_subtree *children)
{
	t_subtree scratch_tree;

	vec_subtree_copy_into(&self->scratch_trees, (void *)children);
	scratch_tree = ts_subtree_new_node(ts_subtree_symbol(left), &self->scratch_trees, 0, self->language);
	return (ts_parser__select_tree(self, left, (scratch_tree)));
}

void ts_parser__shift(TSParser *self, t_stack_version version, TSStateId state, t_subtree lookahead, bool extra)
{
	bool	  is_leaf;
	t_subtree result;
	t_subtree subtree_to_push;

	is_leaf = ts_subtree_child_count(lookahead) == 0;
	subtree_to_push = lookahead;
	if (extra != ts_subtree_extra(lookahead) && is_leaf)
	{
		result = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&result, extra);
		subtree_to_push = (result);
	}
	ts_stack_push(self->stack, version, subtree_to_push, !is_leaf, state);
	if (ts_subtree_has_external_tokens(subtree_to_push))
		ts_stack_set_last_external_token(self->stack, version, ts_subtree_last_external_token(subtree_to_push));
}

t_stack_version ts_parser__reduce(TSParser *self, t_stack_version version, TSSymbol symbol, t_u32 count, int dynamic_precedence,
								  t_u16 production_id, bool is_fragile, bool end_of_non_terminal_extra)
{
	TSStateId			next_state;
	TSStateId			state;
	t_stack_slice		next_slice;
	t_stack_slice		slice;
	t_stack_slice_array pop;
	t_stack_version		k;
	t_stack_version		slice_version;
	t_subtree			parent;
	t_u32				i;
	t_u32				initial_version_count;
	t_u32				j;
	t_u32				removed_version_count;
	t_vec_subtree		children;
	t_vec_subtree		next_slice_children;

	initial_version_count = ts_stack_version_count(self->stack);
	pop = ts_stack_pop_count(self->stack, version, count);
	removed_version_count = 0;
	i = 0;
	while (i < pop.size)
	{
		slice = pop.contents[i];
		slice_version = slice.version - removed_version_count;
		if (slice_version > MAX_VERSION_COUNT + MAX_VERSION_COUNT_OVERFLOW)
		{
			ts_stack_remove_version(self->stack, slice_version);
			ts_subtree_array_delete(&slice.subtrees);
			removed_version_count++;
			while (i + 1 < pop.size)
			{
				next_slice = pop.contents[i + 1];
				if (next_slice.version != slice.version)
					break;
				ts_subtree_array_delete(&next_slice.subtrees);
				i++;
			}
			i++;
			continue;
		}
		children = slice.subtrees;
		ts_subtree_array_remove_trailing_extras(&children, &self->trailing_extras);
		parent = ts_subtree_new_node(symbol, &children, production_id, self->language);
		while (i + 1 < pop.size)
		{
			next_slice = pop.contents[i + 1];
			if (next_slice.version != slice.version)
				break;
			i++;
			next_slice_children = next_slice.subtrees;
			ts_subtree_array_remove_trailing_extras(&next_slice_children, &self->trailing_extras2);
			if (ts_parser__select_children(self, (parent), &next_slice_children))
			{
				ts_subtree_array_clear(&self->trailing_extras);
				ts_subtree_release(parent);
				array_swap(&self->trailing_extras, &self->trailing_extras2);
				parent = ts_subtree_new_node(symbol, &next_slice_children, production_id, self->language);
			}
			else
			{
				self->trailing_extras2.len = 0;
				ts_subtree_array_delete(&next_slice.subtrees);
			}
		}
		state = ts_stack_state(self->stack, slice_version);
		next_state = ts_language_next_state(self->language, state, symbol);
		if (end_of_non_terminal_extra && next_state == state)
			parent->extra = true;
		if (is_fragile || pop.size > 1 || initial_version_count > 1)
		{
			parent->fragile_left = true;
			parent->fragile_right = true;
			parent->parse_state = TS_TREE_STATE_NONE;
		}
		else
			parent->parse_state = state;
		parent->dynamic_precedence += dynamic_precedence;
		ts_stack_push(self->stack, slice_version, (parent), false, next_state);
		j = 0;
		while (j < self->trailing_extras.len)
		{
			ts_stack_push(self->stack, slice_version, self->trailing_extras.buffer[j], false, next_state);
			j++;
		}
		k = 0;
		while (k < slice_version)
		{
			if (k == version)
			{
				k++;
				continue;
			}
			if (ts_stack_merge(self->stack, k, slice_version))
			{
				removed_version_count++;
				break;
			}
			k++;
		}
		i++;
	}
	if (ts_stack_version_count(self->stack) > initial_version_count)
		return (initial_version_count);
	return (STACK_VERSION_NONE);
}

void ts_parser__accept(TSParser *self, t_stack_version version, t_subtree lookahead)
{
	t_u32				child_count;
	const t_subtree	   *children;
	t_stack_slice_array pop;
	t_vec_subtree		trees;
	t_subtree			root;
	t_u32				i;
	t_u32				j;
	t_u32				k;
	t_subtree			tree;

	assert(ts_subtree_is_eof(lookahead));
	ts_stack_push(self->stack, version, lookahead, false, 1);
	pop = ts_stack_pop_all(self->stack, version);
	i = 0;
	while (i < pop.size)
	{
		trees = pop.contents[i].subtrees;
		root = NULL;
		j = trees.len - 1;
		while (j + 1 > 0)
		{
			tree = trees.buffer[j];
			if (!ts_subtree_extra(tree))
			{
				child_count = ts_subtree_child_count(tree);
				children = ts_subtree_children(tree);
				k = 0;
				while (k < child_count)
				{
					children[k]->ref_count++;
					k++;
				}
				vec_subtree_splice(&trees, vec_subtree_splice_args(j, 1, child_count, children));
				root = (ts_subtree_new_node(ts_subtree_symbol(tree), &trees, tree->production_id, self->language));
				ts_subtree_release(tree);
				break;
			}
			j--;
		}
		self->accept_count++;
		if (self->finished_tree)
		{
			if (ts_parser__select_tree(self, self->finished_tree, root))
			{
				ts_subtree_release(self->finished_tree);
				self->finished_tree = root;
			}
			else
				ts_subtree_release(root);
		}
		else
			self->finished_tree = root;
		i++;
	}
	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, version);
}

bool ts_parser__do_all_potential_reductions(TSParser *self, t_stack_version starting_version, TSSymbol lookahead_symbol)
{
	t_u32			initial_version_count;
	bool			can_shift_lookahead_symbol;
	t_stack_version version;
	t_u32			i;
	t_u32			version_count;
	bool			merged;
	t_stack_version j;
	TSStateId		state;
	bool			has_shift_action;
	TSSymbol		first_symbol;
	TSSymbol		end_symbol;
	t_stack_version reduction_version;
	t_reduce_action reduce_action;
	t_u32			k;
	TSSymbol		symbol;
	TableEntry		entry;
	TSParseAction	action;

	initial_version_count = ts_stack_version_count(self->stack);
	can_shift_lookahead_symbol = false;
	version = starting_version;
	i = 0;
	while (true)
	{
		version_count = ts_stack_version_count(self->stack);
		if (version >= version_count)
			break;
		merged = false;
		j = initial_version_count;
		while (j < version)
		{
			if (ts_stack_merge(self->stack, j, version))
			{
				merged = true;
				break;
			}
			j++;
		}
		if (merged)
		{
			i++;
			continue;
		}
		state = ts_stack_state(self->stack, version);
		has_shift_action = false;
		self->reduce_actions.len = 0;
		if (lookahead_symbol != 0)
		{
			first_symbol = lookahead_symbol;
			end_symbol = lookahead_symbol + 1;
		}
		else
		{
			first_symbol = 1;
			end_symbol = self->language->token_count;
		}
		symbol = first_symbol;
		while (symbol < end_symbol)
		{
			ts_language_table_entry(self->language, state, symbol, &entry);
			k = 0;
			while (k < entry.action_count)
			{
				action = entry.actions[k];
				if ((action.type == TSParseActionTypeShift || action.type == TSParseActionTypeRecover) &&
					(!action.shift.extra && !action.shift.repetition))
					has_shift_action = true;
				if ((action.type == TSParseActionTypeReduce) && (action.reduce.child_count > 0))
					ts_reduce_action_set_add(&self->reduce_actions, (t_reduce_action){
																		.symbol = action.reduce.symbol,
																		.count = action.reduce.child_count,
																		.dynamic_precedence = action.reduce.dynamic_precedence,
																		.production_id = action.reduce.production_id,
																	});
				k++;
			}
			symbol++;
		}
		reduction_version = STACK_VERSION_NONE;
		k = 0;
		while (k < self->reduce_actions.len)
		{
			reduce_action = self->reduce_actions.buffer[k];
			reduction_version = ts_parser__reduce(self, version, reduce_action.symbol, reduce_action.count,
												  reduce_action.dynamic_precedence, reduce_action.production_id, true, false);
			k++;
		}
		if (has_shift_action)
			can_shift_lookahead_symbol = true;
		else if (reduction_version != STACK_VERSION_NONE && i < MAX_VERSION_COUNT)
		{
			ts_stack_renumber_version(self->stack, reduction_version, version);
			i++;
			continue;
		}
		else if (lookahead_symbol != 0)
			ts_stack_remove_version(self->stack, version);
		if (version == starting_version)
			version = version_count;
		else
			version++;
		i++;
	}
	return can_shift_lookahead_symbol;
}

bool ts_parser__recover_to_state(TSParser *self, t_stack_version version, t_u32 depth, TSStateId goal_state)
{
	t_stack_slice		slice;
	t_stack_slice_array pop;
	t_stack_version		previous_version;
	t_subtree			error;
	t_subtree			error_tree;
	t_subtree			tree;
	t_u32				error_child_count;
	t_u32				i;
	t_u32				j;
	t_vec_subtree		error_trees;

	previous_version = STACK_VERSION_NONE;
	pop = ts_stack_pop_count(self->stack, version, depth);
	i = 0;
	while (i < pop.size)
	{
		slice = pop.contents[i];
		if (slice.version == previous_version)
		{
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			i++;
			continue;
		}
		if (ts_stack_state(self->stack, slice.version) != goal_state)
		{
			ts_stack_halt(self->stack, slice.version);
			ts_subtree_array_delete(&slice.subtrees);
			array_erase(&pop, i--);
			i++;
			continue;
		}
		error_trees = ts_stack_pop_error(self->stack, slice.version);
		if (error_trees.len > 0)
		{
			error_tree = error_trees.buffer[0];
			error_child_count = ts_subtree_child_count(error_tree);
			if (error_child_count > 0)
			{
				vec_subtree_splice(&slice.subtrees, vec_subtree_splice_args(0, 0, error_child_count, ts_subtree_children(error_tree)));
				j = 0;
				while (j < error_child_count)
				{
					slice.subtrees.buffer[j]->ref_count++;
					j++;
				}
			}
			ts_subtree_array_delete(&error_trees);
		}
		ts_subtree_array_remove_trailing_extras(&slice.subtrees, &self->trailing_extras);
		if (slice.subtrees.len > 0)
		{
			error = ts_subtree_new_error_node(&slice.subtrees, true, self->language);
			ts_stack_push(self->stack, slice.version, error, false, goal_state);
		}
		else
		{
			vec_subtree_free(slice.subtrees);
		}
		j = 0;
		while (j < self->trailing_extras.len)
		{
			tree = self->trailing_extras.buffer[j];
			ts_stack_push(self->stack, slice.version, tree, false, goal_state);
			j++;
		}
		previous_version = slice.version;
		i++;
	}
	return previous_version != STACK_VERSION_NONE;
}

void ts_parser__recover(TSParser *self, t_stack_version version, t_subtree lookahead)
{
	Length				  position;
	bool				  did_recover;
	bool				  would_merge;
	t_stack_slice_array	  pop;
	t_stack_summary		 *summary;
	t_stack_summary_entry entry;
	t_subtree			  parent;
	t_u32				  current_error_cost;
	t_u32				  depth;
	t_u32				  i;
	t_u32				  j;
	t_u32				  new_cost;
	t_u32				  node_count_since_error;
	t_u32				  previous_version_count;
	t_vec_subtree		  children;
	t_u32				  n;
	const TSParseAction	 *actions;
	t_subtree			  error_repeat;
	t_subtree			  mutable_lookahead;

	did_recover = false;
	previous_version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	summary = ts_stack_get_summary(self->stack, version);
	node_count_since_error = ts_stack_node_count_since_error(self->stack, version);
	current_error_cost = ts_stack_error_cost(self->stack, version);
	if (summary && !ts_subtree_is_error(lookahead))
	{
		i = 0;
		while (i < summary->size)
		{
			entry = summary->contents[i];
			if (entry.state == ERROR_STATE)
			{
				i++;
				continue;
			}
			if (entry.position.bytes == position.bytes)
			{
				i++;
				continue;
			}
			depth = entry.depth;
			if (node_count_since_error > 0)
				depth++;
			would_merge = false;
			j = 0;
			while (j < previous_version_count)
			{
				if (ts_stack_state(self->stack, j) == entry.state && ts_stack_position(self->stack, j).bytes == position.bytes)
				{
					would_merge = true;
					break;
				}
				j++;
			}
			if (would_merge)
			{
				i++;
				continue;
			}
			new_cost = current_error_cost + entry.depth * ERROR_COST_PER_SKIPPED_TREE +
					   (position.bytes - entry.position.bytes) * ERROR_COST_PER_SKIPPED_CHAR +
					   (position.extent.row - entry.position.extent.row) * ERROR_COST_PER_SKIPPED_LINE;
			if (ts_parser__better_version_exists(self, version, false, new_cost))
				break;
			if (ts_language_has_actions(self->language, entry.state, ts_subtree_symbol(lookahead)))
			{
				if (ts_parser__recover_to_state(self, version, depth, entry.state))
				{
					did_recover = true;
					break;
				}
			}
			i++;
		}
	}
	i = previous_version_count;
	while (i < ts_stack_version_count(self->stack))
	{
		if (!ts_stack_is_active(self->stack, i))
			ts_stack_remove_version(self->stack, i--);
		i++;
	}
	if (did_recover && ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return;
	}
	if (did_recover && ts_subtree_has_external_scanner_state_change(lookahead))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return;
	}
	if (ts_subtree_is_eof(lookahead))
	{
		children = vec_subtree_new(16, NULL);
		parent = ts_subtree_new_error_node(&children, false, self->language);
		ts_stack_push(self->stack, version, parent, false, 1);
		ts_parser__accept(self, version, lookahead);
		return;
	}
	new_cost = current_error_cost + ERROR_COST_PER_SKIPPED_TREE + ts_subtree_total_bytes(lookahead) * ERROR_COST_PER_SKIPPED_CHAR +
			   ts_subtree_total_size(lookahead).extent.row * ERROR_COST_PER_SKIPPED_LINE;
	if (ts_parser__better_version_exists(self, version, false, new_cost))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(lookahead);
		return;
	}
	actions = ts_language_actions(self->language, 1, ts_subtree_symbol(lookahead), &n);
	if (n > 0 && actions[n - 1].type == TSParseActionTypeShift && actions[n - 1].shift.extra)
	{
		mutable_lookahead = ts_subtree_ensure_owner(lookahead);
		ts_subtree_set_extra(&mutable_lookahead, true);
		lookahead = (mutable_lookahead);
	}
	children = vec_subtree_new(1, NULL);
	vec_subtree_push(&children, lookahead);
	error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &children, 0, self->language);
	if (node_count_since_error > 0)
	{
		pop = ts_stack_pop_count(self->stack, version, 1);
		if (pop.size > 1)
		{
			i = 1;
			while (i < pop.size)
				ts_subtree_array_delete(&pop.contents[i++].subtrees);
			while (ts_stack_version_count(self->stack) > pop.contents[0].version + 1)
				ts_stack_remove_version(self->stack, pop.contents[0].version + 1);
		}
		ts_stack_renumber_version(self->stack, pop.contents[0].version, version);
		vec_subtree_push(&pop.contents[0].subtrees, (error_repeat));
		error_repeat = ts_subtree_new_node(ts_builtin_sym_error_repeat, &pop.contents[0].subtrees, 0, self->language);
	}
	ts_stack_push(self->stack, version, (error_repeat), false, ERROR_STATE);
	if (ts_subtree_has_external_tokens(lookahead))
		ts_stack_set_last_external_token(self->stack, version, ts_subtree_last_external_token(lookahead));
}

void ts_parser__handle_error(TSParser *self, t_stack_version version, t_subtree lookahead)
{
	Length			padding;
	Length			position;
	TSStateId		state;
	TSStateId		state_after_missing_symbol;
	TSSymbol		missing_symbol;
	bool			did_insert_missing_token;
	t_stack_version v;
	t_stack_version version_with_missing_tree;
	t_subtree		missing_tree;
	t_u32			i;
	t_u32			lookahead_bytes;
	t_u32			previous_version_count;
	t_u32			version_count;

	previous_version_count = ts_stack_version_count(self->stack);
	ts_parser__do_all_potential_reductions(self, version, 0);
	version_count = ts_stack_version_count(self->stack);
	position = ts_stack_position(self->stack, version);
	did_insert_missing_token = false;
	v = version;
	while (v < version_count)
	{
		if (!did_insert_missing_token)
		{
			state = ts_stack_state(self->stack, v);
			missing_symbol = 1;
			while (missing_symbol < (t_u16)self->language->token_count)
			{
				state_after_missing_symbol = ts_language_next_state(self->language, state, missing_symbol);
				if (state_after_missing_symbol == 0 || state_after_missing_symbol == state)
				{
					missing_symbol++;
					continue;
				}
				if (ts_language_has_reduce_action(self->language, state_after_missing_symbol, ts_subtree_leaf_symbol(lookahead)))
				{
					ts_lexer_reset(&self->lexer, position);
					ts_lexer__mark_end((void *)&self->lexer);
					padding = length_sub(self->lexer.token_end_position, position);
					lookahead_bytes = ts_subtree_total_bytes(lookahead) + ts_subtree_lookahead_bytes(lookahead);
					version_with_missing_tree = ts_stack_copy_version(self->stack, v);
					missing_tree = ts_subtree_new_missing_leaf(missing_symbol, padding, lookahead_bytes, self->language);
					ts_stack_push(self->stack, version_with_missing_tree, missing_tree, false, state_after_missing_symbol);
					if (ts_parser__do_all_potential_reductions(self, version_with_missing_tree, ts_subtree_leaf_symbol(lookahead)))
					{
						did_insert_missing_token = true;
						break;
					}
				}
				missing_symbol++;
			}
		}
		ts_stack_push(self->stack, v, NULL, false, ERROR_STATE);
		if (v == version)
			v = previous_version_count;
		else
			v += 1;
	}
	i = previous_version_count;
	while (i < version_count)
	{
		ts_stack_merge(self->stack, version, previous_version_count);
		i++;
	}
	ts_stack_record_summary(self->stack, version, MAX_SUMMARY_DEPTH);
	ts_parser__recover(self, version, lookahead);
}

bool ts_parser__advance(TSParser *self, t_stack_version version)
{
	TSStateId		state;
	t_subtree		mutable_lookahead;
	t_subtree		lookahead;
	TableEntry		table_entry;
	bool			needs_lex;
	t_u32			i;
	t_stack_version last_reduction_version;
	TSParseAction	action;
	TSStateId		next_state;
	bool			is_fragile;
	bool			end_of_non_terminal_extra;
	t_stack_version reduction_version;

	lookahead = NULL;
	table_entry = (TableEntry){.action_count = 0};
	state = ts_stack_state(self->stack, version);
	needs_lex = true;
	while (true)
	{
		if (needs_lex)
		{
			needs_lex = false;
			lookahead = ts_parser__lex(self, version, state);
			if (self->has_scanner_error)
				return (false);
			if (lookahead)
				ts_language_table_entry(self->language, state, ts_subtree_symbol(lookahead), &table_entry);
			else
				ts_language_table_entry(self->language, state, ts_builtin_sym_end, &table_entry);
		}
		last_reduction_version = STACK_VERSION_NONE;
		i = 0;
		while (i < table_entry.action_count)
		{
			action = table_entry.actions[i];
			if (action.type == TSParseActionTypeShift)
			{
				if (action.shift.repetition)
				{
					i++;
					continue;
				};
				if (action.shift.extra)
					next_state = state;
				else
					next_state = action.shift.state;
				if (ts_subtree_child_count(lookahead) > 0)
					next_state = ts_language_next_state(self->language, state, ts_subtree_symbol(lookahead));
				ts_parser__shift(self, version, next_state, lookahead, action.shift.extra);
				return true;
			}
			if (action.type == TSParseActionTypeReduce)
			{
				is_fragile = table_entry.action_count > 1;
				end_of_non_terminal_extra = lookahead == NULL;
				reduction_version =
					ts_parser__reduce(self, version, action.reduce.symbol, action.reduce.child_count, action.reduce.dynamic_precedence,
									  action.reduce.production_id, is_fragile, end_of_non_terminal_extra);
				if (reduction_version != STACK_VERSION_NONE)
					last_reduction_version = reduction_version;
				i++;
			}
			if (action.type == TSParseActionTypeAccept)
				return (ts_parser__accept(self, version, lookahead), true);
			if (action.type == TSParseActionTypeRecover)
				return (ts_parser__recover(self, version, lookahead), true);
		}
		if (last_reduction_version != STACK_VERSION_NONE)
		{
			ts_stack_renumber_version(self->stack, last_reduction_version, version);
			state = ts_stack_state(self->stack, version);
			if (!lookahead)
				needs_lex = true;
			else
				ts_language_table_entry(self->language, state, ts_subtree_leaf_symbol(lookahead), &table_entry);
			continue;
		}
		if (!lookahead)
		{
			ts_stack_halt(self->stack, version);
			return true;
		}
		if (ts_subtree_is_keyword(lookahead) && ts_subtree_symbol(lookahead) != self->language->keyword_capture_token)
		{
			ts_language_table_entry(self->language, state, self->language->keyword_capture_token, &table_entry);
			if (table_entry.action_count > 0)
			{
				mutable_lookahead = ts_subtree_ensure_owner(lookahead);
				ts_subtree_set_symbol(&mutable_lookahead, self->language->keyword_capture_token, self->language);
				lookahead = mutable_lookahead;
				continue;
			}
		}
		if (state == ERROR_STATE)
		{
			ts_parser__recover(self, version, lookahead);
			return true;
		}
		if (ts_parser__breakdown_top_of_stack(self, version))
		{
			state = ts_stack_state(self->stack, version);
			ts_subtree_release(lookahead);
			needs_lex = true;
			continue;
		}
		ts_stack_pause(self->stack, version, lookahead);
		return true;
	}
}

t_u32 ts_parser__condense_stack(TSParser *self)
{
	bool			   has_unpaused_version;
	t_error_comparison cmp;
	t_error_status	   status_i;
	t_error_status	   status_j;
	t_stack_version	   i;
	t_stack_version	   j;
	t_stack_version	   n;
	t_subtree		   lookahead;
	t_u32			   min_error_cost;

	min_error_cost = UINT_MAX;
	i = 0;
	while (i < ts_stack_version_count(self->stack))
	{
		if (ts_stack_is_halted(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i);
			continue;
		}
		status_i = ts_parser__version_status(self, i);
		if (!status_i.is_in_error && status_i.cost < min_error_cost)
			min_error_cost = status_i.cost;
		j = 0;
		while (j < i)
		{
			status_j = ts_parser__version_status(self, j);
			cmp = ts_parser__compare_versions(self, status_j, status_i);
			if (cmp == ECTakeLeft)
			{
				ts_stack_remove_version(self->stack, i);
				i--;
				j = i;
			}
			if ((cmp == ECPreferLeft || cmp == ECNone) && ts_stack_merge(self->stack, j, i))
			{
				i--;
				j = i;
			}
			if (cmp == ECPreferRight)
			{
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				else
					ts_stack_swap_versions(self->stack, i, j);
			}
			if (cmp == ECTakeRight)
			{
				ts_stack_remove_version(self->stack, j);
				i--;
				j--;
			}
			j++;
		}
		i++;
	}
	while (ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
		ts_stack_remove_version(self->stack, MAX_VERSION_COUNT);
	if (ts_stack_version_count(self->stack) > 0)
	{
		has_unpaused_version = false;
		i = 0;
		n = ts_stack_version_count(self->stack);
		while (i < n)
		{
			if (ts_stack_is_paused(self->stack, i))
			{
				if (!has_unpaused_version && self->accept_count < MAX_VERSION_COUNT)
				{
					min_error_cost = ts_stack_error_cost(self->stack, i);
					lookahead = ts_stack_resume(self->stack, i);
					ts_parser__handle_error(self, i, lookahead);
					has_unpaused_version = true;
				}
				else
				{
					ts_stack_remove_version(self->stack, i);
					i--;
					n--;
				}
			}
			else
				has_unpaused_version = true;
			i++;
		}
	}
	return min_error_cost;
}

bool ts_parser_has_outstanding_parse(TSParser *self)
{
	return (self->external_scanner_payload || ts_stack_state(self->stack, 0) != 1 || ts_stack_node_count_since_error(self->stack, 0) != 0);
}

// Parser - Public

bool _parse_condition(TSParser *self, t_u32 *version_count, t_stack_version *version)
{
	*version_count = ts_stack_version_count(self->stack);
	return (*version < *version_count);
}

TSTree *ts_parser_parse(TSParser *self, TSInput input)
{
	TSTree		   *result;
	t_u32			position;
	t_u32			last_position;
	t_u32			version_count;
	t_stack_version version;
	t_u32			min_error_cost;
	bool			first;

	result = NULL;
	if (!self->language || !input.read)
		return (NULL);
	ts_lexer_set_input(&self->lexer, input);
	if (!ts_parser_has_outstanding_parse(self))
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
			return (ts_parser_reset(self), result);
	}
	self->operation_count = 0;
	position = 0;
	last_position = 0;
	version_count = 0;
	version = 0;
	first = true;
	while (first || version_count != 0)
	{
		first = false;
		version = 0;
		while (_parse_condition(self, &version_count, &version))
		{
			while (ts_stack_is_active(self->stack, version))
			{
				if (!ts_parser__advance(self, version))
				{
					if (self->has_scanner_error)
						return (ts_parser_reset(self), result);
					return (NULL);
				}
				position = ts_stack_position(self->stack, version).bytes;
				if (position > last_position || (version > 0 && position == last_position))
				{
					last_position = position;
					break;
				}
			}
			version++;
		}
		min_error_cost = ts_parser__condense_stack(self);
		if (self->finished_tree && ts_subtree_error_cost(self->finished_tree) < min_error_cost)
		{
			ts_stack_clear(self->stack);
			break;
		}
	};
	if (self->finished_tree == NULL)
		me_abort("self->finished_tree == NULL");
	ts_subtree_balance(self->finished_tree, self->language);
	result = ts_tree_new(self->finished_tree, self->language);
	self->finished_tree = NULL;
	ts_parser_reset(self);
	return result;
}

const t_u8 *ts_string_input_read(void *_self, t_u32 byte, TSPoint point, t_u32 *length)
{
	t_string_input *self;

	(void)point;
	self = (t_string_input *)_self;
	if (byte >= self->length)
	{
		*length = 0;
		return ((const t_u8 *)"");
	}
	else
	{
		*length = self->length - byte;
		return (self->string + byte);
	}
}

TSTree *ts_parser_parse_string(TSParser *self, t_const_str string, t_u32 length)
{
	t_string_input input;

	input = (t_string_input){(const t_u8 *)string, length};
	return ts_parser_parse(self, (TSInput){
									 &input,
									 ts_string_input_read,
								 });
}
