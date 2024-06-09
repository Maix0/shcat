/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10(t_small_parse_table_array *v)
{
	v->a[200] = 1;
	v->a[201] = sym_file_descriptor;
	v->a[202] = actions(83);
	v->a[203] = 1;
	v->a[204] = sym_variable_name;
	v->a[205] = actions(85);
	v->a[206] = 1;
	v->a[207] = anon_sym_fi;
	v->a[208] = state(5);
	v->a[209] = 1;
	v->a[210] = aux_sym__terminated_statement;
	v->a[211] = state(190);
	v->a[212] = 1;
	v->a[213] = sym_command_name;
	v->a[214] = state(299);
	v->a[215] = 1;
	v->a[216] = sym_variable_assignment;
	v->a[217] = state(582);
	v->a[218] = 1;
	v->a[219] = sym_concatenation;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = state(587);
	v->a[221] = 1;
	v->a[222] = aux_sym_command_repeat1;
	v->a[223] = state(718);
	v->a[224] = 1;
	v->a[225] = sym_file_redirect;
	v->a[226] = state(1212);
	v->a[227] = 1;
	v->a[228] = sym_pipeline;
	v->a[229] = state(1213);
	v->a[230] = 1;
	v->a[231] = aux_sym_redirected_statement_repeat2;
	v->a[232] = state(2035);
	v->a[233] = 1;
	v->a[234] = sym__statement_not_pipeline;
	v->a[235] = state(2158);
	v->a[236] = 1;
	v->a[237] = sym_else_clause;
	v->a[238] = actions(11);
	v->a[239] = 2;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = anon_sym_while;
	v->a[241] = anon_sym_until;
	v->a[242] = actions(61);
	v->a[243] = 2;
	v->a[244] = anon_sym_LT_AMP_DASH;
	v->a[245] = anon_sym_GT_AMP_DASH;
	v->a[246] = state(1895);
	v->a[247] = 2;
	v->a[248] = sym_elif_clause;
	v->a[249] = aux_sym_if_statement_repeat1;
	v->a[250] = state(397);
	v->a[251] = 6;
	v->a[252] = sym_arithmetic_expansion;
	v->a[253] = sym_string;
	v->a[254] = sym_number;
	v->a[255] = sym_simple_expansion;
	v->a[256] = sym_expansion;
	v->a[257] = sym_command_substitution;
	v->a[258] = actions(59);
	v->a[259] = 8;
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = anon_sym_LT;
	v->a[261] = anon_sym_GT;
	v->a[262] = anon_sym_GT_GT;
	v->a[263] = anon_sym_AMP_GT;
	v->a[264] = anon_sym_AMP_GT_GT;
	v->a[265] = anon_sym_LT_AMP;
	v->a[266] = anon_sym_GT_AMP;
	v->a[267] = anon_sym_GT_PIPE;
	v->a[268] = state(1183);
	v->a[269] = 12;
	v->a[270] = sym_redirected_statement;
	v->a[271] = sym_for_statement;
	v->a[272] = sym_while_statement;
	v->a[273] = sym_if_statement;
	v->a[274] = sym_case_statement;
	v->a[275] = sym_function_definition;
	v->a[276] = sym_compound_statement;
	v->a[277] = sym_subshell;
	v->a[278] = sym_list;
	v->a[279] = sym_negated_command;
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = sym_command;
	v->a[281] = sym_variable_assignments;
	v->a[282] = 38;
	v->a[283] = actions(3);
	v->a[284] = 1;
	v->a[285] = sym_comment;
	v->a[286] = actions(9);
	v->a[287] = 1;
	v->a[288] = anon_sym_for;
	v->a[289] = actions(13);
	v->a[290] = 1;
	v->a[291] = anon_sym_if;
	v->a[292] = actions(15);
	v->a[293] = 1;
	v->a[294] = anon_sym_case;
	v->a[295] = actions(17);
	v->a[296] = 1;
	v->a[297] = anon_sym_LPAREN;
	v->a[298] = actions(19);
	v->a[299] = 1;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
