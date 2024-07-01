/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_291.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1455(t_small_parse_table_array *v)
{
	v->a[29100] = 1;
	v->a[29101] = anon_sym_DOLLAR_LPAREN;
	v->a[29102] = actions(1084);
	v->a[29103] = 1;
	v->a[29104] = anon_sym_BQUOTE;
	v->a[29105] = actions(1086);
	v->a[29106] = 1;
	v->a[29107] = sym_file_descriptor;
	v->a[29108] = actions(1098);
	v->a[29109] = 1;
	v->a[29110] = aux_sym_heredoc_redirect_token1;
	v->a[29111] = state(1349);
	v->a[29112] = 1;
	v->a[29113] = aux_sym__heredoc_command;
	v->a[29114] = state(1721);
	v->a[29115] = 1;
	v->a[29116] = sym_concatenation;
	v->a[29117] = state(2088);
	v->a[29118] = 1;
	v->a[29119] = sym__heredoc_expression;
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = state(2090);
	v->a[29121] = 1;
	v->a[29122] = sym__heredoc_pipeline;
	v->a[29123] = actions(1068);
	v->a[29124] = 2;
	v->a[29125] = anon_sym_AMP_AMP;
	v->a[29126] = anon_sym_PIPE_PIPE;
	v->a[29127] = state(1474);
	v->a[29128] = 2;
	v->a[29129] = sym_file_redirect;
	v->a[29130] = aux_sym_redirected_statement_repeat2;
	v->a[29131] = actions(1064);
	v->a[29132] = 3;
	v->a[29133] = sym_raw_string;
	v->a[29134] = sym_number;
	v->a[29135] = sym_word;
	v->a[29136] = state(1573);
	v->a[29137] = 5;
	v->a[29138] = sym_arithmetic_expansion;
	v->a[29139] = sym_string;
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = sym_simple_expansion;
	v->a[29141] = sym_expansion;
	v->a[29142] = sym_command_substitution;
	v->a[29143] = actions(1070);
	v->a[29144] = 7;
	v->a[29145] = anon_sym_LT;
	v->a[29146] = anon_sym_GT;
	v->a[29147] = anon_sym_GT_GT;
	v->a[29148] = anon_sym_LT_AMP;
	v->a[29149] = anon_sym_GT_AMP;
	v->a[29150] = anon_sym_GT_PIPE;
	v->a[29151] = anon_sym_LT_GT;
	v->a[29152] = 19;
	v->a[29153] = actions(3);
	v->a[29154] = 1;
	v->a[29155] = sym_comment;
	v->a[29156] = actions(1066);
	v->a[29157] = 1;
	v->a[29158] = anon_sym_PIPE;
	v->a[29159] = actions(1074);
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = 1;
	v->a[29161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29162] = actions(1076);
	v->a[29163] = 1;
	v->a[29164] = anon_sym_DOLLAR;
	v->a[29165] = actions(1078);
	v->a[29166] = 1;
	v->a[29167] = anon_sym_DQUOTE;
	v->a[29168] = actions(1080);
	v->a[29169] = 1;
	v->a[29170] = anon_sym_DOLLAR_LBRACE;
	v->a[29171] = actions(1082);
	v->a[29172] = 1;
	v->a[29173] = anon_sym_DOLLAR_LPAREN;
	v->a[29174] = actions(1084);
	v->a[29175] = 1;
	v->a[29176] = anon_sym_BQUOTE;
	v->a[29177] = actions(1086);
	v->a[29178] = 1;
	v->a[29179] = sym_file_descriptor;
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = actions(1100);
	v->a[29181] = 1;
	v->a[29182] = aux_sym_heredoc_redirect_token1;
	v->a[29183] = state(1306);
	v->a[29184] = 1;
	v->a[29185] = aux_sym__heredoc_command;
	v->a[29186] = state(1721);
	v->a[29187] = 1;
	v->a[29188] = sym_concatenation;
	v->a[29189] = state(2004);
	v->a[29190] = 1;
	v->a[29191] = sym__heredoc_expression;
	v->a[29192] = state(2005);
	v->a[29193] = 1;
	v->a[29194] = sym__heredoc_pipeline;
	v->a[29195] = actions(1068);
	v->a[29196] = 2;
	v->a[29197] = anon_sym_AMP_AMP;
	v->a[29198] = anon_sym_PIPE_PIPE;
	v->a[29199] = state(1482);
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
