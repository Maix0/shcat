/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1401.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7005(t_small_parse_table_array *v)
{
	v->a[140100] = anon_sym_DOLLAR_BQUOTE;
	v->a[140101] = anon_sym_LT_LPAREN;
	v->a[140102] = anon_sym_GT_LPAREN;
	v->a[140103] = 5;
	v->a[140104] = actions(71);
	v->a[140105] = 1;
	v->a[140106] = sym_comment;
	v->a[140107] = actions(6809);
	v->a[140108] = 1;
	v->a[140109] = sym__special_character;
	v->a[140110] = state(2595);
	v->a[140111] = 1;
	v->a[140112] = aux_sym__literal_repeat1;
	v->a[140113] = actions(5067);
	v->a[140114] = 12;
	v->a[140115] = anon_sym_PIPE;
	v->a[140116] = anon_sym_LT;
	v->a[140117] = anon_sym_GT;
	v->a[140118] = anon_sym_LT_LT;
	v->a[140119] = anon_sym_AMP_GT;
	small_parse_table_7006(v);
}

void	small_parse_table_7006(t_small_parse_table_array *v)
{
	v->a[140120] = anon_sym_LT_AMP;
	v->a[140121] = anon_sym_GT_AMP;
	v->a[140122] = anon_sym_DOLLAR;
	v->a[140123] = aux_sym_number_token1;
	v->a[140124] = aux_sym_number_token2;
	v->a[140125] = anon_sym_DOLLAR_LPAREN;
	v->a[140126] = sym_word;
	v->a[140127] = actions(5069);
	v->a[140128] = 25;
	v->a[140129] = sym_file_descriptor;
	v->a[140130] = sym_variable_name;
	v->a[140131] = sym_test_operator;
	v->a[140132] = sym__brace_start;
	v->a[140133] = anon_sym_LPAREN_LPAREN;
	v->a[140134] = anon_sym_PIPE_PIPE;
	v->a[140135] = anon_sym_AMP_AMP;
	v->a[140136] = anon_sym_GT_GT;
	v->a[140137] = anon_sym_PIPE_AMP;
	v->a[140138] = anon_sym_AMP_GT_GT;
	v->a[140139] = anon_sym_GT_PIPE;
	small_parse_table_7007(v);
}

void	small_parse_table_7007(t_small_parse_table_array *v)
{
	v->a[140140] = anon_sym_LT_AMP_DASH;
	v->a[140141] = anon_sym_GT_AMP_DASH;
	v->a[140142] = anon_sym_LT_LT_DASH;
	v->a[140143] = anon_sym_LT_LT_LT;
	v->a[140144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140145] = anon_sym_DOLLAR_LBRACK;
	v->a[140146] = anon_sym_DQUOTE;
	v->a[140147] = sym_raw_string;
	v->a[140148] = sym_ansi_c_string;
	v->a[140149] = anon_sym_DOLLAR_LBRACE;
	v->a[140150] = anon_sym_BQUOTE;
	v->a[140151] = anon_sym_DOLLAR_BQUOTE;
	v->a[140152] = anon_sym_LT_LPAREN;
	v->a[140153] = anon_sym_GT_LPAREN;
	v->a[140154] = 3;
	v->a[140155] = actions(71);
	v->a[140156] = 1;
	v->a[140157] = sym_comment;
	v->a[140158] = actions(1316);
	v->a[140159] = 14;
	small_parse_table_7008(v);
}

void	small_parse_table_7008(t_small_parse_table_array *v)
{
	v->a[140160] = anon_sym_EQ;
	v->a[140161] = anon_sym_PIPE;
	v->a[140162] = anon_sym_CARET;
	v->a[140163] = anon_sym_AMP;
	v->a[140164] = anon_sym_LT;
	v->a[140165] = anon_sym_GT;
	v->a[140166] = anon_sym_LT_LT;
	v->a[140167] = anon_sym_GT_GT;
	v->a[140168] = anon_sym_PLUS;
	v->a[140169] = anon_sym_DASH;
	v->a[140170] = anon_sym_STAR;
	v->a[140171] = anon_sym_SLASH;
	v->a[140172] = anon_sym_PERCENT;
	v->a[140173] = anon_sym_STAR_STAR;
	v->a[140174] = actions(1318);
	v->a[140175] = 25;
	v->a[140176] = sym__concat;
	v->a[140177] = sym_test_operator;
	v->a[140178] = anon_sym_PLUS_PLUS;
	v->a[140179] = anon_sym_DASH_DASH;
	small_parse_table_7009(v);
}

void	small_parse_table_7009(t_small_parse_table_array *v)
{
	v->a[140180] = anon_sym_PLUS_EQ;
	v->a[140181] = anon_sym_DASH_EQ;
	v->a[140182] = anon_sym_STAR_EQ;
	v->a[140183] = anon_sym_SLASH_EQ;
	v->a[140184] = anon_sym_PERCENT_EQ;
	v->a[140185] = anon_sym_STAR_STAR_EQ;
	v->a[140186] = anon_sym_LT_LT_EQ;
	v->a[140187] = anon_sym_GT_GT_EQ;
	v->a[140188] = anon_sym_AMP_EQ;
	v->a[140189] = anon_sym_CARET_EQ;
	v->a[140190] = anon_sym_PIPE_EQ;
	v->a[140191] = anon_sym_PIPE_PIPE;
	v->a[140192] = anon_sym_AMP_AMP;
	v->a[140193] = anon_sym_EQ_EQ;
	v->a[140194] = anon_sym_BANG_EQ;
	v->a[140195] = anon_sym_LT_EQ;
	v->a[140196] = anon_sym_GT_EQ;
	v->a[140197] = anon_sym_RBRACK;
	v->a[140198] = anon_sym_EQ_TILDE;
	v->a[140199] = anon_sym_QMARK;
	small_parse_table_7010(v);
}

/* EOF small_parse_table_1401.c */
