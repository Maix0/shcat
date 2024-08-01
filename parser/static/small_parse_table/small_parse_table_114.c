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
	v->a[11400] = state(185);
	v->a[11401] = 1;
	v->a[11402] = sym_command_name;
	v->a[11403] = state(238);
	v->a[11404] = 1;
	v->a[11405] = sym_variable_assignment;
	v->a[11406] = state(411);
	v->a[11407] = 1;
	v->a[11408] = aux_sym_command_repeat1;
	v->a[11409] = state(551);
	v->a[11410] = 1;
	v->a[11411] = sym_file_redirect;
	v->a[11412] = state(555);
	v->a[11413] = 1;
	v->a[11414] = sym_concatenation;
	v->a[11415] = state(1001);
	v->a[11416] = 1;
	v->a[11417] = sym_pipeline;
	v->a[11418] = state(1126);
	v->a[11419] = 1;
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = aux_sym_redirected_statement_repeat2;
	v->a[11421] = state(1561);
	v->a[11422] = 1;
	v->a[11423] = sym__statement_not_pipeline;
	v->a[11424] = actions(129);
	v->a[11425] = 2;
	v->a[11426] = anon_sym_while;
	v->a[11427] = anon_sym_until;
	v->a[11428] = actions(161);
	v->a[11429] = 2;
	v->a[11430] = sym_raw_string;
	v->a[11431] = sym_number;
	v->a[11432] = actions(149);
	v->a[11433] = 3;
	v->a[11434] = anon_sym_LT;
	v->a[11435] = anon_sym_GT;
	v->a[11436] = anon_sym_GT_GT;
	v->a[11437] = state(401);
	v->a[11438] = 5;
	v->a[11439] = sym_arithmetic_expansion;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = sym_string;
	v->a[11441] = sym_simple_expansion;
	v->a[11442] = sym_expansion;
	v->a[11443] = sym_command_substitution;
	v->a[11444] = state(958);
	v->a[11445] = 12;
	v->a[11446] = sym_redirected_statement;
	v->a[11447] = sym_for_statement;
	v->a[11448] = sym_while_statement;
	v->a[11449] = sym_if_statement;
	v->a[11450] = sym_case_statement;
	v->a[11451] = sym_function_definition;
	v->a[11452] = sym_compound_statement;
	v->a[11453] = sym_subshell;
	v->a[11454] = sym_list;
	v->a[11455] = sym_negated_command;
	v->a[11456] = sym_command;
	v->a[11457] = sym__variable_assignments;
	v->a[11458] = 40;
	v->a[11459] = actions(3);
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = 1;
	v->a[11461] = sym_comment;
	v->a[11462] = actions(79);
	v->a[11463] = 1;
	v->a[11464] = sym_word;
	v->a[11465] = actions(81);
	v->a[11466] = 1;
	v->a[11467] = anon_sym_for;
	v->a[11468] = actions(85);
	v->a[11469] = 1;
	v->a[11470] = anon_sym_if;
	v->a[11471] = actions(87);
	v->a[11472] = 1;
	v->a[11473] = anon_sym_case;
	v->a[11474] = actions(89);
	v->a[11475] = 1;
	v->a[11476] = anon_sym_LPAREN;
	v->a[11477] = actions(93);
	v->a[11478] = 1;
	v->a[11479] = anon_sym_LBRACE;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = actions(95);
	v->a[11481] = 1;
	v->a[11482] = anon_sym_BANG;
	v->a[11483] = actions(99);
	v->a[11484] = 1;
	v->a[11485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11486] = actions(101);
	v->a[11487] = 1;
	v->a[11488] = anon_sym_DOLLAR;
	v->a[11489] = actions(103);
	v->a[11490] = 1;
	v->a[11491] = anon_sym_DQUOTE;
	v->a[11492] = actions(107);
	v->a[11493] = 1;
	v->a[11494] = anon_sym_DOLLAR_LBRACE;
	v->a[11495] = actions(109);
	v->a[11496] = 1;
	v->a[11497] = anon_sym_DOLLAR_LPAREN;
	v->a[11498] = actions(111);
	v->a[11499] = 1;
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
