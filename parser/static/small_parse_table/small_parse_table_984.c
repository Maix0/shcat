/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_984.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4920(t_small_parse_table_array *v)
{
	v->a[98400] = actions(4341);
	v->a[98401] = 5;
	v->a[98402] = anon_sym_LT;
	v->a[98403] = anon_sym_GT;
	v->a[98404] = anon_sym_AMP_GT;
	v->a[98405] = anon_sym_LT_AMP;
	v->a[98406] = anon_sym_GT_AMP;
	v->a[98407] = 7;
	v->a[98408] = actions(1094);
	v->a[98409] = 1;
	v->a[98410] = sym_comment;
	v->a[98411] = actions(4349);
	v->a[98412] = 1;
	v->a[98413] = anon_sym_DQUOTE;
	v->a[98414] = actions(4351);
	v->a[98415] = 1;
	v->a[98416] = anon_sym_DOLLAR_LBRACE;
	v->a[98417] = actions(4353);
	v->a[98418] = 1;
	v->a[98419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4921(v);
}

void	small_parse_table_4921(t_small_parse_table_array *v)
{
	v->a[98420] = actions(4355);
	v->a[98421] = 1;
	v->a[98422] = anon_sym_BQUOTE;
	v->a[98423] = actions(4347);
	v->a[98424] = 2;
	v->a[98425] = anon_sym_PIPE;
	v->a[98426] = anon_sym_RPAREN;
	v->a[98427] = state(2229);
	v->a[98428] = 3;
	v->a[98429] = sym_string;
	v->a[98430] = sym_expansion;
	v->a[98431] = sym_command_substitution;
	v->a[98432] = 3;
	v->a[98433] = actions(3);
	v->a[98434] = 1;
	v->a[98435] = sym_comment;
	v->a[98436] = actions(1205);
	v->a[98437] = 1;
	v->a[98438] = sym__concat;
	v->a[98439] = actions(1203);
	small_parse_table_4922(v);
}

void	small_parse_table_4922(t_small_parse_table_array *v)
{
	v->a[98440] = 7;
	v->a[98441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98442] = anon_sym_DOLLAR;
	v->a[98443] = anon_sym_DQUOTE;
	v->a[98444] = sym_string_content;
	v->a[98445] = anon_sym_DOLLAR_LBRACE;
	v->a[98446] = anon_sym_DOLLAR_LPAREN;
	v->a[98447] = anon_sym_BQUOTE;
	v->a[98448] = 3;
	v->a[98449] = actions(3);
	v->a[98450] = 1;
	v->a[98451] = sym_comment;
	v->a[98452] = actions(1076);
	v->a[98453] = 1;
	v->a[98454] = sym__concat;
	v->a[98455] = actions(1074);
	v->a[98456] = 7;
	v->a[98457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98458] = anon_sym_DOLLAR;
	v->a[98459] = anon_sym_DQUOTE;
	small_parse_table_4923(v);
}

void	small_parse_table_4923(t_small_parse_table_array *v)
{
	v->a[98460] = sym_string_content;
	v->a[98461] = anon_sym_DOLLAR_LBRACE;
	v->a[98462] = anon_sym_DOLLAR_LPAREN;
	v->a[98463] = anon_sym_BQUOTE;
	v->a[98464] = 3;
	v->a[98465] = actions(3);
	v->a[98466] = 1;
	v->a[98467] = sym_comment;
	v->a[98468] = actions(1100);
	v->a[98469] = 1;
	v->a[98470] = sym__concat;
	v->a[98471] = actions(1102);
	v->a[98472] = 7;
	v->a[98473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98474] = anon_sym_DOLLAR;
	v->a[98475] = anon_sym_DQUOTE;
	v->a[98476] = sym_string_content;
	v->a[98477] = anon_sym_DOLLAR_LBRACE;
	v->a[98478] = anon_sym_DOLLAR_LPAREN;
	v->a[98479] = anon_sym_BQUOTE;
	small_parse_table_4924(v);
}

void	small_parse_table_4924(t_small_parse_table_array *v)
{
	v->a[98480] = 8;
	v->a[98481] = actions(3);
	v->a[98482] = 1;
	v->a[98483] = sym_comment;
	v->a[98484] = actions(4357);
	v->a[98485] = 1;
	v->a[98486] = anon_sym_RPAREN;
	v->a[98487] = actions(4360);
	v->a[98488] = 1;
	v->a[98489] = anon_sym_RBRACE;
	v->a[98490] = actions(4362);
	v->a[98491] = 1;
	v->a[98492] = anon_sym_DQUOTE;
	v->a[98493] = actions(4365);
	v->a[98494] = 1;
	v->a[98495] = sym_raw_string;
	v->a[98496] = actions(4368);
	v->a[98497] = 1;
	v->a[98498] = aux_sym_expansion_regex_token1;
	v->a[98499] = actions(4371);
	small_parse_table_4925(v);
}

/* EOF small_parse_table_984.c */
