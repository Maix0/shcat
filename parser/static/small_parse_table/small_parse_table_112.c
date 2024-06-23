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
	v->a[11200] = anon_sym_AMP_GT_GT;
	v->a[11201] = anon_sym_LT_AMP;
	v->a[11202] = anon_sym_GT_AMP;
	v->a[11203] = anon_sym_GT_PIPE;
	v->a[11204] = state(1211);
	v->a[11205] = 12;
	v->a[11206] = sym_redirected_statement;
	v->a[11207] = sym_for_statement;
	v->a[11208] = sym_while_statement;
	v->a[11209] = sym_if_statement;
	v->a[11210] = sym_case_statement;
	v->a[11211] = sym_function_definition;
	v->a[11212] = sym_compound_statement;
	v->a[11213] = sym_subshell;
	v->a[11214] = sym_list;
	v->a[11215] = sym_negated_command;
	v->a[11216] = sym_command;
	v->a[11217] = sym__variable_assignments;
	v->a[11218] = 32;
	v->a[11219] = actions(3);
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = 1;
	v->a[11221] = sym_comment;
	v->a[11222] = actions(9);
	v->a[11223] = 1;
	v->a[11224] = anon_sym_for;
	v->a[11225] = actions(13);
	v->a[11226] = 1;
	v->a[11227] = anon_sym_if;
	v->a[11228] = actions(15);
	v->a[11229] = 1;
	v->a[11230] = anon_sym_case;
	v->a[11231] = actions(17);
	v->a[11232] = 1;
	v->a[11233] = anon_sym_LPAREN;
	v->a[11234] = actions(19);
	v->a[11235] = 1;
	v->a[11236] = anon_sym_LBRACE;
	v->a[11237] = actions(59);
	v->a[11238] = 1;
	v->a[11239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = actions(61);
	v->a[11241] = 1;
	v->a[11242] = anon_sym_DOLLAR;
	v->a[11243] = actions(63);
	v->a[11244] = 1;
	v->a[11245] = anon_sym_DQUOTE;
	v->a[11246] = actions(67);
	v->a[11247] = 1;
	v->a[11248] = anon_sym_DOLLAR_LBRACE;
	v->a[11249] = actions(69);
	v->a[11250] = 1;
	v->a[11251] = anon_sym_DOLLAR_LPAREN;
	v->a[11252] = actions(71);
	v->a[11253] = 1;
	v->a[11254] = anon_sym_BQUOTE;
	v->a[11255] = actions(220);
	v->a[11256] = 1;
	v->a[11257] = sym_word;
	v->a[11258] = actions(222);
	v->a[11259] = 1;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = anon_sym_BANG;
	v->a[11261] = actions(230);
	v->a[11262] = 1;
	v->a[11263] = sym_file_descriptor;
	v->a[11264] = actions(232);
	v->a[11265] = 1;
	v->a[11266] = sym_variable_name;
	v->a[11267] = state(126);
	v->a[11268] = 1;
	v->a[11269] = aux_sym__statements_repeat1;
	v->a[11270] = state(184);
	v->a[11271] = 1;
	v->a[11272] = sym_command_name;
	v->a[11273] = state(268);
	v->a[11274] = 1;
	v->a[11275] = sym_variable_assignment;
	v->a[11276] = state(647);
	v->a[11277] = 1;
	v->a[11278] = sym_concatenation;
	v->a[11279] = state(796);
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = 1;
	v->a[11281] = sym_file_redirect;
	v->a[11282] = state(828);
	v->a[11283] = 1;
	v->a[11284] = aux_sym_command_repeat1;
	v->a[11285] = state(1314);
	v->a[11286] = 1;
	v->a[11287] = sym_pipeline;
	v->a[11288] = state(1331);
	v->a[11289] = 1;
	v->a[11290] = aux_sym_redirected_statement_repeat2;
	v->a[11291] = state(2252);
	v->a[11292] = 1;
	v->a[11293] = sym__statement_not_pipeline;
	v->a[11294] = state(2484);
	v->a[11295] = 1;
	v->a[11296] = sym__statements;
	v->a[11297] = actions(11);
	v->a[11298] = 2;
	v->a[11299] = anon_sym_while;
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
