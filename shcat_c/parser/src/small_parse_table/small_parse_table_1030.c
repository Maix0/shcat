/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1030.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5150(t_small_parse_table_array *v)
{
	v->a[103000] = anon_sym_DOLLAR_LPAREN;
	v->a[103001] = actions(1163);
	v->a[103002] = 1;
	v->a[103003] = anon_sym_DOLLAR_BQUOTE;
	v->a[103004] = actions(1169);
	v->a[103005] = 1;
	v->a[103006] = sym__brace_start;
	v->a[103007] = actions(1171);
	v->a[103008] = 1;
	v->a[103009] = sym_word;
	v->a[103010] = actions(1173);
	v->a[103011] = 1;
	v->a[103012] = anon_sym_BANG;
	v->a[103013] = actions(1179);
	v->a[103014] = 1;
	v->a[103015] = anon_sym_TILDE;
	v->a[103016] = actions(1181);
	v->a[103017] = 1;
	v->a[103018] = sym__special_character;
	v->a[103019] = actions(1185);
	small_parse_table_5151(v);
}

void	small_parse_table_5151(t_small_parse_table_array *v)
{
	v->a[103020] = 1;
	v->a[103021] = sym_test_operator;
	v->a[103022] = actions(3060);
	v->a[103023] = 1;
	v->a[103024] = anon_sym_BQUOTE;
	v->a[103025] = state(2484);
	v->a[103026] = 1;
	v->a[103027] = aux_sym__literal_repeat1;
	v->a[103028] = state(3061);
	v->a[103029] = 1;
	v->a[103030] = sym__expression;
	v->a[103031] = actions(1129);
	v->a[103032] = 2;
	v->a[103033] = anon_sym_LPAREN_LPAREN;
	v->a[103034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103035] = actions(1165);
	v->a[103036] = 2;
	v->a[103037] = anon_sym_LT_LPAREN;
	v->a[103038] = anon_sym_GT_LPAREN;
	v->a[103039] = actions(1175);
	small_parse_table_5152(v);
}

void	small_parse_table_5152(t_small_parse_table_array *v)
{
	v->a[103040] = 2;
	v->a[103041] = anon_sym_PLUS_PLUS2;
	v->a[103042] = anon_sym_DASH_DASH2;
	v->a[103043] = actions(1177);
	v->a[103044] = 2;
	v->a[103045] = anon_sym_DASH2;
	v->a[103046] = anon_sym_PLUS2;
	v->a[103047] = actions(1183);
	v->a[103048] = 2;
	v->a[103049] = sym_raw_string;
	v->a[103050] = sym_ansi_c_string;
	v->a[103051] = state(2594);
	v->a[103052] = 6;
	v->a[103053] = sym_binary_expression;
	v->a[103054] = sym_ternary_expression;
	v->a[103055] = sym_unary_expression;
	v->a[103056] = sym_postfix_expression;
	v->a[103057] = sym_parenthesized_expression;
	v->a[103058] = sym_concatenation;
	v->a[103059] = state(2456);
	small_parse_table_5153(v);
}

void	small_parse_table_5153(t_small_parse_table_array *v)
{
	v->a[103060] = 9;
	v->a[103061] = sym_arithmetic_expansion;
	v->a[103062] = sym_brace_expression;
	v->a[103063] = sym_string;
	v->a[103064] = sym_translated_string;
	v->a[103065] = sym_number;
	v->a[103066] = sym_simple_expansion;
	v->a[103067] = sym_expansion;
	v->a[103068] = sym_command_substitution;
	v->a[103069] = sym_process_substitution;
	v->a[103070] = 26;
	v->a[103071] = actions(71);
	v->a[103072] = 1;
	v->a[103073] = sym_comment;
	v->a[103074] = actions(1131);
	v->a[103075] = 1;
	v->a[103076] = anon_sym_LPAREN;
	v->a[103077] = actions(1141);
	v->a[103078] = 1;
	v->a[103079] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_5154(v);
}

void	small_parse_table_5154(t_small_parse_table_array *v)
{
	v->a[103080] = actions(1145);
	v->a[103081] = 1;
	v->a[103082] = anon_sym_DOLLAR;
	v->a[103083] = actions(1149);
	v->a[103084] = 1;
	v->a[103085] = anon_sym_DQUOTE;
	v->a[103086] = actions(1153);
	v->a[103087] = 1;
	v->a[103088] = aux_sym_number_token1;
	v->a[103089] = actions(1155);
	v->a[103090] = 1;
	v->a[103091] = aux_sym_number_token2;
	v->a[103092] = actions(1157);
	v->a[103093] = 1;
	v->a[103094] = anon_sym_DOLLAR_LBRACE;
	v->a[103095] = actions(1159);
	v->a[103096] = 1;
	v->a[103097] = anon_sym_DOLLAR_LPAREN;
	v->a[103098] = actions(1163);
	v->a[103099] = 1;
	small_parse_table_5155(v);
}

/* EOF small_parse_table_1030.c */
