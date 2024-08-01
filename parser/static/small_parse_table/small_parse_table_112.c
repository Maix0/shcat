/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_112.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_560(t_small_parse_table_array *v)
{
	v->a[11200] = sym__statement_not_pipeline;
	v->a[11201] = state(1685);
	v->a[11202] = 1;
	v->a[11203] = sym__statements;
	v->a[11204] = actions(11);
	v->a[11205] = 2;
	v->a[11206] = anon_sym_while;
	v->a[11207] = anon_sym_until;
	v->a[11208] = actions(214);
	v->a[11209] = 2;
	v->a[11210] = sym_raw_string;
	v->a[11211] = sym_number;
	v->a[11212] = actions(212);
	v->a[11213] = 3;
	v->a[11214] = anon_sym_LT;
	v->a[11215] = anon_sym_GT;
	v->a[11216] = anon_sym_GT_GT;
	v->a[11217] = state(277);
	v->a[11218] = 5;
	v->a[11219] = sym_arithmetic_expansion;
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = sym_string;
	v->a[11221] = sym_simple_expansion;
	v->a[11222] = sym_expansion;
	v->a[11223] = sym_command_substitution;
	v->a[11224] = state(877);
	v->a[11225] = 12;
	v->a[11226] = sym_redirected_statement;
	v->a[11227] = sym_for_statement;
	v->a[11228] = sym_while_statement;
	v->a[11229] = sym_if_statement;
	v->a[11230] = sym_case_statement;
	v->a[11231] = sym_function_definition;
	v->a[11232] = sym_compound_statement;
	v->a[11233] = sym_subshell;
	v->a[11234] = sym_list;
	v->a[11235] = sym_negated_command;
	v->a[11236] = sym_command;
	v->a[11237] = sym__variable_assignments;
	v->a[11238] = 30;
	v->a[11239] = actions(3);
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = 1;
	v->a[11241] = sym_comment;
	v->a[11242] = actions(9);
	v->a[11243] = 1;
	v->a[11244] = anon_sym_for;
	v->a[11245] = actions(13);
	v->a[11246] = 1;
	v->a[11247] = anon_sym_if;
	v->a[11248] = actions(15);
	v->a[11249] = 1;
	v->a[11250] = anon_sym_case;
	v->a[11251] = actions(17);
	v->a[11252] = 1;
	v->a[11253] = anon_sym_LPAREN;
	v->a[11254] = actions(19);
	v->a[11255] = 1;
	v->a[11256] = anon_sym_LBRACE;
	v->a[11257] = actions(41);
	v->a[11258] = 1;
	v->a[11259] = sym_word;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = actions(49);
	v->a[11261] = 1;
	v->a[11262] = anon_sym_BANG;
	v->a[11263] = actions(53);
	v->a[11264] = 1;
	v->a[11265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11266] = actions(55);
	v->a[11267] = 1;
	v->a[11268] = anon_sym_DOLLAR;
	v->a[11269] = actions(57);
	v->a[11270] = 1;
	v->a[11271] = anon_sym_DQUOTE;
	v->a[11272] = actions(61);
	v->a[11273] = 1;
	v->a[11274] = anon_sym_DOLLAR_LBRACE;
	v->a[11275] = actions(63);
	v->a[11276] = 1;
	v->a[11277] = anon_sym_DOLLAR_LPAREN;
	v->a[11278] = actions(65);
	v->a[11279] = 1;
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = anon_sym_BQUOTE;
	v->a[11281] = actions(67);
	v->a[11282] = 1;
	v->a[11283] = sym_variable_name;
	v->a[11284] = actions(244);
	v->a[11285] = 1;
	v->a[11286] = anon_sym_done;
	v->a[11287] = state(50);
	v->a[11288] = 1;
	v->a[11289] = aux_sym__terminated_statement;
	v->a[11290] = state(185);
	v->a[11291] = 1;
	v->a[11292] = sym_command_name;
	v->a[11293] = state(237);
	v->a[11294] = 1;
	v->a[11295] = sym_variable_assignment;
	v->a[11296] = state(411);
	v->a[11297] = 1;
	v->a[11298] = aux_sym_command_repeat1;
	v->a[11299] = state(551);
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
