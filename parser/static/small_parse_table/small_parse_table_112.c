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
	v->a[11200] = anon_sym_LBRACE;
	v->a[11201] = actions(41);
	v->a[11202] = 1;
	v->a[11203] = sym_word;
	v->a[11204] = actions(49);
	v->a[11205] = 1;
	v->a[11206] = anon_sym_BANG;
	v->a[11207] = actions(53);
	v->a[11208] = 1;
	v->a[11209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11210] = actions(55);
	v->a[11211] = 1;
	v->a[11212] = anon_sym_DOLLAR;
	v->a[11213] = actions(57);
	v->a[11214] = 1;
	v->a[11215] = anon_sym_DQUOTE;
	v->a[11216] = actions(61);
	v->a[11217] = 1;
	v->a[11218] = anon_sym_DOLLAR_LBRACE;
	v->a[11219] = actions(63);
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = 1;
	v->a[11221] = anon_sym_DOLLAR_LPAREN;
	v->a[11222] = actions(65);
	v->a[11223] = 1;
	v->a[11224] = anon_sym_BQUOTE;
	v->a[11225] = actions(67);
	v->a[11226] = 1;
	v->a[11227] = sym_variable_name;
	v->a[11228] = actions(242);
	v->a[11229] = 1;
	v->a[11230] = anon_sym_done;
	v->a[11231] = state(91);
	v->a[11232] = 1;
	v->a[11233] = aux_sym__terminated_statement;
	v->a[11234] = state(271);
	v->a[11235] = 1;
	v->a[11236] = sym_command_name;
	v->a[11237] = state(298);
	v->a[11238] = 1;
	v->a[11239] = sym_variable_assignment;
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = state(482);
	v->a[11241] = 1;
	v->a[11242] = aux_sym_command_repeat1;
	v->a[11243] = state(600);
	v->a[11244] = 1;
	v->a[11245] = sym_file_redirect;
	v->a[11246] = state(602);
	v->a[11247] = 1;
	v->a[11248] = sym_concatenation;
	v->a[11249] = state(1012);
	v->a[11250] = 1;
	v->a[11251] = sym_pipeline;
	v->a[11252] = state(1068);
	v->a[11253] = 1;
	v->a[11254] = aux_sym_redirected_statement_repeat2;
	v->a[11255] = state(1609);
	v->a[11256] = 1;
	v->a[11257] = sym__statement_not_pipeline;
	v->a[11258] = actions(11);
	v->a[11259] = 2;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = anon_sym_while;
	v->a[11261] = anon_sym_until;
	v->a[11262] = actions(59);
	v->a[11263] = 2;
	v->a[11264] = sym_raw_string;
	v->a[11265] = sym_number;
	v->a[11266] = state(425);
	v->a[11267] = 5;
	v->a[11268] = sym_arithmetic_expansion;
	v->a[11269] = sym_string;
	v->a[11270] = sym_simple_expansion;
	v->a[11271] = sym_expansion;
	v->a[11272] = sym_command_substitution;
	v->a[11273] = actions(51);
	v->a[11274] = 7;
	v->a[11275] = anon_sym_LT;
	v->a[11276] = anon_sym_GT;
	v->a[11277] = anon_sym_GT_GT;
	v->a[11278] = anon_sym_LT_AMP;
	v->a[11279] = anon_sym_GT_AMP;
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = anon_sym_GT_PIPE;
	v->a[11281] = anon_sym_LT_GT;
	v->a[11282] = state(933);
	v->a[11283] = 12;
	v->a[11284] = sym_redirected_statement;
	v->a[11285] = sym_for_statement;
	v->a[11286] = sym_while_statement;
	v->a[11287] = sym_if_statement;
	v->a[11288] = sym_case_statement;
	v->a[11289] = sym_function_definition;
	v->a[11290] = sym_compound_statement;
	v->a[11291] = sym_subshell;
	v->a[11292] = sym_list;
	v->a[11293] = sym_negated_command;
	v->a[11294] = sym_command;
	v->a[11295] = sym__variable_assignments;
	v->a[11296] = 30;
	v->a[11297] = actions(3);
	v->a[11298] = 1;
	v->a[11299] = sym_comment;
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
