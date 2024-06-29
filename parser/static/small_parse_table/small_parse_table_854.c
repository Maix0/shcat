/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_854.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4270(t_small_parse_table_array *v)
{
	v->a[85400] = 3;
	v->a[85401] = actions(3);
	v->a[85402] = 1;
	v->a[85403] = sym_comment;
	v->a[85404] = actions(988);
	v->a[85405] = 1;
	v->a[85406] = sym__concat;
	v->a[85407] = actions(983);
	v->a[85408] = 14;
	v->a[85409] = anon_sym_SEMI_SEMI;
	v->a[85410] = aux_sym_heredoc_redirect_token1;
	v->a[85411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85412] = anon_sym_AMP;
	v->a[85413] = aux_sym_concatenation_token1;
	v->a[85414] = anon_sym_DOLLAR;
	v->a[85415] = anon_sym_DQUOTE;
	v->a[85416] = sym_raw_string;
	v->a[85417] = sym_number;
	v->a[85418] = anon_sym_DOLLAR_LBRACE;
	v->a[85419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4271(v);
}

void	small_parse_table_4271(t_small_parse_table_array *v)
{
	v->a[85420] = anon_sym_BQUOTE;
	v->a[85421] = sym_word;
	v->a[85422] = anon_sym_SEMI;
	v->a[85423] = 3;
	v->a[85424] = actions(3);
	v->a[85425] = 1;
	v->a[85426] = sym_comment;
	v->a[85427] = actions(1195);
	v->a[85428] = 1;
	v->a[85429] = sym__concat;
	v->a[85430] = actions(1193);
	v->a[85431] = 14;
	v->a[85432] = anon_sym_SEMI_SEMI;
	v->a[85433] = aux_sym_heredoc_redirect_token1;
	v->a[85434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85435] = anon_sym_AMP;
	v->a[85436] = aux_sym_concatenation_token1;
	v->a[85437] = anon_sym_DOLLAR;
	v->a[85438] = anon_sym_DQUOTE;
	v->a[85439] = sym_raw_string;
	small_parse_table_4272(v);
}

void	small_parse_table_4272(t_small_parse_table_array *v)
{
	v->a[85440] = sym_number;
	v->a[85441] = anon_sym_DOLLAR_LBRACE;
	v->a[85442] = anon_sym_DOLLAR_LPAREN;
	v->a[85443] = anon_sym_BQUOTE;
	v->a[85444] = sym_word;
	v->a[85445] = anon_sym_SEMI;
	v->a[85446] = 10;
	v->a[85447] = actions(3);
	v->a[85448] = 1;
	v->a[85449] = sym_comment;
	v->a[85450] = actions(3060);
	v->a[85451] = 1;
	v->a[85452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85453] = actions(3064);
	v->a[85454] = 1;
	v->a[85455] = anon_sym_DQUOTE;
	v->a[85456] = actions(3066);
	v->a[85457] = 1;
	v->a[85458] = anon_sym_DOLLAR_LBRACE;
	v->a[85459] = actions(3068);
	small_parse_table_4273(v);
}

void	small_parse_table_4273(t_small_parse_table_array *v)
{
	v->a[85460] = 1;
	v->a[85461] = anon_sym_DOLLAR_LPAREN;
	v->a[85462] = actions(3070);
	v->a[85463] = 1;
	v->a[85464] = anon_sym_BQUOTE;
	v->a[85465] = actions(3104);
	v->a[85466] = 1;
	v->a[85467] = anon_sym_DOLLAR;
	v->a[85468] = state(2009);
	v->a[85469] = 1;
	v->a[85470] = sym_concatenation;
	v->a[85471] = actions(3166);
	v->a[85472] = 3;
	v->a[85473] = sym_raw_string;
	v->a[85474] = sym_number;
	v->a[85475] = sym_word;
	v->a[85476] = state(1954);
	v->a[85477] = 5;
	v->a[85478] = sym_arithmetic_expansion;
	v->a[85479] = sym_string;
	small_parse_table_4274(v);
}

void	small_parse_table_4274(t_small_parse_table_array *v)
{
	v->a[85480] = sym_simple_expansion;
	v->a[85481] = sym_expansion;
	v->a[85482] = sym_command_substitution;
	v->a[85483] = 10;
	v->a[85484] = actions(3);
	v->a[85485] = 1;
	v->a[85486] = sym_comment;
	v->a[85487] = actions(3060);
	v->a[85488] = 1;
	v->a[85489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85490] = actions(3064);
	v->a[85491] = 1;
	v->a[85492] = anon_sym_DQUOTE;
	v->a[85493] = actions(3066);
	v->a[85494] = 1;
	v->a[85495] = anon_sym_DOLLAR_LBRACE;
	v->a[85496] = actions(3068);
	v->a[85497] = 1;
	v->a[85498] = anon_sym_DOLLAR_LPAREN;
	v->a[85499] = actions(3070);
	small_parse_table_4275(v);
}

/* EOF small_parse_table_854.c */
