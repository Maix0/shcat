/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_160.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_800(t_small_parse_table_array *v)
{
	v->a[16000] = 1;
	v->a[16001] = sym__arithmetic_postfix_expression;
	v->a[16002] = state(3158);
	v->a[16003] = 1;
	v->a[16004] = sym__expression;
	v->a[16005] = actions(1129);
	v->a[16006] = 2;
	v->a[16007] = anon_sym_LPAREN_LPAREN;
	v->a[16008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16009] = actions(1165);
	v->a[16010] = 2;
	v->a[16011] = anon_sym_LT_LPAREN;
	v->a[16012] = anon_sym_GT_LPAREN;
	v->a[16013] = actions(1183);
	v->a[16014] = 2;
	v->a[16015] = sym_raw_string;
	v->a[16016] = sym_ansi_c_string;
	v->a[16017] = actions(3054);
	v->a[16018] = 2;
	v->a[16019] = anon_sym_PLUS_PLUS2;
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = anon_sym_DASH_DASH2;
	v->a[16021] = actions(3056);
	v->a[16022] = 2;
	v->a[16023] = anon_sym_DASH2;
	v->a[16024] = anon_sym_PLUS2;
	v->a[16025] = state(2397);
	v->a[16026] = 4;
	v->a[16027] = sym_string;
	v->a[16028] = sym_number;
	v->a[16029] = sym_simple_expansion;
	v->a[16030] = sym_expansion;
	v->a[16031] = state(2456);
	v->a[16032] = 4;
	v->a[16033] = sym_arithmetic_expansion;
	v->a[16034] = sym_brace_expression;
	v->a[16035] = sym_translated_string;
	v->a[16036] = sym_process_substitution;
	v->a[16037] = state(2782);
	v->a[16038] = 4;
	v->a[16039] = sym_subscript;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = sym__arithmetic_expression;
	v->a[16041] = sym__arithmetic_literal;
	v->a[16042] = sym__arithmetic_parenthesized_expression;
	v->a[16043] = state(2594);
	v->a[16044] = 6;
	v->a[16045] = sym_binary_expression;
	v->a[16046] = sym_ternary_expression;
	v->a[16047] = sym_unary_expression;
	v->a[16048] = sym_postfix_expression;
	v->a[16049] = sym_parenthesized_expression;
	v->a[16050] = sym_concatenation;
	v->a[16051] = 36;
	v->a[16052] = actions(71);
	v->a[16053] = 1;
	v->a[16054] = sym_comment;
	v->a[16055] = actions(229);
	v->a[16056] = 1;
	v->a[16057] = anon_sym_RPAREN_RPAREN;
	v->a[16058] = actions(1141);
	v->a[16059] = 1;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = anon_sym_DOLLAR_LBRACK;
	v->a[16061] = actions(1145);
	v->a[16062] = 1;
	v->a[16063] = anon_sym_DOLLAR;
	v->a[16064] = actions(1149);
	v->a[16065] = 1;
	v->a[16066] = anon_sym_DQUOTE;
	v->a[16067] = actions(1153);
	v->a[16068] = 1;
	v->a[16069] = aux_sym_number_token1;
	v->a[16070] = actions(1155);
	v->a[16071] = 1;
	v->a[16072] = aux_sym_number_token2;
	v->a[16073] = actions(1157);
	v->a[16074] = 1;
	v->a[16075] = anon_sym_DOLLAR_LBRACE;
	v->a[16076] = actions(1159);
	v->a[16077] = 1;
	v->a[16078] = anon_sym_DOLLAR_LPAREN;
	v->a[16079] = actions(1163);
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = 1;
	v->a[16081] = anon_sym_DOLLAR_BQUOTE;
	v->a[16082] = actions(1169);
	v->a[16083] = 1;
	v->a[16084] = sym__brace_start;
	v->a[16085] = actions(1171);
	v->a[16086] = 1;
	v->a[16087] = sym_word;
	v->a[16088] = actions(1181);
	v->a[16089] = 1;
	v->a[16090] = sym__special_character;
	v->a[16091] = actions(1185);
	v->a[16092] = 1;
	v->a[16093] = sym_test_operator;
	v->a[16094] = actions(3050);
	v->a[16095] = 1;
	v->a[16096] = anon_sym_LPAREN;
	v->a[16097] = actions(3052);
	v->a[16098] = 1;
	v->a[16099] = anon_sym_BANG;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
