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
	v->a[23100] = sym_command_substitution;
	v->a[23101] = sym_process_substitution;
	v->a[23102] = 30;
	v->a[23103] = actions(3);
	v->a[23104] = 1;
	v->a[23105] = sym_comment;
	v->a[23106] = actions(3727);
	v->a[23107] = 1;
	v->a[23108] = anon_sym_LT_LT_LT;
	v->a[23109] = actions(3729);
	v->a[23110] = 1;
	v->a[23111] = anon_sym_DOLLAR_LBRACK;
	v->a[23112] = actions(3731);
	v->a[23113] = 1;
	v->a[23114] = anon_sym_DOLLAR;
	v->a[23115] = actions(3733);
	v->a[23116] = 1;
	v->a[23117] = sym__special_character;
	v->a[23118] = actions(3735);
	v->a[23119] = 1;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_DQUOTE;
	v->a[23121] = actions(3737);
	v->a[23122] = 1;
	v->a[23123] = aux_sym_number_token1;
	v->a[23124] = actions(3739);
	v->a[23125] = 1;
	v->a[23126] = aux_sym_number_token2;
	v->a[23127] = actions(3741);
	v->a[23128] = 1;
	v->a[23129] = anon_sym_DOLLAR_LBRACE;
	v->a[23130] = actions(3743);
	v->a[23131] = 1;
	v->a[23132] = anon_sym_DOLLAR_LPAREN;
	v->a[23133] = actions(3745);
	v->a[23134] = 1;
	v->a[23135] = anon_sym_BQUOTE;
	v->a[23136] = actions(3747);
	v->a[23137] = 1;
	v->a[23138] = anon_sym_DOLLAR_BQUOTE;
	v->a[23139] = actions(3751);
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = 1;
	v->a[23141] = sym_file_descriptor;
	v->a[23142] = actions(3753);
	v->a[23143] = 1;
	v->a[23144] = sym_test_operator;
	v->a[23145] = actions(3755);
	v->a[23146] = 1;
	v->a[23147] = sym__brace_start;
	v->a[23148] = actions(4064);
	v->a[23149] = 1;
	v->a[23150] = aux_sym_heredoc_redirect_token1;
	v->a[23151] = state(3591);
	v->a[23152] = 1;
	v->a[23153] = aux_sym__heredoc_command;
	v->a[23154] = state(5351);
	v->a[23155] = 1;
	v->a[23156] = aux_sym__literal_repeat1;
	v->a[23157] = state(5456);
	v->a[23158] = 1;
	v->a[23159] = sym_concatenation;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = state(6873);
	v->a[23161] = 1;
	v->a[23162] = sym__heredoc_expression;
	v->a[23163] = state(6875);
	v->a[23164] = 1;
	v->a[23165] = sym__heredoc_pipeline;
	v->a[23166] = actions(3715);
	v->a[23167] = 2;
	v->a[23168] = anon_sym_LPAREN_LPAREN;
	v->a[23169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23170] = actions(3717);
	v->a[23171] = 2;
	v->a[23172] = anon_sym_PIPE_PIPE;
	v->a[23173] = anon_sym_AMP_AMP;
	v->a[23174] = actions(3719);
	v->a[23175] = 2;
	v->a[23176] = anon_sym_PIPE;
	v->a[23177] = anon_sym_PIPE_AMP;
	v->a[23178] = actions(3723);
	v->a[23179] = 2;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = anon_sym_LT_AMP_DASH;
	v->a[23181] = anon_sym_GT_AMP_DASH;
	v->a[23182] = actions(3749);
	v->a[23183] = 2;
	v->a[23184] = anon_sym_LT_LPAREN;
	v->a[23185] = anon_sym_GT_LPAREN;
	v->a[23186] = actions(3713);
	v->a[23187] = 3;
	v->a[23188] = sym_raw_string;
	v->a[23189] = sym_ansi_c_string;
	v->a[23190] = sym_word;
	v->a[23191] = state(5538);
	v->a[23192] = 3;
	v->a[23193] = sym_file_redirect;
	v->a[23194] = sym_herestring_redirect;
	v->a[23195] = aux_sym_redirected_statement_repeat2;
	v->a[23196] = actions(3721);
	v->a[23197] = 8;
	v->a[23198] = anon_sym_LT;
	v->a[23199] = anon_sym_GT;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
