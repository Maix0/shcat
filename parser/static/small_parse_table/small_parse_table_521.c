/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_521.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2605(t_small_parse_table_array *v)
{
	v->a[52100] = anon_sym_GT;
	v->a[52101] = anon_sym_GT_GT;
	v->a[52102] = anon_sym_AMP_GT;
	v->a[52103] = anon_sym_AMP_GT_GT;
	v->a[52104] = anon_sym_LT_AMP;
	v->a[52105] = anon_sym_GT_AMP;
	v->a[52106] = anon_sym_GT_PIPE;
	v->a[52107] = anon_sym_LT_AMP_DASH;
	v->a[52108] = anon_sym_GT_AMP_DASH;
	v->a[52109] = anon_sym_BQUOTE;
	v->a[52110] = 6;
	v->a[52111] = actions(3);
	v->a[52112] = 1;
	v->a[52113] = sym_comment;
	v->a[52114] = actions(1225);
	v->a[52115] = 1;
	v->a[52116] = aux_sym_concatenation_token1;
	v->a[52117] = actions(1922);
	v->a[52118] = 1;
	v->a[52119] = sym__concat;
	small_parse_table_2606(v);
}

void	small_parse_table_2606(t_small_parse_table_array *v)
{
	v->a[52120] = state(350);
	v->a[52121] = 1;
	v->a[52122] = aux_sym_concatenation_repeat1;
	v->a[52123] = actions(1127);
	v->a[52124] = 2;
	v->a[52125] = sym_file_descriptor;
	v->a[52126] = sym__bare_dollar;
	v->a[52127] = actions(1129);
	v->a[52128] = 26;
	v->a[52129] = anon_sym_PIPE;
	v->a[52130] = anon_sym_AMP_AMP;
	v->a[52131] = anon_sym_PIPE_PIPE;
	v->a[52132] = anon_sym_LT;
	v->a[52133] = anon_sym_GT;
	v->a[52134] = anon_sym_GT_GT;
	v->a[52135] = anon_sym_AMP_GT;
	v->a[52136] = anon_sym_AMP_GT_GT;
	v->a[52137] = anon_sym_LT_AMP;
	v->a[52138] = anon_sym_GT_AMP;
	v->a[52139] = anon_sym_GT_PIPE;
	small_parse_table_2607(v);
}

void	small_parse_table_2607(t_small_parse_table_array *v)
{
	v->a[52140] = anon_sym_LT_AMP_DASH;
	v->a[52141] = anon_sym_GT_AMP_DASH;
	v->a[52142] = anon_sym_LT_LT;
	v->a[52143] = anon_sym_LT_LT_DASH;
	v->a[52144] = aux_sym_heredoc_redirect_token1;
	v->a[52145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52146] = anon_sym_DOLLAR;
	v->a[52147] = anon_sym_DQUOTE;
	v->a[52148] = sym_raw_string;
	v->a[52149] = aux_sym_number_token1;
	v->a[52150] = aux_sym_number_token2;
	v->a[52151] = anon_sym_DOLLAR_LBRACE;
	v->a[52152] = anon_sym_DOLLAR_LPAREN;
	v->a[52153] = anon_sym_BQUOTE;
	v->a[52154] = sym_word;
	v->a[52155] = 6;
	v->a[52156] = actions(3);
	v->a[52157] = 1;
	v->a[52158] = sym_comment;
	v->a[52159] = actions(1208);
	small_parse_table_2608(v);
}

void	small_parse_table_2608(t_small_parse_table_array *v)
{
	v->a[52160] = 1;
	v->a[52161] = aux_sym_concatenation_token1;
	v->a[52162] = actions(1212);
	v->a[52163] = 1;
	v->a[52164] = sym__concat;
	v->a[52165] = state(772);
	v->a[52166] = 1;
	v->a[52167] = aux_sym_concatenation_repeat1;
	v->a[52168] = actions(1210);
	v->a[52169] = 2;
	v->a[52170] = sym_file_descriptor;
	v->a[52171] = sym_variable_name;
	v->a[52172] = actions(1206);
	v->a[52173] = 26;
	v->a[52174] = anon_sym_PIPE;
	v->a[52175] = anon_sym_AMP_AMP;
	v->a[52176] = anon_sym_PIPE_PIPE;
	v->a[52177] = anon_sym_LT;
	v->a[52178] = anon_sym_GT;
	v->a[52179] = anon_sym_GT_GT;
	small_parse_table_2609(v);
}

void	small_parse_table_2609(t_small_parse_table_array *v)
{
	v->a[52180] = anon_sym_AMP_GT;
	v->a[52181] = anon_sym_AMP_GT_GT;
	v->a[52182] = anon_sym_LT_AMP;
	v->a[52183] = anon_sym_GT_AMP;
	v->a[52184] = anon_sym_GT_PIPE;
	v->a[52185] = anon_sym_LT_AMP_DASH;
	v->a[52186] = anon_sym_GT_AMP_DASH;
	v->a[52187] = anon_sym_LT_LT;
	v->a[52188] = anon_sym_LT_LT_DASH;
	v->a[52189] = aux_sym_heredoc_redirect_token1;
	v->a[52190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52191] = anon_sym_DOLLAR;
	v->a[52192] = anon_sym_DQUOTE;
	v->a[52193] = sym_raw_string;
	v->a[52194] = aux_sym_number_token1;
	v->a[52195] = aux_sym_number_token2;
	v->a[52196] = anon_sym_DOLLAR_LBRACE;
	v->a[52197] = anon_sym_DOLLAR_LPAREN;
	v->a[52198] = anon_sym_BQUOTE;
	v->a[52199] = sym_word;
	small_parse_table_2610(v);
}

/* EOF small_parse_table_521.c */
