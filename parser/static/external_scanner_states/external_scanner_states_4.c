/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_4.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_20(t_external_scanner_states_array *v)
{
	v->a[67][ts_external_token_variable_name] = true;
	v->a[67][ts_external_token__expansion_word] = true;
	v->a[67][ts_external_token_RBRACE] = true;
	v->a[68][ts_external_token__immediate_double_hash] = true;
	v->a[68][ts_external_token_RBRACE] = true;
	v->a[69][ts_external_token_variable_name] = true;
	v->a[70][ts_external_token_variable_name] = true;
	v->a[70][ts_external_token__expansion_word] = true;
	v->a[71][ts_external_token_variable_name] = true;
	v->a[71][ts_external_token_RBRACE] = true;
	v->a[72][ts_external_token_LT_LT] = true;
	v->a[72][ts_external_token_LT_LT_DASH] = true;
	v->a[73][ts_external_token_heredoc_content] = true;
	v->a[73][ts_external_token_heredoc_end] = true;
	v->a[74][ts_external_token__concat] = true;
	v->a[75][ts_external_token__concat] = true;
	v->a[75][ts_external_token_heredoc_redirect_token1] = true;
	v->a[76][ts_external_token_regex] = true;
	v->a[76][ts_external_token_RBRACE] = true;
	v->a[77][ts_external_token_heredoc_redirect_token1] = true;
	external_scanner_states_21(v);
}

void	external_scanner_states_21(t_external_scanner_states_array *v)
{
	v->a[78][ts_external_token_LPAREN] = true;
	v->a[79][ts_external_token_simple_heredoc_body] = true;
	v->a[79][ts_external_token__heredoc_body_beginning] = true;
	v->a[80][ts_external_token_esac] = true;
	v->a[81][ts_external_token__concat] = true;
	v->a[81][ts_external_token_RBRACE] = true;
	v->a[82][ts_external_token_extglob_pattern] = true;
	v->a[83][ts_external_token_RBRACE] = true;
	v->a[84][ts_external_token_heredoc_end] = true;
	v->a[85][ts_external_token_heredoc_start] = true;
}

/* EOF external_scanner_states_4.c */
