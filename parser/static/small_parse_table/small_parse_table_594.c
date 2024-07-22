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
	v->a[59400] = sym_comment;
	v->a[59401] = actions(694);
	v->a[59402] = 3;
	v->a[59403] = sym_file_descriptor;
	v->a[59404] = sym__concat;
	v->a[59405] = sym_variable_name;
	v->a[59406] = actions(692);
	v->a[59407] = 17;
	v->a[59408] = anon_sym_LT;
	v->a[59409] = anon_sym_GT;
	v->a[59410] = anon_sym_GT_GT;
	v->a[59411] = anon_sym_LT_AMP;
	v->a[59412] = anon_sym_GT_AMP;
	v->a[59413] = anon_sym_GT_PIPE;
	v->a[59414] = anon_sym_LT_GT;
	v->a[59415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59416] = aux_sym_concatenation_token1;
	v->a[59417] = anon_sym_DOLLAR;
	v->a[59418] = anon_sym_DQUOTE;
	v->a[59419] = sym_raw_string;
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = sym_number;
	v->a[59421] = anon_sym_DOLLAR_LBRACE;
	v->a[59422] = anon_sym_DOLLAR_LPAREN;
	v->a[59423] = anon_sym_BQUOTE;
	v->a[59424] = sym_word;
	v->a[59425] = 5;
	v->a[59426] = actions(3);
	v->a[59427] = 1;
	v->a[59428] = sym_comment;
	v->a[59429] = actions(782);
	v->a[59430] = 1;
	v->a[59431] = anon_sym_PIPE;
	v->a[59432] = actions(1055);
	v->a[59433] = 2;
	v->a[59434] = sym_file_descriptor;
	v->a[59435] = aux_sym_heredoc_redirect_token1;
	v->a[59436] = state(1062);
	v->a[59437] = 3;
	v->a[59438] = sym_file_redirect;
	v->a[59439] = sym_heredoc_redirect;
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = aux_sym_redirected_statement_repeat1;
	v->a[59441] = actions(1057);
	v->a[59442] = 14;
	v->a[59443] = anon_sym_SEMI_SEMI;
	v->a[59444] = anon_sym_AMP_AMP;
	v->a[59445] = anon_sym_PIPE_PIPE;
	v->a[59446] = anon_sym_LT;
	v->a[59447] = anon_sym_GT;
	v->a[59448] = anon_sym_GT_GT;
	v->a[59449] = anon_sym_LT_AMP;
	v->a[59450] = anon_sym_GT_AMP;
	v->a[59451] = anon_sym_GT_PIPE;
	v->a[59452] = anon_sym_LT_GT;
	v->a[59453] = anon_sym_LT_LT;
	v->a[59454] = anon_sym_LT_LT_DASH;
	v->a[59455] = anon_sym_BQUOTE;
	v->a[59456] = anon_sym_SEMI;
	v->a[59457] = 10;
	v->a[59458] = actions(3);
	v->a[59459] = 1;
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = sym_comment;
	v->a[59461] = actions(782);
	v->a[59462] = 1;
	v->a[59463] = anon_sym_PIPE;
	v->a[59464] = actions(1945);
	v->a[59465] = 1;
	v->a[59466] = sym_file_descriptor;
	v->a[59467] = actions(2023);
	v->a[59468] = 1;
	v->a[59469] = aux_sym_heredoc_redirect_token1;
	v->a[59470] = state(703);
	v->a[59471] = 1;
	v->a[59472] = sym_terminator;
	v->a[59473] = actions(790);
	v->a[59474] = 2;
	v->a[59475] = anon_sym_LT_LT;
	v->a[59476] = anon_sym_LT_LT_DASH;
	v->a[59477] = actions(1028);
	v->a[59478] = 2;
	v->a[59479] = anon_sym_AMP_AMP;
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = anon_sym_PIPE_PIPE;
	v->a[59481] = actions(1087);
	v->a[59482] = 2;
	v->a[59483] = anon_sym_SEMI_SEMI;
	v->a[59484] = anon_sym_SEMI;
	v->a[59485] = state(1194);
	v->a[59486] = 3;
	v->a[59487] = sym_file_redirect;
	v->a[59488] = sym_heredoc_redirect;
	v->a[59489] = aux_sym_redirected_statement_repeat1;
	v->a[59490] = actions(1941);
	v->a[59491] = 7;
	v->a[59492] = anon_sym_LT;
	v->a[59493] = anon_sym_GT;
	v->a[59494] = anon_sym_GT_GT;
	v->a[59495] = anon_sym_LT_AMP;
	v->a[59496] = anon_sym_GT_AMP;
	v->a[59497] = anon_sym_GT_PIPE;
	v->a[59498] = anon_sym_LT_GT;
	v->a[59499] = 3;
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
