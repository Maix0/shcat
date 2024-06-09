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
	v->a[12100] = 1;
	v->a[12101] = sym__statements;
	v->a[12102] = actions(11);
	v->a[12103] = 2;
	v->a[12104] = anon_sym_while;
	v->a[12105] = anon_sym_until;
	v->a[12106] = actions(254);
	v->a[12107] = 2;
	v->a[12108] = anon_sym_LT_AMP_DASH;
	v->a[12109] = anon_sym_GT_AMP_DASH;
	v->a[12110] = state(295);
	v->a[12111] = 6;
	v->a[12112] = sym_arithmetic_expansion;
	v->a[12113] = sym_string;
	v->a[12114] = sym_number;
	v->a[12115] = sym_simple_expansion;
	v->a[12116] = sym_expansion;
	v->a[12117] = sym_command_substitution;
	v->a[12118] = actions(252);
	v->a[12119] = 8;
	small_parse_table_606(v);
}

void	small_parse_table_606(t_small_parse_table_array *v)
{
	v->a[12120] = anon_sym_LT;
	v->a[12121] = anon_sym_GT;
	v->a[12122] = anon_sym_GT_GT;
	v->a[12123] = anon_sym_AMP_GT;
	v->a[12124] = anon_sym_AMP_GT_GT;
	v->a[12125] = anon_sym_LT_AMP;
	v->a[12126] = anon_sym_GT_AMP;
	v->a[12127] = anon_sym_GT_PIPE;
	v->a[12128] = state(1031);
	v->a[12129] = 12;
	v->a[12130] = sym_redirected_statement;
	v->a[12131] = sym_for_statement;
	v->a[12132] = sym_while_statement;
	v->a[12133] = sym_if_statement;
	v->a[12134] = sym_case_statement;
	v->a[12135] = sym_function_definition;
	v->a[12136] = sym_compound_statement;
	v->a[12137] = sym_subshell;
	v->a[12138] = sym_list;
	v->a[12139] = sym_negated_command;
	small_parse_table_607(v);
}

void	small_parse_table_607(t_small_parse_table_array *v)
{
	v->a[12140] = sym_command;
	v->a[12141] = sym_variable_assignments;
	v->a[12142] = 34;
	v->a[12143] = actions(3);
	v->a[12144] = 1;
	v->a[12145] = sym_comment;
	v->a[12146] = actions(151);
	v->a[12147] = 1;
	v->a[12148] = sym_word;
	v->a[12149] = actions(154);
	v->a[12150] = 1;
	v->a[12151] = anon_sym_for;
	v->a[12152] = actions(160);
	v->a[12153] = 1;
	v->a[12154] = anon_sym_if;
	v->a[12155] = actions(163);
	v->a[12156] = 1;
	v->a[12157] = anon_sym_fi;
	v->a[12158] = actions(165);
	v->a[12159] = 1;
	small_parse_table_608(v);
}

void	small_parse_table_608(t_small_parse_table_array *v)
{
	v->a[12160] = anon_sym_case;
	v->a[12161] = actions(168);
	v->a[12162] = 1;
	v->a[12163] = anon_sym_LPAREN;
	v->a[12164] = actions(171);
	v->a[12165] = 1;
	v->a[12166] = anon_sym_LBRACE;
	v->a[12167] = actions(174);
	v->a[12168] = 1;
	v->a[12169] = anon_sym_BANG;
	v->a[12170] = actions(183);
	v->a[12171] = 1;
	v->a[12172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12173] = actions(186);
	v->a[12174] = 1;
	v->a[12175] = anon_sym_DOLLAR;
	v->a[12176] = actions(189);
	v->a[12177] = 1;
	v->a[12178] = anon_sym_DQUOTE;
	v->a[12179] = actions(192);
	small_parse_table_609(v);
}

void	small_parse_table_609(t_small_parse_table_array *v)
{
	v->a[12180] = 1;
	v->a[12181] = sym_raw_string;
	v->a[12182] = actions(195);
	v->a[12183] = 1;
	v->a[12184] = aux_sym_number_token1;
	v->a[12185] = actions(198);
	v->a[12186] = 1;
	v->a[12187] = aux_sym_number_token2;
	v->a[12188] = actions(201);
	v->a[12189] = 1;
	v->a[12190] = anon_sym_DOLLAR_LBRACE;
	v->a[12191] = actions(204);
	v->a[12192] = 1;
	v->a[12193] = anon_sym_DOLLAR_LPAREN;
	v->a[12194] = actions(207);
	v->a[12195] = 1;
	v->a[12196] = anon_sym_BQUOTE;
	v->a[12197] = actions(210);
	v->a[12198] = 1;
	v->a[12199] = sym_file_descriptor;
	small_parse_table_610(v);
}

/* EOF small_parse_table_121.c */
