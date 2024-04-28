/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_5.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_25(t_external_scanner_states_array *v)
{
	v->a[87][ts_external_token_file_descriptor] = true;
	v->a[87][ts_external_token_variable_name] = true;
	v->a[87][ts_external_token_heredoc_redirect_token1] = true;
	v->a[88][ts_external_token_heredoc_redirect_token1] = true;
	v->a[88][ts_external_token_LPAREN] = true;
	v->a[89][ts_external_token_file_descriptor] = true;
	v->a[89][ts_external_token__concat] = true;
	v->a[89][ts_external_token_LT_LT] = true;
	v->a[89][ts_external_token_LT_LT_DASH] = true;
	v->a[89][ts_external_token_heredoc_redirect_token1] = true;
	v->a[89][ts_external_token_esac] = true;
	v->a[90][ts_external_token__immediate_double_hash] = true;
	v->a[91][ts_external_token_file_descriptor] = true;
	v->a[91][ts_external_token__concat] = true;
	v->a[91][ts_external_token_variable_name] = true;
	v->a[91][ts_external_token_LT_LT] = true;
	v->a[91][ts_external_token_LT_LT_DASH] = true;
	v->a[91][ts_external_token_heredoc_redirect_token1] = true;
	v->a[91][ts_external_token_esac] = true;
	v->a[92][ts_external_token_file_descriptor] = true;
	external_scanner_states_26(v);
}

void	external_scanner_states_26(t_external_scanner_states_array *v)
{
	v->a[92][ts_external_token_LT_LT] = true;
	v->a[92][ts_external_token_LT_LT_DASH] = true;
	v->a[92][ts_external_token_heredoc_redirect_token1] = true;
	v->a[92][ts_external_token_esac] = true;
	v->a[93][ts_external_token_file_descriptor] = true;
	v->a[93][ts_external_token__concat] = true;
	v->a[93][ts_external_token_LT_LT] = true;
	v->a[93][ts_external_token_LT_LT_DASH] = true;
	v->a[93][ts_external_token_heredoc_redirect_token1] = true;
	v->a[94][ts_external_token_file_descriptor] = true;
	v->a[94][ts_external_token_LT_LT] = true;
	v->a[94][ts_external_token_LT_LT_DASH] = true;
	v->a[94][ts_external_token_heredoc_redirect_token1] = true;
	v->a[95][ts_external_token_file_descriptor] = true;
	v->a[95][ts_external_token__concat] = true;
	v->a[95][ts_external_token_variable_name] = true;
	v->a[95][ts_external_token_LT_LT] = true;
	v->a[95][ts_external_token_LT_LT_DASH] = true;
	v->a[95][ts_external_token_heredoc_redirect_token1] = true;
	v->a[96][ts_external_token__concat] = true;
	external_scanner_states_27(v);
}

void	external_scanner_states_27(t_external_scanner_states_array *v)
{
	v->a[96][ts_external_token__immediate_double_hash] = true;
	v->a[96][ts_external_token__external_expansion_sym_hash] = true;
	v->a[96][ts_external_token__external_expansion_sym_bang] = true;
	v->a[96][ts_external_token__external_expansion_sym_equal] = true;
	v->a[96][ts_external_token_RBRACE] = true;
	v->a[97][ts_external_token__concat] = true;
	v->a[97][ts_external_token_test_operator] = true;
	v->a[97][ts_external_token__brace_start] = true;
	v->a[97][ts_external_token_heredoc_redirect_token1] = true;
	v->a[98][ts_external_token_variable_name] = true;
	v->a[98][ts_external_token__external_expansion_sym_hash] = true;
	v->a[98][ts_external_token__external_expansion_sym_bang] = true;
	v->a[98][ts_external_token__external_expansion_sym_equal] = true;
	v->a[98][ts_external_token_RBRACE] = true;
	v->a[99][ts_external_token_LPAREN] = true;
	v->a[100][ts_external_token__concat] = true;
	v->a[100][ts_external_token_test_operator] = true;
	v->a[100][ts_external_token__brace_start] = true;
	v->a[101][ts_external_token_file_descriptor] = true;
	v->a[101][ts_external_token__concat] = true;
	external_scanner_states_28(v);
}

void	external_scanner_states_28(t_external_scanner_states_array *v)
{
	v->a[101][ts_external_token_RBRACK] = true;
	v->a[101][ts_external_token_LT_LT] = true;
	v->a[101][ts_external_token_LT_LT_DASH] = true;
	v->a[102][ts_external_token_file_descriptor] = true;
	v->a[102][ts_external_token_RBRACK] = true;
	v->a[102][ts_external_token_LT_LT] = true;
	v->a[102][ts_external_token_LT_LT_DASH] = true;
	v->a[103][ts_external_token_file_descriptor] = true;
	v->a[103][ts_external_token_LT_LT] = true;
	v->a[103][ts_external_token_LT_LT_DASH] = true;
	v->a[104][ts_external_token_RBRACE] = true;
	v->a[104][ts_external_token_heredoc_redirect_token1] = true;
	v->a[104][ts_external_token_LPAREN] = true;
	v->a[105][ts_external_token_file_descriptor] = true;
	v->a[105][ts_external_token__concat] = true;
	v->a[105][ts_external_token_variable_name] = true;
	v->a[105][ts_external_token_LT_LT] = true;
	v->a[105][ts_external_token_LT_LT_DASH] = true;
	v->a[106][ts_external_token_file_descriptor] = true;
	v->a[106][ts_external_token__concat] = true;
	external_scanner_states_29(v);
}

void	external_scanner_states_29(t_external_scanner_states_array *v)
{
	v->a[106][ts_external_token_LT_LT] = true;
	v->a[106][ts_external_token_LT_LT_DASH] = true;
	v->a[107][ts_external_token_variable_name] = true;
	v->a[107][ts_external_token__expansion_word] = true;
	v->a[107][ts_external_token_RBRACE] = true;
	v->a[107][ts_external_token_LPAREN] = true;
	v->a[108][ts_external_token_variable_name] = true;
	v->a[108][ts_external_token__expansion_word] = true;
	v->a[108][ts_external_token_LPAREN] = true;
	v->a[109][ts_external_token_variable_name] = true;
	v->a[109][ts_external_token_heredoc_redirect_token1] = true;
	v->a[110][ts_external_token_file_descriptor] = true;
	v->a[110][ts_external_token_heredoc_redirect_token1] = true;
	v->a[111][ts_external_token_file_descriptor] = true;
	v->a[111][ts_external_token__concat] = true;
	v->a[111][ts_external_token_heredoc_redirect_token1] = true;
	v->a[112][ts_external_token_variable_name] = true;
	v->a[113][ts_external_token_LT_LT] = true;
	v->a[113][ts_external_token_LT_LT_DASH] = true;
	v->a[114][ts_external_token_RBRACE] = true;
	external_scanner_states_30(v);
}

/* EOF external_scanner_states_5.c */
