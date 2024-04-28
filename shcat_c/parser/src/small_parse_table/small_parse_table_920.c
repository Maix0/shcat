/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_920.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4600(t_small_parse_table_array *v)
{
	v->a[92000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92001] = anon_sym_DOLLAR_LBRACK;
	v->a[92002] = aux_sym_concatenation_token1;
	v->a[92003] = anon_sym_DOLLAR;
	v->a[92004] = sym__special_character;
	v->a[92005] = anon_sym_DQUOTE;
	v->a[92006] = sym_raw_string;
	v->a[92007] = sym_ansi_c_string;
	v->a[92008] = aux_sym_number_token1;
	v->a[92009] = aux_sym_number_token2;
	v->a[92010] = anon_sym_DOLLAR_LBRACE;
	v->a[92011] = anon_sym_DOLLAR_LPAREN;
	v->a[92012] = anon_sym_BQUOTE;
	v->a[92013] = anon_sym_DOLLAR_BQUOTE;
	v->a[92014] = anon_sym_LT_LPAREN;
	v->a[92015] = anon_sym_GT_LPAREN;
	v->a[92016] = sym_word;
	v->a[92017] = 6;
	v->a[92018] = actions(71);
	v->a[92019] = 1;
	small_parse_table_4601(v);
}

void	small_parse_table_4601(t_small_parse_table_array *v)
{
	v->a[92020] = sym_comment;
	v->a[92021] = actions(5986);
	v->a[92022] = 1;
	v->a[92023] = aux_sym_concatenation_token1;
	v->a[92024] = actions(6091);
	v->a[92025] = 1;
	v->a[92026] = sym__concat;
	v->a[92027] = state(1904);
	v->a[92028] = 1;
	v->a[92029] = aux_sym_concatenation_repeat1;
	v->a[92030] = actions(1265);
	v->a[92031] = 16;
	v->a[92032] = anon_sym_PIPE;
	v->a[92033] = anon_sym_EQ_EQ;
	v->a[92034] = anon_sym_LT;
	v->a[92035] = anon_sym_GT;
	v->a[92036] = anon_sym_LT_LT;
	v->a[92037] = anon_sym_LPAREN;
	v->a[92038] = anon_sym_EQ_TILDE;
	v->a[92039] = anon_sym_AMP_GT;
	small_parse_table_4602(v);
}

void	small_parse_table_4602(t_small_parse_table_array *v)
{
	v->a[92040] = anon_sym_LT_AMP;
	v->a[92041] = anon_sym_GT_AMP;
	v->a[92042] = anon_sym_DOLLAR;
	v->a[92043] = aux_sym_number_token1;
	v->a[92044] = aux_sym_number_token2;
	v->a[92045] = anon_sym_DOLLAR_LPAREN;
	v->a[92046] = anon_sym_BQUOTE;
	v->a[92047] = sym_word;
	v->a[92048] = actions(1267);
	v->a[92049] = 25;
	v->a[92050] = sym_file_descriptor;
	v->a[92051] = sym_test_operator;
	v->a[92052] = sym__bare_dollar;
	v->a[92053] = sym__brace_start;
	v->a[92054] = anon_sym_LPAREN_LPAREN;
	v->a[92055] = anon_sym_PIPE_PIPE;
	v->a[92056] = anon_sym_AMP_AMP;
	v->a[92057] = anon_sym_GT_GT;
	v->a[92058] = anon_sym_PIPE_AMP;
	v->a[92059] = anon_sym_AMP_GT_GT;
	small_parse_table_4603(v);
}

void	small_parse_table_4603(t_small_parse_table_array *v)
{
	v->a[92060] = anon_sym_GT_PIPE;
	v->a[92061] = anon_sym_LT_AMP_DASH;
	v->a[92062] = anon_sym_GT_AMP_DASH;
	v->a[92063] = anon_sym_LT_LT_DASH;
	v->a[92064] = anon_sym_LT_LT_LT;
	v->a[92065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92066] = anon_sym_DOLLAR_LBRACK;
	v->a[92067] = sym__special_character;
	v->a[92068] = anon_sym_DQUOTE;
	v->a[92069] = sym_raw_string;
	v->a[92070] = sym_ansi_c_string;
	v->a[92071] = anon_sym_DOLLAR_LBRACE;
	v->a[92072] = anon_sym_DOLLAR_BQUOTE;
	v->a[92073] = anon_sym_LT_LPAREN;
	v->a[92074] = anon_sym_GT_LPAREN;
	v->a[92075] = 5;
	v->a[92076] = actions(3);
	v->a[92077] = 1;
	v->a[92078] = sym_comment;
	v->a[92079] = actions(5988);
	small_parse_table_4604(v);
}

void	small_parse_table_4604(t_small_parse_table_array *v)
{
	v->a[92080] = 1;
	v->a[92081] = sym__special_character;
	v->a[92082] = state(1829);
	v->a[92083] = 1;
	v->a[92084] = aux_sym__literal_repeat1;
	v->a[92085] = actions(4566);
	v->a[92086] = 6;
	v->a[92087] = sym_file_descriptor;
	v->a[92088] = sym_variable_name;
	v->a[92089] = sym_test_operator;
	v->a[92090] = sym__brace_start;
	v->a[92091] = ts_builtin_sym_end;
	v->a[92092] = aux_sym_heredoc_redirect_token1;
	v->a[92093] = actions(4564);
	v->a[92094] = 36;
	v->a[92095] = anon_sym_LPAREN_LPAREN;
	v->a[92096] = anon_sym_SEMI;
	v->a[92097] = anon_sym_PIPE_PIPE;
	v->a[92098] = anon_sym_AMP_AMP;
	v->a[92099] = anon_sym_PIPE;
	small_parse_table_4605(v);
}

/* EOF small_parse_table_920.c */
