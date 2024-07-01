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
	v->a[23100] = state(245);
	v->a[23101] = 2;
	v->a[23102] = sym_concatenation;
	v->a[23103] = aux_sym_for_statement_repeat1;
	v->a[23104] = actions(848);
	v->a[23105] = 3;
	v->a[23106] = sym_raw_string;
	v->a[23107] = sym_number;
	v->a[23108] = sym_word;
	v->a[23109] = state(521);
	v->a[23110] = 5;
	v->a[23111] = sym_arithmetic_expansion;
	v->a[23112] = sym_string;
	v->a[23113] = sym_simple_expansion;
	v->a[23114] = sym_expansion;
	v->a[23115] = sym_command_substitution;
	v->a[23116] = actions(504);
	v->a[23117] = 16;
	v->a[23118] = anon_sym_PIPE;
	v->a[23119] = anon_sym_SEMI_SEMI;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_AMP_AMP;
	v->a[23121] = anon_sym_PIPE_PIPE;
	v->a[23122] = anon_sym_LT;
	v->a[23123] = anon_sym_GT;
	v->a[23124] = anon_sym_GT_GT;
	v->a[23125] = anon_sym_LT_AMP;
	v->a[23126] = anon_sym_GT_AMP;
	v->a[23127] = anon_sym_GT_PIPE;
	v->a[23128] = anon_sym_LT_GT;
	v->a[23129] = anon_sym_LT_LT;
	v->a[23130] = anon_sym_LT_LT_DASH;
	v->a[23131] = aux_sym_heredoc_redirect_token1;
	v->a[23132] = anon_sym_AMP;
	v->a[23133] = anon_sym_SEMI;
	v->a[23134] = 12;
	v->a[23135] = actions(3);
	v->a[23136] = 1;
	v->a[23137] = sym_comment;
	v->a[23138] = actions(552);
	v->a[23139] = 1;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = sym_file_descriptor;
	v->a[23141] = actions(871);
	v->a[23142] = 1;
	v->a[23143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23144] = actions(873);
	v->a[23145] = 1;
	v->a[23146] = anon_sym_DOLLAR;
	v->a[23147] = actions(875);
	v->a[23148] = 1;
	v->a[23149] = anon_sym_DQUOTE;
	v->a[23150] = actions(877);
	v->a[23151] = 1;
	v->a[23152] = anon_sym_DOLLAR_LBRACE;
	v->a[23153] = actions(879);
	v->a[23154] = 1;
	v->a[23155] = anon_sym_DOLLAR_LPAREN;
	v->a[23156] = actions(881);
	v->a[23157] = 1;
	v->a[23158] = anon_sym_BQUOTE;
	v->a[23159] = state(240);
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = 2;
	v->a[23161] = sym_concatenation;
	v->a[23162] = aux_sym_for_statement_repeat1;
	v->a[23163] = actions(869);
	v->a[23164] = 3;
	v->a[23165] = sym_raw_string;
	v->a[23166] = sym_number;
	v->a[23167] = sym_word;
	v->a[23168] = state(485);
	v->a[23169] = 5;
	v->a[23170] = sym_arithmetic_expansion;
	v->a[23171] = sym_string;
	v->a[23172] = sym_simple_expansion;
	v->a[23173] = sym_expansion;
	v->a[23174] = sym_command_substitution;
	v->a[23175] = actions(554);
	v->a[23176] = 17;
	v->a[23177] = anon_sym_PIPE;
	v->a[23178] = anon_sym_RPAREN;
	v->a[23179] = anon_sym_SEMI_SEMI;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = anon_sym_AMP_AMP;
	v->a[23181] = anon_sym_PIPE_PIPE;
	v->a[23182] = anon_sym_LT;
	v->a[23183] = anon_sym_GT;
	v->a[23184] = anon_sym_GT_GT;
	v->a[23185] = anon_sym_LT_AMP;
	v->a[23186] = anon_sym_GT_AMP;
	v->a[23187] = anon_sym_GT_PIPE;
	v->a[23188] = anon_sym_LT_GT;
	v->a[23189] = anon_sym_LT_LT;
	v->a[23190] = anon_sym_LT_LT_DASH;
	v->a[23191] = aux_sym_heredoc_redirect_token1;
	v->a[23192] = anon_sym_AMP;
	v->a[23193] = anon_sym_SEMI;
	v->a[23194] = 5;
	v->a[23195] = actions(3);
	v->a[23196] = 1;
	v->a[23197] = sym_comment;
	v->a[23198] = actions(495);
	v->a[23199] = 2;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
