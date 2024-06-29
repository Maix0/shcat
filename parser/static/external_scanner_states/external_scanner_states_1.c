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
	v->a[16][ts_external_token_file_descriptor] = true;
	v->a[16][ts_external_token_variable_name] = true;
	v->a[16][ts_external_token__bare_dollar] = true;
	v->a[16][ts_external_token_LT_LT] = true;
	v->a[16][ts_external_token_LT_LT_DASH] = true;
	v->a[17][ts_external_token_file_descriptor] = true;
	v->a[17][ts_external_token_heredoc_redirect_token1] = true;
	v->a[18][ts_external_token_file_descriptor] = true;
	v->a[18][ts_external_token_variable_name] = true;
	v->a[18][ts_external_token_LT_LT] = true;
	v->a[18][ts_external_token_LT_LT_DASH] = true;
	v->a[19][ts_external_token_file_descriptor] = true;
	v->a[19][ts_external_token__concat] = true;
	v->a[19][ts_external_token__bare_dollar] = true;
	v->a[19][ts_external_token_LT_LT] = true;
	v->a[19][ts_external_token_LT_LT_DASH] = true;
	v->a[19][ts_external_token_heredoc_redirect_token1] = true;
	v->a[19][ts_external_token_LPAREN] = true;
	v->a[20][ts_external_token_file_descriptor] = true;
	v->a[20][ts_external_token__bare_dollar] = true;
	external_scanner_states_6(v);
}

void	external_scanner_states_6(t_external_scanner_states_array *v)
{
	v->a[20][ts_external_token_LT_LT] = true;
	v->a[20][ts_external_token_LT_LT_DASH] = true;
	v->a[20][ts_external_token_LPAREN] = true;
	v->a[21][ts_external_token_file_descriptor] = true;
	v->a[21][ts_external_token__concat] = true;
	v->a[21][ts_external_token__bare_dollar] = true;
	v->a[21][ts_external_token_LT_LT] = true;
	v->a[21][ts_external_token_LT_LT_DASH] = true;
	v->a[21][ts_external_token_heredoc_redirect_token1] = true;
	v->a[21][ts_external_token_LPAREN] = true;
	v->a[21][ts_external_token_esac] = true;
	v->a[22][ts_external_token_file_descriptor] = true;
	v->a[22][ts_external_token__concat] = true;
	v->a[22][ts_external_token__bare_dollar] = true;
	v->a[22][ts_external_token_LT_LT] = true;
	v->a[22][ts_external_token_LT_LT_DASH] = true;
	v->a[22][ts_external_token_heredoc_redirect_token1] = true;
	v->a[23][ts_external_token_file_descriptor] = true;
	v->a[23][ts_external_token__concat] = true;
	v->a[23][ts_external_token_variable_name] = true;
	external_scanner_states_7(v);
}

void	external_scanner_states_7(t_external_scanner_states_array *v)
{
	v->a[23][ts_external_token_LT_LT] = true;
	v->a[23][ts_external_token_LT_LT_DASH] = true;
	v->a[23][ts_external_token_heredoc_redirect_token1] = true;
	v->a[24][ts_external_token_file_descriptor] = true;
	v->a[24][ts_external_token__concat] = true;
	v->a[24][ts_external_token_variable_name] = true;
	v->a[24][ts_external_token_LT_LT] = true;
	v->a[24][ts_external_token_LT_LT_DASH] = true;
	v->a[24][ts_external_token_heredoc_redirect_token1] = true;
	v->a[24][ts_external_token_esac] = true;
	v->a[25][ts_external_token_LT_LT] = true;
	v->a[26][ts_external_token_file_descriptor] = true;
	v->a[26][ts_external_token__concat] = true;
	v->a[26][ts_external_token__bare_dollar] = true;
	v->a[26][ts_external_token_LT_LT] = true;
	v->a[26][ts_external_token_LT_LT_DASH] = true;
	v->a[26][ts_external_token_heredoc_redirect_token1] = true;
	v->a[26][ts_external_token_esac] = true;
	v->a[27][ts_external_token_file_descriptor] = true;
	v->a[27][ts_external_token_variable_name] = true;
	external_scanner_states_8(v);
}

void	external_scanner_states_8(t_external_scanner_states_array *v)
{
	v->a[27][ts_external_token_heredoc_redirect_token1] = true;
	v->a[28][ts_external_token_file_descriptor] = true;
	v->a[28][ts_external_token__concat] = true;
	v->a[28][ts_external_token_LT_LT] = true;
	v->a[28][ts_external_token_LT_LT_DASH] = true;
	v->a[28][ts_external_token_heredoc_redirect_token1] = true;
	v->a[28][ts_external_token_esac] = true;
	v->a[29][ts_external_token_file_descriptor] = true;
	v->a[29][ts_external_token__bare_dollar] = true;
	v->a[29][ts_external_token_LT_LT] = true;
	v->a[29][ts_external_token_LT_LT_DASH] = true;
	v->a[30][ts_external_token_file_descriptor] = true;
	v->a[30][ts_external_token__concat] = true;
	v->a[30][ts_external_token_LT_LT] = true;
	v->a[30][ts_external_token_LT_LT_DASH] = true;
	v->a[30][ts_external_token_heredoc_redirect_token1] = true;
	v->a[31][ts_external_token_file_descriptor] = true;
	v->a[31][ts_external_token_LT_LT] = true;
	v->a[31][ts_external_token_LT_LT_DASH] = true;
	v->a[32][ts_external_token_file_descriptor] = true;
	external_scanner_states_9(v);
}

void	external_scanner_states_9(t_external_scanner_states_array *v)
{
	v->a[32][ts_external_token_variable_name] = true;
	v->a[33][ts_external_token_file_descriptor] = true;
	v->a[33][ts_external_token_variable_name] = true;
	v->a[33][ts_external_token_LPAREN] = true;
	v->a[33][ts_external_token_esac] = true;
	v->a[34][ts_external_token_file_descriptor] = true;
	v->a[34][ts_external_token__concat] = true;
	v->a[34][ts_external_token__bare_dollar] = true;
	v->a[34][ts_external_token_LT_LT] = true;
	v->a[34][ts_external_token_LT_LT_DASH] = true;
	v->a[34][ts_external_token_LPAREN] = true;
	v->a[35][ts_external_token_file_descriptor] = true;
	v->a[35][ts_external_token__concat] = true;
	v->a[35][ts_external_token_variable_name] = true;
	v->a[35][ts_external_token_LT_LT] = true;
	v->a[35][ts_external_token_LT_LT_DASH] = true;
	v->a[36][ts_external_token_file_descriptor] = true;
	v->a[36][ts_external_token__concat] = true;
	v->a[36][ts_external_token__bare_dollar] = true;
	v->a[36][ts_external_token_LT_LT] = true;
	external_scanner_states_10(v);
}

/* EOF external_scanner_states_1.c */
