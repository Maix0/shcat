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
	v->a[201] = sym_variable_assignment;
	v->a[202] = state(624);
	v->a[203] = 1;
	v->a[204] = sym_concatenation;
	v->a[205] = state(726);
	v->a[206] = 1;
	v->a[207] = sym_file_redirect;
	v->a[208] = state(733);
	v->a[209] = 1;
	v->a[210] = aux_sym_command_repeat1;
	v->a[211] = state(1223);
	v->a[212] = 1;
	v->a[213] = sym_pipeline;
	v->a[214] = state(1307);
	v->a[215] = 1;
	v->a[216] = aux_sym_redirected_statement_repeat2;
	v->a[217] = state(2117);
	v->a[218] = 1;
	v->a[219] = sym__statement_not_pipeline;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = state(2294);
	v->a[221] = 1;
	v->a[222] = sym_else_clause;
	v->a[223] = actions(11);
	v->a[224] = 2;
	v->a[225] = anon_sym_while;
	v->a[226] = anon_sym_until;
	v->a[227] = actions(57);
	v->a[228] = 2;
	v->a[229] = anon_sym_LT_AMP_DASH;
	v->a[230] = anon_sym_GT_AMP_DASH;
	v->a[231] = actions(65);
	v->a[232] = 2;
	v->a[233] = sym_raw_string;
	v->a[234] = sym_number;
	v->a[235] = state(2013);
	v->a[236] = 2;
	v->a[237] = sym_elif_clause;
	v->a[238] = aux_sym_if_statement_repeat1;
	v->a[239] = state(420);
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = 5;
	v->a[241] = sym_arithmetic_expansion;
	v->a[242] = sym_string;
	v->a[243] = sym_simple_expansion;
	v->a[244] = sym_expansion;
	v->a[245] = sym_command_substitution;
	v->a[246] = actions(55);
	v->a[247] = 8;
	v->a[248] = anon_sym_LT;
	v->a[249] = anon_sym_GT;
	v->a[250] = anon_sym_GT_GT;
	v->a[251] = anon_sym_AMP_GT;
	v->a[252] = anon_sym_AMP_GT_GT;
	v->a[253] = anon_sym_LT_AMP;
	v->a[254] = anon_sym_GT_AMP;
	v->a[255] = anon_sym_GT_PIPE;
	v->a[256] = state(1140);
	v->a[257] = 12;
	v->a[258] = sym_redirected_statement;
	v->a[259] = sym_for_statement;
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = sym_while_statement;
	v->a[261] = sym_if_statement;
	v->a[262] = sym_case_statement;
	v->a[263] = sym_function_definition;
	v->a[264] = sym_compound_statement;
	v->a[265] = sym_subshell;
	v->a[266] = sym_list;
	v->a[267] = sym_negated_command;
	v->a[268] = sym_command;
	v->a[269] = sym__variable_assignments;
	v->a[270] = 36;
	v->a[271] = actions(3);
	v->a[272] = 1;
	v->a[273] = sym_comment;
	v->a[274] = actions(9);
	v->a[275] = 1;
	v->a[276] = anon_sym_for;
	v->a[277] = actions(13);
	v->a[278] = 1;
	v->a[279] = anon_sym_if;
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = actions(15);
	v->a[281] = 1;
	v->a[282] = anon_sym_case;
	v->a[283] = actions(17);
	v->a[284] = 1;
	v->a[285] = anon_sym_LPAREN;
	v->a[286] = actions(19);
	v->a[287] = 1;
	v->a[288] = anon_sym_LBRACE;
	v->a[289] = actions(45);
	v->a[290] = 1;
	v->a[291] = sym_word;
	v->a[292] = actions(49);
	v->a[293] = 1;
	v->a[294] = anon_sym_elif;
	v->a[295] = actions(51);
	v->a[296] = 1;
	v->a[297] = anon_sym_else;
	v->a[298] = actions(53);
	v->a[299] = 1;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
