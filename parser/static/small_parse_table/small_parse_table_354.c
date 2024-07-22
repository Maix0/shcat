/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_354.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1770(t_small_parse_table_array *v)
{
	v->a[35400] = anon_sym_LT_LT_DASH;
	v->a[35401] = aux_sym_heredoc_redirect_token1;
	v->a[35402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35403] = aux_sym_concatenation_token1;
	v->a[35404] = anon_sym_DOLLAR;
	v->a[35405] = anon_sym_DQUOTE;
	v->a[35406] = sym_raw_string;
	v->a[35407] = sym_number;
	v->a[35408] = anon_sym_DOLLAR_LBRACE;
	v->a[35409] = anon_sym_DOLLAR_LPAREN;
	v->a[35410] = anon_sym_BQUOTE;
	v->a[35411] = sym_word;
	v->a[35412] = anon_sym_SEMI;
	v->a[35413] = 6;
	v->a[35414] = actions(3);
	v->a[35415] = 1;
	v->a[35416] = sym_comment;
	v->a[35417] = actions(1243);
	v->a[35418] = 1;
	v->a[35419] = aux_sym_concatenation_token1;
	small_parse_table_1771(v);
}

void	small_parse_table_1771(t_small_parse_table_array *v)
{
	v->a[35420] = actions(1305);
	v->a[35421] = 1;
	v->a[35422] = sym__concat;
	v->a[35423] = state(462);
	v->a[35424] = 1;
	v->a[35425] = aux_sym_concatenation_repeat1;
	v->a[35426] = actions(1239);
	v->a[35427] = 2;
	v->a[35428] = sym_file_descriptor;
	v->a[35429] = sym__bare_dollar;
	v->a[35430] = actions(1235);
	v->a[35431] = 24;
	v->a[35432] = anon_sym_PIPE;
	v->a[35433] = anon_sym_SEMI_SEMI;
	v->a[35434] = anon_sym_AMP_AMP;
	v->a[35435] = anon_sym_PIPE_PIPE;
	v->a[35436] = anon_sym_LT;
	v->a[35437] = anon_sym_GT;
	v->a[35438] = anon_sym_GT_GT;
	v->a[35439] = anon_sym_LT_AMP;
	small_parse_table_1772(v);
}

void	small_parse_table_1772(t_small_parse_table_array *v)
{
	v->a[35440] = anon_sym_GT_AMP;
	v->a[35441] = anon_sym_GT_PIPE;
	v->a[35442] = anon_sym_LT_GT;
	v->a[35443] = anon_sym_LT_LT;
	v->a[35444] = anon_sym_LT_LT_DASH;
	v->a[35445] = aux_sym_heredoc_redirect_token1;
	v->a[35446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35447] = anon_sym_DOLLAR;
	v->a[35448] = anon_sym_DQUOTE;
	v->a[35449] = sym_raw_string;
	v->a[35450] = sym_number;
	v->a[35451] = anon_sym_DOLLAR_LBRACE;
	v->a[35452] = anon_sym_DOLLAR_LPAREN;
	v->a[35453] = anon_sym_BQUOTE;
	v->a[35454] = sym_word;
	v->a[35455] = anon_sym_SEMI;
	v->a[35456] = 12;
	v->a[35457] = actions(3);
	v->a[35458] = 1;
	v->a[35459] = sym_comment;
	small_parse_table_1773(v);
}

void	small_parse_table_1773(t_small_parse_table_array *v)
{
	v->a[35460] = actions(648);
	v->a[35461] = 1;
	v->a[35462] = sym_file_descriptor;
	v->a[35463] = actions(1344);
	v->a[35464] = 1;
	v->a[35465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35466] = actions(1347);
	v->a[35467] = 1;
	v->a[35468] = anon_sym_DOLLAR;
	v->a[35469] = actions(1350);
	v->a[35470] = 1;
	v->a[35471] = anon_sym_DQUOTE;
	v->a[35472] = actions(1353);
	v->a[35473] = 1;
	v->a[35474] = anon_sym_DOLLAR_LBRACE;
	v->a[35475] = actions(1356);
	v->a[35476] = 1;
	v->a[35477] = anon_sym_DOLLAR_LPAREN;
	v->a[35478] = actions(1359);
	v->a[35479] = 1;
	small_parse_table_1774(v);
}

void	small_parse_table_1774(t_small_parse_table_array *v)
{
	v->a[35480] = anon_sym_BQUOTE;
	v->a[35481] = state(496);
	v->a[35482] = 2;
	v->a[35483] = sym_concatenation;
	v->a[35484] = aux_sym_for_statement_repeat1;
	v->a[35485] = actions(1341);
	v->a[35486] = 3;
	v->a[35487] = sym_raw_string;
	v->a[35488] = sym_number;
	v->a[35489] = sym_word;
	v->a[35490] = state(873);
	v->a[35491] = 5;
	v->a[35492] = sym_arithmetic_expansion;
	v->a[35493] = sym_string;
	v->a[35494] = sym_simple_expansion;
	v->a[35495] = sym_expansion;
	v->a[35496] = sym_command_substitution;
	v->a[35497] = actions(628);
	v->a[35498] = 12;
	v->a[35499] = anon_sym_PIPE;
	small_parse_table_1775(v);
}

/* EOF small_parse_table_354.c */
