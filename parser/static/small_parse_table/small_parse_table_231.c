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
	v->a[23100] = 1;
	v->a[23101] = anon_sym_DQUOTE;
	v->a[23102] = actions(61);
	v->a[23103] = 1;
	v->a[23104] = anon_sym_DOLLAR_LBRACE;
	v->a[23105] = actions(63);
	v->a[23106] = 1;
	v->a[23107] = anon_sym_DOLLAR_LPAREN;
	v->a[23108] = actions(65);
	v->a[23109] = 1;
	v->a[23110] = anon_sym_BQUOTE;
	v->a[23111] = actions(535);
	v->a[23112] = 1;
	v->a[23113] = sym__bare_dollar;
	v->a[23114] = state(268);
	v->a[23115] = 1;
	v->a[23116] = aux_sym_command_repeat2;
	v->a[23117] = state(614);
	v->a[23118] = 1;
	v->a[23119] = sym_concatenation;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = actions(778);
	v->a[23121] = 3;
	v->a[23122] = sym_raw_string;
	v->a[23123] = sym_number;
	v->a[23124] = sym_word;
	v->a[23125] = state(449);
	v->a[23126] = 5;
	v->a[23127] = sym_arithmetic_expansion;
	v->a[23128] = sym_string;
	v->a[23129] = sym_simple_expansion;
	v->a[23130] = sym_expansion;
	v->a[23131] = sym_command_substitution;
	v->a[23132] = actions(565);
	v->a[23133] = 15;
	v->a[23134] = anon_sym_PIPE;
	v->a[23135] = anon_sym_SEMI_SEMI;
	v->a[23136] = anon_sym_AMP_AMP;
	v->a[23137] = anon_sym_PIPE_PIPE;
	v->a[23138] = anon_sym_LT;
	v->a[23139] = anon_sym_GT;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = anon_sym_GT_GT;
	v->a[23141] = anon_sym_LT_AMP;
	v->a[23142] = anon_sym_GT_AMP;
	v->a[23143] = anon_sym_GT_PIPE;
	v->a[23144] = anon_sym_LT_GT;
	v->a[23145] = anon_sym_LT_LT;
	v->a[23146] = anon_sym_LT_LT_DASH;
	v->a[23147] = aux_sym_heredoc_redirect_token1;
	v->a[23148] = anon_sym_SEMI;
	v->a[23149] = 13;
	v->a[23150] = actions(3);
	v->a[23151] = 1;
	v->a[23152] = sym_comment;
	v->a[23153] = actions(53);
	v->a[23154] = 1;
	v->a[23155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23156] = actions(55);
	v->a[23157] = 1;
	v->a[23158] = anon_sym_DOLLAR;
	v->a[23159] = actions(57);
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = 1;
	v->a[23161] = anon_sym_DQUOTE;
	v->a[23162] = actions(61);
	v->a[23163] = 1;
	v->a[23164] = anon_sym_DOLLAR_LBRACE;
	v->a[23165] = actions(63);
	v->a[23166] = 1;
	v->a[23167] = anon_sym_DOLLAR_LPAREN;
	v->a[23168] = actions(65);
	v->a[23169] = 1;
	v->a[23170] = anon_sym_BQUOTE;
	v->a[23171] = actions(535);
	v->a[23172] = 1;
	v->a[23173] = sym__bare_dollar;
	v->a[23174] = state(259);
	v->a[23175] = 1;
	v->a[23176] = aux_sym_command_repeat2;
	v->a[23177] = state(614);
	v->a[23178] = 1;
	v->a[23179] = sym_concatenation;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = actions(778);
	v->a[23181] = 3;
	v->a[23182] = sym_raw_string;
	v->a[23183] = sym_number;
	v->a[23184] = sym_word;
	v->a[23185] = state(449);
	v->a[23186] = 5;
	v->a[23187] = sym_arithmetic_expansion;
	v->a[23188] = sym_string;
	v->a[23189] = sym_simple_expansion;
	v->a[23190] = sym_expansion;
	v->a[23191] = sym_command_substitution;
	v->a[23192] = actions(497);
	v->a[23193] = 15;
	v->a[23194] = anon_sym_PIPE;
	v->a[23195] = anon_sym_SEMI_SEMI;
	v->a[23196] = anon_sym_AMP_AMP;
	v->a[23197] = anon_sym_PIPE_PIPE;
	v->a[23198] = anon_sym_LT;
	v->a[23199] = anon_sym_GT;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
