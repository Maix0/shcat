/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_701.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3505(t_small_parse_table_array *v)
{
	v->a[70100] = aux_sym_concatenation_token1;
	v->a[70101] = sym__special_character;
	v->a[70102] = anon_sym_DQUOTE;
	v->a[70103] = sym_raw_string;
	v->a[70104] = anon_sym_DOLLAR_LBRACE;
	v->a[70105] = anon_sym_DOLLAR_BQUOTE;
	v->a[70106] = 3;
	v->a[70107] = actions(57);
	v->a[70108] = 1;
	v->a[70109] = sym_comment;
	v->a[70110] = actions(2772);
	v->a[70111] = 13;
	v->a[70112] = anon_sym_PIPE;
	v->a[70113] = anon_sym_LT;
	v->a[70114] = anon_sym_GT;
	v->a[70115] = anon_sym_AMP_GT;
	v->a[70116] = anon_sym_LT_AMP;
	v->a[70117] = anon_sym_GT_AMP;
	v->a[70118] = anon_sym_LT_LT;
	v->a[70119] = anon_sym_DOLLAR;
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = aux_sym_number_token1;
	v->a[70121] = aux_sym_number_token2;
	v->a[70122] = anon_sym_DOLLAR_LPAREN;
	v->a[70123] = anon_sym_BQUOTE;
	v->a[70124] = sym_word;
	v->a[70125] = actions(2774);
	v->a[70126] = 22;
	v->a[70127] = sym_file_descriptor;
	v->a[70128] = sym__concat;
	v->a[70129] = sym_test_operator;
	v->a[70130] = sym__bare_dollar;
	v->a[70131] = sym__brace_start;
	v->a[70132] = anon_sym_LPAREN;
	v->a[70133] = anon_sym_PIPE_AMP;
	v->a[70134] = anon_sym_AMP_AMP;
	v->a[70135] = anon_sym_PIPE_PIPE;
	v->a[70136] = anon_sym_GT_GT;
	v->a[70137] = anon_sym_AMP_GT_GT;
	v->a[70138] = anon_sym_GT_PIPE;
	v->a[70139] = anon_sym_LT_AMP_DASH;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = anon_sym_GT_AMP_DASH;
	v->a[70141] = anon_sym_LT_LT_DASH;
	v->a[70142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70143] = aux_sym_concatenation_token1;
	v->a[70144] = sym__special_character;
	v->a[70145] = anon_sym_DQUOTE;
	v->a[70146] = sym_raw_string;
	v->a[70147] = anon_sym_DOLLAR_LBRACE;
	v->a[70148] = anon_sym_DOLLAR_BQUOTE;
	v->a[70149] = 3;
	v->a[70150] = actions(57);
	v->a[70151] = 1;
	v->a[70152] = sym_comment;
	v->a[70153] = actions(2772);
	v->a[70154] = 13;
	v->a[70155] = anon_sym_PIPE;
	v->a[70156] = anon_sym_EQ;
	v->a[70157] = anon_sym_LT;
	v->a[70158] = anon_sym_GT;
	v->a[70159] = anon_sym_GT_GT;
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = anon_sym_LT_LT;
	v->a[70161] = anon_sym_CARET;
	v->a[70162] = anon_sym_AMP;
	v->a[70163] = anon_sym_PLUS;
	v->a[70164] = anon_sym_DASH;
	v->a[70165] = anon_sym_STAR;
	v->a[70166] = anon_sym_SLASH;
	v->a[70167] = anon_sym_PERCENT;
	v->a[70168] = actions(2774);
	v->a[70169] = 22;
	v->a[70170] = anon_sym_AMP_AMP;
	v->a[70171] = anon_sym_PIPE_PIPE;
	v->a[70172] = anon_sym_COMMA;
	v->a[70173] = anon_sym_RPAREN_RPAREN;
	v->a[70174] = anon_sym_PLUS_EQ;
	v->a[70175] = anon_sym_DASH_EQ;
	v->a[70176] = anon_sym_STAR_EQ;
	v->a[70177] = anon_sym_SLASH_EQ;
	v->a[70178] = anon_sym_PERCENT_EQ;
	v->a[70179] = anon_sym_LT_LT_EQ;
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = anon_sym_GT_GT_EQ;
	v->a[70181] = anon_sym_AMP_EQ;
	v->a[70182] = anon_sym_CARET_EQ;
	v->a[70183] = anon_sym_PIPE_EQ;
	v->a[70184] = anon_sym_EQ_EQ;
	v->a[70185] = anon_sym_BANG_EQ;
	v->a[70186] = anon_sym_LT_EQ;
	v->a[70187] = anon_sym_GT_EQ;
	v->a[70188] = anon_sym_QMARK;
	v->a[70189] = anon_sym_COLON;
	v->a[70190] = anon_sym_PLUS_PLUS2;
	v->a[70191] = anon_sym_DASH_DASH2;
	v->a[70192] = 19;
	v->a[70193] = actions(57);
	v->a[70194] = 1;
	v->a[70195] = sym_comment;
	v->a[70196] = actions(4120);
	v->a[70197] = 1;
	v->a[70198] = anon_sym_PIPE;
	v->a[70199] = actions(4122);
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
