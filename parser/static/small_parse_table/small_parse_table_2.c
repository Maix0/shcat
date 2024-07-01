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
	v->a[200] = state(650);
	v->a[201] = 1;
	v->a[202] = sym_concatenation;
	v->a[203] = state(712);
	v->a[204] = 1;
	v->a[205] = sym_file_redirect;
	v->a[206] = state(713);
	v->a[207] = 1;
	v->a[208] = aux_sym_command_repeat1;
	v->a[209] = state(1196);
	v->a[210] = 1;
	v->a[211] = sym_pipeline;
	v->a[212] = state(1333);
	v->a[213] = 1;
	v->a[214] = aux_sym_redirected_statement_repeat2;
	v->a[215] = state(2103);
	v->a[216] = 1;
	v->a[217] = sym__statement_not_pipeline;
	v->a[218] = state(2148);
	v->a[219] = 1;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = sym_else_clause;
	v->a[221] = actions(11);
	v->a[222] = 2;
	v->a[223] = anon_sym_while;
	v->a[224] = anon_sym_until;
	v->a[225] = actions(57);
	v->a[226] = 2;
	v->a[227] = anon_sym_LT_AMP_DASH;
	v->a[228] = anon_sym_GT_AMP_DASH;
	v->a[229] = actions(65);
	v->a[230] = 2;
	v->a[231] = sym_raw_string;
	v->a[232] = sym_number;
	v->a[233] = state(2015);
	v->a[234] = 2;
	v->a[235] = sym_elif_clause;
	v->a[236] = aux_sym_if_statement_repeat1;
	v->a[237] = state(443);
	v->a[238] = 5;
	v->a[239] = sym_arithmetic_expansion;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = sym_string;
	v->a[241] = sym_simple_expansion;
	v->a[242] = sym_expansion;
	v->a[243] = sym_command_substitution;
	v->a[244] = actions(55);
	v->a[245] = 6;
	v->a[246] = anon_sym_LT;
	v->a[247] = anon_sym_GT;
	v->a[248] = anon_sym_GT_GT;
	v->a[249] = anon_sym_LT_AMP;
	v->a[250] = anon_sym_GT_AMP;
	v->a[251] = anon_sym_GT_PIPE;
	v->a[252] = state(1187);
	v->a[253] = 12;
	v->a[254] = sym_redirected_statement;
	v->a[255] = sym_for_statement;
	v->a[256] = sym_while_statement;
	v->a[257] = sym_if_statement;
	v->a[258] = sym_case_statement;
	v->a[259] = sym_function_definition;
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = sym_compound_statement;
	v->a[261] = sym_subshell;
	v->a[262] = sym_list;
	v->a[263] = sym_negated_command;
	v->a[264] = sym_command;
	v->a[265] = sym__variable_assignments;
	v->a[266] = 36;
	v->a[267] = actions(3);
	v->a[268] = 1;
	v->a[269] = sym_comment;
	v->a[270] = actions(9);
	v->a[271] = 1;
	v->a[272] = anon_sym_for;
	v->a[273] = actions(13);
	v->a[274] = 1;
	v->a[275] = anon_sym_if;
	v->a[276] = actions(15);
	v->a[277] = 1;
	v->a[278] = anon_sym_case;
	v->a[279] = actions(17);
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = 1;
	v->a[281] = anon_sym_LPAREN;
	v->a[282] = actions(19);
	v->a[283] = 1;
	v->a[284] = anon_sym_LBRACE;
	v->a[285] = actions(45);
	v->a[286] = 1;
	v->a[287] = sym_word;
	v->a[288] = actions(49);
	v->a[289] = 1;
	v->a[290] = anon_sym_elif;
	v->a[291] = actions(51);
	v->a[292] = 1;
	v->a[293] = anon_sym_else;
	v->a[294] = actions(53);
	v->a[295] = 1;
	v->a[296] = anon_sym_BANG;
	v->a[297] = actions(59);
	v->a[298] = 1;
	v->a[299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
