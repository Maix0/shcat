/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_words.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:11:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/str/str.h"
#include "me/vec/vec_estr.h"
#include "me/vec/vec_str.h"

t_error	run_word(t_ast_word *word, t_state *state, t_word_result *out)
{
	t_word_iterator	iter_state;

	if (word == NULL || state == NULL || out == NULL)
		return (ERROR);
	iter_state.res.value = vec_estr_new(64, free_expandable_str);
	iter_state.res.has_error = false;
	iter_state.res.kind = word->kind;
	iter_state.state = state;
	vec_ast_iter(&word->inner, (void (*)())_run_word_into_str, &iter_state);
	if (iter_state.res.has_error)
		return (vec_estr_free(iter_state.res.value), ERROR);
	return (*out = iter_state.res, NO_ERROR);
}
