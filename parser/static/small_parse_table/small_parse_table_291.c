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
	v->a[29100] = anon_sym_PIPE_PIPE;
	v->a[29101] = anon_sym_LT_LT;
	v->a[29102] = anon_sym_LT_LT_DASH;
	v->a[29103] = aux_sym_heredoc_redirect_token1;
	v->a[29104] = anon_sym_AMP;
	v->a[29105] = anon_sym_SEMI;
	v->a[29106] = actions(690);
	v->a[29107] = 16;
	v->a[29108] = anon_sym_LT;
	v->a[29109] = anon_sym_GT;
	v->a[29110] = anon_sym_GT_GT;
	v->a[29111] = anon_sym_LT_AMP;
	v->a[29112] = anon_sym_GT_AMP;
	v->a[29113] = anon_sym_GT_PIPE;
	v->a[29114] = anon_sym_LT_GT;
	v->a[29115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29116] = anon_sym_DOLLAR;
	v->a[29117] = anon_sym_DQUOTE;
	v->a[29118] = sym_raw_string;
	v->a[29119] = sym_number;
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = anon_sym_DOLLAR_LBRACE;
	v->a[29121] = anon_sym_DOLLAR_LPAREN;
	v->a[29122] = anon_sym_BQUOTE;
	v->a[29123] = sym_word;
	v->a[29124] = 7;
	v->a[29125] = actions(3);
	v->a[29126] = 1;
	v->a[29127] = sym_comment;
	v->a[29128] = actions(1047);
	v->a[29129] = 1;
	v->a[29130] = aux_sym_concatenation_token1;
	v->a[29131] = actions(1055);
	v->a[29132] = 1;
	v->a[29133] = sym__concat;
	v->a[29134] = actions(1102);
	v->a[29135] = 1;
	v->a[29136] = anon_sym_LPAREN;
	v->a[29137] = state(344);
	v->a[29138] = 1;
	v->a[29139] = aux_sym_concatenation_repeat1;
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = actions(1051);
	v->a[29141] = 3;
	v->a[29142] = sym_file_descriptor;
	v->a[29143] = sym__bare_dollar;
	v->a[29144] = ts_builtin_sym_end;
	v->a[29145] = actions(1053);
	v->a[29146] = 25;
	v->a[29147] = anon_sym_PIPE;
	v->a[29148] = anon_sym_SEMI_SEMI;
	v->a[29149] = anon_sym_AMP_AMP;
	v->a[29150] = anon_sym_PIPE_PIPE;
	v->a[29151] = anon_sym_LT;
	v->a[29152] = anon_sym_GT;
	v->a[29153] = anon_sym_GT_GT;
	v->a[29154] = anon_sym_LT_AMP;
	v->a[29155] = anon_sym_GT_AMP;
	v->a[29156] = anon_sym_GT_PIPE;
	v->a[29157] = anon_sym_LT_GT;
	v->a[29158] = anon_sym_LT_LT;
	v->a[29159] = anon_sym_LT_LT_DASH;
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = aux_sym_heredoc_redirect_token1;
	v->a[29161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29162] = anon_sym_AMP;
	v->a[29163] = anon_sym_DOLLAR;
	v->a[29164] = anon_sym_DQUOTE;
	v->a[29165] = sym_raw_string;
	v->a[29166] = sym_number;
	v->a[29167] = anon_sym_DOLLAR_LBRACE;
	v->a[29168] = anon_sym_DOLLAR_LPAREN;
	v->a[29169] = anon_sym_BQUOTE;
	v->a[29170] = sym_word;
	v->a[29171] = anon_sym_SEMI;
	v->a[29172] = 8;
	v->a[29173] = actions(3);
	v->a[29174] = 1;
	v->a[29175] = sym_comment;
	v->a[29176] = actions(692);
	v->a[29177] = 1;
	v->a[29178] = anon_sym_PIPE;
	v->a[29179] = actions(702);
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = 1;
	v->a[29181] = sym_file_descriptor;
	v->a[29182] = actions(938);
	v->a[29183] = 1;
	v->a[29184] = sym_variable_name;
	v->a[29185] = state(1038);
	v->a[29186] = 2;
	v->a[29187] = sym_variable_assignment;
	v->a[29188] = aux_sym__variable_assignments_repeat1;
	v->a[29189] = state(1034);
	v->a[29190] = 3;
	v->a[29191] = sym_file_redirect;
	v->a[29192] = sym_heredoc_redirect;
	v->a[29193] = aux_sym_redirected_statement_repeat1;
	v->a[29194] = actions(997);
	v->a[29195] = 8;
	v->a[29196] = anon_sym_SEMI_SEMI;
	v->a[29197] = anon_sym_AMP_AMP;
	v->a[29198] = anon_sym_PIPE_PIPE;
	v->a[29199] = anon_sym_LT_LT;
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
