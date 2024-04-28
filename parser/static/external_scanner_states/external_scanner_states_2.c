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
	v->a[25][ts_external_token__bare_dollar] = true;
	v->a[25][ts_external_token__brace_start] = true;
	v->a[25][ts_external_token_LT_LT] = true;
	v->a[25][ts_external_token_LT_LT_DASH] = true;
	v->a[26][ts_external_token_file_descriptor] = true;
	v->a[26][ts_external_token_test_operator] = true;
	v->a[26][ts_external_token__brace_start] = true;
	v->a[26][ts_external_token_heredoc_redirect_token1] = true;
	v->a[27][ts_external_token_file_descriptor] = true;
	v->a[27][ts_external_token_variable_name] = true;
	v->a[27][ts_external_token_test_operator] = true;
	v->a[27][ts_external_token__bare_dollar] = true;
	v->a[27][ts_external_token__brace_start] = true;
	v->a[27][ts_external_token_LT_LT] = true;
	v->a[27][ts_external_token_LT_LT_DASH] = true;
	v->a[27][ts_external_token_LPAREN] = true;
	v->a[28][ts_external_token_file_descriptor] = true;
	v->a[28][ts_external_token_variable_name] = true;
	v->a[28][ts_external_token_test_operator] = true;
	v->a[28][ts_external_token__bare_dollar] = true;
	external_scanner_states_11(v);
}

void	external_scanner_states_11(t_external_scanner_states_array *v)
{
	v->a[28][ts_external_token__brace_start] = true;
	v->a[28][ts_external_token_LT_LT] = true;
	v->a[28][ts_external_token_LT_LT_DASH] = true;
	v->a[29][ts_external_token_file_descriptor] = true;
	v->a[29][ts_external_token_variable_name] = true;
	v->a[29][ts_external_token_test_operator] = true;
	v->a[29][ts_external_token__brace_start] = true;
	v->a[29][ts_external_token_LT_LT] = true;
	v->a[29][ts_external_token_LT_LT_DASH] = true;
	v->a[30][ts_external_token_file_descriptor] = true;
	v->a[30][ts_external_token__concat] = true;
	v->a[30][ts_external_token_test_operator] = true;
	v->a[30][ts_external_token__bare_dollar] = true;
	v->a[30][ts_external_token__brace_start] = true;
	v->a[30][ts_external_token_LT_LT] = true;
	v->a[30][ts_external_token_LT_LT_DASH] = true;
	v->a[30][ts_external_token_heredoc_redirect_token1] = true;
	v->a[30][ts_external_token_LPAREN] = true;
	v->a[30][ts_external_token_esac] = true;
	v->a[31][ts_external_token_file_descriptor] = true;
	external_scanner_states_12(v);
}

void	external_scanner_states_12(t_external_scanner_states_array *v)
{
	v->a[31][ts_external_token_variable_name] = true;
	v->a[31][ts_external_token_test_operator] = true;
	v->a[31][ts_external_token__brace_start] = true;
	v->a[31][ts_external_token_RBRACK] = true;
	v->a[31][ts_external_token_LT_LT] = true;
	v->a[31][ts_external_token_LT_LT_DASH] = true;
	v->a[32][ts_external_token_file_descriptor] = true;
	v->a[32][ts_external_token__concat] = true;
	v->a[32][ts_external_token_test_operator] = true;
	v->a[32][ts_external_token__bare_dollar] = true;
	v->a[32][ts_external_token__brace_start] = true;
	v->a[32][ts_external_token_LT_LT] = true;
	v->a[32][ts_external_token_LT_LT_DASH] = true;
	v->a[32][ts_external_token_heredoc_redirect_token1] = true;
	v->a[32][ts_external_token_esac] = true;
	v->a[33][ts_external_token_file_descriptor] = true;
	v->a[33][ts_external_token_test_operator] = true;
	v->a[33][ts_external_token__brace_start] = true;
	v->a[33][ts_external_token_RBRACK] = true;
	v->a[33][ts_external_token_LT_LT] = true;
	external_scanner_states_13(v);
}

void	external_scanner_states_13(t_external_scanner_states_array *v)
{
	v->a[33][ts_external_token_LT_LT_DASH] = true;
	v->a[34][ts_external_token_file_descriptor] = true;
	v->a[34][ts_external_token_test_operator] = true;
	v->a[34][ts_external_token__brace_start] = true;
	v->a[34][ts_external_token_LT_LT] = true;
	v->a[34][ts_external_token_LT_LT_DASH] = true;
	v->a[35][ts_external_token__concat] = true;
	v->a[35][ts_external_token_variable_name] = true;
	v->a[35][ts_external_token_test_operator] = true;
	v->a[35][ts_external_token_RBRACK] = true;
	v->a[35][ts_external_token_LT_LT] = true;
	v->a[36][ts_external_token_file_descriptor] = true;
	v->a[36][ts_external_token_variable_name] = true;
	v->a[36][ts_external_token_test_operator] = true;
	v->a[36][ts_external_token__brace_start] = true;
	v->a[37][ts_external_token_file_descriptor] = true;
	v->a[37][ts_external_token__concat] = true;
	v->a[37][ts_external_token_test_operator] = true;
	v->a[37][ts_external_token__bare_dollar] = true;
	v->a[37][ts_external_token__brace_start] = true;
	external_scanner_states_14(v);
}

void	external_scanner_states_14(t_external_scanner_states_array *v)
{
	v->a[37][ts_external_token_LT_LT] = true;
	v->a[37][ts_external_token_LT_LT_DASH] = true;
	v->a[37][ts_external_token_heredoc_redirect_token1] = true;
	v->a[38][ts_external_token_file_descriptor] = true;
	v->a[38][ts_external_token__concat] = true;
	v->a[38][ts_external_token_variable_name] = true;
	v->a[38][ts_external_token_test_operator] = true;
	v->a[38][ts_external_token__brace_start] = true;
	v->a[38][ts_external_token_LT_LT] = true;
	v->a[38][ts_external_token_LT_LT_DASH] = true;
	v->a[38][ts_external_token_heredoc_redirect_token1] = true;
	v->a[38][ts_external_token_esac] = true;
	v->a[39][ts_external_token_variable_name] = true;
	v->a[39][ts_external_token_test_operator] = true;
	v->a[39][ts_external_token_LT_LT] = true;
	v->a[40][ts_external_token_variable_name] = true;
	v->a[40][ts_external_token_test_operator] = true;
	v->a[40][ts_external_token_RBRACK] = true;
	v->a[40][ts_external_token_LT_LT] = true;
	v->a[41][ts_external_token_file_descriptor] = true;
	external_scanner_states_15(v);
}

/* EOF external_scanner_states_2.c */
