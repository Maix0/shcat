/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_51.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_255(t_small_parse_table_array *v)
{
	v->a[5100] = anon_sym_AMP_GT;
	v->a[5101] = anon_sym_AMP_GT_GT;
	v->a[5102] = anon_sym_LT_AMP;
	v->a[5103] = anon_sym_GT_AMP;
	v->a[5104] = anon_sym_GT_PIPE;
	v->a[5105] = anon_sym_LT_AMP_DASH;
	v->a[5106] = anon_sym_GT_AMP_DASH;
	v->a[5107] = anon_sym_LT_LT_DASH;
	v->a[5108] = 8;
	v->a[5109] = actions(3);
	v->a[5110] = 1;
	v->a[5111] = sym_comment;
	v->a[5112] = actions(1591);
	v->a[5113] = 1;
	v->a[5114] = anon_sym_DQUOTE;
	v->a[5115] = actions(2155);
	v->a[5116] = 1;
	v->a[5117] = sym_variable_name;
	v->a[5118] = state(1282);
	v->a[5119] = 1;
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = sym_string;
	v->a[5121] = actions(2153);
	v->a[5122] = 2;
	v->a[5123] = aux_sym__simple_variable_name_token1;
	v->a[5124] = aux_sym__multiline_variable_name_token1;
	v->a[5125] = actions(1241);
	v->a[5126] = 5;
	v->a[5127] = sym_file_descriptor;
	v->a[5128] = sym_test_operator;
	v->a[5129] = sym__bare_dollar;
	v->a[5130] = sym__brace_start;
	v->a[5131] = ts_builtin_sym_end;
	v->a[5132] = actions(2151);
	v->a[5133] = 9;
	v->a[5134] = anon_sym_DASH;
	v->a[5135] = anon_sym_STAR;
	v->a[5136] = anon_sym_BANG;
	v->a[5137] = anon_sym_QMARK;
	v->a[5138] = anon_sym_DOLLAR;
	v->a[5139] = anon_sym_POUND;
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = anon_sym_AT2;
	v->a[5141] = anon_sym_0;
	v->a[5142] = anon_sym__;
	v->a[5143] = actions(1239);
	v->a[5144] = 38;
	v->a[5145] = anon_sym_LPAREN_LPAREN;
	v->a[5146] = anon_sym_SEMI;
	v->a[5147] = anon_sym_PIPE_PIPE;
	v->a[5148] = anon_sym_AMP_AMP;
	v->a[5149] = anon_sym_PIPE;
	v->a[5150] = anon_sym_AMP;
	v->a[5151] = anon_sym_EQ_EQ;
	v->a[5152] = anon_sym_LT;
	v->a[5153] = anon_sym_GT;
	v->a[5154] = anon_sym_LT_LT;
	v->a[5155] = anon_sym_GT_GT;
	v->a[5156] = anon_sym_SEMI_SEMI;
	v->a[5157] = anon_sym_PIPE_AMP;
	v->a[5158] = anon_sym_EQ_TILDE;
	v->a[5159] = anon_sym_AMP_GT;
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = anon_sym_AMP_GT_GT;
	v->a[5161] = anon_sym_LT_AMP;
	v->a[5162] = anon_sym_GT_AMP;
	v->a[5163] = anon_sym_GT_PIPE;
	v->a[5164] = anon_sym_LT_AMP_DASH;
	v->a[5165] = anon_sym_GT_AMP_DASH;
	v->a[5166] = anon_sym_LT_LT_DASH;
	v->a[5167] = aux_sym_heredoc_redirect_token1;
	v->a[5168] = anon_sym_LT_LT_LT;
	v->a[5169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5170] = anon_sym_DOLLAR_LBRACK;
	v->a[5171] = sym__special_character;
	v->a[5172] = sym_raw_string;
	v->a[5173] = sym_ansi_c_string;
	v->a[5174] = aux_sym_number_token1;
	v->a[5175] = aux_sym_number_token2;
	v->a[5176] = anon_sym_DOLLAR_LBRACE;
	v->a[5177] = anon_sym_DOLLAR_LPAREN;
	v->a[5178] = anon_sym_BQUOTE;
	v->a[5179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = anon_sym_LT_LPAREN;
	v->a[5181] = anon_sym_GT_LPAREN;
	v->a[5182] = sym_word;
	v->a[5183] = 8;
	v->a[5184] = actions(3);
	v->a[5185] = 1;
	v->a[5186] = sym_comment;
	v->a[5187] = actions(1811);
	v->a[5188] = 1;
	v->a[5189] = anon_sym_DQUOTE;
	v->a[5190] = actions(1815);
	v->a[5191] = 1;
	v->a[5192] = sym_variable_name;
	v->a[5193] = state(1061);
	v->a[5194] = 1;
	v->a[5195] = sym_string;
	v->a[5196] = actions(1813);
	v->a[5197] = 2;
	v->a[5198] = aux_sym__simple_variable_name_token1;
	v->a[5199] = aux_sym__multiline_variable_name_token1;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
