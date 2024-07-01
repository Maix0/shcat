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
	v->a[12100] = anon_sym_GT_GT;
	v->a[12101] = anon_sym_LT_AMP;
	v->a[12102] = anon_sym_GT_AMP;
	v->a[12103] = anon_sym_GT_PIPE;
	v->a[12104] = state(1030);
	v->a[12105] = 12;
	v->a[12106] = sym_redirected_statement;
	v->a[12107] = sym_for_statement;
	v->a[12108] = sym_while_statement;
	v->a[12109] = sym_if_statement;
	v->a[12110] = sym_case_statement;
	v->a[12111] = sym_function_definition;
	v->a[12112] = sym_compound_statement;
	v->a[12113] = sym_subshell;
	v->a[12114] = sym_list;
	v->a[12115] = sym_negated_command;
	v->a[12116] = sym_command;
	v->a[12117] = sym__variable_assignments;
	v->a[12118] = 32;
	v->a[12119] = actions(3);
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = 1;
	v->a[12121] = sym_comment;
	v->a[12122] = actions(9);
	v->a[12123] = 1;
	v->a[12124] = anon_sym_for;
	v->a[12125] = actions(13);
	v->a[12126] = 1;
	v->a[12127] = anon_sym_if;
	v->a[12128] = actions(15);
	v->a[12129] = 1;
	v->a[12130] = anon_sym_case;
	v->a[12131] = actions(17);
	v->a[12132] = 1;
	v->a[12133] = anon_sym_LPAREN;
	v->a[12134] = actions(19);
	v->a[12135] = 1;
	v->a[12136] = anon_sym_LBRACE;
	v->a[12137] = actions(59);
	v->a[12138] = 1;
	v->a[12139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = actions(61);
	v->a[12141] = 1;
	v->a[12142] = anon_sym_DOLLAR;
	v->a[12143] = actions(63);
	v->a[12144] = 1;
	v->a[12145] = anon_sym_DQUOTE;
	v->a[12146] = actions(67);
	v->a[12147] = 1;
	v->a[12148] = anon_sym_DOLLAR_LBRACE;
	v->a[12149] = actions(69);
	v->a[12150] = 1;
	v->a[12151] = anon_sym_DOLLAR_LPAREN;
	v->a[12152] = actions(71);
	v->a[12153] = 1;
	v->a[12154] = anon_sym_BQUOTE;
	v->a[12155] = actions(220);
	v->a[12156] = 1;
	v->a[12157] = sym_word;
	v->a[12158] = actions(222);
	v->a[12159] = 1;
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = anon_sym_BANG;
	v->a[12161] = actions(230);
	v->a[12162] = 1;
	v->a[12163] = sym_file_descriptor;
	v->a[12164] = actions(232);
	v->a[12165] = 1;
	v->a[12166] = sym_variable_name;
	v->a[12167] = state(133);
	v->a[12168] = 1;
	v->a[12169] = aux_sym__statements_repeat1;
	v->a[12170] = state(180);
	v->a[12171] = 1;
	v->a[12172] = sym_command_name;
	v->a[12173] = state(231);
	v->a[12174] = 1;
	v->a[12175] = sym_variable_assignment;
	v->a[12176] = state(650);
	v->a[12177] = 1;
	v->a[12178] = sym_concatenation;
	v->a[12179] = state(670);
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = 1;
	v->a[12181] = sym_file_redirect;
	v->a[12182] = state(710);
	v->a[12183] = 1;
	v->a[12184] = aux_sym_command_repeat1;
	v->a[12185] = state(1095);
	v->a[12186] = 1;
	v->a[12187] = sym_pipeline;
	v->a[12188] = state(1282);
	v->a[12189] = 1;
	v->a[12190] = aux_sym_redirected_statement_repeat2;
	v->a[12191] = state(2127);
	v->a[12192] = 1;
	v->a[12193] = sym__statement_not_pipeline;
	v->a[12194] = state(2329);
	v->a[12195] = 1;
	v->a[12196] = sym__statements;
	v->a[12197] = actions(11);
	v->a[12198] = 2;
	v->a[12199] = anon_sym_while;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
