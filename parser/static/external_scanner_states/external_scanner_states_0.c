/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_0.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_0(t_external_scanner_states_array *v)
{
	v->a[1][ts_external_token_heredoc_start] = true;
	v->a[1][ts_external_token_simple_heredoc_body] = true;
	v->a[1][ts_external_token__heredoc_body_beginning] = true;
	v->a[1][ts_external_token_heredoc_content] = true;
	v->a[1][ts_external_token_heredoc_end] = true;
	v->a[1][ts_external_token_file_descriptor] = true;
	v->a[1][ts_external_token__empty_value] = true;
	v->a[1][ts_external_token__concat] = true;
	v->a[1][ts_external_token_variable_name] = true;
	v->a[1][ts_external_token_regex] = true;
	v->a[1][ts_external_token__expansion_word] = true;
	v->a[1][ts_external_token_extglob_pattern] = true;
	v->a[1][ts_external_token__bare_dollar] = true;
	v->a[1][ts_external_token__immediate_double_hash] = true;
	v->a[1][ts_external_token_LT_LT] = true;
	v->a[1][ts_external_token_LT_LT_DASH] = true;
	v->a[1][ts_external_token_LPAREN] = true;
	v->a[1][ts_external_token_esac] = true;
	v->a[1][ts_external_token___error_recovery] = true;
	v->a[2][ts_external_token_file_descriptor] = true;
	external_scanner_states_1(v);
}

void	external_scanner_states_1(t_external_scanner_states_array *v)
{
	v->a[2][ts_external_token_variable_name] = true;
	v->a[2][ts_external_token_LPAREN] = true;
	v->a[3][ts_external_token_file_descriptor] = true;
	v->a[3][ts_external_token_variable_name] = true;
	v->a[3][ts_external_token__bare_dollar] = true;
	v->a[3][ts_external_token_LT_LT] = true;
	v->a[3][ts_external_token_LT_LT_DASH] = true;
	v->a[3][ts_external_token_heredoc_redirect_token1] = true;
	v->a[3][ts_external_token_LPAREN] = true;
	v->a[3][ts_external_token_esac] = true;
	v->a[4][ts_external_token_file_descriptor] = true;
	v->a[4][ts_external_token_variable_name] = true;
	v->a[4][ts_external_token__bare_dollar] = true;
	v->a[4][ts_external_token_LT_LT] = true;
	v->a[4][ts_external_token_LT_LT_DASH] = true;
	v->a[4][ts_external_token_heredoc_redirect_token1] = true;
	v->a[4][ts_external_token_LPAREN] = true;
	v->a[5][ts_external_token_file_descriptor] = true;
	v->a[5][ts_external_token_variable_name] = true;
	v->a[5][ts_external_token__bare_dollar] = true;
	external_scanner_states_2(v);
}

void	external_scanner_states_2(t_external_scanner_states_array *v)
{
	v->a[5][ts_external_token_LT_LT] = true;
	v->a[5][ts_external_token_LT_LT_DASH] = true;
	v->a[5][ts_external_token_heredoc_redirect_token1] = true;
	v->a[5][ts_external_token_esac] = true;
	v->a[6][ts_external_token_file_descriptor] = true;
	v->a[6][ts_external_token_variable_name] = true;
	v->a[6][ts_external_token__bare_dollar] = true;
	v->a[6][ts_external_token_LT_LT] = true;
	v->a[6][ts_external_token_LT_LT_DASH] = true;
	v->a[6][ts_external_token_heredoc_redirect_token1] = true;
	v->a[7][ts_external_token_file_descriptor] = true;
	v->a[7][ts_external_token_variable_name] = true;
	v->a[7][ts_external_token_LT_LT] = true;
	v->a[7][ts_external_token_LT_LT_DASH] = true;
	v->a[7][ts_external_token_heredoc_redirect_token1] = true;
	v->a[8][ts_external_token_file_descriptor] = true;
	v->a[8][ts_external_token_variable_name] = true;
	v->a[8][ts_external_token_LT_LT] = true;
	v->a[8][ts_external_token_LT_LT_DASH] = true;
	v->a[8][ts_external_token_heredoc_redirect_token1] = true;
	external_scanner_states_3(v);
}

void	external_scanner_states_3(t_external_scanner_states_array *v)
{
	v->a[8][ts_external_token_esac] = true;
	v->a[9][ts_external_token_file_descriptor] = true;
	v->a[9][ts_external_token__bare_dollar] = true;
	v->a[9][ts_external_token_LT_LT] = true;
	v->a[9][ts_external_token_LT_LT_DASH] = true;
	v->a[9][ts_external_token_heredoc_redirect_token1] = true;
	v->a[9][ts_external_token_LPAREN] = true;
	v->a[10][ts_external_token_file_descriptor] = true;
	v->a[10][ts_external_token__bare_dollar] = true;
	v->a[10][ts_external_token_LT_LT] = true;
	v->a[10][ts_external_token_LT_LT_DASH] = true;
	v->a[10][ts_external_token_heredoc_redirect_token1] = true;
	v->a[10][ts_external_token_LPAREN] = true;
	v->a[10][ts_external_token_esac] = true;
	v->a[11][ts_external_token_file_descriptor] = true;
	v->a[11][ts_external_token__bare_dollar] = true;
	v->a[11][ts_external_token_LT_LT] = true;
	v->a[11][ts_external_token_LT_LT_DASH] = true;
	v->a[11][ts_external_token_heredoc_redirect_token1] = true;
	v->a[12][ts_external_token_file_descriptor] = true;
	external_scanner_states_4(v);
}

void	external_scanner_states_4(t_external_scanner_states_array *v)
{
	v->a[12][ts_external_token__bare_dollar] = true;
	v->a[12][ts_external_token_LT_LT] = true;
	v->a[12][ts_external_token_LT_LT_DASH] = true;
	v->a[12][ts_external_token_heredoc_redirect_token1] = true;
	v->a[12][ts_external_token_esac] = true;
	v->a[13][ts_external_token_file_descriptor] = true;
	v->a[13][ts_external_token_variable_name] = true;
	v->a[13][ts_external_token__bare_dollar] = true;
	v->a[13][ts_external_token_LT_LT] = true;
	v->a[13][ts_external_token_LT_LT_DASH] = true;
	v->a[13][ts_external_token_LPAREN] = true;
	v->a[14][ts_external_token_file_descriptor] = true;
	v->a[14][ts_external_token_LT_LT] = true;
	v->a[14][ts_external_token_LT_LT_DASH] = true;
	v->a[14][ts_external_token_heredoc_redirect_token1] = true;
	v->a[14][ts_external_token_esac] = true;
	v->a[15][ts_external_token_file_descriptor] = true;
	v->a[15][ts_external_token_LT_LT] = true;
	v->a[15][ts_external_token_LT_LT_DASH] = true;
	v->a[15][ts_external_token_heredoc_redirect_token1] = true;
	external_scanner_states_5(v);
}

/* EOF external_scanner_states_0.c */
