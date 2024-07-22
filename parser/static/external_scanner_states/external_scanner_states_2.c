/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_2.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_10(t_external_scanner_states_array *v)
{
	v->a[37][ts_external_token_LT_LT] = true;
	v->a[37][ts_external_token_LT_LT_DASH] = true;
	v->a[38][ts_external_token_file_descriptor] = true;
	v->a[38][ts_external_token__concat] = true;
	v->a[38][ts_external_token__bare_dollar] = true;
	v->a[38][ts_external_token_LT_LT] = true;
	v->a[38][ts_external_token_LT_LT_DASH] = true;
	v->a[39][ts_external_token_file_descriptor] = true;
	v->a[39][ts_external_token__concat] = true;
	v->a[39][ts_external_token_LT_LT] = true;
	v->a[39][ts_external_token_LT_LT_DASH] = true;
	v->a[40][ts_external_token_variable_name] = true;
	v->a[40][ts_external_token__immediate_double_hash] = true;
	v->a[41][ts_external_token_file_descriptor] = true;
	v->a[41][ts_external_token__concat] = true;
	v->a[41][ts_external_token_heredoc_redirect_token1] = true;
	v->a[42][ts_external_token_variable_name] = true;
	v->a[42][ts_external_token_heredoc_redirect_token1] = true;
	v->a[43][ts_external_token_extglob_pattern] = true;
	v->a[43][ts_external_token_LPAREN] = true;
	external_scanner_states_11(v);
}

void	external_scanner_states_11(t_external_scanner_states_array *v)
{
	v->a[43][ts_external_token_esac] = true;
	v->a[44][ts_external_token_regex] = true;
	v->a[44][ts_external_token__immediate_double_hash] = true;
	v->a[45][ts_external_token_file_descriptor] = true;
	v->a[45][ts_external_token__concat] = true;
	v->a[45][ts_external_token_variable_name] = true;
	v->a[46][ts_external_token_extglob_pattern] = true;
	v->a[46][ts_external_token_LPAREN] = true;
	v->a[47][ts_external_token_heredoc_redirect_token1] = true;
	v->a[48][ts_external_token__bare_dollar] = true;
	v->a[49][ts_external_token__empty_value] = true;
	v->a[50][ts_external_token_extglob_pattern] = true;
	v->a[51][ts_external_token_variable_name] = true;
	v->a[51][ts_external_token__expansion_word] = true;
	v->a[52][ts_external_token__concat] = true;
	v->a[52][ts_external_token_heredoc_redirect_token1] = true;
	v->a[53][ts_external_token__immediate_double_hash] = true;
	v->a[54][ts_external_token_variable_name] = true;
	v->a[55][ts_external_token_heredoc_content] = true;
	v->a[55][ts_external_token_heredoc_end] = true;
	external_scanner_states_12(v);
}

void	external_scanner_states_12(t_external_scanner_states_array *v)
{
	v->a[56][ts_external_token_LT_LT] = true;
	v->a[56][ts_external_token_LT_LT_DASH] = true;
	v->a[57][ts_external_token__concat] = true;
	v->a[58][ts_external_token_regex] = true;
	v->a[59][ts_external_token_simple_heredoc_body] = true;
	v->a[59][ts_external_token__heredoc_body_beginning] = true;
	v->a[60][ts_external_token_esac] = true;
	v->a[61][ts_external_token_heredoc_end] = true;
	v->a[62][ts_external_token_heredoc_start] = true;
}

/* EOF external_scanner_states_2.c */
