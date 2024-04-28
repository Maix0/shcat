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
	v->a[59][ts_external_token_LT_LT] = true;
	v->a[59][ts_external_token_LT_LT_DASH] = true;
	v->a[60][ts_external_token_LT_LT] = true;
	v->a[61][ts_external_token__concat] = true;
	v->a[61][ts_external_token_test_operator] = true;
	v->a[61][ts_external_token_extglob_pattern] = true;
	v->a[61][ts_external_token_RBRACK] = true;
	v->a[61][ts_external_token_LT_LT] = true;
	v->a[62][ts_external_token__concat] = true;
	v->a[62][ts_external_token_LT_LT] = true;
	v->a[63][ts_external_token_file_descriptor] = true;
	v->a[63][ts_external_token_variable_name] = true;
	v->a[63][ts_external_token_LT_LT] = true;
	v->a[63][ts_external_token_LT_LT_DASH] = true;
	v->a[63][ts_external_token_heredoc_redirect_token1] = true;
	v->a[63][ts_external_token_esac] = true;
	v->a[64][ts_external_token_LT_LT] = true;
	v->a[64][ts_external_token_heredoc_redirect_token1] = true;
	v->a[65][ts_external_token_test_operator] = true;
	v->a[65][ts_external_token_extglob_pattern] = true;
	external_scanner_states_21(v);
}

void	external_scanner_states_21(t_external_scanner_states_array *v)
{
	v->a[65][ts_external_token_RBRACK] = true;
	v->a[65][ts_external_token_LT_LT] = true;
	v->a[66][ts_external_token_file_descriptor] = true;
	v->a[66][ts_external_token_variable_name] = true;
	v->a[66][ts_external_token_LT_LT] = true;
	v->a[66][ts_external_token_LT_LT_DASH] = true;
	v->a[66][ts_external_token_heredoc_redirect_token1] = true;
	v->a[67][ts_external_token_test_operator] = true;
	v->a[67][ts_external_token_extglob_pattern] = true;
	v->a[67][ts_external_token__brace_start] = true;
	v->a[67][ts_external_token_LPAREN] = true;
	v->a[67][ts_external_token_esac] = true;
	v->a[68][ts_external_token__concat] = true;
	v->a[68][ts_external_token_RBRACK] = true;
	v->a[68][ts_external_token_LT_LT] = true;
	v->a[69][ts_external_token_RBRACK] = true;
	v->a[69][ts_external_token_LT_LT] = true;
	v->a[70][ts_external_token_file_descriptor] = true;
	v->a[70][ts_external_token__concat] = true;
	v->a[70][ts_external_token_test_operator] = true;
	external_scanner_states_22(v);
}

void	external_scanner_states_22(t_external_scanner_states_array *v)
{
	v->a[70][ts_external_token__brace_start] = true;
	v->a[70][ts_external_token_heredoc_redirect_token1] = true;
	v->a[71][ts_external_token_file_descriptor] = true;
	v->a[71][ts_external_token__concat] = true;
	v->a[71][ts_external_token_variable_name] = true;
	v->a[71][ts_external_token_test_operator] = true;
	v->a[71][ts_external_token__brace_start] = true;
	v->a[72][ts_external_token_variable_name] = true;
	v->a[72][ts_external_token_test_operator] = true;
	v->a[72][ts_external_token__brace_start] = true;
	v->a[72][ts_external_token_heredoc_redirect_token1] = true;
	v->a[73][ts_external_token_test_operator] = true;
	v->a[73][ts_external_token__brace_start] = true;
	v->a[73][ts_external_token_heredoc_redirect_token1] = true;
	v->a[74][ts_external_token_variable_name] = true;
	v->a[74][ts_external_token_test_operator] = true;
	v->a[74][ts_external_token__expansion_word] = true;
	v->a[74][ts_external_token__brace_start] = true;
	v->a[74][ts_external_token_RBRACE] = true;
	v->a[74][ts_external_token_LPAREN] = true;
	external_scanner_states_23(v);
}

void	external_scanner_states_23(t_external_scanner_states_array *v)
{
	v->a[75][ts_external_token__empty_value] = true;
	v->a[75][ts_external_token_test_operator] = true;
	v->a[75][ts_external_token__brace_start] = true;
	v->a[75][ts_external_token_LPAREN] = true;
	v->a[76][ts_external_token__immediate_double_hash] = true;
	v->a[76][ts_external_token__external_expansion_sym_hash] = true;
	v->a[76][ts_external_token__external_expansion_sym_bang] = true;
	v->a[76][ts_external_token__external_expansion_sym_equal] = true;
	v->a[76][ts_external_token_RBRACE] = true;
	v->a[77][ts_external_token_file_descriptor] = true;
	v->a[77][ts_external_token_variable_name] = true;
	v->a[77][ts_external_token_RBRACK] = true;
	v->a[77][ts_external_token_LT_LT] = true;
	v->a[77][ts_external_token_LT_LT_DASH] = true;
	v->a[78][ts_external_token_test_operator] = true;
	v->a[78][ts_external_token__brace_start] = true;
	v->a[79][ts_external_token_test_operator] = true;
	v->a[79][ts_external_token_extglob_pattern] = true;
	v->a[79][ts_external_token__brace_start] = true;
	v->a[80][ts_external_token_variable_name] = true;
	external_scanner_states_24(v);
}

void	external_scanner_states_24(t_external_scanner_states_array *v)
{
	v->a[80][ts_external_token_test_operator] = true;
	v->a[80][ts_external_token__brace_start] = true;
	v->a[81][ts_external_token_file_descriptor] = true;
	v->a[81][ts_external_token_variable_name] = true;
	v->a[81][ts_external_token_LT_LT] = true;
	v->a[81][ts_external_token_LT_LT_DASH] = true;
	v->a[82][ts_external_token_test_operator] = true;
	v->a[82][ts_external_token__bare_dollar] = true;
	v->a[82][ts_external_token__brace_start] = true;
	v->a[82][ts_external_token_RBRACK] = true;
	v->a[83][ts_external_token_test_operator] = true;
	v->a[83][ts_external_token_regex] = true;
	v->a[83][ts_external_token__brace_start] = true;
	v->a[84][ts_external_token__immediate_double_hash] = true;
	v->a[84][ts_external_token_RBRACE] = true;
	v->a[85][ts_external_token_test_operator] = true;
	v->a[85][ts_external_token__bare_dollar] = true;
	v->a[85][ts_external_token__brace_start] = true;
	v->a[86][ts_external_token_variable_name] = true;
	v->a[86][ts_external_token_LPAREN] = true;
	external_scanner_states_25(v);
}

/* EOF external_scanner_states_4.c */
