/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states_6.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_states.h"

void	external_scanner_states_30(t_external_scanner_states_array *v)
{
	v->a[115][ts_external_token__concat] = true;
	v->a[116][ts_external_token_heredoc_content] = true;
	v->a[116][ts_external_token_heredoc_end] = true;
	v->a[117][ts_external_token__regex_no_slash] = true;
	v->a[117][ts_external_token_RBRACE] = true;
	v->a[118][ts_external_token__concat] = true;
	v->a[118][ts_external_token_heredoc_redirect_token1] = true;
	v->a[119][ts_external_token_regex] = true;
	v->a[119][ts_external_token_RBRACE] = true;
	v->a[120][ts_external_token_heredoc_redirect_token1] = true;
	v->a[121][ts_external_token__concat] = true;
	v->a[121][ts_external_token__expansion_word] = true;
	v->a[121][ts_external_token_RBRACE] = true;
	v->a[122][ts_external_token_simple_heredoc_body] = true;
	v->a[122][ts_external_token__heredoc_body_beginning] = true;
	v->a[123][ts_external_token__concat] = true;
	v->a[123][ts_external_token__external_expansion_sym_hash] = true;
	v->a[123][ts_external_token__external_expansion_sym_bang] = true;
	v->a[123][ts_external_token__external_expansion_sym_equal] = true;
	v->a[123][ts_external_token_RBRACE] = true;
	external_scanner_states_31(v);
}

void	external_scanner_states_31(t_external_scanner_states_array *v)
{
	v->a[124][ts_external_token__concat] = true;
	v->a[124][ts_external_token_RBRACE] = true;
	v->a[125][ts_external_token__external_expansion_sym_hash] = true;
	v->a[125][ts_external_token__external_expansion_sym_bang] = true;
	v->a[125][ts_external_token__external_expansion_sym_equal] = true;
	v->a[125][ts_external_token_RBRACE] = true;
	v->a[126][ts_external_token_esac] = true;
	v->a[127][ts_external_token_extglob_pattern] = true;
	v->a[128][ts_external_token_heredoc_end] = true;
	v->a[129][ts_external_token_RBRACK] = true;
	v->a[130][ts_external_token_heredoc_start] = true;
}

/* EOF external_scanner_states_6.c */
