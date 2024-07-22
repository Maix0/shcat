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
	v->a[11200] = anon_sym_while;
	v->a[11201] = anon_sym_until;
	v->a[11202] = actions(217);
	v->a[11203] = 2;
	v->a[11204] = sym_raw_string;
	v->a[11205] = sym_number;
	v->a[11206] = state(374);
	v->a[11207] = 5;
	v->a[11208] = sym_arithmetic_expansion;
	v->a[11209] = sym_string;
	v->a[11210] = sym_simple_expansion;
	v->a[11211] = sym_expansion;
	v->a[11212] = sym_command_substitution;
	v->a[11213] = actions(215);
	v->a[11214] = 7;
	v->a[11215] = anon_sym_LT;
	v->a[11216] = anon_sym_GT;
	v->a[11217] = anon_sym_GT_GT;
	v->a[11218] = anon_sym_LT_AMP;
	v->a[11219] = anon_sym_GT_AMP;
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = anon_sym_GT_PIPE;
	v->a[11221] = anon_sym_LT_GT;
	v->a[11222] = state(989);
	v->a[11223] = 12;
	v->a[11224] = sym_redirected_statement;
	v->a[11225] = sym_for_statement;
	v->a[11226] = sym_while_statement;
	v->a[11227] = sym_if_statement;
	v->a[11228] = sym_case_statement;
	v->a[11229] = sym_function_definition;
	v->a[11230] = sym_compound_statement;
	v->a[11231] = sym_subshell;
	v->a[11232] = sym_list;
	v->a[11233] = sym_negated_command;
	v->a[11234] = sym_command;
	v->a[11235] = sym__variable_assignments;
	v->a[11236] = 31;
	v->a[11237] = actions(3);
	v->a[11238] = 1;
	v->a[11239] = sym_comment;
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = actions(9);
	v->a[11241] = 1;
	v->a[11242] = anon_sym_for;
	v->a[11243] = actions(13);
	v->a[11244] = 1;
	v->a[11245] = anon_sym_if;
	v->a[11246] = actions(15);
	v->a[11247] = 1;
	v->a[11248] = anon_sym_case;
	v->a[11249] = actions(17);
	v->a[11250] = 1;
	v->a[11251] = anon_sym_LPAREN;
	v->a[11252] = actions(19);
	v->a[11253] = 1;
	v->a[11254] = anon_sym_LBRACE;
	v->a[11255] = actions(55);
	v->a[11256] = 1;
	v->a[11257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11258] = actions(57);
	v->a[11259] = 1;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = anon_sym_DOLLAR;
	v->a[11261] = actions(59);
	v->a[11262] = 1;
	v->a[11263] = anon_sym_DQUOTE;
	v->a[11264] = actions(63);
	v->a[11265] = 1;
	v->a[11266] = anon_sym_DOLLAR_LBRACE;
	v->a[11267] = actions(65);
	v->a[11268] = 1;
	v->a[11269] = anon_sym_DOLLAR_LPAREN;
	v->a[11270] = actions(67);
	v->a[11271] = 1;
	v->a[11272] = anon_sym_BQUOTE;
	v->a[11273] = actions(69);
	v->a[11274] = 1;
	v->a[11275] = sym_file_descriptor;
	v->a[11276] = actions(71);
	v->a[11277] = 1;
	v->a[11278] = sym_variable_name;
	v->a[11279] = actions(223);
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = 1;
	v->a[11281] = sym_word;
	v->a[11282] = actions(225);
	v->a[11283] = 1;
	v->a[11284] = anon_sym_BANG;
	v->a[11285] = state(129);
	v->a[11286] = 1;
	v->a[11287] = aux_sym__statements_repeat1;
	v->a[11288] = state(178);
	v->a[11289] = 1;
	v->a[11290] = sym_command_name;
	v->a[11291] = state(339);
	v->a[11292] = 1;
	v->a[11293] = sym_variable_assignment;
	v->a[11294] = state(585);
	v->a[11295] = 1;
	v->a[11296] = aux_sym_command_repeat1;
	v->a[11297] = state(661);
	v->a[11298] = 1;
	v->a[11299] = sym_concatenation;
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
