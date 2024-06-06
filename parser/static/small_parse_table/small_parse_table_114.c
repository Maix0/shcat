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
	v->a[11400] = anon_sym_DOLLAR_LBRACE;
	v->a[11401] = actions(2132);
	v->a[11402] = 1;
	v->a[11403] = anon_sym_DOLLAR_LPAREN;
	v->a[11404] = actions(2135);
	v->a[11405] = 1;
	v->a[11406] = anon_sym_BQUOTE;
	v->a[11407] = actions(2138);
	v->a[11408] = 1;
	v->a[11409] = anon_sym_DOLLAR_BQUOTE;
	v->a[11410] = actions(2144);
	v->a[11411] = 1;
	v->a[11412] = sym__bare_dollar;
	v->a[11413] = actions(2147);
	v->a[11414] = 1;
	v->a[11415] = sym__brace_start;
	v->a[11416] = actions(2297);
	v->a[11417] = 1;
	v->a[11418] = sym__special_character;
	v->a[11419] = actions(2300);
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = 1;
	v->a[11421] = sym_test_operator;
	v->a[11422] = state(406);
	v->a[11423] = 1;
	v->a[11424] = aux_sym_command_repeat2;
	v->a[11425] = state(1232);
	v->a[11426] = 1;
	v->a[11427] = aux_sym__literal_repeat1;
	v->a[11428] = state(1293);
	v->a[11429] = 1;
	v->a[11430] = sym_concatenation;
	v->a[11431] = actions(1195);
	v->a[11432] = 2;
	v->a[11433] = sym_file_descriptor;
	v->a[11434] = aux_sym_heredoc_redirect_token1;
	v->a[11435] = actions(2294);
	v->a[11436] = 2;
	v->a[11437] = sym_raw_string;
	v->a[11438] = sym_word;
	v->a[11439] = state(1146);
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = 7;
	v->a[11441] = sym_arithmetic_expansion;
	v->a[11442] = sym_brace_expression;
	v->a[11443] = sym_string;
	v->a[11444] = sym_number;
	v->a[11445] = sym_simple_expansion;
	v->a[11446] = sym_expansion;
	v->a[11447] = sym_command_substitution;
	v->a[11448] = actions(1193);
	v->a[11449] = 19;
	v->a[11450] = anon_sym_PIPE;
	v->a[11451] = anon_sym_SEMI_SEMI;
	v->a[11452] = anon_sym_PIPE_AMP;
	v->a[11453] = anon_sym_AMP_AMP;
	v->a[11454] = anon_sym_PIPE_PIPE;
	v->a[11455] = anon_sym_LT;
	v->a[11456] = anon_sym_GT;
	v->a[11457] = anon_sym_GT_GT;
	v->a[11458] = anon_sym_AMP_GT;
	v->a[11459] = anon_sym_AMP_GT_GT;
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = anon_sym_LT_AMP;
	v->a[11461] = anon_sym_GT_AMP;
	v->a[11462] = anon_sym_GT_PIPE;
	v->a[11463] = anon_sym_LT_AMP_DASH;
	v->a[11464] = anon_sym_GT_AMP_DASH;
	v->a[11465] = anon_sym_LT_LT;
	v->a[11466] = anon_sym_LT_LT_DASH;
	v->a[11467] = anon_sym_AMP;
	v->a[11468] = anon_sym_SEMI;
	v->a[11469] = 21;
	v->a[11470] = actions(3);
	v->a[11471] = 1;
	v->a[11472] = sym_comment;
	v->a[11473] = actions(1252);
	v->a[11474] = 1;
	v->a[11475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11476] = actions(1254);
	v->a[11477] = 1;
	v->a[11478] = anon_sym_DOLLAR;
	v->a[11479] = actions(1258);
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = 1;
	v->a[11481] = anon_sym_DQUOTE;
	v->a[11482] = actions(1260);
	v->a[11483] = 1;
	v->a[11484] = aux_sym_number_token1;
	v->a[11485] = actions(1262);
	v->a[11486] = 1;
	v->a[11487] = aux_sym_number_token2;
	v->a[11488] = actions(1264);
	v->a[11489] = 1;
	v->a[11490] = anon_sym_DOLLAR_LBRACE;
	v->a[11491] = actions(1266);
	v->a[11492] = 1;
	v->a[11493] = anon_sym_DOLLAR_LPAREN;
	v->a[11494] = actions(1268);
	v->a[11495] = 1;
	v->a[11496] = anon_sym_BQUOTE;
	v->a[11497] = actions(1270);
	v->a[11498] = 1;
	v->a[11499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
