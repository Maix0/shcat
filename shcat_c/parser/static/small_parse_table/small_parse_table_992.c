/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_992.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4960(t_small_parse_table_array *v)
{
	v->a[99200] = anon_sym_DOLLAR_LPAREN;
	v->a[99201] = actions(1163);
	v->a[99202] = 1;
	v->a[99203] = anon_sym_DOLLAR_BQUOTE;
	v->a[99204] = actions(1169);
	v->a[99205] = 1;
	v->a[99206] = sym__brace_start;
	v->a[99207] = actions(1211);
	v->a[99208] = 1;
	v->a[99209] = sym_word;
	v->a[99210] = actions(1213);
	v->a[99211] = 1;
	v->a[99212] = anon_sym_BANG;
	v->a[99213] = actions(1219);
	v->a[99214] = 1;
	v->a[99215] = anon_sym_TILDE;
	v->a[99216] = actions(1221);
	v->a[99217] = 1;
	v->a[99218] = sym__special_character;
	v->a[99219] = actions(1225);
	small_parse_table_4961(v);
}

void	small_parse_table_4961(t_small_parse_table_array *v)
{
	v->a[99220] = 1;
	v->a[99221] = sym_test_operator;
	v->a[99222] = actions(3060);
	v->a[99223] = 1;
	v->a[99224] = anon_sym_BQUOTE;
	v->a[99225] = state(2484);
	v->a[99226] = 1;
	v->a[99227] = aux_sym__literal_repeat1;
	v->a[99228] = state(3305);
	v->a[99229] = 1;
	v->a[99230] = sym__expression;
	v->a[99231] = actions(1129);
	v->a[99232] = 2;
	v->a[99233] = anon_sym_LPAREN_LPAREN;
	v->a[99234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99235] = actions(1165);
	v->a[99236] = 2;
	v->a[99237] = anon_sym_LT_LPAREN;
	v->a[99238] = anon_sym_GT_LPAREN;
	v->a[99239] = actions(1215);
	small_parse_table_4962(v);
}

void	small_parse_table_4962(t_small_parse_table_array *v)
{
	v->a[99240] = 2;
	v->a[99241] = anon_sym_PLUS_PLUS2;
	v->a[99242] = anon_sym_DASH_DASH2;
	v->a[99243] = actions(1217);
	v->a[99244] = 2;
	v->a[99245] = anon_sym_DASH2;
	v->a[99246] = anon_sym_PLUS2;
	v->a[99247] = actions(1223);
	v->a[99248] = 2;
	v->a[99249] = sym_raw_string;
	v->a[99250] = sym_ansi_c_string;
	v->a[99251] = state(2594);
	v->a[99252] = 6;
	v->a[99253] = sym_binary_expression;
	v->a[99254] = sym_ternary_expression;
	v->a[99255] = sym_unary_expression;
	v->a[99256] = sym_postfix_expression;
	v->a[99257] = sym_parenthesized_expression;
	v->a[99258] = sym_concatenation;
	v->a[99259] = state(2588);
	small_parse_table_4963(v);
}

void	small_parse_table_4963(t_small_parse_table_array *v)
{
	v->a[99260] = 9;
	v->a[99261] = sym_arithmetic_expansion;
	v->a[99262] = sym_brace_expression;
	v->a[99263] = sym_string;
	v->a[99264] = sym_translated_string;
	v->a[99265] = sym_number;
	v->a[99266] = sym_simple_expansion;
	v->a[99267] = sym_expansion;
	v->a[99268] = sym_command_substitution;
	v->a[99269] = sym_process_substitution;
	v->a[99270] = 26;
	v->a[99271] = actions(71);
	v->a[99272] = 1;
	v->a[99273] = sym_comment;
	v->a[99274] = actions(1131);
	v->a[99275] = 1;
	v->a[99276] = anon_sym_LPAREN;
	v->a[99277] = actions(1141);
	v->a[99278] = 1;
	v->a[99279] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4964(v);
}

void	small_parse_table_4964(t_small_parse_table_array *v)
{
	v->a[99280] = actions(1145);
	v->a[99281] = 1;
	v->a[99282] = anon_sym_DOLLAR;
	v->a[99283] = actions(1149);
	v->a[99284] = 1;
	v->a[99285] = anon_sym_DQUOTE;
	v->a[99286] = actions(1153);
	v->a[99287] = 1;
	v->a[99288] = aux_sym_number_token1;
	v->a[99289] = actions(1155);
	v->a[99290] = 1;
	v->a[99291] = aux_sym_number_token2;
	v->a[99292] = actions(1157);
	v->a[99293] = 1;
	v->a[99294] = anon_sym_DOLLAR_LBRACE;
	v->a[99295] = actions(1159);
	v->a[99296] = 1;
	v->a[99297] = anon_sym_DOLLAR_LPAREN;
	v->a[99298] = actions(1163);
	v->a[99299] = 1;
	small_parse_table_4965(v);
}

/* EOF small_parse_table_992.c */
