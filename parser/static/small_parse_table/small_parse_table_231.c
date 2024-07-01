/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_231.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1155(t_small_parse_table_array *v)
{
	v->a[23100] = sym_expansion;
	v->a[23101] = sym_command_substitution;
	v->a[23102] = actions(516);
	v->a[23103] = 17;
	v->a[23104] = anon_sym_PIPE;
	v->a[23105] = anon_sym_SEMI_SEMI;
	v->a[23106] = anon_sym_AMP_AMP;
	v->a[23107] = anon_sym_PIPE_PIPE;
	v->a[23108] = anon_sym_LT;
	v->a[23109] = anon_sym_GT;
	v->a[23110] = anon_sym_GT_GT;
	v->a[23111] = anon_sym_LT_AMP;
	v->a[23112] = anon_sym_GT_AMP;
	v->a[23113] = anon_sym_GT_PIPE;
	v->a[23114] = anon_sym_LT_AMP_DASH;
	v->a[23115] = anon_sym_GT_AMP_DASH;
	v->a[23116] = anon_sym_LT_LT;
	v->a[23117] = anon_sym_LT_LT_DASH;
	v->a[23118] = aux_sym_heredoc_redirect_token1;
	v->a[23119] = anon_sym_AMP;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_SEMI;
	v->a[23121] = 13;
	v->a[23122] = actions(3);
	v->a[23123] = 1;
	v->a[23124] = sym_comment;
	v->a[23125] = actions(459);
	v->a[23126] = 1;
	v->a[23127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23128] = actions(461);
	v->a[23129] = 1;
	v->a[23130] = anon_sym_DOLLAR;
	v->a[23131] = actions(463);
	v->a[23132] = 1;
	v->a[23133] = anon_sym_DQUOTE;
	v->a[23134] = actions(465);
	v->a[23135] = 1;
	v->a[23136] = anon_sym_DOLLAR_LBRACE;
	v->a[23137] = actions(467);
	v->a[23138] = 1;
	v->a[23139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = actions(473);
	v->a[23141] = 1;
	v->a[23142] = sym__bare_dollar;
	v->a[23143] = actions(571);
	v->a[23144] = 1;
	v->a[23145] = sym_file_descriptor;
	v->a[23146] = state(224);
	v->a[23147] = 1;
	v->a[23148] = aux_sym_command_repeat2;
	v->a[23149] = state(718);
	v->a[23150] = 1;
	v->a[23151] = sym_concatenation;
	v->a[23152] = actions(511);
	v->a[23153] = 3;
	v->a[23154] = sym_raw_string;
	v->a[23155] = sym_number;
	v->a[23156] = sym_word;
	v->a[23157] = state(493);
	v->a[23158] = 5;
	v->a[23159] = sym_arithmetic_expansion;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = sym_string;
	v->a[23161] = sym_simple_expansion;
	v->a[23162] = sym_expansion;
	v->a[23163] = sym_command_substitution;
	v->a[23164] = actions(569);
	v->a[23165] = 18;
	v->a[23166] = anon_sym_PIPE;
	v->a[23167] = anon_sym_SEMI_SEMI;
	v->a[23168] = anon_sym_AMP_AMP;
	v->a[23169] = anon_sym_PIPE_PIPE;
	v->a[23170] = anon_sym_LT;
	v->a[23171] = anon_sym_GT;
	v->a[23172] = anon_sym_GT_GT;
	v->a[23173] = anon_sym_LT_AMP;
	v->a[23174] = anon_sym_GT_AMP;
	v->a[23175] = anon_sym_GT_PIPE;
	v->a[23176] = anon_sym_LT_AMP_DASH;
	v->a[23177] = anon_sym_GT_AMP_DASH;
	v->a[23178] = anon_sym_LT_LT;
	v->a[23179] = anon_sym_LT_LT_DASH;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = aux_sym_heredoc_redirect_token1;
	v->a[23181] = anon_sym_AMP;
	v->a[23182] = anon_sym_BQUOTE;
	v->a[23183] = anon_sym_SEMI;
	v->a[23184] = 12;
	v->a[23185] = actions(3);
	v->a[23186] = 1;
	v->a[23187] = sym_comment;
	v->a[23188] = actions(767);
	v->a[23189] = 1;
	v->a[23190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23191] = actions(769);
	v->a[23192] = 1;
	v->a[23193] = anon_sym_DOLLAR;
	v->a[23194] = actions(771);
	v->a[23195] = 1;
	v->a[23196] = anon_sym_DQUOTE;
	v->a[23197] = actions(773);
	v->a[23198] = 1;
	v->a[23199] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
