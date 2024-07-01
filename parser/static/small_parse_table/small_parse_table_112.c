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
	v->a[11200] = anon_sym_BANG;
	v->a[11201] = actions(230);
	v->a[11202] = 1;
	v->a[11203] = sym_file_descriptor;
	v->a[11204] = actions(232);
	v->a[11205] = 1;
	v->a[11206] = sym_variable_name;
	v->a[11207] = state(133);
	v->a[11208] = 1;
	v->a[11209] = aux_sym__statements_repeat1;
	v->a[11210] = state(180);
	v->a[11211] = 1;
	v->a[11212] = sym_command_name;
	v->a[11213] = state(231);
	v->a[11214] = 1;
	v->a[11215] = sym_variable_assignment;
	v->a[11216] = state(650);
	v->a[11217] = 1;
	v->a[11218] = sym_concatenation;
	v->a[11219] = state(710);
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = 1;
	v->a[11221] = aux_sym_command_repeat1;
	v->a[11222] = state(722);
	v->a[11223] = 1;
	v->a[11224] = sym_file_redirect;
	v->a[11225] = state(1095);
	v->a[11226] = 1;
	v->a[11227] = sym_pipeline;
	v->a[11228] = state(1282);
	v->a[11229] = 1;
	v->a[11230] = aux_sym_redirected_statement_repeat2;
	v->a[11231] = state(2127);
	v->a[11232] = 1;
	v->a[11233] = sym__statement_not_pipeline;
	v->a[11234] = state(2256);
	v->a[11235] = 1;
	v->a[11236] = sym__statements;
	v->a[11237] = actions(11);
	v->a[11238] = 2;
	v->a[11239] = anon_sym_while;
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = anon_sym_until;
	v->a[11241] = actions(226);
	v->a[11242] = 2;
	v->a[11243] = anon_sym_LT_AMP_DASH;
	v->a[11244] = anon_sym_GT_AMP_DASH;
	v->a[11245] = actions(228);
	v->a[11246] = 2;
	v->a[11247] = sym_raw_string;
	v->a[11248] = sym_number;
	v->a[11249] = state(382);
	v->a[11250] = 5;
	v->a[11251] = sym_arithmetic_expansion;
	v->a[11252] = sym_string;
	v->a[11253] = sym_simple_expansion;
	v->a[11254] = sym_expansion;
	v->a[11255] = sym_command_substitution;
	v->a[11256] = actions(224);
	v->a[11257] = 6;
	v->a[11258] = anon_sym_LT;
	v->a[11259] = anon_sym_GT;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = anon_sym_GT_GT;
	v->a[11261] = anon_sym_LT_AMP;
	v->a[11262] = anon_sym_GT_AMP;
	v->a[11263] = anon_sym_GT_PIPE;
	v->a[11264] = state(1087);
	v->a[11265] = 12;
	v->a[11266] = sym_redirected_statement;
	v->a[11267] = sym_for_statement;
	v->a[11268] = sym_while_statement;
	v->a[11269] = sym_if_statement;
	v->a[11270] = sym_case_statement;
	v->a[11271] = sym_function_definition;
	v->a[11272] = sym_compound_statement;
	v->a[11273] = sym_subshell;
	v->a[11274] = sym_list;
	v->a[11275] = sym_negated_command;
	v->a[11276] = sym_command;
	v->a[11277] = sym__variable_assignments;
	v->a[11278] = 32;
	v->a[11279] = actions(3);
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = 1;
	v->a[11281] = sym_comment;
	v->a[11282] = actions(9);
	v->a[11283] = 1;
	v->a[11284] = anon_sym_for;
	v->a[11285] = actions(13);
	v->a[11286] = 1;
	v->a[11287] = anon_sym_if;
	v->a[11288] = actions(15);
	v->a[11289] = 1;
	v->a[11290] = anon_sym_case;
	v->a[11291] = actions(17);
	v->a[11292] = 1;
	v->a[11293] = anon_sym_LPAREN;
	v->a[11294] = actions(19);
	v->a[11295] = 1;
	v->a[11296] = anon_sym_LBRACE;
	v->a[11297] = actions(59);
	v->a[11298] = 1;
	v->a[11299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
