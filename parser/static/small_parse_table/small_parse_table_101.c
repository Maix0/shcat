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
	v->a[10100] = anon_sym_GT_GT;
	v->a[10101] = anon_sym_AMP_GT;
	v->a[10102] = anon_sym_AMP_GT_GT;
	v->a[10103] = anon_sym_LT_AMP;
	v->a[10104] = anon_sym_GT_AMP;
	v->a[10105] = anon_sym_GT_PIPE;
	v->a[10106] = state(1188);
	v->a[10107] = 12;
	v->a[10108] = sym_redirected_statement;
	v->a[10109] = sym_for_statement;
	v->a[10110] = sym_while_statement;
	v->a[10111] = sym_if_statement;
	v->a[10112] = sym_case_statement;
	v->a[10113] = sym_function_definition;
	v->a[10114] = sym_compound_statement;
	v->a[10115] = sym_subshell;
	v->a[10116] = sym_list;
	v->a[10117] = sym_negated_command;
	v->a[10118] = sym_command;
	v->a[10119] = sym__variable_assignments;
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = 32;
	v->a[10121] = actions(3);
	v->a[10122] = 1;
	v->a[10123] = sym_comment;
	v->a[10124] = actions(9);
	v->a[10125] = 1;
	v->a[10126] = anon_sym_for;
	v->a[10127] = actions(13);
	v->a[10128] = 1;
	v->a[10129] = anon_sym_if;
	v->a[10130] = actions(15);
	v->a[10131] = 1;
	v->a[10132] = anon_sym_case;
	v->a[10133] = actions(17);
	v->a[10134] = 1;
	v->a[10135] = anon_sym_LPAREN;
	v->a[10136] = actions(19);
	v->a[10137] = 1;
	v->a[10138] = anon_sym_LBRACE;
	v->a[10139] = actions(59);
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = 1;
	v->a[10141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10142] = actions(61);
	v->a[10143] = 1;
	v->a[10144] = anon_sym_DOLLAR;
	v->a[10145] = actions(63);
	v->a[10146] = 1;
	v->a[10147] = anon_sym_DQUOTE;
	v->a[10148] = actions(67);
	v->a[10149] = 1;
	v->a[10150] = anon_sym_DOLLAR_LBRACE;
	v->a[10151] = actions(69);
	v->a[10152] = 1;
	v->a[10153] = anon_sym_DOLLAR_LPAREN;
	v->a[10154] = actions(71);
	v->a[10155] = 1;
	v->a[10156] = anon_sym_BQUOTE;
	v->a[10157] = actions(73);
	v->a[10158] = 1;
	v->a[10159] = sym_file_descriptor;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = actions(75);
	v->a[10161] = 1;
	v->a[10162] = sym_variable_name;
	v->a[10163] = actions(236);
	v->a[10164] = 1;
	v->a[10165] = sym_word;
	v->a[10166] = actions(238);
	v->a[10167] = 1;
	v->a[10168] = anon_sym_BANG;
	v->a[10169] = state(140);
	v->a[10170] = 1;
	v->a[10171] = aux_sym__statements_repeat1;
	v->a[10172] = state(189);
	v->a[10173] = 1;
	v->a[10174] = sym_command_name;
	v->a[10175] = state(286);
	v->a[10176] = 1;
	v->a[10177] = sym_variable_assignment;
	v->a[10178] = state(647);
	v->a[10179] = 1;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = sym_concatenation;
	v->a[10181] = state(746);
	v->a[10182] = 1;
	v->a[10183] = aux_sym_command_repeat1;
	v->a[10184] = state(905);
	v->a[10185] = 1;
	v->a[10186] = sym_file_redirect;
	v->a[10187] = state(1422);
	v->a[10188] = 1;
	v->a[10189] = sym_pipeline;
	v->a[10190] = state(1429);
	v->a[10191] = 1;
	v->a[10192] = aux_sym_redirected_statement_repeat2;
	v->a[10193] = state(2271);
	v->a[10194] = 1;
	v->a[10195] = sym__statement_not_pipeline;
	v->a[10196] = state(2423);
	v->a[10197] = 1;
	v->a[10198] = sym__statements;
	v->a[10199] = actions(11);
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
