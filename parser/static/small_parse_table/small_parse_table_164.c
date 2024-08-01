/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_164.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_820(t_small_parse_table_array *v)
{
	v->a[16400] = anon_sym_GT_GT;
	v->a[16401] = anon_sym_LT_LT;
	v->a[16402] = aux_sym_heredoc_redirect_token1;
	v->a[16403] = anon_sym_SEMI;
	v->a[16404] = 13;
	v->a[16405] = actions(3);
	v->a[16406] = 1;
	v->a[16407] = sym_comment;
	v->a[16408] = actions(53);
	v->a[16409] = 1;
	v->a[16410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16411] = actions(55);
	v->a[16412] = 1;
	v->a[16413] = anon_sym_DOLLAR;
	v->a[16414] = actions(57);
	v->a[16415] = 1;
	v->a[16416] = anon_sym_DQUOTE;
	v->a[16417] = actions(61);
	v->a[16418] = 1;
	v->a[16419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = actions(63);
	v->a[16421] = 1;
	v->a[16422] = anon_sym_DOLLAR_LPAREN;
	v->a[16423] = actions(65);
	v->a[16424] = 1;
	v->a[16425] = anon_sym_BQUOTE;
	v->a[16426] = actions(419);
	v->a[16427] = 1;
	v->a[16428] = sym__bare_dollar;
	v->a[16429] = state(164);
	v->a[16430] = 1;
	v->a[16431] = aux_sym_command_repeat2;
	v->a[16432] = state(570);
	v->a[16433] = 1;
	v->a[16434] = sym_concatenation;
	v->a[16435] = actions(415);
	v->a[16436] = 3;
	v->a[16437] = sym_raw_string;
	v->a[16438] = sym_number;
	v->a[16439] = sym_word;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = state(289);
	v->a[16441] = 5;
	v->a[16442] = sym_arithmetic_expansion;
	v->a[16443] = sym_string;
	v->a[16444] = sym_simple_expansion;
	v->a[16445] = sym_expansion;
	v->a[16446] = sym_command_substitution;
	v->a[16447] = actions(450);
	v->a[16448] = 11;
	v->a[16449] = anon_sym_PIPE;
	v->a[16450] = anon_sym_RPAREN;
	v->a[16451] = anon_sym_SEMI_SEMI;
	v->a[16452] = anon_sym_AMP_AMP;
	v->a[16453] = anon_sym_PIPE_PIPE;
	v->a[16454] = anon_sym_LT;
	v->a[16455] = anon_sym_GT;
	v->a[16456] = anon_sym_GT_GT;
	v->a[16457] = anon_sym_LT_LT;
	v->a[16458] = aux_sym_heredoc_redirect_token1;
	v->a[16459] = anon_sym_SEMI;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = 13;
	v->a[16461] = actions(3);
	v->a[16462] = 1;
	v->a[16463] = sym_comment;
	v->a[16464] = actions(457);
	v->a[16465] = 1;
	v->a[16466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16467] = actions(460);
	v->a[16468] = 1;
	v->a[16469] = anon_sym_DOLLAR;
	v->a[16470] = actions(463);
	v->a[16471] = 1;
	v->a[16472] = anon_sym_DQUOTE;
	v->a[16473] = actions(466);
	v->a[16474] = 1;
	v->a[16475] = anon_sym_DOLLAR_LBRACE;
	v->a[16476] = actions(469);
	v->a[16477] = 1;
	v->a[16478] = anon_sym_DOLLAR_LPAREN;
	v->a[16479] = actions(472);
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = 1;
	v->a[16481] = anon_sym_BQUOTE;
	v->a[16482] = actions(475);
	v->a[16483] = 1;
	v->a[16484] = sym__bare_dollar;
	v->a[16485] = state(163);
	v->a[16486] = 1;
	v->a[16487] = aux_sym_command_repeat2;
	v->a[16488] = state(570);
	v->a[16489] = 1;
	v->a[16490] = sym_concatenation;
	v->a[16491] = actions(452);
	v->a[16492] = 3;
	v->a[16493] = sym_raw_string;
	v->a[16494] = sym_number;
	v->a[16495] = sym_word;
	v->a[16496] = state(289);
	v->a[16497] = 5;
	v->a[16498] = sym_arithmetic_expansion;
	v->a[16499] = sym_string;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
