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
	v->a[5100] = anon_sym_GT_AMP;
	v->a[5101] = anon_sym_GT_PIPE;
	v->a[5102] = anon_sym_LT_AMP_DASH;
	v->a[5103] = anon_sym_GT_AMP_DASH;
	v->a[5104] = anon_sym_LT_LT;
	v->a[5105] = anon_sym_LT_LT_DASH;
	v->a[5106] = anon_sym_AMP;
	v->a[5107] = anon_sym_SEMI;
	v->a[5108] = 6;
	v->a[5109] = actions(3);
	v->a[5110] = 1;
	v->a[5111] = sym_comment;
	v->a[5112] = actions(1178);
	v->a[5113] = 1;
	v->a[5114] = sym_variable_name;
	v->a[5115] = actions(1176);
	v->a[5116] = 2;
	v->a[5117] = aux_sym__simple_variable_name_token1;
	v->a[5118] = aux_sym__multiline_variable_name_token1;
	v->a[5119] = actions(828);
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = 4;
	v->a[5121] = sym_file_descriptor;
	v->a[5122] = sym_test_operator;
	v->a[5123] = sym__bare_dollar;
	v->a[5124] = sym__brace_start;
	v->a[5125] = actions(1174);
	v->a[5126] = 9;
	v->a[5127] = anon_sym_BANG;
	v->a[5128] = anon_sym_DASH;
	v->a[5129] = anon_sym_STAR;
	v->a[5130] = anon_sym_QMARK;
	v->a[5131] = anon_sym_DOLLAR;
	v->a[5132] = anon_sym_POUND;
	v->a[5133] = anon_sym_AT;
	v->a[5134] = anon_sym_0;
	v->a[5135] = anon_sym__;
	v->a[5136] = actions(826);
	v->a[5137] = 32;
	v->a[5138] = anon_sym_LPAREN;
	v->a[5139] = anon_sym_PIPE;
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = anon_sym_SEMI_SEMI;
	v->a[5141] = anon_sym_PIPE_AMP;
	v->a[5142] = anon_sym_AMP_AMP;
	v->a[5143] = anon_sym_PIPE_PIPE;
	v->a[5144] = anon_sym_LT;
	v->a[5145] = anon_sym_GT;
	v->a[5146] = anon_sym_GT_GT;
	v->a[5147] = anon_sym_AMP_GT;
	v->a[5148] = anon_sym_AMP_GT_GT;
	v->a[5149] = anon_sym_LT_AMP;
	v->a[5150] = anon_sym_GT_AMP;
	v->a[5151] = anon_sym_GT_PIPE;
	v->a[5152] = anon_sym_LT_AMP_DASH;
	v->a[5153] = anon_sym_GT_AMP_DASH;
	v->a[5154] = anon_sym_LT_LT;
	v->a[5155] = anon_sym_LT_LT_DASH;
	v->a[5156] = aux_sym_heredoc_redirect_token1;
	v->a[5157] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5158] = anon_sym_AMP;
	v->a[5159] = sym__special_character;
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = anon_sym_DQUOTE;
	v->a[5161] = sym_raw_string;
	v->a[5162] = aux_sym_number_token1;
	v->a[5163] = aux_sym_number_token2;
	v->a[5164] = anon_sym_DOLLAR_LBRACE;
	v->a[5165] = anon_sym_DOLLAR_LPAREN;
	v->a[5166] = anon_sym_BQUOTE;
	v->a[5167] = anon_sym_DOLLAR_BQUOTE;
	v->a[5168] = sym_word;
	v->a[5169] = anon_sym_SEMI;
	v->a[5170] = 19;
	v->a[5171] = actions(3);
	v->a[5172] = 1;
	v->a[5173] = sym_comment;
	v->a[5174] = actions(1538);
	v->a[5175] = 1;
	v->a[5176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5177] = actions(1540);
	v->a[5178] = 1;
	v->a[5179] = anon_sym_DOLLAR;
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = actions(1542);
	v->a[5181] = 1;
	v->a[5182] = sym__special_character;
	v->a[5183] = actions(1544);
	v->a[5184] = 1;
	v->a[5185] = anon_sym_DQUOTE;
	v->a[5186] = actions(1546);
	v->a[5187] = 1;
	v->a[5188] = aux_sym_number_token1;
	v->a[5189] = actions(1548);
	v->a[5190] = 1;
	v->a[5191] = aux_sym_number_token2;
	v->a[5192] = actions(1550);
	v->a[5193] = 1;
	v->a[5194] = anon_sym_DOLLAR_LBRACE;
	v->a[5195] = actions(1552);
	v->a[5196] = 1;
	v->a[5197] = anon_sym_DOLLAR_LPAREN;
	v->a[5198] = actions(1554);
	v->a[5199] = 1;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
