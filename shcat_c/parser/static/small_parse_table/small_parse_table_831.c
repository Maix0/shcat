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
	v->a[83100] = anon_sym_LT;
	v->a[83101] = anon_sym_GT;
	v->a[83102] = anon_sym_LT_LT;
	v->a[83103] = anon_sym_GT_GT;
	v->a[83104] = anon_sym_RPAREN;
	v->a[83105] = anon_sym_SEMI_SEMI;
	v->a[83106] = anon_sym_PIPE_AMP;
	v->a[83107] = anon_sym_AMP_GT;
	v->a[83108] = anon_sym_AMP_GT_GT;
	v->a[83109] = anon_sym_LT_AMP;
	v->a[83110] = anon_sym_GT_AMP;
	v->a[83111] = anon_sym_GT_PIPE;
	v->a[83112] = anon_sym_LT_AMP_DASH;
	v->a[83113] = anon_sym_GT_AMP_DASH;
	v->a[83114] = anon_sym_LT_LT_DASH;
	v->a[83115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83116] = anon_sym_DOLLAR_LBRACK;
	v->a[83117] = anon_sym_DOLLAR;
	v->a[83118] = anon_sym_DQUOTE;
	v->a[83119] = sym_raw_string;
	small_parse_table_4156(v);
}

void	small_parse_table_4156(t_small_parse_table_array *v)
{
	v->a[83120] = sym_ansi_c_string;
	v->a[83121] = aux_sym_number_token1;
	v->a[83122] = aux_sym_number_token2;
	v->a[83123] = anon_sym_DOLLAR_LBRACE;
	v->a[83124] = anon_sym_DOLLAR_LPAREN;
	v->a[83125] = anon_sym_BQUOTE;
	v->a[83126] = anon_sym_DOLLAR_BQUOTE;
	v->a[83127] = anon_sym_LT_LPAREN;
	v->a[83128] = anon_sym_GT_LPAREN;
	v->a[83129] = aux_sym__simple_variable_name_token1;
	v->a[83130] = sym_word;
	v->a[83131] = 5;
	v->a[83132] = actions(3);
	v->a[83133] = 1;
	v->a[83134] = sym_comment;
	v->a[83135] = actions(5968);
	v->a[83136] = 1;
	v->a[83137] = sym__special_character;
	v->a[83138] = state(1751);
	v->a[83139] = 1;
	small_parse_table_4157(v);
}

void	small_parse_table_4157(t_small_parse_table_array *v)
{
	v->a[83140] = aux_sym__literal_repeat1;
	v->a[83141] = actions(5395);
	v->a[83142] = 5;
	v->a[83143] = sym_file_descriptor;
	v->a[83144] = sym_variable_name;
	v->a[83145] = sym_test_operator;
	v->a[83146] = sym__brace_start;
	v->a[83147] = aux_sym_heredoc_redirect_token1;
	v->a[83148] = actions(5393);
	v->a[83149] = 37;
	v->a[83150] = anon_sym_LPAREN_LPAREN;
	v->a[83151] = anon_sym_SEMI;
	v->a[83152] = anon_sym_PIPE_PIPE;
	v->a[83153] = anon_sym_AMP_AMP;
	v->a[83154] = anon_sym_PIPE;
	v->a[83155] = anon_sym_AMP;
	v->a[83156] = anon_sym_LT;
	v->a[83157] = anon_sym_GT;
	v->a[83158] = anon_sym_LT_LT;
	v->a[83159] = anon_sym_GT_GT;
	small_parse_table_4158(v);
}

void	small_parse_table_4158(t_small_parse_table_array *v)
{
	v->a[83160] = anon_sym_RPAREN;
	v->a[83161] = anon_sym_SEMI_SEMI;
	v->a[83162] = anon_sym_PIPE_AMP;
	v->a[83163] = anon_sym_AMP_GT;
	v->a[83164] = anon_sym_AMP_GT_GT;
	v->a[83165] = anon_sym_LT_AMP;
	v->a[83166] = anon_sym_GT_AMP;
	v->a[83167] = anon_sym_GT_PIPE;
	v->a[83168] = anon_sym_LT_AMP_DASH;
	v->a[83169] = anon_sym_GT_AMP_DASH;
	v->a[83170] = anon_sym_LT_LT_DASH;
	v->a[83171] = anon_sym_LT_LT_LT;
	v->a[83172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83173] = anon_sym_DOLLAR_LBRACK;
	v->a[83174] = anon_sym_DOLLAR;
	v->a[83175] = anon_sym_DQUOTE;
	v->a[83176] = sym_raw_string;
	v->a[83177] = sym_ansi_c_string;
	v->a[83178] = aux_sym_number_token1;
	v->a[83179] = aux_sym_number_token2;
	small_parse_table_4159(v);
}

void	small_parse_table_4159(t_small_parse_table_array *v)
{
	v->a[83180] = anon_sym_DOLLAR_LBRACE;
	v->a[83181] = anon_sym_DOLLAR_LPAREN;
	v->a[83182] = anon_sym_BQUOTE;
	v->a[83183] = anon_sym_DOLLAR_BQUOTE;
	v->a[83184] = anon_sym_LT_LPAREN;
	v->a[83185] = anon_sym_GT_LPAREN;
	v->a[83186] = sym_word;
	v->a[83187] = 6;
	v->a[83188] = actions(3);
	v->a[83189] = 1;
	v->a[83190] = sym_comment;
	v->a[83191] = actions(5080);
	v->a[83192] = 1;
	v->a[83193] = aux_sym_concatenation_token1;
	v->a[83194] = actions(5082);
	v->a[83195] = 1;
	v->a[83196] = sym__concat;
	v->a[83197] = state(1822);
	v->a[83198] = 1;
	v->a[83199] = aux_sym_concatenation_repeat1;
	small_parse_table_4160(v);
}

/* EOF small_parse_table_831.c */
