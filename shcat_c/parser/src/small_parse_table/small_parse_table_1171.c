/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1171.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5855(t_small_parse_table_array *v)
{
	v->a[117100] = anon_sym_DOLLAR_LPAREN;
	v->a[117101] = anon_sym_BQUOTE;
	v->a[117102] = anon_sym_DOLLAR_BQUOTE;
	v->a[117103] = anon_sym_LT_LPAREN;
	v->a[117104] = anon_sym_GT_LPAREN;
	v->a[117105] = aux_sym__simple_variable_name_token1;
	v->a[117106] = sym_word;
	v->a[117107] = 26;
	v->a[117108] = actions(71);
	v->a[117109] = 1;
	v->a[117110] = sym_comment;
	v->a[117111] = actions(1131);
	v->a[117112] = 1;
	v->a[117113] = anon_sym_LPAREN;
	v->a[117114] = actions(1141);
	v->a[117115] = 1;
	v->a[117116] = anon_sym_DOLLAR_LBRACK;
	v->a[117117] = actions(1145);
	v->a[117118] = 1;
	v->a[117119] = anon_sym_DOLLAR;
	small_parse_table_5856(v);
}

void	small_parse_table_5856(t_small_parse_table_array *v)
{
	v->a[117120] = actions(1149);
	v->a[117121] = 1;
	v->a[117122] = anon_sym_DQUOTE;
	v->a[117123] = actions(1153);
	v->a[117124] = 1;
	v->a[117125] = aux_sym_number_token1;
	v->a[117126] = actions(1155);
	v->a[117127] = 1;
	v->a[117128] = aux_sym_number_token2;
	v->a[117129] = actions(1157);
	v->a[117130] = 1;
	v->a[117131] = anon_sym_DOLLAR_LBRACE;
	v->a[117132] = actions(1159);
	v->a[117133] = 1;
	v->a[117134] = anon_sym_DOLLAR_LPAREN;
	v->a[117135] = actions(1163);
	v->a[117136] = 1;
	v->a[117137] = anon_sym_DOLLAR_BQUOTE;
	v->a[117138] = actions(1169);
	v->a[117139] = 1;
	small_parse_table_5857(v);
}

void	small_parse_table_5857(t_small_parse_table_array *v)
{
	v->a[117140] = sym__brace_start;
	v->a[117141] = actions(1187);
	v->a[117142] = 1;
	v->a[117143] = sym_word;
	v->a[117144] = actions(1189);
	v->a[117145] = 1;
	v->a[117146] = anon_sym_BANG;
	v->a[117147] = actions(1195);
	v->a[117148] = 1;
	v->a[117149] = anon_sym_TILDE;
	v->a[117150] = actions(1201);
	v->a[117151] = 1;
	v->a[117152] = sym_test_operator;
	v->a[117153] = actions(3060);
	v->a[117154] = 1;
	v->a[117155] = anon_sym_BQUOTE;
	v->a[117156] = actions(5779);
	v->a[117157] = 1;
	v->a[117158] = sym__special_character;
	v->a[117159] = state(2717);
	small_parse_table_5858(v);
}

void	small_parse_table_5858(t_small_parse_table_array *v)
{
	v->a[117160] = 1;
	v->a[117161] = aux_sym__literal_repeat1;
	v->a[117162] = state(3000);
	v->a[117163] = 1;
	v->a[117164] = sym__expression;
	v->a[117165] = actions(1129);
	v->a[117166] = 2;
	v->a[117167] = anon_sym_LPAREN_LPAREN;
	v->a[117168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117169] = actions(1165);
	v->a[117170] = 2;
	v->a[117171] = anon_sym_LT_LPAREN;
	v->a[117172] = anon_sym_GT_LPAREN;
	v->a[117173] = actions(1191);
	v->a[117174] = 2;
	v->a[117175] = anon_sym_PLUS_PLUS2;
	v->a[117176] = anon_sym_DASH_DASH2;
	v->a[117177] = actions(1193);
	v->a[117178] = 2;
	v->a[117179] = anon_sym_DASH2;
	small_parse_table_5859(v);
}

void	small_parse_table_5859(t_small_parse_table_array *v)
{
	v->a[117180] = anon_sym_PLUS2;
	v->a[117181] = actions(1199);
	v->a[117182] = 2;
	v->a[117183] = sym_raw_string;
	v->a[117184] = sym_ansi_c_string;
	v->a[117185] = state(2594);
	v->a[117186] = 6;
	v->a[117187] = sym_binary_expression;
	v->a[117188] = sym_ternary_expression;
	v->a[117189] = sym_unary_expression;
	v->a[117190] = sym_postfix_expression;
	v->a[117191] = sym_parenthesized_expression;
	v->a[117192] = sym_concatenation;
	v->a[117193] = state(2503);
	v->a[117194] = 9;
	v->a[117195] = sym_arithmetic_expansion;
	v->a[117196] = sym_brace_expression;
	v->a[117197] = sym_string;
	v->a[117198] = sym_translated_string;
	v->a[117199] = sym_number;
	small_parse_table_5860(v);
}

/* EOF small_parse_table_1171.c */
