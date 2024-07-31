/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_594.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2970(t_small_parse_table_array *v)
{
	v->a[59400] = 1;
	v->a[59401] = anon_sym_LT_LT;
	v->a[59402] = actions(2378);
	v->a[59403] = 1;
	v->a[59404] = anon_sym_LT_LT_DASH;
	v->a[59405] = actions(1690);
	v->a[59406] = 2;
	v->a[59407] = anon_sym_AMP_AMP;
	v->a[59408] = anon_sym_PIPE_PIPE;
	v->a[59409] = actions(2372);
	v->a[59410] = 2;
	v->a[59411] = anon_sym_LT;
	v->a[59412] = anon_sym_GT;
	v->a[59413] = state(1228);
	v->a[59414] = 3;
	v->a[59415] = sym_file_redirect;
	v->a[59416] = sym_heredoc_redirect;
	v->a[59417] = aux_sym_redirected_statement_repeat1;
	v->a[59418] = actions(2374);
	v->a[59419] = 5;
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = anon_sym_GT_GT;
	v->a[59421] = anon_sym_LT_AMP;
	v->a[59422] = anon_sym_GT_AMP;
	v->a[59423] = anon_sym_GT_PIPE;
	v->a[59424] = anon_sym_LT_GT;
	v->a[59425] = 12;
	v->a[59426] = actions(3);
	v->a[59427] = 1;
	v->a[59428] = sym_comment;
	v->a[59429] = actions(1343);
	v->a[59430] = 1;
	v->a[59431] = anon_sym_DOLLAR;
	v->a[59432] = actions(1345);
	v->a[59433] = 1;
	v->a[59434] = anon_sym_DQUOTE;
	v->a[59435] = actions(1347);
	v->a[59436] = 1;
	v->a[59437] = anon_sym_DOLLAR_LBRACE;
	v->a[59438] = actions(1349);
	v->a[59439] = 1;
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = anon_sym_DOLLAR_LPAREN;
	v->a[59441] = actions(1351);
	v->a[59442] = 1;
	v->a[59443] = anon_sym_BQUOTE;
	v->a[59444] = actions(2319);
	v->a[59445] = 1;
	v->a[59446] = aux_sym__word_no_brace_token1;
	v->a[59447] = actions(2380);
	v->a[59448] = 1;
	v->a[59449] = sym_raw_string;
	v->a[59450] = actions(2382);
	v->a[59451] = 1;
	v->a[59452] = sym_variable_name;
	v->a[59453] = actions(2384);
	v->a[59454] = 1;
	v->a[59455] = sym__expansion_word;
	v->a[59456] = state(1582);
	v->a[59457] = 1;
	v->a[59458] = sym__word_no_brace;
	v->a[59459] = state(1576);
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = 4;
	v->a[59461] = sym_string;
	v->a[59462] = sym_simple_expansion;
	v->a[59463] = sym_expansion;
	v->a[59464] = sym_command_substitution;
	v->a[59465] = 7;
	v->a[59466] = actions(407);
	v->a[59467] = 1;
	v->a[59468] = sym_comment;
	v->a[59469] = actions(850);
	v->a[59470] = 1;
	v->a[59471] = anon_sym_LT_LT;
	v->a[59472] = actions(2390);
	v->a[59473] = 1;
	v->a[59474] = anon_sym_LT_LT_DASH;
	v->a[59475] = actions(1676);
	v->a[59476] = 2;
	v->a[59477] = anon_sym_LT;
	v->a[59478] = anon_sym_GT;
	v->a[59479] = actions(2386);
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = 2;
	v->a[59481] = anon_sym_AMP_AMP;
	v->a[59482] = anon_sym_PIPE_PIPE;
	v->a[59483] = state(984);
	v->a[59484] = 3;
	v->a[59485] = sym_file_redirect;
	v->a[59486] = sym_heredoc_redirect;
	v->a[59487] = aux_sym_redirected_statement_repeat1;
	v->a[59488] = actions(2388);
	v->a[59489] = 5;
	v->a[59490] = anon_sym_GT_GT;
	v->a[59491] = anon_sym_LT_AMP;
	v->a[59492] = anon_sym_GT_AMP;
	v->a[59493] = anon_sym_GT_PIPE;
	v->a[59494] = anon_sym_LT_GT;
	v->a[59495] = 6;
	v->a[59496] = actions(407);
	v->a[59497] = 1;
	v->a[59498] = sym_comment;
	v->a[59499] = actions(1826);
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
