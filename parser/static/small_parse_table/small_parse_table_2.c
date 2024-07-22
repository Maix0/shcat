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
	v->a[200] = state(661);
	v->a[201] = 1;
	v->a[202] = sym_concatenation;
	v->a[203] = state(665);
	v->a[204] = 1;
	v->a[205] = sym_file_redirect;
	v->a[206] = state(1192);
	v->a[207] = 1;
	v->a[208] = sym_pipeline;
	v->a[209] = state(1198);
	v->a[210] = 1;
	v->a[211] = aux_sym_redirected_statement_repeat2;
	v->a[212] = state(1901);
	v->a[213] = 1;
	v->a[214] = sym__statement_not_pipeline;
	v->a[215] = state(2118);
	v->a[216] = 1;
	v->a[217] = sym_else_clause;
	v->a[218] = actions(11);
	v->a[219] = 2;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = anon_sym_while;
	v->a[221] = anon_sym_until;
	v->a[222] = actions(61);
	v->a[223] = 2;
	v->a[224] = sym_raw_string;
	v->a[225] = sym_number;
	v->a[226] = state(1787);
	v->a[227] = 2;
	v->a[228] = sym_elif_clause;
	v->a[229] = aux_sym_if_statement_repeat1;
	v->a[230] = state(455);
	v->a[231] = 5;
	v->a[232] = sym_arithmetic_expansion;
	v->a[233] = sym_string;
	v->a[234] = sym_simple_expansion;
	v->a[235] = sym_expansion;
	v->a[236] = sym_command_substitution;
	v->a[237] = actions(53);
	v->a[238] = 7;
	v->a[239] = anon_sym_LT;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = anon_sym_GT;
	v->a[241] = anon_sym_GT_GT;
	v->a[242] = anon_sym_LT_AMP;
	v->a[243] = anon_sym_GT_AMP;
	v->a[244] = anon_sym_GT_PIPE;
	v->a[245] = anon_sym_LT_GT;
	v->a[246] = state(1075);
	v->a[247] = 12;
	v->a[248] = sym_redirected_statement;
	v->a[249] = sym_for_statement;
	v->a[250] = sym_while_statement;
	v->a[251] = sym_if_statement;
	v->a[252] = sym_case_statement;
	v->a[253] = sym_function_definition;
	v->a[254] = sym_compound_statement;
	v->a[255] = sym_subshell;
	v->a[256] = sym_list;
	v->a[257] = sym_negated_command;
	v->a[258] = sym_command;
	v->a[259] = sym__variable_assignments;
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = 35;
	v->a[261] = actions(3);
	v->a[262] = 1;
	v->a[263] = sym_comment;
	v->a[264] = actions(9);
	v->a[265] = 1;
	v->a[266] = anon_sym_for;
	v->a[267] = actions(13);
	v->a[268] = 1;
	v->a[269] = anon_sym_if;
	v->a[270] = actions(15);
	v->a[271] = 1;
	v->a[272] = anon_sym_case;
	v->a[273] = actions(17);
	v->a[274] = 1;
	v->a[275] = anon_sym_LPAREN;
	v->a[276] = actions(19);
	v->a[277] = 1;
	v->a[278] = anon_sym_LBRACE;
	v->a[279] = actions(43);
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = 1;
	v->a[281] = sym_word;
	v->a[282] = actions(47);
	v->a[283] = 1;
	v->a[284] = anon_sym_elif;
	v->a[285] = actions(49);
	v->a[286] = 1;
	v->a[287] = anon_sym_else;
	v->a[288] = actions(51);
	v->a[289] = 1;
	v->a[290] = anon_sym_BANG;
	v->a[291] = actions(55);
	v->a[292] = 1;
	v->a[293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[294] = actions(57);
	v->a[295] = 1;
	v->a[296] = anon_sym_DOLLAR;
	v->a[297] = actions(59);
	v->a[298] = 1;
	v->a[299] = anon_sym_DQUOTE;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
