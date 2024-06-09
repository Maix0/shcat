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
	v->a[11401] = anon_sym_DQUOTE;
	v->a[11402] = actions(71);
	v->a[11403] = 1;
	v->a[11404] = aux_sym_number_token1;
	v->a[11405] = actions(73);
	v->a[11406] = 1;
	v->a[11407] = aux_sym_number_token2;
	v->a[11408] = actions(75);
	v->a[11409] = 1;
	v->a[11410] = anon_sym_DOLLAR_LBRACE;
	v->a[11411] = actions(77);
	v->a[11412] = 1;
	v->a[11413] = anon_sym_DOLLAR_LPAREN;
	v->a[11414] = actions(79);
	v->a[11415] = 1;
	v->a[11416] = anon_sym_BQUOTE;
	v->a[11417] = actions(248);
	v->a[11418] = 1;
	v->a[11419] = sym_word;
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = actions(250);
	v->a[11421] = 1;
	v->a[11422] = anon_sym_BANG;
	v->a[11423] = actions(256);
	v->a[11424] = 1;
	v->a[11425] = sym_raw_string;
	v->a[11426] = actions(258);
	v->a[11427] = 1;
	v->a[11428] = sym_file_descriptor;
	v->a[11429] = actions(260);
	v->a[11430] = 1;
	v->a[11431] = sym_variable_name;
	v->a[11432] = state(141);
	v->a[11433] = 1;
	v->a[11434] = aux_sym__statements_repeat1;
	v->a[11435] = state(175);
	v->a[11436] = 1;
	v->a[11437] = sym_command_name;
	v->a[11438] = state(278);
	v->a[11439] = 1;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = sym_variable_assignment;
	v->a[11441] = state(567);
	v->a[11442] = 1;
	v->a[11443] = aux_sym_command_repeat1;
	v->a[11444] = state(582);
	v->a[11445] = 1;
	v->a[11446] = sym_concatenation;
	v->a[11447] = state(728);
	v->a[11448] = 1;
	v->a[11449] = sym_file_redirect;
	v->a[11450] = state(1100);
	v->a[11451] = 1;
	v->a[11452] = sym_pipeline;
	v->a[11453] = state(1196);
	v->a[11454] = 1;
	v->a[11455] = aux_sym_redirected_statement_repeat2;
	v->a[11456] = state(2037);
	v->a[11457] = 1;
	v->a[11458] = sym__statement_not_pipeline;
	v->a[11459] = state(2131);
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = 1;
	v->a[11461] = sym__statements;
	v->a[11462] = actions(11);
	v->a[11463] = 2;
	v->a[11464] = anon_sym_while;
	v->a[11465] = anon_sym_until;
	v->a[11466] = actions(254);
	v->a[11467] = 2;
	v->a[11468] = anon_sym_LT_AMP_DASH;
	v->a[11469] = anon_sym_GT_AMP_DASH;
	v->a[11470] = state(295);
	v->a[11471] = 6;
	v->a[11472] = sym_arithmetic_expansion;
	v->a[11473] = sym_string;
	v->a[11474] = sym_number;
	v->a[11475] = sym_simple_expansion;
	v->a[11476] = sym_expansion;
	v->a[11477] = sym_command_substitution;
	v->a[11478] = actions(252);
	v->a[11479] = 8;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = anon_sym_LT;
	v->a[11481] = anon_sym_GT;
	v->a[11482] = anon_sym_GT_GT;
	v->a[11483] = anon_sym_AMP_GT;
	v->a[11484] = anon_sym_AMP_GT_GT;
	v->a[11485] = anon_sym_LT_AMP;
	v->a[11486] = anon_sym_GT_AMP;
	v->a[11487] = anon_sym_GT_PIPE;
	v->a[11488] = state(1031);
	v->a[11489] = 12;
	v->a[11490] = sym_redirected_statement;
	v->a[11491] = sym_for_statement;
	v->a[11492] = sym_while_statement;
	v->a[11493] = sym_if_statement;
	v->a[11494] = sym_case_statement;
	v->a[11495] = sym_function_definition;
	v->a[11496] = sym_compound_statement;
	v->a[11497] = sym_subshell;
	v->a[11498] = sym_list;
	v->a[11499] = sym_negated_command;
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
