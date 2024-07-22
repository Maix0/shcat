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
	v->a[29100] = anon_sym_DOLLAR_LBRACE;
	v->a[29101] = anon_sym_DOLLAR_LPAREN;
	v->a[29102] = anon_sym_BQUOTE;
	v->a[29103] = sym_word;
	v->a[29104] = 19;
	v->a[29105] = actions(3);
	v->a[29106] = 1;
	v->a[29107] = sym_comment;
	v->a[29108] = actions(1004);
	v->a[29109] = 1;
	v->a[29110] = anon_sym_PIPE;
	v->a[29111] = actions(1012);
	v->a[29112] = 1;
	v->a[29113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29114] = actions(1014);
	v->a[29115] = 1;
	v->a[29116] = anon_sym_DOLLAR;
	v->a[29117] = actions(1016);
	v->a[29118] = 1;
	v->a[29119] = anon_sym_DQUOTE;
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = actions(1018);
	v->a[29121] = 1;
	v->a[29122] = anon_sym_DOLLAR_LBRACE;
	v->a[29123] = actions(1020);
	v->a[29124] = 1;
	v->a[29125] = anon_sym_DOLLAR_LPAREN;
	v->a[29126] = actions(1022);
	v->a[29127] = 1;
	v->a[29128] = anon_sym_BQUOTE;
	v->a[29129] = actions(1024);
	v->a[29130] = 1;
	v->a[29131] = sym_file_descriptor;
	v->a[29132] = actions(1091);
	v->a[29133] = 1;
	v->a[29134] = aux_sym_heredoc_redirect_token1;
	v->a[29135] = state(1239);
	v->a[29136] = 1;
	v->a[29137] = aux_sym__heredoc_command;
	v->a[29138] = state(1722);
	v->a[29139] = 1;
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = sym_concatenation;
	v->a[29141] = state(2034);
	v->a[29142] = 1;
	v->a[29143] = sym__heredoc_pipeline;
	v->a[29144] = state(2070);
	v->a[29145] = 1;
	v->a[29146] = sym__heredoc_expression;
	v->a[29147] = actions(1006);
	v->a[29148] = 2;
	v->a[29149] = anon_sym_AMP_AMP;
	v->a[29150] = anon_sym_PIPE_PIPE;
	v->a[29151] = state(1455);
	v->a[29152] = 2;
	v->a[29153] = sym_file_redirect;
	v->a[29154] = aux_sym_redirected_statement_repeat2;
	v->a[29155] = actions(1002);
	v->a[29156] = 3;
	v->a[29157] = sym_raw_string;
	v->a[29158] = sym_number;
	v->a[29159] = sym_word;
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = state(1516);
	v->a[29161] = 5;
	v->a[29162] = sym_arithmetic_expansion;
	v->a[29163] = sym_string;
	v->a[29164] = sym_simple_expansion;
	v->a[29165] = sym_expansion;
	v->a[29166] = sym_command_substitution;
	v->a[29167] = actions(1008);
	v->a[29168] = 7;
	v->a[29169] = anon_sym_LT;
	v->a[29170] = anon_sym_GT;
	v->a[29171] = anon_sym_GT_GT;
	v->a[29172] = anon_sym_LT_AMP;
	v->a[29173] = anon_sym_GT_AMP;
	v->a[29174] = anon_sym_GT_PIPE;
	v->a[29175] = anon_sym_LT_GT;
	v->a[29176] = 8;
	v->a[29177] = actions(3);
	v->a[29178] = 1;
	v->a[29179] = sym_comment;
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = actions(782);
	v->a[29181] = 1;
	v->a[29182] = anon_sym_PIPE;
	v->a[29183] = actions(792);
	v->a[29184] = 1;
	v->a[29185] = sym_file_descriptor;
	v->a[29186] = actions(1030);
	v->a[29187] = 1;
	v->a[29188] = sym_variable_name;
	v->a[29189] = state(1137);
	v->a[29190] = 2;
	v->a[29191] = sym_variable_assignment;
	v->a[29192] = aux_sym__variable_assignments_repeat1;
	v->a[29193] = state(1194);
	v->a[29194] = 3;
	v->a[29195] = sym_file_redirect;
	v->a[29196] = sym_heredoc_redirect;
	v->a[29197] = aux_sym_redirected_statement_repeat1;
	v->a[29198] = actions(1057);
	v->a[29199] = 7;
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
