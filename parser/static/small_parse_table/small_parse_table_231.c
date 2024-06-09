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
	v->a[23100] = actions(595);
	v->a[23101] = 1;
	v->a[23102] = anon_sym_BQUOTE;
	v->a[23103] = actions(598);
	v->a[23104] = 1;
	v->a[23105] = sym_file_descriptor;
	v->a[23106] = actions(600);
	v->a[23107] = 1;
	v->a[23108] = sym__bare_dollar;
	v->a[23109] = state(201);
	v->a[23110] = 1;
	v->a[23111] = aux_sym_command_repeat2;
	v->a[23112] = state(753);
	v->a[23113] = 1;
	v->a[23114] = sym_concatenation;
	v->a[23115] = actions(569);
	v->a[23116] = 2;
	v->a[23117] = sym_raw_string;
	v->a[23118] = sym_word;
	v->a[23119] = state(341);
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = 6;
	v->a[23121] = sym_arithmetic_expansion;
	v->a[23122] = sym_string;
	v->a[23123] = sym_number;
	v->a[23124] = sym_simple_expansion;
	v->a[23125] = sym_expansion;
	v->a[23126] = sym_command_substitution;
	v->a[23127] = actions(572);
	v->a[23128] = 20;
	v->a[23129] = anon_sym_PIPE;
	v->a[23130] = anon_sym_RPAREN;
	v->a[23131] = anon_sym_SEMI_SEMI;
	v->a[23132] = anon_sym_AMP_AMP;
	v->a[23133] = anon_sym_PIPE_PIPE;
	v->a[23134] = anon_sym_LT;
	v->a[23135] = anon_sym_GT;
	v->a[23136] = anon_sym_GT_GT;
	v->a[23137] = anon_sym_AMP_GT;
	v->a[23138] = anon_sym_AMP_GT_GT;
	v->a[23139] = anon_sym_LT_AMP;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = anon_sym_GT_AMP;
	v->a[23141] = anon_sym_GT_PIPE;
	v->a[23142] = anon_sym_LT_AMP_DASH;
	v->a[23143] = anon_sym_GT_AMP_DASH;
	v->a[23144] = anon_sym_LT_LT;
	v->a[23145] = anon_sym_LT_LT_DASH;
	v->a[23146] = aux_sym_heredoc_redirect_token1;
	v->a[23147] = anon_sym_AMP;
	v->a[23148] = anon_sym_SEMI;
	v->a[23149] = 16;
	v->a[23150] = actions(3);
	v->a[23151] = 1;
	v->a[23152] = sym_comment;
	v->a[23153] = actions(606);
	v->a[23154] = 1;
	v->a[23155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23156] = actions(609);
	v->a[23157] = 1;
	v->a[23158] = anon_sym_DOLLAR;
	v->a[23159] = actions(612);
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = 1;
	v->a[23161] = anon_sym_DQUOTE;
	v->a[23162] = actions(615);
	v->a[23163] = 1;
	v->a[23164] = aux_sym_number_token1;
	v->a[23165] = actions(618);
	v->a[23166] = 1;
	v->a[23167] = aux_sym_number_token2;
	v->a[23168] = actions(621);
	v->a[23169] = 1;
	v->a[23170] = anon_sym_DOLLAR_LBRACE;
	v->a[23171] = actions(624);
	v->a[23172] = 1;
	v->a[23173] = anon_sym_DOLLAR_LPAREN;
	v->a[23174] = actions(627);
	v->a[23175] = 1;
	v->a[23176] = anon_sym_BQUOTE;
	v->a[23177] = actions(630);
	v->a[23178] = 1;
	v->a[23179] = sym__bare_dollar;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = state(202);
	v->a[23181] = 1;
	v->a[23182] = aux_sym_command_repeat2;
	v->a[23183] = state(739);
	v->a[23184] = 1;
	v->a[23185] = sym_concatenation;
	v->a[23186] = actions(598);
	v->a[23187] = 2;
	v->a[23188] = sym_file_descriptor;
	v->a[23189] = ts_builtin_sym_end;
	v->a[23190] = actions(603);
	v->a[23191] = 2;
	v->a[23192] = sym_raw_string;
	v->a[23193] = sym_word;
	v->a[23194] = state(343);
	v->a[23195] = 6;
	v->a[23196] = sym_arithmetic_expansion;
	v->a[23197] = sym_string;
	v->a[23198] = sym_number;
	v->a[23199] = sym_simple_expansion;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
