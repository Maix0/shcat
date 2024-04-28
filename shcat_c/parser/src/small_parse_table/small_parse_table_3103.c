/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3103.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15515(t_small_parse_table_array *v)
{
	v->a[310300] = 2;
	v->a[310301] = actions(71);
	v->a[310302] = 1;
	v->a[310303] = sym_comment;
	v->a[310304] = actions(1314);
	v->a[310305] = 7;
	v->a[310306] = anon_sym_PLUS;
	v->a[310307] = anon_sym_DASH;
	v->a[310308] = anon_sym_STAR;
	v->a[310309] = anon_sym_SLASH;
	v->a[310310] = anon_sym_PERCENT;
	v->a[310311] = anon_sym_COLON;
	v->a[310312] = anon_sym_RBRACE3;
	v->a[310313] = 3;
	v->a[310314] = actions(71);
	v->a[310315] = 1;
	v->a[310316] = sym_comment;
	v->a[310317] = actions(1344);
	v->a[310318] = 1;
	v->a[310319] = anon_sym_DOLLAR;
	small_parse_table_15516(v);
}

void	small_parse_table_15516(t_small_parse_table_array *v)
{
	v->a[310320] = actions(1346);
	v->a[310321] = 6;
	v->a[310322] = sym_heredoc_content;
	v->a[310323] = sym_heredoc_end;
	v->a[310324] = anon_sym_DOLLAR_LBRACE;
	v->a[310325] = anon_sym_DOLLAR_LPAREN;
	v->a[310326] = anon_sym_BQUOTE;
	v->a[310327] = anon_sym_DOLLAR_BQUOTE;
	v->a[310328] = 3;
	v->a[310329] = actions(3);
	v->a[310330] = 1;
	v->a[310331] = sym_comment;
	v->a[310332] = actions(1330);
	v->a[310333] = 2;
	v->a[310334] = sym__concat;
	v->a[310335] = aux_sym_heredoc_redirect_token1;
	v->a[310336] = actions(1328);
	v->a[310337] = 5;
	v->a[310338] = anon_sym_in;
	v->a[310339] = anon_sym_SEMI;
	small_parse_table_15517(v);
}

void	small_parse_table_15517(t_small_parse_table_array *v)
{
	v->a[310340] = anon_sym_AMP;
	v->a[310341] = anon_sym_SEMI_SEMI;
	v->a[310342] = aux_sym_concatenation_token1;
	v->a[310343] = 3;
	v->a[310344] = actions(71);
	v->a[310345] = 1;
	v->a[310346] = sym_comment;
	v->a[310347] = actions(1312);
	v->a[310348] = 1;
	v->a[310349] = anon_sym_DOLLAR;
	v->a[310350] = actions(1314);
	v->a[310351] = 6;
	v->a[310352] = sym_heredoc_content;
	v->a[310353] = sym_heredoc_end;
	v->a[310354] = anon_sym_DOLLAR_LBRACE;
	v->a[310355] = anon_sym_DOLLAR_LPAREN;
	v->a[310356] = anon_sym_BQUOTE;
	v->a[310357] = anon_sym_DOLLAR_BQUOTE;
	v->a[310358] = 3;
	v->a[310359] = actions(3);
	small_parse_table_15518(v);
}

void	small_parse_table_15518(t_small_parse_table_array *v)
{
	v->a[310360] = 1;
	v->a[310361] = sym_comment;
	v->a[310362] = actions(1318);
	v->a[310363] = 2;
	v->a[310364] = sym__concat;
	v->a[310365] = aux_sym_heredoc_redirect_token1;
	v->a[310366] = actions(1316);
	v->a[310367] = 5;
	v->a[310368] = anon_sym_in;
	v->a[310369] = anon_sym_SEMI;
	v->a[310370] = anon_sym_AMP;
	v->a[310371] = anon_sym_SEMI_SEMI;
	v->a[310372] = aux_sym_concatenation_token1;
	v->a[310373] = 3;
	v->a[310374] = actions(71);
	v->a[310375] = 1;
	v->a[310376] = sym_comment;
	v->a[310377] = actions(1336);
	v->a[310378] = 1;
	v->a[310379] = anon_sym_DOLLAR;
	small_parse_table_15519(v);
}

void	small_parse_table_15519(t_small_parse_table_array *v)
{
	v->a[310380] = actions(1338);
	v->a[310381] = 6;
	v->a[310382] = sym_heredoc_content;
	v->a[310383] = sym_heredoc_end;
	v->a[310384] = anon_sym_DOLLAR_LBRACE;
	v->a[310385] = anon_sym_DOLLAR_LPAREN;
	v->a[310386] = anon_sym_BQUOTE;
	v->a[310387] = anon_sym_DOLLAR_BQUOTE;
	v->a[310388] = 5;
	v->a[310389] = actions(3);
	v->a[310390] = 1;
	v->a[310391] = sym_comment;
	v->a[310392] = actions(1364);
	v->a[310393] = 1;
	v->a[310394] = aux_sym_heredoc_redirect_token1;
	v->a[310395] = actions(14455);
	v->a[310396] = 1;
	v->a[310397] = sym__special_character;
	v->a[310398] = state(6240);
	v->a[310399] = 1;
	small_parse_table_15520(v);
}

/* EOF small_parse_table_3103.c */
