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
	v->a[11200] = state(2041);
	v->a[11201] = 1;
	v->a[11202] = sym__statement_not_pipeline;
	v->a[11203] = state(2126);
	v->a[11204] = 1;
	v->a[11205] = sym__statements;
	v->a[11206] = actions(11);
	v->a[11207] = 2;
	v->a[11208] = anon_sym_while;
	v->a[11209] = anon_sym_until;
	v->a[11210] = actions(61);
	v->a[11211] = 2;
	v->a[11212] = anon_sym_LT_AMP_DASH;
	v->a[11213] = anon_sym_GT_AMP_DASH;
	v->a[11214] = state(397);
	v->a[11215] = 6;
	v->a[11216] = sym_arithmetic_expansion;
	v->a[11217] = sym_string;
	v->a[11218] = sym_number;
	v->a[11219] = sym_simple_expansion;
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = sym_expansion;
	v->a[11221] = sym_command_substitution;
	v->a[11222] = actions(59);
	v->a[11223] = 8;
	v->a[11224] = anon_sym_LT;
	v->a[11225] = anon_sym_GT;
	v->a[11226] = anon_sym_GT_GT;
	v->a[11227] = anon_sym_AMP_GT;
	v->a[11228] = anon_sym_AMP_GT_GT;
	v->a[11229] = anon_sym_LT_AMP;
	v->a[11230] = anon_sym_GT_AMP;
	v->a[11231] = anon_sym_GT_PIPE;
	v->a[11232] = state(1071);
	v->a[11233] = 12;
	v->a[11234] = sym_redirected_statement;
	v->a[11235] = sym_for_statement;
	v->a[11236] = sym_while_statement;
	v->a[11237] = sym_if_statement;
	v->a[11238] = sym_case_statement;
	v->a[11239] = sym_function_definition;
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = sym_compound_statement;
	v->a[11241] = sym_subshell;
	v->a[11242] = sym_list;
	v->a[11243] = sym_negated_command;
	v->a[11244] = sym_command;
	v->a[11245] = sym_variable_assignments;
	v->a[11246] = 34;
	v->a[11247] = actions(3);
	v->a[11248] = 1;
	v->a[11249] = sym_comment;
	v->a[11250] = actions(9);
	v->a[11251] = 1;
	v->a[11252] = anon_sym_for;
	v->a[11253] = actions(13);
	v->a[11254] = 1;
	v->a[11255] = anon_sym_if;
	v->a[11256] = actions(15);
	v->a[11257] = 1;
	v->a[11258] = anon_sym_case;
	v->a[11259] = actions(17);
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = 1;
	v->a[11261] = anon_sym_LPAREN;
	v->a[11262] = actions(19);
	v->a[11263] = 1;
	v->a[11264] = anon_sym_LBRACE;
	v->a[11265] = actions(63);
	v->a[11266] = 1;
	v->a[11267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11268] = actions(65);
	v->a[11269] = 1;
	v->a[11270] = anon_sym_DOLLAR;
	v->a[11271] = actions(67);
	v->a[11272] = 1;
	v->a[11273] = anon_sym_DQUOTE;
	v->a[11274] = actions(71);
	v->a[11275] = 1;
	v->a[11276] = aux_sym_number_token1;
	v->a[11277] = actions(73);
	v->a[11278] = 1;
	v->a[11279] = aux_sym_number_token2;
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = actions(75);
	v->a[11281] = 1;
	v->a[11282] = anon_sym_DOLLAR_LBRACE;
	v->a[11283] = actions(77);
	v->a[11284] = 1;
	v->a[11285] = anon_sym_DOLLAR_LPAREN;
	v->a[11286] = actions(79);
	v->a[11287] = 1;
	v->a[11288] = anon_sym_BQUOTE;
	v->a[11289] = actions(248);
	v->a[11290] = 1;
	v->a[11291] = sym_word;
	v->a[11292] = actions(250);
	v->a[11293] = 1;
	v->a[11294] = anon_sym_BANG;
	v->a[11295] = actions(256);
	v->a[11296] = 1;
	v->a[11297] = sym_raw_string;
	v->a[11298] = actions(258);
	v->a[11299] = 1;
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
