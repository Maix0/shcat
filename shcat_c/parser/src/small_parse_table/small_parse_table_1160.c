/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1160.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5800(t_small_parse_table_array *v)
{
	v->a[116000] = aux_sym_number_token1;
	v->a[116001] = actions(1155);
	v->a[116002] = 1;
	v->a[116003] = aux_sym_number_token2;
	v->a[116004] = actions(1157);
	v->a[116005] = 1;
	v->a[116006] = anon_sym_DOLLAR_LBRACE;
	v->a[116007] = actions(1159);
	v->a[116008] = 1;
	v->a[116009] = anon_sym_DOLLAR_LPAREN;
	v->a[116010] = actions(1163);
	v->a[116011] = 1;
	v->a[116012] = anon_sym_DOLLAR_BQUOTE;
	v->a[116013] = actions(1167);
	v->a[116014] = 1;
	v->a[116015] = sym_test_operator;
	v->a[116016] = actions(1169);
	v->a[116017] = 1;
	v->a[116018] = sym__brace_start;
	v->a[116019] = actions(3060);
	small_parse_table_5801(v);
}

void	small_parse_table_5801(t_small_parse_table_array *v)
{
	v->a[116020] = 1;
	v->a[116021] = anon_sym_BQUOTE;
	v->a[116022] = state(2484);
	v->a[116023] = 1;
	v->a[116024] = aux_sym__literal_repeat1;
	v->a[116025] = state(3148);
	v->a[116026] = 1;
	v->a[116027] = sym__expression;
	v->a[116028] = actions(1129);
	v->a[116029] = 2;
	v->a[116030] = anon_sym_LPAREN_LPAREN;
	v->a[116031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116032] = actions(1135);
	v->a[116033] = 2;
	v->a[116034] = anon_sym_PLUS_PLUS2;
	v->a[116035] = anon_sym_DASH_DASH2;
	v->a[116036] = actions(1137);
	v->a[116037] = 2;
	v->a[116038] = anon_sym_DASH2;
	v->a[116039] = anon_sym_PLUS2;
	small_parse_table_5802(v);
}

void	small_parse_table_5802(t_small_parse_table_array *v)
{
	v->a[116040] = actions(1151);
	v->a[116041] = 2;
	v->a[116042] = sym_raw_string;
	v->a[116043] = sym_ansi_c_string;
	v->a[116044] = actions(1165);
	v->a[116045] = 2;
	v->a[116046] = anon_sym_LT_LPAREN;
	v->a[116047] = anon_sym_GT_LPAREN;
	v->a[116048] = state(2594);
	v->a[116049] = 6;
	v->a[116050] = sym_binary_expression;
	v->a[116051] = sym_ternary_expression;
	v->a[116052] = sym_unary_expression;
	v->a[116053] = sym_postfix_expression;
	v->a[116054] = sym_parenthesized_expression;
	v->a[116055] = sym_concatenation;
	v->a[116056] = state(2573);
	v->a[116057] = 9;
	v->a[116058] = sym_arithmetic_expansion;
	v->a[116059] = sym_brace_expression;
	small_parse_table_5803(v);
}

void	small_parse_table_5803(t_small_parse_table_array *v)
{
	v->a[116060] = sym_string;
	v->a[116061] = sym_translated_string;
	v->a[116062] = sym_number;
	v->a[116063] = sym_simple_expansion;
	v->a[116064] = sym_expansion;
	v->a[116065] = sym_command_substitution;
	v->a[116066] = sym_process_substitution;
	v->a[116067] = 8;
	v->a[116068] = actions(3);
	v->a[116069] = 1;
	v->a[116070] = sym_comment;
	v->a[116071] = actions(5826);
	v->a[116072] = 1;
	v->a[116073] = aux_sym_heredoc_redirect_token1;
	v->a[116074] = actions(5828);
	v->a[116075] = 1;
	v->a[116076] = sym_file_descriptor;
	v->a[116077] = actions(6400);
	v->a[116078] = 1;
	v->a[116079] = anon_sym_RPAREN;
	small_parse_table_5804(v);
}

void	small_parse_table_5804(t_small_parse_table_array *v)
{
	v->a[116080] = actions(5831);
	v->a[116081] = 3;
	v->a[116082] = sym_variable_name;
	v->a[116083] = sym_test_operator;
	v->a[116084] = sym__brace_start;
	v->a[116085] = actions(5821);
	v->a[116086] = 9;
	v->a[116087] = anon_sym_SEMI;
	v->a[116088] = anon_sym_PIPE_PIPE;
	v->a[116089] = anon_sym_AMP_AMP;
	v->a[116090] = anon_sym_PIPE;
	v->a[116091] = anon_sym_AMP;
	v->a[116092] = anon_sym_LT_LT;
	v->a[116093] = anon_sym_SEMI_SEMI;
	v->a[116094] = anon_sym_PIPE_AMP;
	v->a[116095] = anon_sym_LT_LT_DASH;
	v->a[116096] = actions(5823);
	v->a[116097] = 11;
	v->a[116098] = anon_sym_LT;
	v->a[116099] = anon_sym_GT;
	small_parse_table_5805(v);
}

/* EOF small_parse_table_1160.c */
