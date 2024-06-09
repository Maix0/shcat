/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_201.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1005(t_small_parse_table_array *v)
{
	v->a[20100] = state(889);
	v->a[20101] = 1;
	v->a[20102] = sym_concatenation;
	v->a[20103] = state(938);
	v->a[20104] = 1;
	v->a[20105] = sym_file_redirect;
	v->a[20106] = state(1041);
	v->a[20107] = 1;
	v->a[20108] = sym_variable_assignment;
	v->a[20109] = state(1415);
	v->a[20110] = 1;
	v->a[20111] = aux_sym_redirected_statement_repeat2;
	v->a[20112] = actions(367);
	v->a[20113] = 2;
	v->a[20114] = anon_sym_while;
	v->a[20115] = anon_sym_until;
	v->a[20116] = actions(381);
	v->a[20117] = 2;
	v->a[20118] = anon_sym_LT_AMP_DASH;
	v->a[20119] = anon_sym_GT_AMP_DASH;
	small_parse_table_1006(v);
}

void	small_parse_table_1006(t_small_parse_table_array *v)
{
	v->a[20120] = actions(389);
	v->a[20121] = 2;
	v->a[20122] = sym_raw_string;
	v->a[20123] = sym_word;
	v->a[20124] = state(768);
	v->a[20125] = 6;
	v->a[20126] = sym_arithmetic_expansion;
	v->a[20127] = sym_string;
	v->a[20128] = sym_number;
	v->a[20129] = sym_simple_expansion;
	v->a[20130] = sym_expansion;
	v->a[20131] = sym_command_substitution;
	v->a[20132] = state(1530);
	v->a[20133] = 7;
	v->a[20134] = sym_for_statement;
	v->a[20135] = sym_while_statement;
	v->a[20136] = sym_if_statement;
	v->a[20137] = sym_compound_statement;
	v->a[20138] = sym_subshell;
	v->a[20139] = sym_command;
	small_parse_table_1007(v);
}

void	small_parse_table_1007(t_small_parse_table_array *v)
{
	v->a[20140] = sym_variable_assignments;
	v->a[20141] = actions(379);
	v->a[20142] = 8;
	v->a[20143] = anon_sym_LT;
	v->a[20144] = anon_sym_GT;
	v->a[20145] = anon_sym_GT_GT;
	v->a[20146] = anon_sym_AMP_GT;
	v->a[20147] = anon_sym_AMP_GT_GT;
	v->a[20148] = anon_sym_LT_AMP;
	v->a[20149] = anon_sym_GT_AMP;
	v->a[20150] = anon_sym_GT_PIPE;
	v->a[20151] = 27;
	v->a[20152] = actions(3);
	v->a[20153] = 1;
	v->a[20154] = sym_comment;
	v->a[20155] = actions(9);
	v->a[20156] = 1;
	v->a[20157] = anon_sym_for;
	v->a[20158] = actions(13);
	v->a[20159] = 1;
	small_parse_table_1008(v);
}

void	small_parse_table_1008(t_small_parse_table_array *v)
{
	v->a[20160] = anon_sym_if;
	v->a[20161] = actions(17);
	v->a[20162] = 1;
	v->a[20163] = anon_sym_LPAREN;
	v->a[20164] = actions(19);
	v->a[20165] = 1;
	v->a[20166] = anon_sym_LBRACE;
	v->a[20167] = actions(63);
	v->a[20168] = 1;
	v->a[20169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20170] = actions(65);
	v->a[20171] = 1;
	v->a[20172] = anon_sym_DOLLAR;
	v->a[20173] = actions(67);
	v->a[20174] = 1;
	v->a[20175] = anon_sym_DQUOTE;
	v->a[20176] = actions(71);
	v->a[20177] = 1;
	v->a[20178] = aux_sym_number_token1;
	v->a[20179] = actions(73);
	small_parse_table_1009(v);
}

void	small_parse_table_1009(t_small_parse_table_array *v)
{
	v->a[20180] = 1;
	v->a[20181] = aux_sym_number_token2;
	v->a[20182] = actions(75);
	v->a[20183] = 1;
	v->a[20184] = anon_sym_DOLLAR_LBRACE;
	v->a[20185] = actions(77);
	v->a[20186] = 1;
	v->a[20187] = anon_sym_DOLLAR_LPAREN;
	v->a[20188] = actions(79);
	v->a[20189] = 1;
	v->a[20190] = anon_sym_BQUOTE;
	v->a[20191] = actions(258);
	v->a[20192] = 1;
	v->a[20193] = sym_file_descriptor;
	v->a[20194] = actions(405);
	v->a[20195] = 1;
	v->a[20196] = sym_variable_name;
	v->a[20197] = state(175);
	v->a[20198] = 1;
	v->a[20199] = sym_command_name;
	small_parse_table_1010(v);
}

/* EOF small_parse_table_201.c */
