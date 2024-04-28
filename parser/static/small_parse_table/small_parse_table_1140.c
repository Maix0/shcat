/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1140.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5700(t_small_parse_table_array *v)
{
	v->a[114000] = sym__special_character;
	v->a[114001] = anon_sym_DQUOTE;
	v->a[114002] = sym_raw_string;
	v->a[114003] = sym_ansi_c_string;
	v->a[114004] = aux_sym_number_token1;
	v->a[114005] = aux_sym_number_token2;
	v->a[114006] = anon_sym_DOLLAR_LBRACE;
	v->a[114007] = anon_sym_DOLLAR_LPAREN;
	v->a[114008] = anon_sym_BQUOTE;
	v->a[114009] = anon_sym_DOLLAR_BQUOTE;
	v->a[114010] = anon_sym_LT_LPAREN;
	v->a[114011] = anon_sym_GT_LPAREN;
	v->a[114012] = sym_word;
	v->a[114013] = 26;
	v->a[114014] = actions(71);
	v->a[114015] = 1;
	v->a[114016] = sym_comment;
	v->a[114017] = actions(107);
	v->a[114018] = 1;
	v->a[114019] = anon_sym_TILDE;
	small_parse_table_5701(v);
}

void	small_parse_table_5701(t_small_parse_table_array *v)
{
	v->a[114020] = actions(237);
	v->a[114021] = 1;
	v->a[114022] = sym_word;
	v->a[114023] = actions(248);
	v->a[114024] = 1;
	v->a[114025] = anon_sym_LPAREN;
	v->a[114026] = actions(250);
	v->a[114027] = 1;
	v->a[114028] = anon_sym_BANG;
	v->a[114029] = actions(258);
	v->a[114030] = 1;
	v->a[114031] = anon_sym_DOLLAR;
	v->a[114032] = actions(264);
	v->a[114033] = 1;
	v->a[114034] = aux_sym_number_token1;
	v->a[114035] = actions(266);
	v->a[114036] = 1;
	v->a[114037] = aux_sym_number_token2;
	v->a[114038] = actions(270);
	v->a[114039] = 1;
	small_parse_table_5702(v);
}

void	small_parse_table_5702(t_small_parse_table_array *v)
{
	v->a[114040] = anon_sym_DOLLAR_LPAREN;
	v->a[114041] = actions(282);
	v->a[114042] = 1;
	v->a[114043] = sym_test_operator;
	v->a[114044] = actions(284);
	v->a[114045] = 1;
	v->a[114046] = sym__brace_start;
	v->a[114047] = actions(1075);
	v->a[114048] = 1;
	v->a[114049] = anon_sym_DOLLAR_LBRACK;
	v->a[114050] = actions(1079);
	v->a[114051] = 1;
	v->a[114052] = sym__special_character;
	v->a[114053] = actions(1081);
	v->a[114054] = 1;
	v->a[114055] = anon_sym_DQUOTE;
	v->a[114056] = actions(1085);
	v->a[114057] = 1;
	v->a[114058] = anon_sym_DOLLAR_LBRACE;
	v->a[114059] = actions(1087);
	small_parse_table_5703(v);
}

void	small_parse_table_5703(t_small_parse_table_array *v)
{
	v->a[114060] = 1;
	v->a[114061] = anon_sym_DOLLAR_BQUOTE;
	v->a[114062] = actions(3598);
	v->a[114063] = 1;
	v->a[114064] = anon_sym_BQUOTE;
	v->a[114065] = state(2690);
	v->a[114066] = 1;
	v->a[114067] = aux_sym__literal_repeat1;
	v->a[114068] = state(3090);
	v->a[114069] = 1;
	v->a[114070] = sym__expression;
	v->a[114071] = actions(103);
	v->a[114072] = 2;
	v->a[114073] = anon_sym_PLUS_PLUS2;
	v->a[114074] = anon_sym_DASH_DASH2;
	v->a[114075] = actions(105);
	v->a[114076] = 2;
	v->a[114077] = anon_sym_DASH2;
	v->a[114078] = anon_sym_PLUS2;
	v->a[114079] = actions(1073);
	small_parse_table_5704(v);
}

void	small_parse_table_5704(t_small_parse_table_array *v)
{
	v->a[114080] = 2;
	v->a[114081] = anon_sym_LPAREN_LPAREN;
	v->a[114082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114083] = actions(1083);
	v->a[114084] = 2;
	v->a[114085] = sym_raw_string;
	v->a[114086] = sym_ansi_c_string;
	v->a[114087] = actions(1089);
	v->a[114088] = 2;
	v->a[114089] = anon_sym_LT_LPAREN;
	v->a[114090] = anon_sym_GT_LPAREN;
	v->a[114091] = state(3053);
	v->a[114092] = 6;
	v->a[114093] = sym_binary_expression;
	v->a[114094] = sym_ternary_expression;
	v->a[114095] = sym_unary_expression;
	v->a[114096] = sym_postfix_expression;
	v->a[114097] = sym_parenthesized_expression;
	v->a[114098] = sym_concatenation;
	v->a[114099] = state(2500);
	small_parse_table_5705(v);
}

/* EOF small_parse_table_1140.c */
