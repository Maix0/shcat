/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_lifetime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:56:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 14:12:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

TSParser	*ts_parser_new(TSLanguage *language)
{
	TSParser	*self;

	self = mem_alloc(sizeof(*self));
	ts_lexer_init(&self->lexer);
	self->reduce_actions = vec_reduce_action_new(4, NULL);
	self->stack = ts_stack_new();
	self->finished_tree = NULL;
	self->language = language;
	self->has_scanner_error = false;
	self->external_scanner_payload = NULL;
	self->operation_count = 0;
	return (self);
}

void	ts_parser_delete(TSParser *self)
{
	if (!self)
		return ;
	ts_parser_reset(self);
	self->language = NULL;
	ts_stack_delete(self->stack);
	vec_reduce_action_free(self->reduce_actions);
	array_delete(&self->trailing_extras);
	array_delete(&self->trailing_extras2);
	array_delete(&self->scratch_trees);
	mem_free(self);
}

void	ts_parser_reset(TSParser *self)
{
	ts_parser__external_scanner_destroy(self);
	ts_lexer_reset(&self->lexer, length_zero());
	ts_stack_clear(self->stack);
	if (self->finished_tree)
	{
		ts_subtree_release(self->finished_tree);
		self->finished_tree = NULL;
	}
	self->accept_count = 0;
	self->has_scanner_error = false;
}
