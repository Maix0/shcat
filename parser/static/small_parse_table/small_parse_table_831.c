/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_831.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4155(t_small_parse_table_array *v)
{
	v->a[83100] = 1;
	v->a[83101] = anon_sym_DOLLAR_BQUOTE;
	v->a[83102] = actions(4668);
	v->a[83103] = 1;
	v->a[83104] = aux_sym__simple_variable_name_token1;
	v->a[83105] = actions(4670);
	v->a[83106] = 1;
	v->a[83107] = sym_variable_name;
	v->a[83108] = state(1476);
	v->a[83109] = 1;
	v->a[83110] = sym__arithmetic_postfix_expression;
	v->a[83111] = state(1478);
	v->a[83112] = 1;
	v->a[83113] = sym__arithmetic_unary_expression;
	v->a[83114] = state(1490);
	v->a[83115] = 1;
	v->a[83116] = sym__arithmetic_ternary_expression;
	v->a[83117] = state(1511);
	v->a[83118] = 1;
	v->a[83119] = sym__arithmetic_binary_expression;
	small_parse_table_4156(v);
}

void	small_parse_table_4156(t_small_parse_table_array *v)
{
	v->a[83120] = actions(4588);
	v->a[83121] = 2;
	v->a[83122] = anon_sym_PLUS_PLUS;
	v->a[83123] = anon_sym_DASH_DASH;
	v->a[83124] = actions(4590);
	v->a[83125] = 2;
	v->a[83126] = anon_sym_DASH2;
	v->a[83127] = anon_sym_PLUS2;
	v->a[83128] = state(1424);
	v->a[83129] = 8;
	v->a[83130] = sym__arithmetic_expression;
	v->a[83131] = sym__arithmetic_literal;
	v->a[83132] = sym__arithmetic_parenthesized_expression;
	v->a[83133] = sym_string;
	v->a[83134] = sym_number;
	v->a[83135] = sym_simple_expansion;
	v->a[83136] = sym_expansion;
	v->a[83137] = sym_command_substitution;
	v->a[83138] = 5;
	v->a[83139] = actions(3);
	small_parse_table_4157(v);
}

void	small_parse_table_4157(t_small_parse_table_array *v)
{
	v->a[83140] = 1;
	v->a[83141] = sym_comment;
	v->a[83142] = actions(4672);
	v->a[83143] = 1;
	v->a[83144] = sym__special_character;
	v->a[83145] = state(1739);
	v->a[83146] = 1;
	v->a[83147] = aux_sym__literal_repeat1;
	v->a[83148] = actions(3197);
	v->a[83149] = 4;
	v->a[83150] = sym_file_descriptor;
	v->a[83151] = sym_test_operator;
	v->a[83152] = sym__brace_start;
	v->a[83153] = aux_sym_heredoc_redirect_token1;
	v->a[83154] = actions(3195);
	v->a[83155] = 23;
	v->a[83156] = anon_sym_AMP_AMP;
	v->a[83157] = anon_sym_PIPE_PIPE;
	v->a[83158] = anon_sym_LT;
	v->a[83159] = anon_sym_GT;
	small_parse_table_4158(v);
}

void	small_parse_table_4158(t_small_parse_table_array *v)
{
	v->a[83160] = anon_sym_GT_GT;
	v->a[83161] = anon_sym_AMP_GT;
	v->a[83162] = anon_sym_AMP_GT_GT;
	v->a[83163] = anon_sym_LT_AMP;
	v->a[83164] = anon_sym_GT_AMP;
	v->a[83165] = anon_sym_GT_PIPE;
	v->a[83166] = anon_sym_LT_AMP_DASH;
	v->a[83167] = anon_sym_GT_AMP_DASH;
	v->a[83168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83169] = anon_sym_DOLLAR;
	v->a[83170] = anon_sym_DQUOTE;
	v->a[83171] = sym_raw_string;
	v->a[83172] = aux_sym_number_token1;
	v->a[83173] = aux_sym_number_token2;
	v->a[83174] = anon_sym_DOLLAR_LBRACE;
	v->a[83175] = anon_sym_DOLLAR_LPAREN;
	v->a[83176] = anon_sym_BQUOTE;
	v->a[83177] = anon_sym_DOLLAR_BQUOTE;
	v->a[83178] = sym_word;
	v->a[83179] = 21;
	small_parse_table_4159(v);
}

void	small_parse_table_4159(t_small_parse_table_array *v)
{
	v->a[83180] = actions(57);
	v->a[83181] = 1;
	v->a[83182] = sym_comment;
	v->a[83183] = actions(4328);
	v->a[83184] = 1;
	v->a[83185] = sym_word;
	v->a[83186] = actions(4340);
	v->a[83187] = 1;
	v->a[83188] = anon_sym_DOLLAR;
	v->a[83189] = actions(4346);
	v->a[83190] = 1;
	v->a[83191] = aux_sym_number_token1;
	v->a[83192] = actions(4348);
	v->a[83193] = 1;
	v->a[83194] = aux_sym_number_token2;
	v->a[83195] = actions(4352);
	v->a[83196] = 1;
	v->a[83197] = anon_sym_DOLLAR_LPAREN;
	v->a[83198] = actions(4360);
	v->a[83199] = 1;
	small_parse_table_4160(v);
}

/* EOF small_parse_table_831.c */
