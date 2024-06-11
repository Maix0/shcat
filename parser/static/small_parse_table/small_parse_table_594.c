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
	v->a[59400] = actions(3);
	v->a[59401] = 1;
	v->a[59402] = sym_comment;
	v->a[59403] = actions(1554);
	v->a[59404] = 1;
	v->a[59405] = anon_sym_BQUOTE;
	v->a[59406] = actions(1556);
	v->a[59407] = 2;
	v->a[59408] = sym_file_descriptor;
	v->a[59409] = sym_variable_name;
	v->a[59410] = actions(1552);
	v->a[59411] = 26;
	v->a[59412] = anon_sym_for;
	v->a[59413] = anon_sym_while;
	v->a[59414] = anon_sym_until;
	v->a[59415] = anon_sym_if;
	v->a[59416] = anon_sym_case;
	v->a[59417] = anon_sym_LPAREN;
	v->a[59418] = anon_sym_LBRACE;
	v->a[59419] = anon_sym_BANG;
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = anon_sym_LT;
	v->a[59421] = anon_sym_GT;
	v->a[59422] = anon_sym_GT_GT;
	v->a[59423] = anon_sym_AMP_GT;
	v->a[59424] = anon_sym_AMP_GT_GT;
	v->a[59425] = anon_sym_LT_AMP;
	v->a[59426] = anon_sym_GT_AMP;
	v->a[59427] = anon_sym_GT_PIPE;
	v->a[59428] = anon_sym_LT_AMP_DASH;
	v->a[59429] = anon_sym_GT_AMP_DASH;
	v->a[59430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59431] = anon_sym_DOLLAR;
	v->a[59432] = anon_sym_DQUOTE;
	v->a[59433] = sym_raw_string;
	v->a[59434] = sym_number;
	v->a[59435] = anon_sym_DOLLAR_LBRACE;
	v->a[59436] = anon_sym_DOLLAR_LPAREN;
	v->a[59437] = sym_word;
	v->a[59438] = 3;
	v->a[59439] = actions(3);
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = 1;
	v->a[59441] = sym_comment;
	v->a[59442] = actions(1177);
	v->a[59443] = 3;
	v->a[59444] = sym_file_descriptor;
	v->a[59445] = sym__concat;
	v->a[59446] = sym__bare_dollar;
	v->a[59447] = actions(1179);
	v->a[59448] = 25;
	v->a[59449] = anon_sym_PIPE;
	v->a[59450] = anon_sym_AMP_AMP;
	v->a[59451] = anon_sym_PIPE_PIPE;
	v->a[59452] = anon_sym_LT;
	v->a[59453] = anon_sym_GT;
	v->a[59454] = anon_sym_GT_GT;
	v->a[59455] = anon_sym_AMP_GT;
	v->a[59456] = anon_sym_AMP_GT_GT;
	v->a[59457] = anon_sym_LT_AMP;
	v->a[59458] = anon_sym_GT_AMP;
	v->a[59459] = anon_sym_GT_PIPE;
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = anon_sym_LT_AMP_DASH;
	v->a[59461] = anon_sym_GT_AMP_DASH;
	v->a[59462] = anon_sym_LT_LT;
	v->a[59463] = anon_sym_LT_LT_DASH;
	v->a[59464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59465] = aux_sym_concatenation_token1;
	v->a[59466] = anon_sym_DOLLAR;
	v->a[59467] = anon_sym_DQUOTE;
	v->a[59468] = sym_raw_string;
	v->a[59469] = sym_number;
	v->a[59470] = anon_sym_DOLLAR_LBRACE;
	v->a[59471] = anon_sym_DOLLAR_LPAREN;
	v->a[59472] = anon_sym_BQUOTE;
	v->a[59473] = sym_word;
	v->a[59474] = 6;
	v->a[59475] = actions(3);
	v->a[59476] = 1;
	v->a[59477] = sym_comment;
	v->a[59478] = actions(1004);
	v->a[59479] = 1;
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = sym_file_descriptor;
	v->a[59481] = actions(1818);
	v->a[59482] = 1;
	v->a[59483] = aux_sym_concatenation_token1;
	v->a[59484] = actions(1821);
	v->a[59485] = 1;
	v->a[59486] = sym__concat;
	v->a[59487] = state(1000);
	v->a[59488] = 1;
	v->a[59489] = aux_sym_concatenation_repeat1;
	v->a[59490] = actions(999);
	v->a[59491] = 24;
	v->a[59492] = anon_sym_PIPE;
	v->a[59493] = anon_sym_AMP_AMP;
	v->a[59494] = anon_sym_PIPE_PIPE;
	v->a[59495] = anon_sym_LT;
	v->a[59496] = anon_sym_GT;
	v->a[59497] = anon_sym_GT_GT;
	v->a[59498] = anon_sym_AMP_GT;
	v->a[59499] = anon_sym_AMP_GT_GT;
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
