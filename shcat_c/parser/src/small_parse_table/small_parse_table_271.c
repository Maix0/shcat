/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_271.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1355(t_small_parse_table_array *v)
{
	v->a[27100] = anon_sym_LT_AMP_DASH;
	v->a[27101] = anon_sym_GT_AMP_DASH;
	v->a[27102] = anon_sym_LT_LT_DASH;
	v->a[27103] = anon_sym_LT_LT_LT;
	v->a[27104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27105] = anon_sym_DOLLAR_LBRACK;
	v->a[27106] = anon_sym_DOLLAR;
	v->a[27107] = sym__special_character;
	v->a[27108] = anon_sym_DQUOTE;
	v->a[27109] = sym_raw_string;
	v->a[27110] = sym_ansi_c_string;
	v->a[27111] = aux_sym_number_token1;
	v->a[27112] = aux_sym_number_token2;
	v->a[27113] = anon_sym_DOLLAR_LBRACE;
	v->a[27114] = anon_sym_DOLLAR_LPAREN;
	v->a[27115] = anon_sym_BQUOTE;
	v->a[27116] = anon_sym_DOLLAR_BQUOTE;
	v->a[27117] = anon_sym_LT_LPAREN;
	v->a[27118] = anon_sym_GT_LPAREN;
	v->a[27119] = sym_word;
	small_parse_table_1356(v);
}

void	small_parse_table_1356(t_small_parse_table_array *v)
{
	v->a[27120] = 6;
	v->a[27121] = actions(71);
	v->a[27122] = 1;
	v->a[27123] = sym_comment;
	v->a[27124] = state(2457);
	v->a[27125] = 1;
	v->a[27126] = aux_sym__literal_repeat1;
	v->a[27127] = state(817);
	v->a[27128] = 2;
	v->a[27129] = sym_concatenation;
	v->a[27130] = aux_sym_for_statement_repeat1;
	v->a[27131] = state(2271);
	v->a[27132] = 9;
	v->a[27133] = sym_arithmetic_expansion;
	v->a[27134] = sym_brace_expression;
	v->a[27135] = sym_string;
	v->a[27136] = sym_translated_string;
	v->a[27137] = sym_number;
	v->a[27138] = sym_simple_expansion;
	v->a[27139] = sym_expansion;
	small_parse_table_1357(v);
}

void	small_parse_table_1357(t_small_parse_table_array *v)
{
	v->a[27140] = sym_command_substitution;
	v->a[27141] = sym_process_substitution;
	v->a[27142] = actions(2094);
	v->a[27143] = 13;
	v->a[27144] = anon_sym_PIPE;
	v->a[27145] = anon_sym_LT;
	v->a[27146] = anon_sym_GT;
	v->a[27147] = anon_sym_LT_LT;
	v->a[27148] = anon_sym_AMP_GT;
	v->a[27149] = anon_sym_LT_AMP;
	v->a[27150] = anon_sym_GT_AMP;
	v->a[27151] = anon_sym_DOLLAR;
	v->a[27152] = sym__special_character;
	v->a[27153] = aux_sym_number_token1;
	v->a[27154] = aux_sym_number_token2;
	v->a[27155] = anon_sym_DOLLAR_LPAREN;
	v->a[27156] = sym_word;
	v->a[27157] = actions(2096);
	v->a[27158] = 26;
	v->a[27159] = sym_file_descriptor;
	small_parse_table_1358(v);
}

void	small_parse_table_1358(t_small_parse_table_array *v)
{
	v->a[27160] = sym_variable_name;
	v->a[27161] = sym_test_operator;
	v->a[27162] = sym__brace_start;
	v->a[27163] = anon_sym_LPAREN_LPAREN;
	v->a[27164] = anon_sym_PIPE_PIPE;
	v->a[27165] = anon_sym_AMP_AMP;
	v->a[27166] = anon_sym_GT_GT;
	v->a[27167] = anon_sym_PIPE_AMP;
	v->a[27168] = anon_sym_RBRACK;
	v->a[27169] = anon_sym_AMP_GT_GT;
	v->a[27170] = anon_sym_GT_PIPE;
	v->a[27171] = anon_sym_LT_AMP_DASH;
	v->a[27172] = anon_sym_GT_AMP_DASH;
	v->a[27173] = anon_sym_LT_LT_DASH;
	v->a[27174] = anon_sym_LT_LT_LT;
	v->a[27175] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27176] = anon_sym_DOLLAR_LBRACK;
	v->a[27177] = anon_sym_DQUOTE;
	v->a[27178] = sym_raw_string;
	v->a[27179] = sym_ansi_c_string;
	small_parse_table_1359(v);
}

void	small_parse_table_1359(t_small_parse_table_array *v)
{
	v->a[27180] = anon_sym_DOLLAR_LBRACE;
	v->a[27181] = anon_sym_BQUOTE;
	v->a[27182] = anon_sym_DOLLAR_BQUOTE;
	v->a[27183] = anon_sym_LT_LPAREN;
	v->a[27184] = anon_sym_GT_LPAREN;
	v->a[27185] = 9;
	v->a[27186] = actions(3);
	v->a[27187] = 1;
	v->a[27188] = sym_comment;
	v->a[27189] = actions(4263);
	v->a[27190] = 1;
	v->a[27191] = sym_variable_name;
	v->a[27192] = state(6726);
	v->a[27193] = 1;
	v->a[27194] = sym_subscript;
	v->a[27195] = actions(4261);
	v->a[27196] = 2;
	v->a[27197] = sym_test_operator;
	v->a[27198] = sym__brace_start;
	v->a[27199] = actions(4348);
	small_parse_table_1360(v);
}

/* EOF small_parse_table_271.c */
