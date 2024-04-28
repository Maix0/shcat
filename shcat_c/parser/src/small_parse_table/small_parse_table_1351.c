/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1351.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6755(t_small_parse_table_array *v)
{
	v->a[135100] = anon_sym_GT;
	v->a[135101] = anon_sym_LT_LT;
	v->a[135102] = anon_sym_GT_GT;
	v->a[135103] = anon_sym_PLUS;
	v->a[135104] = anon_sym_DASH;
	v->a[135105] = anon_sym_STAR;
	v->a[135106] = anon_sym_SLASH;
	v->a[135107] = anon_sym_PERCENT;
	v->a[135108] = anon_sym_STAR_STAR;
	v->a[135109] = actions(1369);
	v->a[135110] = 23;
	v->a[135111] = sym_test_operator;
	v->a[135112] = anon_sym_PLUS_PLUS;
	v->a[135113] = anon_sym_DASH_DASH;
	v->a[135114] = anon_sym_PLUS_EQ;
	v->a[135115] = anon_sym_DASH_EQ;
	v->a[135116] = anon_sym_STAR_EQ;
	v->a[135117] = anon_sym_SLASH_EQ;
	v->a[135118] = anon_sym_PERCENT_EQ;
	v->a[135119] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6756(v);
}

void	small_parse_table_6756(t_small_parse_table_array *v)
{
	v->a[135120] = anon_sym_LT_LT_EQ;
	v->a[135121] = anon_sym_GT_GT_EQ;
	v->a[135122] = anon_sym_AMP_EQ;
	v->a[135123] = anon_sym_CARET_EQ;
	v->a[135124] = anon_sym_PIPE_EQ;
	v->a[135125] = anon_sym_PIPE_PIPE;
	v->a[135126] = anon_sym_AMP_AMP;
	v->a[135127] = anon_sym_EQ_EQ;
	v->a[135128] = anon_sym_BANG_EQ;
	v->a[135129] = anon_sym_LT_EQ;
	v->a[135130] = anon_sym_GT_EQ;
	v->a[135131] = anon_sym_EQ_TILDE;
	v->a[135132] = anon_sym_QMARK;
	v->a[135133] = anon_sym_COLON;
	v->a[135134] = 3;
	v->a[135135] = actions(71);
	v->a[135136] = 1;
	v->a[135137] = sym_comment;
	v->a[135138] = actions(1296);
	v->a[135139] = 14;
	small_parse_table_6757(v);
}

void	small_parse_table_6757(t_small_parse_table_array *v)
{
	v->a[135140] = anon_sym_PIPE;
	v->a[135141] = anon_sym_LT;
	v->a[135142] = anon_sym_GT;
	v->a[135143] = anon_sym_LT_LT;
	v->a[135144] = anon_sym_AMP_GT;
	v->a[135145] = anon_sym_LT_AMP;
	v->a[135146] = anon_sym_GT_AMP;
	v->a[135147] = anon_sym_DOLLAR;
	v->a[135148] = aux_sym_number_token1;
	v->a[135149] = aux_sym_number_token2;
	v->a[135150] = anon_sym_DOLLAR_LPAREN;
	v->a[135151] = anon_sym_BQUOTE;
	v->a[135152] = aux_sym__simple_variable_name_token1;
	v->a[135153] = sym_word;
	v->a[135154] = actions(1298);
	v->a[135155] = 26;
	v->a[135156] = sym_file_descriptor;
	v->a[135157] = sym__concat;
	v->a[135158] = sym_variable_name;
	v->a[135159] = sym_test_operator;
	small_parse_table_6758(v);
}

void	small_parse_table_6758(t_small_parse_table_array *v)
{
	v->a[135160] = sym__brace_start;
	v->a[135161] = anon_sym_LPAREN_LPAREN;
	v->a[135162] = anon_sym_PIPE_PIPE;
	v->a[135163] = anon_sym_AMP_AMP;
	v->a[135164] = anon_sym_GT_GT;
	v->a[135165] = anon_sym_PIPE_AMP;
	v->a[135166] = anon_sym_AMP_GT_GT;
	v->a[135167] = anon_sym_GT_PIPE;
	v->a[135168] = anon_sym_LT_AMP_DASH;
	v->a[135169] = anon_sym_GT_AMP_DASH;
	v->a[135170] = anon_sym_LT_LT_DASH;
	v->a[135171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135172] = anon_sym_DOLLAR_LBRACK;
	v->a[135173] = aux_sym_concatenation_token1;
	v->a[135174] = sym__special_character;
	v->a[135175] = anon_sym_DQUOTE;
	v->a[135176] = sym_raw_string;
	v->a[135177] = sym_ansi_c_string;
	v->a[135178] = anon_sym_DOLLAR_LBRACE;
	v->a[135179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6759(v);
}

void	small_parse_table_6759(t_small_parse_table_array *v)
{
	v->a[135180] = anon_sym_LT_LPAREN;
	v->a[135181] = anon_sym_GT_LPAREN;
	v->a[135182] = 6;
	v->a[135183] = actions(71);
	v->a[135184] = 1;
	v->a[135185] = sym_comment;
	v->a[135186] = actions(1143);
	v->a[135187] = 1;
	v->a[135188] = aux_sym_concatenation_token1;
	v->a[135189] = actions(6766);
	v->a[135190] = 1;
	v->a[135191] = sym__concat;
	v->a[135192] = state(2312);
	v->a[135193] = 1;
	v->a[135194] = aux_sym_concatenation_repeat1;
	v->a[135195] = actions(1286);
	v->a[135196] = 14;
	v->a[135197] = anon_sym_EQ;
	v->a[135198] = anon_sym_PIPE;
	v->a[135199] = anon_sym_CARET;
	small_parse_table_6760(v);
}

/* EOF small_parse_table_1351.c */
