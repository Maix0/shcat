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
	v->a[11400] = sym_concatenation;
	v->a[11401] = state(746);
	v->a[11402] = 1;
	v->a[11403] = aux_sym_command_repeat1;
	v->a[11404] = state(905);
	v->a[11405] = 1;
	v->a[11406] = sym_file_redirect;
	v->a[11407] = state(1422);
	v->a[11408] = 1;
	v->a[11409] = sym_pipeline;
	v->a[11410] = state(1429);
	v->a[11411] = 1;
	v->a[11412] = aux_sym_redirected_statement_repeat2;
	v->a[11413] = state(2271);
	v->a[11414] = 1;
	v->a[11415] = sym__statement_not_pipeline;
	v->a[11416] = state(2483);
	v->a[11417] = 1;
	v->a[11418] = sym__statements;
	v->a[11419] = actions(11);
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = 2;
	v->a[11421] = anon_sym_while;
	v->a[11422] = anon_sym_until;
	v->a[11423] = actions(57);
	v->a[11424] = 2;
	v->a[11425] = anon_sym_LT_AMP_DASH;
	v->a[11426] = anon_sym_GT_AMP_DASH;
	v->a[11427] = actions(65);
	v->a[11428] = 2;
	v->a[11429] = sym_raw_string;
	v->a[11430] = sym_number;
	v->a[11431] = state(394);
	v->a[11432] = 5;
	v->a[11433] = sym_arithmetic_expansion;
	v->a[11434] = sym_string;
	v->a[11435] = sym_simple_expansion;
	v->a[11436] = sym_expansion;
	v->a[11437] = sym_command_substitution;
	v->a[11438] = actions(55);
	v->a[11439] = 8;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = anon_sym_LT;
	v->a[11441] = anon_sym_GT;
	v->a[11442] = anon_sym_GT_GT;
	v->a[11443] = anon_sym_AMP_GT;
	v->a[11444] = anon_sym_AMP_GT_GT;
	v->a[11445] = anon_sym_LT_AMP;
	v->a[11446] = anon_sym_GT_AMP;
	v->a[11447] = anon_sym_GT_PIPE;
	v->a[11448] = state(1211);
	v->a[11449] = 12;
	v->a[11450] = sym_redirected_statement;
	v->a[11451] = sym_for_statement;
	v->a[11452] = sym_while_statement;
	v->a[11453] = sym_if_statement;
	v->a[11454] = sym_case_statement;
	v->a[11455] = sym_function_definition;
	v->a[11456] = sym_compound_statement;
	v->a[11457] = sym_subshell;
	v->a[11458] = sym_list;
	v->a[11459] = sym_negated_command;
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = sym_command;
	v->a[11461] = sym__variable_assignments;
	v->a[11462] = 32;
	v->a[11463] = actions(3);
	v->a[11464] = 1;
	v->a[11465] = sym_comment;
	v->a[11466] = actions(9);
	v->a[11467] = 1;
	v->a[11468] = anon_sym_for;
	v->a[11469] = actions(13);
	v->a[11470] = 1;
	v->a[11471] = anon_sym_if;
	v->a[11472] = actions(15);
	v->a[11473] = 1;
	v->a[11474] = anon_sym_case;
	v->a[11475] = actions(17);
	v->a[11476] = 1;
	v->a[11477] = anon_sym_LPAREN;
	v->a[11478] = actions(19);
	v->a[11479] = 1;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = anon_sym_LBRACE;
	v->a[11481] = actions(59);
	v->a[11482] = 1;
	v->a[11483] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11484] = actions(61);
	v->a[11485] = 1;
	v->a[11486] = anon_sym_DOLLAR;
	v->a[11487] = actions(63);
	v->a[11488] = 1;
	v->a[11489] = anon_sym_DQUOTE;
	v->a[11490] = actions(67);
	v->a[11491] = 1;
	v->a[11492] = anon_sym_DOLLAR_LBRACE;
	v->a[11493] = actions(69);
	v->a[11494] = 1;
	v->a[11495] = anon_sym_DOLLAR_LPAREN;
	v->a[11496] = actions(71);
	v->a[11497] = 1;
	v->a[11498] = anon_sym_BQUOTE;
	v->a[11499] = actions(220);
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
