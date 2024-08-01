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
	v->a[201] = aux_sym_redirected_statement_repeat2;
	v->a[202] = state(1561);
	v->a[203] = 1;
	v->a[204] = sym__statement_not_pipeline;
	v->a[205] = state(1636);
	v->a[206] = 1;
	v->a[207] = sym_else_clause;
	v->a[208] = actions(11);
	v->a[209] = 2;
	v->a[210] = anon_sym_while;
	v->a[211] = anon_sym_until;
	v->a[212] = actions(59);
	v->a[213] = 2;
	v->a[214] = sym_raw_string;
	v->a[215] = sym_number;
	v->a[216] = state(1464);
	v->a[217] = 2;
	v->a[218] = sym_elif_clause;
	v->a[219] = aux_sym_if_statement_repeat1;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = actions(51);
	v->a[221] = 3;
	v->a[222] = anon_sym_LT;
	v->a[223] = anon_sym_GT;
	v->a[224] = anon_sym_GT_GT;
	v->a[225] = state(401);
	v->a[226] = 5;
	v->a[227] = sym_arithmetic_expansion;
	v->a[228] = sym_string;
	v->a[229] = sym_simple_expansion;
	v->a[230] = sym_expansion;
	v->a[231] = sym_command_substitution;
	v->a[232] = state(905);
	v->a[233] = 12;
	v->a[234] = sym_redirected_statement;
	v->a[235] = sym_for_statement;
	v->a[236] = sym_while_statement;
	v->a[237] = sym_if_statement;
	v->a[238] = sym_case_statement;
	v->a[239] = sym_function_definition;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = sym_compound_statement;
	v->a[241] = sym_subshell;
	v->a[242] = sym_list;
	v->a[243] = sym_negated_command;
	v->a[244] = sym_command;
	v->a[245] = sym__variable_assignments;
	v->a[246] = 34;
	v->a[247] = actions(3);
	v->a[248] = 1;
	v->a[249] = sym_comment;
	v->a[250] = actions(9);
	v->a[251] = 1;
	v->a[252] = anon_sym_for;
	v->a[253] = actions(13);
	v->a[254] = 1;
	v->a[255] = anon_sym_if;
	v->a[256] = actions(15);
	v->a[257] = 1;
	v->a[258] = anon_sym_case;
	v->a[259] = actions(17);
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = 1;
	v->a[261] = anon_sym_LPAREN;
	v->a[262] = actions(19);
	v->a[263] = 1;
	v->a[264] = anon_sym_LBRACE;
	v->a[265] = actions(41);
	v->a[266] = 1;
	v->a[267] = sym_word;
	v->a[268] = actions(45);
	v->a[269] = 1;
	v->a[270] = anon_sym_elif;
	v->a[271] = actions(47);
	v->a[272] = 1;
	v->a[273] = anon_sym_else;
	v->a[274] = actions(49);
	v->a[275] = 1;
	v->a[276] = anon_sym_BANG;
	v->a[277] = actions(53);
	v->a[278] = 1;
	v->a[279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = actions(55);
	v->a[281] = 1;
	v->a[282] = anon_sym_DOLLAR;
	v->a[283] = actions(57);
	v->a[284] = 1;
	v->a[285] = anon_sym_DQUOTE;
	v->a[286] = actions(61);
	v->a[287] = 1;
	v->a[288] = anon_sym_DOLLAR_LBRACE;
	v->a[289] = actions(63);
	v->a[290] = 1;
	v->a[291] = anon_sym_DOLLAR_LPAREN;
	v->a[292] = actions(65);
	v->a[293] = 1;
	v->a[294] = anon_sym_BQUOTE;
	v->a[295] = actions(67);
	v->a[296] = 1;
	v->a[297] = sym_variable_name;
	v->a[298] = actions(71);
	v->a[299] = 1;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
