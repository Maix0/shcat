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
	v->a[23100] = anon_sym_LT;
	v->a[23101] = anon_sym_GT;
	v->a[23102] = anon_sym_GT_GT;
	v->a[23103] = anon_sym_AMP_GT;
	v->a[23104] = anon_sym_AMP_GT_GT;
	v->a[23105] = anon_sym_LT_AMP;
	v->a[23106] = anon_sym_GT_AMP;
	v->a[23107] = anon_sym_GT_PIPE;
	v->a[23108] = anon_sym_LT_AMP_DASH;
	v->a[23109] = anon_sym_GT_AMP_DASH;
	v->a[23110] = anon_sym_LT_LT;
	v->a[23111] = anon_sym_LT_LT_DASH;
	v->a[23112] = aux_sym_heredoc_redirect_token1;
	v->a[23113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23114] = anon_sym_AMP;
	v->a[23115] = anon_sym_DOLLAR;
	v->a[23116] = anon_sym_DQUOTE;
	v->a[23117] = sym_raw_string;
	v->a[23118] = sym_number;
	v->a[23119] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_DOLLAR_LPAREN;
	v->a[23121] = anon_sym_BQUOTE;
	v->a[23122] = sym_word;
	v->a[23123] = anon_sym_SEMI;
	v->a[23124] = 5;
	v->a[23125] = actions(3);
	v->a[23126] = 1;
	v->a[23127] = sym_comment;
	v->a[23128] = state(697);
	v->a[23129] = 1;
	v->a[23130] = sym_concatenation;
	v->a[23131] = actions(713);
	v->a[23132] = 2;
	v->a[23133] = sym_file_descriptor;
	v->a[23134] = sym_variable_name;
	v->a[23135] = state(335);
	v->a[23136] = 5;
	v->a[23137] = sym_arithmetic_expansion;
	v->a[23138] = sym_string;
	v->a[23139] = sym_simple_expansion;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = sym_expansion;
	v->a[23141] = sym_command_substitution;
	v->a[23142] = actions(715);
	v->a[23143] = 29;
	v->a[23144] = anon_sym_PIPE;
	v->a[23145] = anon_sym_RPAREN;
	v->a[23146] = anon_sym_SEMI_SEMI;
	v->a[23147] = anon_sym_AMP_AMP;
	v->a[23148] = anon_sym_PIPE_PIPE;
	v->a[23149] = anon_sym_LT;
	v->a[23150] = anon_sym_GT;
	v->a[23151] = anon_sym_GT_GT;
	v->a[23152] = anon_sym_AMP_GT;
	v->a[23153] = anon_sym_AMP_GT_GT;
	v->a[23154] = anon_sym_LT_AMP;
	v->a[23155] = anon_sym_GT_AMP;
	v->a[23156] = anon_sym_GT_PIPE;
	v->a[23157] = anon_sym_LT_AMP_DASH;
	v->a[23158] = anon_sym_GT_AMP_DASH;
	v->a[23159] = anon_sym_LT_LT;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = anon_sym_LT_LT_DASH;
	v->a[23161] = aux_sym_heredoc_redirect_token1;
	v->a[23162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23163] = anon_sym_AMP;
	v->a[23164] = anon_sym_DOLLAR;
	v->a[23165] = anon_sym_DQUOTE;
	v->a[23166] = sym_raw_string;
	v->a[23167] = sym_number;
	v->a[23168] = anon_sym_DOLLAR_LBRACE;
	v->a[23169] = anon_sym_DOLLAR_LPAREN;
	v->a[23170] = anon_sym_BQUOTE;
	v->a[23171] = sym_word;
	v->a[23172] = anon_sym_SEMI;
	v->a[23173] = 13;
	v->a[23174] = actions(3);
	v->a[23175] = 1;
	v->a[23176] = sym_comment;
	v->a[23177] = actions(497);
	v->a[23178] = 1;
	v->a[23179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = actions(499);
	v->a[23181] = 1;
	v->a[23182] = anon_sym_DOLLAR;
	v->a[23183] = actions(501);
	v->a[23184] = 1;
	v->a[23185] = anon_sym_DQUOTE;
	v->a[23186] = actions(503);
	v->a[23187] = 1;
	v->a[23188] = anon_sym_DOLLAR_LBRACE;
	v->a[23189] = actions(505);
	v->a[23190] = 1;
	v->a[23191] = anon_sym_DOLLAR_LPAREN;
	v->a[23192] = actions(509);
	v->a[23193] = 1;
	v->a[23194] = sym__bare_dollar;
	v->a[23195] = actions(555);
	v->a[23196] = 1;
	v->a[23197] = sym_file_descriptor;
	v->a[23198] = state(224);
	v->a[23199] = 1;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
