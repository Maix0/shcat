/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_141.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_705(t_small_parse_table_array *v)
{
	v->a[14100] = actions(67);
	v->a[14101] = 1;
	v->a[14102] = anon_sym_BQUOTE;
	v->a[14103] = actions(69);
	v->a[14104] = 1;
	v->a[14105] = sym_file_descriptor;
	v->a[14106] = actions(71);
	v->a[14107] = 1;
	v->a[14108] = sym_variable_name;
	v->a[14109] = state(35);
	v->a[14110] = 1;
	v->a[14111] = aux_sym__terminated_statement;
	v->a[14112] = state(183);
	v->a[14113] = 1;
	v->a[14114] = sym_command_name;
	v->a[14115] = state(347);
	v->a[14116] = 1;
	v->a[14117] = sym_variable_assignment;
	v->a[14118] = state(655);
	v->a[14119] = 1;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = aux_sym_command_repeat1;
	v->a[14121] = state(661);
	v->a[14122] = 1;
	v->a[14123] = sym_concatenation;
	v->a[14124] = state(665);
	v->a[14125] = 1;
	v->a[14126] = sym_file_redirect;
	v->a[14127] = state(1172);
	v->a[14128] = 1;
	v->a[14129] = sym_pipeline;
	v->a[14130] = state(1198);
	v->a[14131] = 1;
	v->a[14132] = aux_sym_redirected_statement_repeat2;
	v->a[14133] = state(1901);
	v->a[14134] = 1;
	v->a[14135] = sym__statement_not_pipeline;
	v->a[14136] = actions(11);
	v->a[14137] = 2;
	v->a[14138] = anon_sym_while;
	v->a[14139] = anon_sym_until;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = actions(61);
	v->a[14141] = 2;
	v->a[14142] = sym_raw_string;
	v->a[14143] = sym_number;
	v->a[14144] = state(455);
	v->a[14145] = 5;
	v->a[14146] = sym_arithmetic_expansion;
	v->a[14147] = sym_string;
	v->a[14148] = sym_simple_expansion;
	v->a[14149] = sym_expansion;
	v->a[14150] = sym_command_substitution;
	v->a[14151] = actions(53);
	v->a[14152] = 7;
	v->a[14153] = anon_sym_LT;
	v->a[14154] = anon_sym_GT;
	v->a[14155] = anon_sym_GT_GT;
	v->a[14156] = anon_sym_LT_AMP;
	v->a[14157] = anon_sym_GT_AMP;
	v->a[14158] = anon_sym_GT_PIPE;
	v->a[14159] = anon_sym_LT_GT;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = state(1033);
	v->a[14161] = 12;
	v->a[14162] = sym_redirected_statement;
	v->a[14163] = sym_for_statement;
	v->a[14164] = sym_while_statement;
	v->a[14165] = sym_if_statement;
	v->a[14166] = sym_case_statement;
	v->a[14167] = sym_function_definition;
	v->a[14168] = sym_compound_statement;
	v->a[14169] = sym_subshell;
	v->a[14170] = sym_list;
	v->a[14171] = sym_negated_command;
	v->a[14172] = sym_command;
	v->a[14173] = sym__variable_assignments;
	v->a[14174] = 41;
	v->a[14175] = actions(3);
	v->a[14176] = 1;
	v->a[14177] = sym_comment;
	v->a[14178] = actions(7);
	v->a[14179] = 1;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = sym_word;
	v->a[14181] = actions(9);
	v->a[14182] = 1;
	v->a[14183] = anon_sym_for;
	v->a[14184] = actions(13);
	v->a[14185] = 1;
	v->a[14186] = anon_sym_if;
	v->a[14187] = actions(15);
	v->a[14188] = 1;
	v->a[14189] = anon_sym_case;
	v->a[14190] = actions(17);
	v->a[14191] = 1;
	v->a[14192] = anon_sym_LPAREN;
	v->a[14193] = actions(19);
	v->a[14194] = 1;
	v->a[14195] = anon_sym_LBRACE;
	v->a[14196] = actions(21);
	v->a[14197] = 1;
	v->a[14198] = anon_sym_BANG;
	v->a[14199] = actions(25);
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
