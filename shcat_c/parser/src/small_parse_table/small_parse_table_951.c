/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_951.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4755(t_small_parse_table_array *v)
{
	v->a[95100] = 1;
	v->a[95101] = anon_sym_LPAREN;
	v->a[95102] = actions(1133);
	v->a[95103] = 1;
	v->a[95104] = anon_sym_BANG;
	v->a[95105] = actions(1139);
	v->a[95106] = 1;
	v->a[95107] = anon_sym_TILDE;
	v->a[95108] = actions(1141);
	v->a[95109] = 1;
	v->a[95110] = anon_sym_DOLLAR_LBRACK;
	v->a[95111] = actions(1145);
	v->a[95112] = 1;
	v->a[95113] = anon_sym_DOLLAR;
	v->a[95114] = actions(1147);
	v->a[95115] = 1;
	v->a[95116] = sym__special_character;
	v->a[95117] = actions(1149);
	v->a[95118] = 1;
	v->a[95119] = anon_sym_DQUOTE;
	small_parse_table_4756(v);
}

void	small_parse_table_4756(t_small_parse_table_array *v)
{
	v->a[95120] = actions(1153);
	v->a[95121] = 1;
	v->a[95122] = aux_sym_number_token1;
	v->a[95123] = actions(1155);
	v->a[95124] = 1;
	v->a[95125] = aux_sym_number_token2;
	v->a[95126] = actions(1157);
	v->a[95127] = 1;
	v->a[95128] = anon_sym_DOLLAR_LBRACE;
	v->a[95129] = actions(1159);
	v->a[95130] = 1;
	v->a[95131] = anon_sym_DOLLAR_LPAREN;
	v->a[95132] = actions(1163);
	v->a[95133] = 1;
	v->a[95134] = anon_sym_DOLLAR_BQUOTE;
	v->a[95135] = actions(1167);
	v->a[95136] = 1;
	v->a[95137] = sym_test_operator;
	v->a[95138] = actions(1169);
	v->a[95139] = 1;
	small_parse_table_4757(v);
}

void	small_parse_table_4757(t_small_parse_table_array *v)
{
	v->a[95140] = sym__brace_start;
	v->a[95141] = actions(3060);
	v->a[95142] = 1;
	v->a[95143] = anon_sym_BQUOTE;
	v->a[95144] = state(2484);
	v->a[95145] = 1;
	v->a[95146] = aux_sym__literal_repeat1;
	v->a[95147] = state(2970);
	v->a[95148] = 1;
	v->a[95149] = sym__expression;
	v->a[95150] = actions(1129);
	v->a[95151] = 2;
	v->a[95152] = anon_sym_LPAREN_LPAREN;
	v->a[95153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95154] = actions(1135);
	v->a[95155] = 2;
	v->a[95156] = anon_sym_PLUS_PLUS2;
	v->a[95157] = anon_sym_DASH_DASH2;
	v->a[95158] = actions(1137);
	v->a[95159] = 2;
	small_parse_table_4758(v);
}

void	small_parse_table_4758(t_small_parse_table_array *v)
{
	v->a[95160] = anon_sym_DASH2;
	v->a[95161] = anon_sym_PLUS2;
	v->a[95162] = actions(1151);
	v->a[95163] = 2;
	v->a[95164] = sym_raw_string;
	v->a[95165] = sym_ansi_c_string;
	v->a[95166] = actions(1165);
	v->a[95167] = 2;
	v->a[95168] = anon_sym_LT_LPAREN;
	v->a[95169] = anon_sym_GT_LPAREN;
	v->a[95170] = state(2594);
	v->a[95171] = 6;
	v->a[95172] = sym_binary_expression;
	v->a[95173] = sym_ternary_expression;
	v->a[95174] = sym_unary_expression;
	v->a[95175] = sym_postfix_expression;
	v->a[95176] = sym_parenthesized_expression;
	v->a[95177] = sym_concatenation;
	v->a[95178] = state(2573);
	v->a[95179] = 9;
	small_parse_table_4759(v);
}

void	small_parse_table_4759(t_small_parse_table_array *v)
{
	v->a[95180] = sym_arithmetic_expansion;
	v->a[95181] = sym_brace_expression;
	v->a[95182] = sym_string;
	v->a[95183] = sym_translated_string;
	v->a[95184] = sym_number;
	v->a[95185] = sym_simple_expansion;
	v->a[95186] = sym_expansion;
	v->a[95187] = sym_command_substitution;
	v->a[95188] = sym_process_substitution;
	v->a[95189] = 26;
	v->a[95190] = actions(71);
	v->a[95191] = 1;
	v->a[95192] = sym_comment;
	v->a[95193] = actions(1127);
	v->a[95194] = 1;
	v->a[95195] = sym_word;
	v->a[95196] = actions(1131);
	v->a[95197] = 1;
	v->a[95198] = anon_sym_LPAREN;
	v->a[95199] = actions(1133);
	small_parse_table_4760(v);
}

/* EOF small_parse_table_951.c */
