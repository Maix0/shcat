/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1000.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5000(t_small_parse_table_array *v)
{
	v->a[100000] = 1;
	v->a[100001] = anon_sym_TILDE;
	v->a[100002] = actions(1221);
	v->a[100003] = 1;
	v->a[100004] = sym__special_character;
	v->a[100005] = actions(1225);
	v->a[100006] = 1;
	v->a[100007] = sym_test_operator;
	v->a[100008] = actions(3060);
	v->a[100009] = 1;
	v->a[100010] = anon_sym_BQUOTE;
	v->a[100011] = state(2484);
	v->a[100012] = 1;
	v->a[100013] = aux_sym__literal_repeat1;
	v->a[100014] = state(3323);
	v->a[100015] = 1;
	v->a[100016] = sym__expression;
	v->a[100017] = actions(1129);
	v->a[100018] = 2;
	v->a[100019] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5001(v);
}

void	small_parse_table_5001(t_small_parse_table_array *v)
{
	v->a[100020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100021] = actions(1165);
	v->a[100022] = 2;
	v->a[100023] = anon_sym_LT_LPAREN;
	v->a[100024] = anon_sym_GT_LPAREN;
	v->a[100025] = actions(1215);
	v->a[100026] = 2;
	v->a[100027] = anon_sym_PLUS_PLUS2;
	v->a[100028] = anon_sym_DASH_DASH2;
	v->a[100029] = actions(1217);
	v->a[100030] = 2;
	v->a[100031] = anon_sym_DASH2;
	v->a[100032] = anon_sym_PLUS2;
	v->a[100033] = actions(1223);
	v->a[100034] = 2;
	v->a[100035] = sym_raw_string;
	v->a[100036] = sym_ansi_c_string;
	v->a[100037] = state(2594);
	v->a[100038] = 6;
	v->a[100039] = sym_binary_expression;
	small_parse_table_5002(v);
}

void	small_parse_table_5002(t_small_parse_table_array *v)
{
	v->a[100040] = sym_ternary_expression;
	v->a[100041] = sym_unary_expression;
	v->a[100042] = sym_postfix_expression;
	v->a[100043] = sym_parenthesized_expression;
	v->a[100044] = sym_concatenation;
	v->a[100045] = state(2588);
	v->a[100046] = 9;
	v->a[100047] = sym_arithmetic_expansion;
	v->a[100048] = sym_brace_expression;
	v->a[100049] = sym_string;
	v->a[100050] = sym_translated_string;
	v->a[100051] = sym_number;
	v->a[100052] = sym_simple_expansion;
	v->a[100053] = sym_expansion;
	v->a[100054] = sym_command_substitution;
	v->a[100055] = sym_process_substitution;
	v->a[100056] = 26;
	v->a[100057] = actions(71);
	v->a[100058] = 1;
	v->a[100059] = sym_comment;
	small_parse_table_5003(v);
}

void	small_parse_table_5003(t_small_parse_table_array *v)
{
	v->a[100060] = actions(1131);
	v->a[100061] = 1;
	v->a[100062] = anon_sym_LPAREN;
	v->a[100063] = actions(1141);
	v->a[100064] = 1;
	v->a[100065] = anon_sym_DOLLAR_LBRACK;
	v->a[100066] = actions(1145);
	v->a[100067] = 1;
	v->a[100068] = anon_sym_DOLLAR;
	v->a[100069] = actions(1149);
	v->a[100070] = 1;
	v->a[100071] = anon_sym_DQUOTE;
	v->a[100072] = actions(1153);
	v->a[100073] = 1;
	v->a[100074] = aux_sym_number_token1;
	v->a[100075] = actions(1155);
	v->a[100076] = 1;
	v->a[100077] = aux_sym_number_token2;
	v->a[100078] = actions(1157);
	v->a[100079] = 1;
	small_parse_table_5004(v);
}

void	small_parse_table_5004(t_small_parse_table_array *v)
{
	v->a[100080] = anon_sym_DOLLAR_LBRACE;
	v->a[100081] = actions(1159);
	v->a[100082] = 1;
	v->a[100083] = anon_sym_DOLLAR_LPAREN;
	v->a[100084] = actions(1163);
	v->a[100085] = 1;
	v->a[100086] = anon_sym_DOLLAR_BQUOTE;
	v->a[100087] = actions(1169);
	v->a[100088] = 1;
	v->a[100089] = sym__brace_start;
	v->a[100090] = actions(1211);
	v->a[100091] = 1;
	v->a[100092] = sym_word;
	v->a[100093] = actions(1213);
	v->a[100094] = 1;
	v->a[100095] = anon_sym_BANG;
	v->a[100096] = actions(1219);
	v->a[100097] = 1;
	v->a[100098] = anon_sym_TILDE;
	v->a[100099] = actions(1221);
	small_parse_table_5005(v);
}

/* EOF small_parse_table_1000.c */
