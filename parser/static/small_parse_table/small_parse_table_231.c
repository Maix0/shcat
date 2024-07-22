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
	v->a[23101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23102] = actions(407);
	v->a[23103] = 1;
	v->a[23104] = anon_sym_DOLLAR;
	v->a[23105] = actions(409);
	v->a[23106] = 1;
	v->a[23107] = anon_sym_DQUOTE;
	v->a[23108] = actions(411);
	v->a[23109] = 1;
	v->a[23110] = anon_sym_DOLLAR_LBRACE;
	v->a[23111] = actions(413);
	v->a[23112] = 1;
	v->a[23113] = anon_sym_DOLLAR_LPAREN;
	v->a[23114] = actions(415);
	v->a[23115] = 1;
	v->a[23116] = anon_sym_BQUOTE;
	v->a[23117] = actions(417);
	v->a[23118] = 1;
	v->a[23119] = sym_file_descriptor;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = actions(419);
	v->a[23121] = 1;
	v->a[23122] = sym__bare_dollar;
	v->a[23123] = state(375);
	v->a[23124] = 1;
	v->a[23125] = aux_sym_command_repeat2;
	v->a[23126] = state(674);
	v->a[23127] = 1;
	v->a[23128] = sym_concatenation;
	v->a[23129] = state(1181);
	v->a[23130] = 1;
	v->a[23131] = sym_subshell;
	v->a[23132] = actions(815);
	v->a[23133] = 3;
	v->a[23134] = sym_raw_string;
	v->a[23135] = sym_number;
	v->a[23136] = sym_word;
	v->a[23137] = state(682);
	v->a[23138] = 5;
	v->a[23139] = sym_arithmetic_expansion;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = sym_string;
	v->a[23141] = sym_simple_expansion;
	v->a[23142] = sym_expansion;
	v->a[23143] = sym_command_substitution;
	v->a[23144] = actions(403);
	v->a[23145] = 13;
	v->a[23146] = anon_sym_PIPE;
	v->a[23147] = anon_sym_AMP_AMP;
	v->a[23148] = anon_sym_PIPE_PIPE;
	v->a[23149] = anon_sym_LT;
	v->a[23150] = anon_sym_GT;
	v->a[23151] = anon_sym_GT_GT;
	v->a[23152] = anon_sym_LT_AMP;
	v->a[23153] = anon_sym_GT_AMP;
	v->a[23154] = anon_sym_GT_PIPE;
	v->a[23155] = anon_sym_LT_GT;
	v->a[23156] = anon_sym_LT_LT;
	v->a[23157] = anon_sym_LT_LT_DASH;
	v->a[23158] = aux_sym_heredoc_redirect_token1;
	v->a[23159] = 12;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = actions(3);
	v->a[23161] = 1;
	v->a[23162] = sym_comment;
	v->a[23163] = actions(819);
	v->a[23164] = 1;
	v->a[23165] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23166] = actions(821);
	v->a[23167] = 1;
	v->a[23168] = anon_sym_DOLLAR;
	v->a[23169] = actions(823);
	v->a[23170] = 1;
	v->a[23171] = anon_sym_DQUOTE;
	v->a[23172] = actions(825);
	v->a[23173] = 1;
	v->a[23174] = anon_sym_DOLLAR_LBRACE;
	v->a[23175] = actions(827);
	v->a[23176] = 1;
	v->a[23177] = anon_sym_DOLLAR_LPAREN;
	v->a[23178] = actions(829);
	v->a[23179] = 1;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = anon_sym_BQUOTE;
	v->a[23181] = actions(678);
	v->a[23182] = 2;
	v->a[23183] = sym_file_descriptor;
	v->a[23184] = ts_builtin_sym_end;
	v->a[23185] = state(251);
	v->a[23186] = 2;
	v->a[23187] = sym_concatenation;
	v->a[23188] = aux_sym_for_statement_repeat1;
	v->a[23189] = actions(817);
	v->a[23190] = 3;
	v->a[23191] = sym_raw_string;
	v->a[23192] = sym_number;
	v->a[23193] = sym_word;
	v->a[23194] = state(533);
	v->a[23195] = 5;
	v->a[23196] = sym_arithmetic_expansion;
	v->a[23197] = sym_string;
	v->a[23198] = sym_simple_expansion;
	v->a[23199] = sym_expansion;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
