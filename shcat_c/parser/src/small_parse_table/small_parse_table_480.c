/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_480.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2400(t_small_parse_table_array *v)
{
	v->a[48000] = anon_sym_AMP_AMP;
	v->a[48001] = state(4568);
	v->a[48002] = 2;
	v->a[48003] = sym_variable_assignment;
	v->a[48004] = aux_sym_variable_assignments_repeat1;
	v->a[48005] = actions(4261);
	v->a[48006] = 3;
	v->a[48007] = sym_file_descriptor;
	v->a[48008] = sym_test_operator;
	v->a[48009] = sym__brace_start;
	v->a[48010] = actions(5353);
	v->a[48011] = 3;
	v->a[48012] = anon_sym_SEMI;
	v->a[48013] = anon_sym_AMP;
	v->a[48014] = anon_sym_SEMI_SEMI;
	v->a[48015] = state(4697);
	v->a[48016] = 3;
	v->a[48017] = sym_file_redirect;
	v->a[48018] = sym_heredoc_redirect;
	v->a[48019] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = actions(4247);
	v->a[48021] = 27;
	v->a[48022] = anon_sym_LPAREN_LPAREN;
	v->a[48023] = anon_sym_LT;
	v->a[48024] = anon_sym_GT;
	v->a[48025] = anon_sym_GT_GT;
	v->a[48026] = anon_sym_AMP_GT;
	v->a[48027] = anon_sym_AMP_GT_GT;
	v->a[48028] = anon_sym_LT_AMP;
	v->a[48029] = anon_sym_GT_AMP;
	v->a[48030] = anon_sym_GT_PIPE;
	v->a[48031] = anon_sym_LT_AMP_DASH;
	v->a[48032] = anon_sym_GT_AMP_DASH;
	v->a[48033] = anon_sym_LT_LT_LT;
	v->a[48034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48035] = anon_sym_DOLLAR_LBRACK;
	v->a[48036] = anon_sym_DOLLAR;
	v->a[48037] = sym__special_character;
	v->a[48038] = anon_sym_DQUOTE;
	v->a[48039] = sym_raw_string;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = sym_ansi_c_string;
	v->a[48041] = aux_sym_number_token1;
	v->a[48042] = aux_sym_number_token2;
	v->a[48043] = anon_sym_DOLLAR_LBRACE;
	v->a[48044] = anon_sym_DOLLAR_LPAREN;
	v->a[48045] = anon_sym_DOLLAR_BQUOTE;
	v->a[48046] = anon_sym_LT_LPAREN;
	v->a[48047] = anon_sym_GT_LPAREN;
	v->a[48048] = sym_word;
	v->a[48049] = 3;
	v->a[48050] = actions(3);
	v->a[48051] = 1;
	v->a[48052] = sym_comment;
	v->a[48053] = actions(1298);
	v->a[48054] = 6;
	v->a[48055] = sym_file_descriptor;
	v->a[48056] = sym__concat;
	v->a[48057] = sym_test_operator;
	v->a[48058] = sym__bare_dollar;
	v->a[48059] = sym__brace_start;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = aux_sym_heredoc_redirect_token1;
	v->a[48061] = actions(1296);
	v->a[48062] = 42;
	v->a[48063] = anon_sym_LPAREN_LPAREN;
	v->a[48064] = anon_sym_SEMI;
	v->a[48065] = anon_sym_PIPE_PIPE;
	v->a[48066] = anon_sym_AMP_AMP;
	v->a[48067] = anon_sym_PIPE;
	v->a[48068] = anon_sym_AMP;
	v->a[48069] = anon_sym_EQ_EQ;
	v->a[48070] = anon_sym_LT;
	v->a[48071] = anon_sym_GT;
	v->a[48072] = anon_sym_LT_LT;
	v->a[48073] = anon_sym_GT_GT;
	v->a[48074] = anon_sym_SEMI_SEMI;
	v->a[48075] = anon_sym_SEMI_AMP;
	v->a[48076] = anon_sym_SEMI_SEMI_AMP;
	v->a[48077] = anon_sym_PIPE_AMP;
	v->a[48078] = anon_sym_EQ_TILDE;
	v->a[48079] = anon_sym_AMP_GT;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = anon_sym_AMP_GT_GT;
	v->a[48081] = anon_sym_LT_AMP;
	v->a[48082] = anon_sym_GT_AMP;
	v->a[48083] = anon_sym_GT_PIPE;
	v->a[48084] = anon_sym_LT_AMP_DASH;
	v->a[48085] = anon_sym_GT_AMP_DASH;
	v->a[48086] = anon_sym_LT_LT_DASH;
	v->a[48087] = anon_sym_LT_LT_LT;
	v->a[48088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48089] = anon_sym_DOLLAR_LBRACK;
	v->a[48090] = aux_sym_concatenation_token1;
	v->a[48091] = anon_sym_DOLLAR;
	v->a[48092] = sym__special_character;
	v->a[48093] = anon_sym_DQUOTE;
	v->a[48094] = sym_raw_string;
	v->a[48095] = sym_ansi_c_string;
	v->a[48096] = aux_sym_number_token1;
	v->a[48097] = aux_sym_number_token2;
	v->a[48098] = anon_sym_DOLLAR_LBRACE;
	v->a[48099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
