/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_121.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_605(t_small_parse_table_array *v)
{
	v->a[12100] = sym_file_descriptor;
	v->a[12101] = actions(221);
	v->a[12102] = 1;
	v->a[12103] = sym_variable_name;
	v->a[12104] = state(127);
	v->a[12105] = 1;
	v->a[12106] = aux_sym__statements_repeat1;
	v->a[12107] = state(170);
	v->a[12108] = 1;
	v->a[12109] = sym_command_name;
	v->a[12110] = state(241);
	v->a[12111] = 1;
	v->a[12112] = sym_variable_assignment;
	v->a[12113] = state(617);
	v->a[12114] = 1;
	v->a[12115] = aux_sym_command_repeat1;
	v->a[12116] = state(661);
	v->a[12117] = 1;
	v->a[12118] = sym_concatenation;
	v->a[12119] = state(739);
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = 1;
	v->a[12121] = sym_file_redirect;
	v->a[12122] = state(1070);
	v->a[12123] = 1;
	v->a[12124] = sym_pipeline;
	v->a[12125] = state(1177);
	v->a[12126] = 1;
	v->a[12127] = aux_sym_redirected_statement_repeat2;
	v->a[12128] = state(1919);
	v->a[12129] = 1;
	v->a[12130] = sym__statement_not_pipeline;
	v->a[12131] = state(2053);
	v->a[12132] = 1;
	v->a[12133] = sym__statements;
	v->a[12134] = actions(11);
	v->a[12135] = 2;
	v->a[12136] = anon_sym_while;
	v->a[12137] = anon_sym_until;
	v->a[12138] = actions(217);
	v->a[12139] = 2;
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = sym_raw_string;
	v->a[12141] = sym_number;
	v->a[12142] = state(374);
	v->a[12143] = 5;
	v->a[12144] = sym_arithmetic_expansion;
	v->a[12145] = sym_string;
	v->a[12146] = sym_simple_expansion;
	v->a[12147] = sym_expansion;
	v->a[12148] = sym_command_substitution;
	v->a[12149] = actions(215);
	v->a[12150] = 7;
	v->a[12151] = anon_sym_LT;
	v->a[12152] = anon_sym_GT;
	v->a[12153] = anon_sym_GT_GT;
	v->a[12154] = anon_sym_LT_AMP;
	v->a[12155] = anon_sym_GT_AMP;
	v->a[12156] = anon_sym_GT_PIPE;
	v->a[12157] = anon_sym_LT_GT;
	v->a[12158] = state(989);
	v->a[12159] = 12;
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = sym_redirected_statement;
	v->a[12161] = sym_for_statement;
	v->a[12162] = sym_while_statement;
	v->a[12163] = sym_if_statement;
	v->a[12164] = sym_case_statement;
	v->a[12165] = sym_function_definition;
	v->a[12166] = sym_compound_statement;
	v->a[12167] = sym_subshell;
	v->a[12168] = sym_list;
	v->a[12169] = sym_negated_command;
	v->a[12170] = sym_command;
	v->a[12171] = sym__variable_assignments;
	v->a[12172] = 31;
	v->a[12173] = actions(3);
	v->a[12174] = 1;
	v->a[12175] = sym_comment;
	v->a[12176] = actions(9);
	v->a[12177] = 1;
	v->a[12178] = anon_sym_for;
	v->a[12179] = actions(13);
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = 1;
	v->a[12181] = anon_sym_if;
	v->a[12182] = actions(15);
	v->a[12183] = 1;
	v->a[12184] = anon_sym_case;
	v->a[12185] = actions(17);
	v->a[12186] = 1;
	v->a[12187] = anon_sym_LPAREN;
	v->a[12188] = actions(19);
	v->a[12189] = 1;
	v->a[12190] = anon_sym_LBRACE;
	v->a[12191] = actions(55);
	v->a[12192] = 1;
	v->a[12193] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12194] = actions(57);
	v->a[12195] = 1;
	v->a[12196] = anon_sym_DOLLAR;
	v->a[12197] = actions(59);
	v->a[12198] = 1;
	v->a[12199] = anon_sym_DQUOTE;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
