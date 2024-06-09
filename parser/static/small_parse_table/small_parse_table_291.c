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
	v->a[29100] = anon_sym_LPAREN;
	v->a[29101] = actions(383);
	v->a[29102] = 1;
	v->a[29103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29104] = actions(385);
	v->a[29105] = 1;
	v->a[29106] = anon_sym_DOLLAR;
	v->a[29107] = actions(387);
	v->a[29108] = 1;
	v->a[29109] = anon_sym_DQUOTE;
	v->a[29110] = actions(391);
	v->a[29111] = 1;
	v->a[29112] = aux_sym_number_token1;
	v->a[29113] = actions(393);
	v->a[29114] = 1;
	v->a[29115] = aux_sym_number_token2;
	v->a[29116] = actions(395);
	v->a[29117] = 1;
	v->a[29118] = anon_sym_DOLLAR_LBRACE;
	v->a[29119] = actions(397);
	small_parse_table_1456(v);
}

void	small_parse_table_1456(t_small_parse_table_array *v)
{
	v->a[29120] = 1;
	v->a[29121] = anon_sym_DOLLAR_LPAREN;
	v->a[29122] = actions(399);
	v->a[29123] = 1;
	v->a[29124] = anon_sym_BQUOTE;
	v->a[29125] = actions(403);
	v->a[29126] = 1;
	v->a[29127] = sym_variable_name;
	v->a[29128] = actions(1102);
	v->a[29129] = 1;
	v->a[29130] = sym_file_descriptor;
	v->a[29131] = state(271);
	v->a[29132] = 1;
	v->a[29133] = sym_command_name;
	v->a[29134] = state(581);
	v->a[29135] = 1;
	v->a[29136] = aux_sym_command_repeat1;
	v->a[29137] = state(889);
	v->a[29138] = 1;
	v->a[29139] = sym_concatenation;
	small_parse_table_1457(v);
}

void	small_parse_table_1457(t_small_parse_table_array *v)
{
	v->a[29140] = state(937);
	v->a[29141] = 1;
	v->a[29142] = sym_variable_assignment;
	v->a[29143] = state(1237);
	v->a[29144] = 1;
	v->a[29145] = sym_file_redirect;
	v->a[29146] = state(1520);
	v->a[29147] = 1;
	v->a[29148] = sym_subshell;
	v->a[29149] = state(1521);
	v->a[29150] = 1;
	v->a[29151] = sym_command;
	v->a[29152] = actions(389);
	v->a[29153] = 2;
	v->a[29154] = sym_raw_string;
	v->a[29155] = sym_word;
	v->a[29156] = actions(1100);
	v->a[29157] = 2;
	v->a[29158] = anon_sym_LT_AMP_DASH;
	v->a[29159] = anon_sym_GT_AMP_DASH;
	small_parse_table_1458(v);
}

void	small_parse_table_1458(t_small_parse_table_array *v)
{
	v->a[29160] = state(768);
	v->a[29161] = 6;
	v->a[29162] = sym_arithmetic_expansion;
	v->a[29163] = sym_string;
	v->a[29164] = sym_number;
	v->a[29165] = sym_simple_expansion;
	v->a[29166] = sym_expansion;
	v->a[29167] = sym_command_substitution;
	v->a[29168] = actions(1098);
	v->a[29169] = 8;
	v->a[29170] = anon_sym_LT;
	v->a[29171] = anon_sym_GT;
	v->a[29172] = anon_sym_GT_GT;
	v->a[29173] = anon_sym_AMP_GT;
	v->a[29174] = anon_sym_AMP_GT_GT;
	v->a[29175] = anon_sym_LT_AMP;
	v->a[29176] = anon_sym_GT_AMP;
	v->a[29177] = anon_sym_GT_PIPE;
	v->a[29178] = 11;
	v->a[29179] = actions(3);
	small_parse_table_1459(v);
}

void	small_parse_table_1459(t_small_parse_table_array *v)
{
	v->a[29180] = 1;
	v->a[29181] = sym_comment;
	v->a[29182] = actions(1002);
	v->a[29183] = 1;
	v->a[29184] = anon_sym_PIPE;
	v->a[29185] = actions(1006);
	v->a[29186] = 1;
	v->a[29187] = sym_file_descriptor;
	v->a[29188] = actions(1073);
	v->a[29189] = 1;
	v->a[29190] = anon_sym_BQUOTE;
	v->a[29191] = actions(1124);
	v->a[29192] = 1;
	v->a[29193] = sym_variable_name;
	v->a[29194] = actions(1062);
	v->a[29195] = 2;
	v->a[29196] = anon_sym_LT_LT;
	v->a[29197] = anon_sym_LT_LT_DASH;
	v->a[29198] = actions(1143);
	v->a[29199] = 2;
	small_parse_table_1460(v);
}

/* EOF small_parse_table_291.c */
