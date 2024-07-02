/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_114.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_570(t_small_parse_table_array *v)
{
	v->a[11400] = 1;
	v->a[11401] = anon_sym_BANG;
	v->a[11402] = state(131);
	v->a[11403] = 1;
	v->a[11404] = aux_sym__statements_repeat1;
	v->a[11405] = state(183);
	v->a[11406] = 1;
	v->a[11407] = sym_command_name;
	v->a[11408] = state(290);
	v->a[11409] = 1;
	v->a[11410] = sym_variable_assignment;
	v->a[11411] = state(584);
	v->a[11412] = 1;
	v->a[11413] = sym_concatenation;
	v->a[11414] = state(674);
	v->a[11415] = 1;
	v->a[11416] = aux_sym_command_repeat1;
	v->a[11417] = state(723);
	v->a[11418] = 1;
	v->a[11419] = sym_file_redirect;
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = state(1087);
	v->a[11421] = 1;
	v->a[11422] = sym_pipeline;
	v->a[11423] = state(1099);
	v->a[11424] = 1;
	v->a[11425] = aux_sym_redirected_statement_repeat2;
	v->a[11426] = state(1914);
	v->a[11427] = 1;
	v->a[11428] = sym__statement_not_pipeline;
	v->a[11429] = state(1932);
	v->a[11430] = 1;
	v->a[11431] = sym__statements;
	v->a[11432] = actions(11);
	v->a[11433] = 2;
	v->a[11434] = anon_sym_while;
	v->a[11435] = anon_sym_until;
	v->a[11436] = actions(61);
	v->a[11437] = 2;
	v->a[11438] = sym_raw_string;
	v->a[11439] = sym_number;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = state(433);
	v->a[11441] = 5;
	v->a[11442] = sym_arithmetic_expansion;
	v->a[11443] = sym_string;
	v->a[11444] = sym_simple_expansion;
	v->a[11445] = sym_expansion;
	v->a[11446] = sym_command_substitution;
	v->a[11447] = actions(53);
	v->a[11448] = 7;
	v->a[11449] = anon_sym_LT;
	v->a[11450] = anon_sym_GT;
	v->a[11451] = anon_sym_GT_GT;
	v->a[11452] = anon_sym_LT_AMP;
	v->a[11453] = anon_sym_GT_AMP;
	v->a[11454] = anon_sym_GT_PIPE;
	v->a[11455] = anon_sym_LT_GT;
	v->a[11456] = state(935);
	v->a[11457] = 12;
	v->a[11458] = sym_redirected_statement;
	v->a[11459] = sym_for_statement;
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = sym_while_statement;
	v->a[11461] = sym_if_statement;
	v->a[11462] = sym_case_statement;
	v->a[11463] = sym_function_definition;
	v->a[11464] = sym_compound_statement;
	v->a[11465] = sym_subshell;
	v->a[11466] = sym_list;
	v->a[11467] = sym_negated_command;
	v->a[11468] = sym_command;
	v->a[11469] = sym__variable_assignments;
	v->a[11470] = 31;
	v->a[11471] = actions(3);
	v->a[11472] = 1;
	v->a[11473] = sym_comment;
	v->a[11474] = actions(9);
	v->a[11475] = 1;
	v->a[11476] = anon_sym_for;
	v->a[11477] = actions(13);
	v->a[11478] = 1;
	v->a[11479] = anon_sym_if;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = actions(15);
	v->a[11481] = 1;
	v->a[11482] = anon_sym_case;
	v->a[11483] = actions(17);
	v->a[11484] = 1;
	v->a[11485] = anon_sym_LPAREN;
	v->a[11486] = actions(19);
	v->a[11487] = 1;
	v->a[11488] = anon_sym_LBRACE;
	v->a[11489] = actions(55);
	v->a[11490] = 1;
	v->a[11491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11492] = actions(57);
	v->a[11493] = 1;
	v->a[11494] = anon_sym_DOLLAR;
	v->a[11495] = actions(59);
	v->a[11496] = 1;
	v->a[11497] = anon_sym_DQUOTE;
	v->a[11498] = actions(63);
	v->a[11499] = 1;
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
