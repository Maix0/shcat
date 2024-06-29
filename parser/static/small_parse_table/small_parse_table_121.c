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
	v->a[12100] = actions(67);
	v->a[12101] = 1;
	v->a[12102] = anon_sym_DOLLAR_LBRACE;
	v->a[12103] = actions(69);
	v->a[12104] = 1;
	v->a[12105] = anon_sym_DOLLAR_LPAREN;
	v->a[12106] = actions(71);
	v->a[12107] = 1;
	v->a[12108] = anon_sym_BQUOTE;
	v->a[12109] = actions(220);
	v->a[12110] = 1;
	v->a[12111] = sym_word;
	v->a[12112] = actions(222);
	v->a[12113] = 1;
	v->a[12114] = anon_sym_BANG;
	v->a[12115] = actions(230);
	v->a[12116] = 1;
	v->a[12117] = sym_file_descriptor;
	v->a[12118] = actions(232);
	v->a[12119] = 1;
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = sym_variable_name;
	v->a[12121] = state(138);
	v->a[12122] = 1;
	v->a[12123] = aux_sym__statements_repeat1;
	v->a[12124] = state(185);
	v->a[12125] = 1;
	v->a[12126] = sym_command_name;
	v->a[12127] = state(235);
	v->a[12128] = 1;
	v->a[12129] = sym_variable_assignment;
	v->a[12130] = state(624);
	v->a[12131] = 1;
	v->a[12132] = sym_concatenation;
	v->a[12133] = state(737);
	v->a[12134] = 1;
	v->a[12135] = sym_file_redirect;
	v->a[12136] = state(765);
	v->a[12137] = 1;
	v->a[12138] = aux_sym_command_repeat1;
	v->a[12139] = state(1110);
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = 1;
	v->a[12141] = sym_pipeline;
	v->a[12142] = state(1188);
	v->a[12143] = 1;
	v->a[12144] = aux_sym_redirected_statement_repeat2;
	v->a[12145] = state(2115);
	v->a[12146] = 1;
	v->a[12147] = sym__statement_not_pipeline;
	v->a[12148] = state(2325);
	v->a[12149] = 1;
	v->a[12150] = sym__statements;
	v->a[12151] = actions(11);
	v->a[12152] = 2;
	v->a[12153] = anon_sym_while;
	v->a[12154] = anon_sym_until;
	v->a[12155] = actions(226);
	v->a[12156] = 2;
	v->a[12157] = anon_sym_LT_AMP_DASH;
	v->a[12158] = anon_sym_GT_AMP_DASH;
	v->a[12159] = actions(228);
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = 2;
	v->a[12161] = sym_raw_string;
	v->a[12162] = sym_number;
	v->a[12163] = state(299);
	v->a[12164] = 5;
	v->a[12165] = sym_arithmetic_expansion;
	v->a[12166] = sym_string;
	v->a[12167] = sym_simple_expansion;
	v->a[12168] = sym_expansion;
	v->a[12169] = sym_command_substitution;
	v->a[12170] = actions(224);
	v->a[12171] = 8;
	v->a[12172] = anon_sym_LT;
	v->a[12173] = anon_sym_GT;
	v->a[12174] = anon_sym_GT_GT;
	v->a[12175] = anon_sym_AMP_GT;
	v->a[12176] = anon_sym_AMP_GT_GT;
	v->a[12177] = anon_sym_LT_AMP;
	v->a[12178] = anon_sym_GT_AMP;
	v->a[12179] = anon_sym_GT_PIPE;
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = state(1072);
	v->a[12181] = 12;
	v->a[12182] = sym_redirected_statement;
	v->a[12183] = sym_for_statement;
	v->a[12184] = sym_while_statement;
	v->a[12185] = sym_if_statement;
	v->a[12186] = sym_case_statement;
	v->a[12187] = sym_function_definition;
	v->a[12188] = sym_compound_statement;
	v->a[12189] = sym_subshell;
	v->a[12190] = sym_list;
	v->a[12191] = sym_negated_command;
	v->a[12192] = sym_command;
	v->a[12193] = sym__variable_assignments;
	v->a[12194] = 32;
	v->a[12195] = actions(3);
	v->a[12196] = 1;
	v->a[12197] = sym_comment;
	v->a[12198] = actions(9);
	v->a[12199] = 1;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
