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
	v->a[11401] = sym_comment;
	v->a[11402] = actions(9);
	v->a[11403] = 1;
	v->a[11404] = anon_sym_for;
	v->a[11405] = actions(13);
	v->a[11406] = 1;
	v->a[11407] = anon_sym_if;
	v->a[11408] = actions(15);
	v->a[11409] = 1;
	v->a[11410] = anon_sym_case;
	v->a[11411] = actions(17);
	v->a[11412] = 1;
	v->a[11413] = anon_sym_LPAREN;
	v->a[11414] = actions(19);
	v->a[11415] = 1;
	v->a[11416] = anon_sym_LBRACE;
	v->a[11417] = actions(59);
	v->a[11418] = 1;
	v->a[11419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = actions(61);
	v->a[11421] = 1;
	v->a[11422] = anon_sym_DOLLAR;
	v->a[11423] = actions(63);
	v->a[11424] = 1;
	v->a[11425] = anon_sym_DQUOTE;
	v->a[11426] = actions(67);
	v->a[11427] = 1;
	v->a[11428] = anon_sym_DOLLAR_LBRACE;
	v->a[11429] = actions(69);
	v->a[11430] = 1;
	v->a[11431] = anon_sym_DOLLAR_LPAREN;
	v->a[11432] = actions(71);
	v->a[11433] = 1;
	v->a[11434] = anon_sym_BQUOTE;
	v->a[11435] = actions(73);
	v->a[11436] = 1;
	v->a[11437] = sym_file_descriptor;
	v->a[11438] = actions(75);
	v->a[11439] = 1;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = sym_variable_name;
	v->a[11441] = actions(240);
	v->a[11442] = 1;
	v->a[11443] = sym_word;
	v->a[11444] = actions(242);
	v->a[11445] = 1;
	v->a[11446] = anon_sym_BANG;
	v->a[11447] = state(136);
	v->a[11448] = 1;
	v->a[11449] = aux_sym__statements_repeat1;
	v->a[11450] = state(188);
	v->a[11451] = 1;
	v->a[11452] = sym_command_name;
	v->a[11453] = state(297);
	v->a[11454] = 1;
	v->a[11455] = sym_variable_assignment;
	v->a[11456] = state(650);
	v->a[11457] = 1;
	v->a[11458] = sym_concatenation;
	v->a[11459] = state(749);
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = 1;
	v->a[11461] = aux_sym_command_repeat1;
	v->a[11462] = state(795);
	v->a[11463] = 1;
	v->a[11464] = sym_file_redirect;
	v->a[11465] = state(1154);
	v->a[11466] = 1;
	v->a[11467] = sym_pipeline;
	v->a[11468] = state(1240);
	v->a[11469] = 1;
	v->a[11470] = aux_sym_redirected_statement_repeat2;
	v->a[11471] = state(2119);
	v->a[11472] = 1;
	v->a[11473] = sym__statement_not_pipeline;
	v->a[11474] = state(2295);
	v->a[11475] = 1;
	v->a[11476] = sym__statements;
	v->a[11477] = actions(11);
	v->a[11478] = 2;
	v->a[11479] = anon_sym_while;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = anon_sym_until;
	v->a[11481] = actions(57);
	v->a[11482] = 2;
	v->a[11483] = anon_sym_LT_AMP_DASH;
	v->a[11484] = anon_sym_GT_AMP_DASH;
	v->a[11485] = actions(65);
	v->a[11486] = 2;
	v->a[11487] = sym_raw_string;
	v->a[11488] = sym_number;
	v->a[11489] = state(443);
	v->a[11490] = 5;
	v->a[11491] = sym_arithmetic_expansion;
	v->a[11492] = sym_string;
	v->a[11493] = sym_simple_expansion;
	v->a[11494] = sym_expansion;
	v->a[11495] = sym_command_substitution;
	v->a[11496] = actions(55);
	v->a[11497] = 6;
	v->a[11498] = anon_sym_LT;
	v->a[11499] = anon_sym_GT;
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
