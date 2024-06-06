/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_3.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_15(t_external_scanner_states_array *v)
{
	v->a[41][ts_external_token_test_operator] = true;
	v->a[41][ts_external_token__brace_start] = true;
	v->a[41][ts_external_token_heredoc_redirect_token1] = true;
	v->a[42][ts_external_token_test_operator] = true;
	v->a[42][ts_external_token_extglob_pattern] = true;
	v->a[42][ts_external_token__brace_start] = true;
	v->a[42][ts_external_token_LPAREN] = true;
	v->a[42][ts_external_token_esac] = true;
	v->a[43][ts_external_token_file_descriptor] = true;
	v->a[43][ts_external_token_variable_name] = true;
	v->a[43][ts_external_token_LT_LT] = true;
	v->a[43][ts_external_token_LT_LT_DASH] = true;
	v->a[44][ts_external_token_variable_name] = true;
	v->a[44][ts_external_token_LPAREN] = true;
	v->a[45][ts_external_token_test_operator] = true;
	v->a[45][ts_external_token_extglob_pattern] = true;
	v->a[45][ts_external_token__brace_start] = true;
	v->a[45][ts_external_token_LPAREN] = true;
	v->a[46][ts_external_token_file_descriptor] = true;
	v->a[46][ts_external_token__concat] = true;
	external_scanner_states_16(v);
}

void	external_scanner_states_16(t_external_scanner_states_array *v)
{
	v->a[46][ts_external_token_variable_name] = true;
	v->a[46][ts_external_token_test_operator] = true;
	v->a[46][ts_external_token__brace_start] = true;
	v->a[47][ts_external_token_variable_name] = true;
	v->a[47][ts_external_token_test_operator] = true;
	v->a[47][ts_external_token__brace_start] = true;
	v->a[47][ts_external_token_heredoc_redirect_token1] = true;
	v->a[48][ts_external_token_file_descriptor] = true;
	v->a[48][ts_external_token__concat] = true;
	v->a[48][ts_external_token_variable_name] = true;
	v->a[48][ts_external_token_LT_LT] = true;
	v->a[48][ts_external_token_LT_LT_DASH] = true;
	v->a[48][ts_external_token_heredoc_redirect_token1] = true;
	v->a[48][ts_external_token_esac] = true;
	v->a[49][ts_external_token_test_operator] = true;
	v->a[49][ts_external_token__brace_start] = true;
	v->a[49][ts_external_token_heredoc_redirect_token1] = true;
	v->a[50][ts_external_token_file_descriptor] = true;
	v->a[50][ts_external_token__concat] = true;
	v->a[50][ts_external_token_variable_name] = true;
	external_scanner_states_17(v);
}

void	external_scanner_states_17(t_external_scanner_states_array *v)
{
	v->a[50][ts_external_token_LT_LT] = true;
	v->a[50][ts_external_token_LT_LT_DASH] = true;
	v->a[50][ts_external_token_heredoc_redirect_token1] = true;
	v->a[51][ts_external_token_file_descriptor] = true;
	v->a[51][ts_external_token__concat] = true;
	v->a[51][ts_external_token_LT_LT] = true;
	v->a[51][ts_external_token_LT_LT_DASH] = true;
	v->a[51][ts_external_token_heredoc_redirect_token1] = true;
	v->a[51][ts_external_token_esac] = true;
	v->a[52][ts_external_token_file_descriptor] = true;
	v->a[52][ts_external_token_LT_LT] = true;
	v->a[52][ts_external_token_LT_LT_DASH] = true;
	v->a[52][ts_external_token_heredoc_redirect_token1] = true;
	v->a[52][ts_external_token_esac] = true;
	v->a[53][ts_external_token_file_descriptor] = true;
	v->a[53][ts_external_token__concat] = true;
	v->a[53][ts_external_token_LT_LT] = true;
	v->a[53][ts_external_token_LT_LT_DASH] = true;
	v->a[53][ts_external_token_heredoc_redirect_token1] = true;
	v->a[54][ts_external_token_file_descriptor] = true;
	external_scanner_states_18(v);
}

void	external_scanner_states_18(t_external_scanner_states_array *v)
{
	v->a[54][ts_external_token_LT_LT] = true;
	v->a[54][ts_external_token_LT_LT_DASH] = true;
	v->a[54][ts_external_token_heredoc_redirect_token1] = true;
	v->a[55][ts_external_token_file_descriptor] = true;
	v->a[55][ts_external_token_variable_name] = true;
	v->a[55][ts_external_token_heredoc_redirect_token1] = true;
	v->a[56][ts_external_token__empty_value] = true;
	v->a[56][ts_external_token_test_operator] = true;
	v->a[56][ts_external_token__brace_start] = true;
	v->a[57][ts_external_token_test_operator] = true;
	v->a[57][ts_external_token_extglob_pattern] = true;
	v->a[57][ts_external_token__brace_start] = true;
	v->a[58][ts_external_token_test_operator] = true;
	v->a[58][ts_external_token__brace_start] = true;
	v->a[59][ts_external_token_test_operator] = true;
	v->a[59][ts_external_token__bare_dollar] = true;
	v->a[59][ts_external_token__brace_start] = true;
	v->a[60][ts_external_token_file_descriptor] = true;
	v->a[60][ts_external_token__concat] = true;
	v->a[60][ts_external_token_variable_name] = true;
	external_scanner_states_19(v);
}

void	external_scanner_states_19(t_external_scanner_states_array *v)
{
	v->a[60][ts_external_token_LT_LT] = true;
	v->a[60][ts_external_token_LT_LT_DASH] = true;
	v->a[61][ts_external_token__concat] = true;
	v->a[61][ts_external_token_test_operator] = true;
	v->a[61][ts_external_token__brace_start] = true;
	v->a[61][ts_external_token_heredoc_redirect_token1] = true;
	v->a[62][ts_external_token_file_descriptor] = true;
	v->a[62][ts_external_token__concat] = true;
	v->a[62][ts_external_token_LT_LT] = true;
	v->a[62][ts_external_token_LT_LT_DASH] = true;
	v->a[63][ts_external_token_file_descriptor] = true;
	v->a[63][ts_external_token_LT_LT] = true;
	v->a[63][ts_external_token_LT_LT_DASH] = true;
	v->a[64][ts_external_token_file_descriptor] = true;
	v->a[64][ts_external_token__concat] = true;
	v->a[64][ts_external_token_heredoc_redirect_token1] = true;
	v->a[65][ts_external_token_variable_name] = true;
	v->a[65][ts_external_token_heredoc_redirect_token1] = true;
	v->a[66][ts_external_token_file_descriptor] = true;
	v->a[66][ts_external_token_heredoc_redirect_token1] = true;
	external_scanner_states_20(v);
}

/* EOF external_scanner_states_3.c */
