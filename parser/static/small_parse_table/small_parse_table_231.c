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
	v->a[23100] = 5;
	v->a[23101] = sym_arithmetic_expansion;
	v->a[23102] = sym_string;
	v->a[23103] = sym_simple_expansion;
	v->a[23104] = sym_expansion;
	v->a[23105] = sym_command_substitution;
	v->a[23106] = actions(545);
	v->a[23107] = 16;
	v->a[23108] = anon_sym_PIPE;
	v->a[23109] = anon_sym_SEMI_SEMI;
	v->a[23110] = anon_sym_AMP_AMP;
	v->a[23111] = anon_sym_PIPE_PIPE;
	v->a[23112] = anon_sym_LT;
	v->a[23113] = anon_sym_GT;
	v->a[23114] = anon_sym_GT_GT;
	v->a[23115] = anon_sym_LT_AMP;
	v->a[23116] = anon_sym_GT_AMP;
	v->a[23117] = anon_sym_GT_PIPE;
	v->a[23118] = anon_sym_LT_GT;
	v->a[23119] = anon_sym_LT_LT;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_LT_LT_DASH;
	v->a[23121] = aux_sym_heredoc_redirect_token1;
	v->a[23122] = anon_sym_AMP;
	v->a[23123] = anon_sym_SEMI;
	v->a[23124] = 15;
	v->a[23125] = actions(668);
	v->a[23126] = 1;
	v->a[23127] = anon_sym_AMP;
	v->a[23128] = actions(680);
	v->a[23129] = 1;
	v->a[23130] = sym_comment;
	v->a[23131] = actions(730);
	v->a[23132] = 1;
	v->a[23133] = anon_sym_CARET;
	v->a[23134] = actions(732);
	v->a[23135] = 1;
	v->a[23136] = anon_sym_PIPE;
	v->a[23137] = actions(734);
	v->a[23138] = 1;
	v->a[23139] = anon_sym_AMP_AMP;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = actions(736);
	v->a[23141] = 1;
	v->a[23142] = anon_sym_PIPE_PIPE;
	v->a[23143] = actions(844);
	v->a[23144] = 1;
	v->a[23145] = anon_sym_EQ;
	v->a[23146] = actions(664);
	v->a[23147] = 2;
	v->a[23148] = anon_sym_LT;
	v->a[23149] = anon_sym_GT;
	v->a[23150] = actions(666);
	v->a[23151] = 2;
	v->a[23152] = anon_sym_GT_GT;
	v->a[23153] = anon_sym_LT_LT;
	v->a[23154] = actions(670);
	v->a[23155] = 2;
	v->a[23156] = anon_sym_EQ_EQ;
	v->a[23157] = anon_sym_BANG_EQ;
	v->a[23158] = actions(672);
	v->a[23159] = 2;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = anon_sym_LT_EQ;
	v->a[23161] = anon_sym_GT_EQ;
	v->a[23162] = actions(674);
	v->a[23163] = 2;
	v->a[23164] = anon_sym_PLUS;
	v->a[23165] = anon_sym_DASH;
	v->a[23166] = actions(678);
	v->a[23167] = 2;
	v->a[23168] = anon_sym_PLUS_PLUS2;
	v->a[23169] = anon_sym_DASH_DASH2;
	v->a[23170] = actions(676);
	v->a[23171] = 3;
	v->a[23172] = anon_sym_STAR;
	v->a[23173] = anon_sym_SLASH;
	v->a[23174] = anon_sym_PERCENT;
	v->a[23175] = actions(846);
	v->a[23176] = 13;
	v->a[23177] = anon_sym_RPAREN_RPAREN;
	v->a[23178] = anon_sym_PLUS_EQ;
	v->a[23179] = anon_sym_DASH_EQ;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = anon_sym_STAR_EQ;
	v->a[23181] = anon_sym_SLASH_EQ;
	v->a[23182] = anon_sym_PERCENT_EQ;
	v->a[23183] = anon_sym_LT_LT_EQ;
	v->a[23184] = anon_sym_GT_GT_EQ;
	v->a[23185] = anon_sym_AMP_EQ;
	v->a[23186] = anon_sym_CARET_EQ;
	v->a[23187] = anon_sym_PIPE_EQ;
	v->a[23188] = anon_sym_QMARK;
	v->a[23189] = anon_sym_COLON;
	v->a[23190] = 14;
	v->a[23191] = actions(3);
	v->a[23192] = 1;
	v->a[23193] = sym_comment;
	v->a[23194] = actions(463);
	v->a[23195] = 1;
	v->a[23196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23197] = actions(465);
	v->a[23198] = 1;
	v->a[23199] = anon_sym_DOLLAR;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
