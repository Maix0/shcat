/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_101.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_505(t_small_parse_table_array *v)
{
	v->a[10100] = actions(61);
	v->a[10101] = 1;
	v->a[10102] = anon_sym_DOLLAR;
	v->a[10103] = actions(63);
	v->a[10104] = 1;
	v->a[10105] = anon_sym_DQUOTE;
	v->a[10106] = actions(67);
	v->a[10107] = 1;
	v->a[10108] = anon_sym_DOLLAR_LBRACE;
	v->a[10109] = actions(69);
	v->a[10110] = 1;
	v->a[10111] = anon_sym_DOLLAR_LPAREN;
	v->a[10112] = actions(71);
	v->a[10113] = 1;
	v->a[10114] = anon_sym_BQUOTE;
	v->a[10115] = actions(73);
	v->a[10116] = 1;
	v->a[10117] = sym_file_descriptor;
	v->a[10118] = actions(75);
	v->a[10119] = 1;
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = sym_variable_name;
	v->a[10121] = actions(240);
	v->a[10122] = 1;
	v->a[10123] = sym_word;
	v->a[10124] = actions(242);
	v->a[10125] = 1;
	v->a[10126] = anon_sym_BANG;
	v->a[10127] = state(136);
	v->a[10128] = 1;
	v->a[10129] = aux_sym__statements_repeat1;
	v->a[10130] = state(188);
	v->a[10131] = 1;
	v->a[10132] = sym_command_name;
	v->a[10133] = state(297);
	v->a[10134] = 1;
	v->a[10135] = sym_variable_assignment;
	v->a[10136] = state(650);
	v->a[10137] = 1;
	v->a[10138] = sym_concatenation;
	v->a[10139] = state(749);
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = 1;
	v->a[10141] = aux_sym_command_repeat1;
	v->a[10142] = state(795);
	v->a[10143] = 1;
	v->a[10144] = sym_file_redirect;
	v->a[10145] = state(1154);
	v->a[10146] = 1;
	v->a[10147] = sym_pipeline;
	v->a[10148] = state(1240);
	v->a[10149] = 1;
	v->a[10150] = aux_sym_redirected_statement_repeat2;
	v->a[10151] = state(2119);
	v->a[10152] = 1;
	v->a[10153] = sym__statement_not_pipeline;
	v->a[10154] = state(2245);
	v->a[10155] = 1;
	v->a[10156] = sym__statements;
	v->a[10157] = actions(11);
	v->a[10158] = 2;
	v->a[10159] = anon_sym_while;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = anon_sym_until;
	v->a[10161] = actions(57);
	v->a[10162] = 2;
	v->a[10163] = anon_sym_LT_AMP_DASH;
	v->a[10164] = anon_sym_GT_AMP_DASH;
	v->a[10165] = actions(65);
	v->a[10166] = 2;
	v->a[10167] = sym_raw_string;
	v->a[10168] = sym_number;
	v->a[10169] = state(443);
	v->a[10170] = 5;
	v->a[10171] = sym_arithmetic_expansion;
	v->a[10172] = sym_string;
	v->a[10173] = sym_simple_expansion;
	v->a[10174] = sym_expansion;
	v->a[10175] = sym_command_substitution;
	v->a[10176] = actions(55);
	v->a[10177] = 6;
	v->a[10178] = anon_sym_LT;
	v->a[10179] = anon_sym_GT;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = anon_sym_GT_GT;
	v->a[10181] = anon_sym_LT_AMP;
	v->a[10182] = anon_sym_GT_AMP;
	v->a[10183] = anon_sym_GT_PIPE;
	v->a[10184] = state(1030);
	v->a[10185] = 12;
	v->a[10186] = sym_redirected_statement;
	v->a[10187] = sym_for_statement;
	v->a[10188] = sym_while_statement;
	v->a[10189] = sym_if_statement;
	v->a[10190] = sym_case_statement;
	v->a[10191] = sym_function_definition;
	v->a[10192] = sym_compound_statement;
	v->a[10193] = sym_subshell;
	v->a[10194] = sym_list;
	v->a[10195] = sym_negated_command;
	v->a[10196] = sym_command;
	v->a[10197] = sym__variable_assignments;
	v->a[10198] = 32;
	v->a[10199] = actions(3);
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
