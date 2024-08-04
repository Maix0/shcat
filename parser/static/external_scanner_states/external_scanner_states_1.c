/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_1.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_5(t_external_scanner_states_array *v)
{
	v->a[27][ts_external_token_LT_LT] = true;
	v->a[27][ts_external_token_heredoc_redirect_token1] = true;
	v->a[27][ts_external_token_esac] = true;
	v->a[28][ts_external_token__concat] = true;
	v->a[28][ts_external_token_LT_LT] = true;
	v->a[28][ts_external_token_heredoc_redirect_token1] = true;
	v->a[29][ts_external_token_regex] = true;
	v->a[29][ts_external_token__immediate_double_hash] = true;
	v->a[30][ts_external_token_extglob_pattern] = true;
	v->a[30][ts_external_token_LPAREN] = true;
	v->a[30][ts_external_token_esac] = true;
	v->a[31][ts_external_token_extglob_pattern] = true;
	v->a[31][ts_external_token_LPAREN] = true;
	v->a[32][ts_external_token__concat] = true;
	v->a[32][ts_external_token__bare_dollar] = true;
	v->a[32][ts_external_token_LT_LT] = true;
	v->a[32][ts_external_token_LPAREN] = true;
	v->a[33][ts_external_token__concat] = true;
	v->a[33][ts_external_token__bare_dollar] = true;
	v->a[33][ts_external_token_LT_LT] = true;
	return (external_scanner_states_6(v));
}

void	external_scanner_states_6(t_external_scanner_states_array *v)
{
	v->a[34][ts_external_token__concat] = true;
	v->a[34][ts_external_token_variable_name] = true;
	v->a[34][ts_external_token_LT_LT] = true;
	v->a[35][ts_external_token__concat] = true;
	v->a[35][ts_external_token_heredoc_redirect_token1] = true;
	v->a[36][ts_external_token__concat] = true;
	v->a[36][ts_external_token_LT_LT] = true;
	v->a[37][ts_external_token__bare_dollar] = true;
	v->a[38][ts_external_token__empty_value] = true;
	v->a[39][ts_external_token_extglob_pattern] = true;
	v->a[40][ts_external_token__concat] = true;
	v->a[40][ts_external_token_variable_name] = true;
	v->a[41][ts_external_token_variable_name] = true;
	v->a[41][ts_external_token__expansion_word] = true;
	v->a[42][ts_external_token__immediate_double_hash] = true;
	v->a[43][ts_external_token_heredoc_content] = true;
	v->a[43][ts_external_token_heredoc_end] = true;
	v->a[44][ts_external_token__concat] = true;
	v->a[45][ts_external_token_regex] = true;
	v->a[46][ts_external_token_simple_heredoc_body] = true;
	return (external_scanner_states_7(v));
}

void	external_scanner_states_7(t_external_scanner_states_array *v)
{
	v->a[46][ts_external_token__heredoc_body_beginning] = true;
	v->a[47][ts_external_token_esac] = true;
	v->a[48][ts_external_token_heredoc_end] = true;
	v->a[49][ts_external_token_heredoc_start] = true;
}

/* EOF external_scanner_states_1.c */
