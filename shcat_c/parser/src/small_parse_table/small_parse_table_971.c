/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_971.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4855(t_small_parse_table_array *v)
{
	v->a[97100] = state(2717);
	v->a[97101] = 1;
	v->a[97102] = aux_sym__literal_repeat1;
	v->a[97103] = actions(1129);
	v->a[97104] = 2;
	v->a[97105] = anon_sym_LPAREN_LPAREN;
	v->a[97106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97107] = actions(1165);
	v->a[97108] = 2;
	v->a[97109] = anon_sym_LT_LPAREN;
	v->a[97110] = anon_sym_GT_LPAREN;
	v->a[97111] = actions(1191);
	v->a[97112] = 2;
	v->a[97113] = anon_sym_PLUS_PLUS2;
	v->a[97114] = anon_sym_DASH_DASH2;
	v->a[97115] = actions(1193);
	v->a[97116] = 2;
	v->a[97117] = anon_sym_DASH2;
	v->a[97118] = anon_sym_PLUS2;
	v->a[97119] = actions(1199);
	small_parse_table_4856(v);
}

void	small_parse_table_4856(t_small_parse_table_array *v)
{
	v->a[97120] = 2;
	v->a[97121] = sym_raw_string;
	v->a[97122] = sym_ansi_c_string;
	v->a[97123] = state(2594);
	v->a[97124] = 6;
	v->a[97125] = sym_binary_expression;
	v->a[97126] = sym_ternary_expression;
	v->a[97127] = sym_unary_expression;
	v->a[97128] = sym_postfix_expression;
	v->a[97129] = sym_parenthesized_expression;
	v->a[97130] = sym_concatenation;
	v->a[97131] = state(2503);
	v->a[97132] = 9;
	v->a[97133] = sym_arithmetic_expansion;
	v->a[97134] = sym_brace_expression;
	v->a[97135] = sym_string;
	v->a[97136] = sym_translated_string;
	v->a[97137] = sym_number;
	v->a[97138] = sym_simple_expansion;
	v->a[97139] = sym_expansion;
	small_parse_table_4857(v);
}

void	small_parse_table_4857(t_small_parse_table_array *v)
{
	v->a[97140] = sym_command_substitution;
	v->a[97141] = sym_process_substitution;
	v->a[97142] = 3;
	v->a[97143] = actions(71);
	v->a[97144] = 1;
	v->a[97145] = sym_comment;
	v->a[97146] = actions(1328);
	v->a[97147] = 16;
	v->a[97148] = anon_sym_PIPE;
	v->a[97149] = anon_sym_EQ_EQ;
	v->a[97150] = anon_sym_LT;
	v->a[97151] = anon_sym_GT;
	v->a[97152] = anon_sym_LT_LT;
	v->a[97153] = anon_sym_LPAREN;
	v->a[97154] = anon_sym_EQ_TILDE;
	v->a[97155] = anon_sym_AMP_GT;
	v->a[97156] = anon_sym_LT_AMP;
	v->a[97157] = anon_sym_GT_AMP;
	v->a[97158] = anon_sym_DOLLAR;
	v->a[97159] = aux_sym_number_token1;
	small_parse_table_4858(v);
}

void	small_parse_table_4858(t_small_parse_table_array *v)
{
	v->a[97160] = aux_sym_number_token2;
	v->a[97161] = anon_sym_DOLLAR_LPAREN;
	v->a[97162] = anon_sym_BQUOTE;
	v->a[97163] = sym_word;
	v->a[97164] = actions(1330);
	v->a[97165] = 27;
	v->a[97166] = sym_file_descriptor;
	v->a[97167] = sym__concat;
	v->a[97168] = sym_test_operator;
	v->a[97169] = sym__bare_dollar;
	v->a[97170] = sym__brace_start;
	v->a[97171] = anon_sym_LPAREN_LPAREN;
	v->a[97172] = anon_sym_PIPE_PIPE;
	v->a[97173] = anon_sym_AMP_AMP;
	v->a[97174] = anon_sym_GT_GT;
	v->a[97175] = anon_sym_PIPE_AMP;
	v->a[97176] = anon_sym_AMP_GT_GT;
	v->a[97177] = anon_sym_GT_PIPE;
	v->a[97178] = anon_sym_LT_AMP_DASH;
	v->a[97179] = anon_sym_GT_AMP_DASH;
	small_parse_table_4859(v);
}

void	small_parse_table_4859(t_small_parse_table_array *v)
{
	v->a[97180] = anon_sym_LT_LT_DASH;
	v->a[97181] = anon_sym_LT_LT_LT;
	v->a[97182] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97183] = anon_sym_DOLLAR_LBRACK;
	v->a[97184] = aux_sym_concatenation_token1;
	v->a[97185] = sym__special_character;
	v->a[97186] = anon_sym_DQUOTE;
	v->a[97187] = sym_raw_string;
	v->a[97188] = sym_ansi_c_string;
	v->a[97189] = anon_sym_DOLLAR_LBRACE;
	v->a[97190] = anon_sym_DOLLAR_BQUOTE;
	v->a[97191] = anon_sym_LT_LPAREN;
	v->a[97192] = anon_sym_GT_LPAREN;
	v->a[97193] = 6;
	v->a[97194] = actions(3);
	v->a[97195] = 1;
	v->a[97196] = sym_comment;
	v->a[97197] = actions(6013);
	v->a[97198] = 1;
	v->a[97199] = aux_sym_concatenation_token1;
	small_parse_table_4860(v);
}

/* EOF small_parse_table_971.c */
