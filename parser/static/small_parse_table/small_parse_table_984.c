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
	v->a[98400] = anon_sym_GT_AMP_DASH;
	v->a[98401] = anon_sym_LT_LT;
	v->a[98402] = anon_sym_LT_LT_DASH;
	v->a[98403] = anon_sym_AMP;
	v->a[98404] = anon_sym_SEMI;
	v->a[98405] = 6;
	v->a[98406] = actions(3);
	v->a[98407] = 1;
	v->a[98408] = sym_comment;
	v->a[98409] = actions(5267);
	v->a[98410] = 1;
	v->a[98411] = aux_sym_concatenation_token1;
	v->a[98412] = actions(5269);
	v->a[98413] = 1;
	v->a[98414] = sym__concat;
	v->a[98415] = state(2107);
	v->a[98416] = 1;
	v->a[98417] = aux_sym_concatenation_repeat1;
	v->a[98418] = actions(1182);
	v->a[98419] = 2;
	small_parse_table_4921(v);
}

void	small_parse_table_4921(t_small_parse_table_array *v)
{
	v->a[98420] = sym_file_descriptor;
	v->a[98421] = aux_sym_heredoc_redirect_token1;
	v->a[98422] = actions(1180);
	v->a[98423] = 20;
	v->a[98424] = anon_sym_PIPE;
	v->a[98425] = anon_sym_SEMI_SEMI;
	v->a[98426] = anon_sym_PIPE_AMP;
	v->a[98427] = anon_sym_AMP_AMP;
	v->a[98428] = anon_sym_PIPE_PIPE;
	v->a[98429] = anon_sym_LT;
	v->a[98430] = anon_sym_GT;
	v->a[98431] = anon_sym_GT_GT;
	v->a[98432] = anon_sym_AMP_GT;
	v->a[98433] = anon_sym_AMP_GT_GT;
	v->a[98434] = anon_sym_LT_AMP;
	v->a[98435] = anon_sym_GT_AMP;
	v->a[98436] = anon_sym_GT_PIPE;
	v->a[98437] = anon_sym_LT_AMP_DASH;
	v->a[98438] = anon_sym_GT_AMP_DASH;
	v->a[98439] = anon_sym_LT_LT;
	small_parse_table_4922(v);
}

void	small_parse_table_4922(t_small_parse_table_array *v)
{
	v->a[98440] = anon_sym_LT_LT_DASH;
	v->a[98441] = anon_sym_AMP;
	v->a[98442] = anon_sym_BQUOTE;
	v->a[98443] = anon_sym_SEMI;
	v->a[98444] = 19;
	v->a[98445] = actions(3);
	v->a[98446] = 1;
	v->a[98447] = sym_comment;
	v->a[98448] = actions(5369);
	v->a[98449] = 1;
	v->a[98450] = sym_word;
	v->a[98451] = actions(5371);
	v->a[98452] = 1;
	v->a[98453] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98454] = actions(5373);
	v->a[98455] = 1;
	v->a[98456] = anon_sym_DOLLAR;
	v->a[98457] = actions(5375);
	v->a[98458] = 1;
	v->a[98459] = sym__special_character;
	small_parse_table_4923(v);
}

void	small_parse_table_4923(t_small_parse_table_array *v)
{
	v->a[98460] = actions(5377);
	v->a[98461] = 1;
	v->a[98462] = anon_sym_DQUOTE;
	v->a[98463] = actions(5381);
	v->a[98464] = 1;
	v->a[98465] = aux_sym_number_token1;
	v->a[98466] = actions(5383);
	v->a[98467] = 1;
	v->a[98468] = aux_sym_number_token2;
	v->a[98469] = actions(5385);
	v->a[98470] = 1;
	v->a[98471] = anon_sym_DOLLAR_LBRACE;
	v->a[98472] = actions(5387);
	v->a[98473] = 1;
	v->a[98474] = anon_sym_DOLLAR_LPAREN;
	v->a[98475] = actions(5389);
	v->a[98476] = 1;
	v->a[98477] = anon_sym_BQUOTE;
	v->a[98478] = actions(5391);
	v->a[98479] = 1;
	small_parse_table_4924(v);
}

void	small_parse_table_4924(t_small_parse_table_array *v)
{
	v->a[98480] = anon_sym_DOLLAR_BQUOTE;
	v->a[98481] = actions(5393);
	v->a[98482] = 1;
	v->a[98483] = sym__comment_word;
	v->a[98484] = actions(5395);
	v->a[98485] = 1;
	v->a[98486] = sym__empty_value;
	v->a[98487] = actions(5397);
	v->a[98488] = 1;
	v->a[98489] = sym__brace_start;
	v->a[98490] = state(1939);
	v->a[98491] = 1;
	v->a[98492] = aux_sym__literal_repeat1;
	v->a[98493] = state(2118);
	v->a[98494] = 1;
	v->a[98495] = sym_concatenation;
	v->a[98496] = actions(5379);
	v->a[98497] = 2;
	v->a[98498] = sym_test_operator;
	v->a[98499] = sym_raw_string;
	small_parse_table_4925(v);
}

/* EOF small_parse_table_984.c */
