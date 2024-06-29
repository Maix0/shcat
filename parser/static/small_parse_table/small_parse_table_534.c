/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_534.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2670(t_small_parse_table_array *v)
{
	v->a[53400] = anon_sym_GT_PIPE;
	v->a[53401] = anon_sym_LT_AMP_DASH;
	v->a[53402] = anon_sym_GT_AMP_DASH;
	v->a[53403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53404] = anon_sym_DOLLAR;
	v->a[53405] = anon_sym_DQUOTE;
	v->a[53406] = sym_raw_string;
	v->a[53407] = sym_number;
	v->a[53408] = anon_sym_DOLLAR_LBRACE;
	v->a[53409] = anon_sym_DOLLAR_LPAREN;
	v->a[53410] = sym_word;
	v->a[53411] = 4;
	v->a[53412] = actions(3);
	v->a[53413] = 1;
	v->a[53414] = sym_comment;
	v->a[53415] = actions(1522);
	v->a[53416] = 1;
	v->a[53417] = anon_sym_BQUOTE;
	v->a[53418] = actions(1524);
	v->a[53419] = 2;
	small_parse_table_2671(v);
}

void	small_parse_table_2671(t_small_parse_table_array *v)
{
	v->a[53420] = sym_file_descriptor;
	v->a[53421] = sym_variable_name;
	v->a[53422] = actions(1520);
	v->a[53423] = 26;
	v->a[53424] = anon_sym_for;
	v->a[53425] = anon_sym_while;
	v->a[53426] = anon_sym_until;
	v->a[53427] = anon_sym_if;
	v->a[53428] = anon_sym_case;
	v->a[53429] = anon_sym_LPAREN;
	v->a[53430] = anon_sym_LBRACE;
	v->a[53431] = anon_sym_BANG;
	v->a[53432] = anon_sym_LT;
	v->a[53433] = anon_sym_GT;
	v->a[53434] = anon_sym_GT_GT;
	v->a[53435] = anon_sym_AMP_GT;
	v->a[53436] = anon_sym_AMP_GT_GT;
	v->a[53437] = anon_sym_LT_AMP;
	v->a[53438] = anon_sym_GT_AMP;
	v->a[53439] = anon_sym_GT_PIPE;
	small_parse_table_2672(v);
}

void	small_parse_table_2672(t_small_parse_table_array *v)
{
	v->a[53440] = anon_sym_LT_AMP_DASH;
	v->a[53441] = anon_sym_GT_AMP_DASH;
	v->a[53442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53443] = anon_sym_DOLLAR;
	v->a[53444] = anon_sym_DQUOTE;
	v->a[53445] = sym_raw_string;
	v->a[53446] = sym_number;
	v->a[53447] = anon_sym_DOLLAR_LBRACE;
	v->a[53448] = anon_sym_DOLLAR_LPAREN;
	v->a[53449] = sym_word;
	v->a[53450] = 12;
	v->a[53451] = actions(3);
	v->a[53452] = 1;
	v->a[53453] = sym_comment;
	v->a[53454] = actions(760);
	v->a[53455] = 1;
	v->a[53456] = sym_file_descriptor;
	v->a[53457] = actions(1772);
	v->a[53458] = 1;
	v->a[53459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2673(v);
}

void	small_parse_table_2673(t_small_parse_table_array *v)
{
	v->a[53460] = actions(1774);
	v->a[53461] = 1;
	v->a[53462] = anon_sym_DOLLAR;
	v->a[53463] = actions(1776);
	v->a[53464] = 1;
	v->a[53465] = anon_sym_DQUOTE;
	v->a[53466] = actions(1778);
	v->a[53467] = 1;
	v->a[53468] = anon_sym_DOLLAR_LBRACE;
	v->a[53469] = actions(1780);
	v->a[53470] = 1;
	v->a[53471] = anon_sym_DOLLAR_LPAREN;
	v->a[53472] = actions(1782);
	v->a[53473] = 1;
	v->a[53474] = anon_sym_BQUOTE;
	v->a[53475] = state(1726);
	v->a[53476] = 1;
	v->a[53477] = sym_concatenation;
	v->a[53478] = actions(1784);
	v->a[53479] = 3;
	small_parse_table_2674(v);
}

void	small_parse_table_2674(t_small_parse_table_array *v)
{
	v->a[53480] = sym_raw_string;
	v->a[53481] = sym_number;
	v->a[53482] = sym_word;
	v->a[53483] = state(1468);
	v->a[53484] = 5;
	v->a[53485] = sym_arithmetic_expansion;
	v->a[53486] = sym_string;
	v->a[53487] = sym_simple_expansion;
	v->a[53488] = sym_expansion;
	v->a[53489] = sym_command_substitution;
	v->a[53490] = actions(758);
	v->a[53491] = 13;
	v->a[53492] = anon_sym_AMP_AMP;
	v->a[53493] = anon_sym_PIPE_PIPE;
	v->a[53494] = anon_sym_LT;
	v->a[53495] = anon_sym_GT;
	v->a[53496] = anon_sym_GT_GT;
	v->a[53497] = anon_sym_AMP_GT;
	v->a[53498] = anon_sym_AMP_GT_GT;
	v->a[53499] = anon_sym_LT_AMP;
	small_parse_table_2675(v);
}

/* EOF small_parse_table_534.c */
