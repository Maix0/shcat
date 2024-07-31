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
	v->a[53400] = actions(932);
	v->a[53401] = 1;
	v->a[53402] = anon_sym_DOLLAR;
	v->a[53403] = actions(934);
	v->a[53404] = 1;
	v->a[53405] = anon_sym_DQUOTE;
	v->a[53406] = actions(936);
	v->a[53407] = 1;
	v->a[53408] = anon_sym_DOLLAR_LBRACE;
	v->a[53409] = actions(938);
	v->a[53410] = 1;
	v->a[53411] = anon_sym_DOLLAR_LPAREN;
	v->a[53412] = actions(940);
	v->a[53413] = 1;
	v->a[53414] = anon_sym_BQUOTE;
	v->a[53415] = actions(1966);
	v->a[53416] = 1;
	v->a[53417] = aux_sym_heredoc_redirect_token1;
	v->a[53418] = state(1095);
	v->a[53419] = 1;
	small_parse_table_2671(v);
}

void	small_parse_table_2671(t_small_parse_table_array *v)
{
	v->a[53420] = aux_sym__heredoc_command;
	v->a[53421] = state(1465);
	v->a[53422] = 1;
	v->a[53423] = sym_concatenation;
	v->a[53424] = actions(920);
	v->a[53425] = 3;
	v->a[53426] = sym_raw_string;
	v->a[53427] = sym_number;
	v->a[53428] = sym_word;
	v->a[53429] = state(1287);
	v->a[53430] = 5;
	v->a[53431] = sym_arithmetic_expansion;
	v->a[53432] = sym_string;
	v->a[53433] = sym_simple_expansion;
	v->a[53434] = sym_expansion;
	v->a[53435] = sym_command_substitution;
	v->a[53436] = 5;
	v->a[53437] = actions(3);
	v->a[53438] = 1;
	v->a[53439] = sym_comment;
	small_parse_table_2672(v);
}

void	small_parse_table_2672(t_small_parse_table_array *v)
{
	v->a[53440] = actions(1712);
	v->a[53441] = 1;
	v->a[53442] = aux_sym_heredoc_redirect_token1;
	v->a[53443] = actions(1968);
	v->a[53444] = 1;
	v->a[53445] = anon_sym_PIPE;
	v->a[53446] = state(1049);
	v->a[53447] = 1;
	v->a[53448] = aux_sym_pipeline_repeat1;
	v->a[53449] = actions(1717);
	v->a[53450] = 14;
	v->a[53451] = anon_sym_RPAREN;
	v->a[53452] = anon_sym_SEMI_SEMI;
	v->a[53453] = anon_sym_AMP_AMP;
	v->a[53454] = anon_sym_PIPE_PIPE;
	v->a[53455] = anon_sym_LT;
	v->a[53456] = anon_sym_GT;
	v->a[53457] = anon_sym_GT_GT;
	v->a[53458] = anon_sym_LT_AMP;
	v->a[53459] = anon_sym_GT_AMP;
	small_parse_table_2673(v);
}

void	small_parse_table_2673(t_small_parse_table_array *v)
{
	v->a[53460] = anon_sym_GT_PIPE;
	v->a[53461] = anon_sym_LT_GT;
	v->a[53462] = anon_sym_LT_LT;
	v->a[53463] = anon_sym_LT_LT_DASH;
	v->a[53464] = anon_sym_SEMI;
	v->a[53465] = 12;
	v->a[53466] = actions(3);
	v->a[53467] = 1;
	v->a[53468] = sym_comment;
	v->a[53469] = actions(1952);
	v->a[53470] = 1;
	v->a[53471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53472] = actions(1956);
	v->a[53473] = 1;
	v->a[53474] = anon_sym_DQUOTE;
	v->a[53475] = actions(1958);
	v->a[53476] = 1;
	v->a[53477] = anon_sym_DOLLAR_LBRACE;
	v->a[53478] = actions(1960);
	v->a[53479] = 1;
	small_parse_table_2674(v);
}

void	small_parse_table_2674(t_small_parse_table_array *v)
{
	v->a[53480] = anon_sym_DOLLAR_LPAREN;
	v->a[53481] = actions(1962);
	v->a[53482] = 1;
	v->a[53483] = anon_sym_BQUOTE;
	v->a[53484] = actions(1973);
	v->a[53485] = 1;
	v->a[53486] = anon_sym_DOLLAR;
	v->a[53487] = actions(1975);
	v->a[53488] = 1;
	v->a[53489] = sym__comment_word;
	v->a[53490] = actions(1977);
	v->a[53491] = 1;
	v->a[53492] = sym__empty_value;
	v->a[53493] = state(565);
	v->a[53494] = 1;
	v->a[53495] = sym_concatenation;
	v->a[53496] = actions(1971);
	v->a[53497] = 3;
	v->a[53498] = sym_raw_string;
	v->a[53499] = sym_number;
	small_parse_table_2675(v);
}

/* EOF small_parse_table_534.c */
