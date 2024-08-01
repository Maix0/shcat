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
	v->a[53400] = sym_heredoc_redirect;
	v->a[53401] = aux_sym_redirected_statement_repeat1;
	v->a[53402] = 3;
	v->a[53403] = actions(1436);
	v->a[53404] = 1;
	v->a[53405] = sym_comment;
	v->a[53406] = actions(2672);
	v->a[53407] = 2;
	v->a[53408] = anon_sym_PLUS;
	v->a[53409] = anon_sym_DASH;
	v->a[53410] = actions(2670);
	v->a[53411] = 8;
	v->a[53412] = anon_sym_RPAREN_RPAREN;
	v->a[53413] = anon_sym_STAR;
	v->a[53414] = anon_sym_SLASH;
	v->a[53415] = anon_sym_PERCENT;
	v->a[53416] = anon_sym_QMARK;
	v->a[53417] = anon_sym_COLON;
	v->a[53418] = anon_sym_PLUS_PLUS;
	v->a[53419] = anon_sym_DASH_DASH;
	small_parse_table_2671(v);
}

void	small_parse_table_2671(t_small_parse_table_array *v)
{
	v->a[53420] = 3;
	v->a[53421] = actions(1436);
	v->a[53422] = 1;
	v->a[53423] = sym_comment;
	v->a[53424] = actions(1048);
	v->a[53425] = 2;
	v->a[53426] = anon_sym_PLUS;
	v->a[53427] = anon_sym_DASH;
	v->a[53428] = actions(1046);
	v->a[53429] = 8;
	v->a[53430] = anon_sym_RPAREN_RPAREN;
	v->a[53431] = anon_sym_STAR;
	v->a[53432] = anon_sym_SLASH;
	v->a[53433] = anon_sym_PERCENT;
	v->a[53434] = anon_sym_QMARK;
	v->a[53435] = anon_sym_COLON;
	v->a[53436] = anon_sym_PLUS_PLUS;
	v->a[53437] = anon_sym_DASH_DASH;
	v->a[53438] = 7;
	v->a[53439] = actions(1436);
	small_parse_table_2672(v);
}

void	small_parse_table_2672(t_small_parse_table_array *v)
{
	v->a[53440] = 1;
	v->a[53441] = sym_comment;
	v->a[53442] = actions(1940);
	v->a[53443] = 1;
	v->a[53444] = anon_sym_PIPE;
	v->a[53445] = actions(2677);
	v->a[53446] = 1;
	v->a[53447] = anon_sym_GT_GT;
	v->a[53448] = actions(2680);
	v->a[53449] = 1;
	v->a[53450] = anon_sym_LT_LT;
	v->a[53451] = actions(1948);
	v->a[53452] = 2;
	v->a[53453] = anon_sym_AMP_AMP;
	v->a[53454] = anon_sym_PIPE_PIPE;
	v->a[53455] = actions(2674);
	v->a[53456] = 2;
	v->a[53457] = anon_sym_LT;
	v->a[53458] = anon_sym_GT;
	v->a[53459] = state(1281);
	small_parse_table_2673(v);
}

void	small_parse_table_2673(t_small_parse_table_array *v)
{
	v->a[53460] = 3;
	v->a[53461] = sym_file_redirect;
	v->a[53462] = sym_heredoc_redirect;
	v->a[53463] = aux_sym_redirected_statement_repeat1;
	v->a[53464] = 5;
	v->a[53465] = actions(1436);
	v->a[53466] = 1;
	v->a[53467] = sym_comment;
	v->a[53468] = actions(2683);
	v->a[53469] = 1;
	v->a[53470] = sym_variable_name;
	v->a[53471] = state(1282);
	v->a[53472] = 2;
	v->a[53473] = sym_variable_assignment;
	v->a[53474] = aux_sym__variable_assignments_repeat1;
	v->a[53475] = actions(1961);
	v->a[53476] = 3;
	v->a[53477] = anon_sym_PIPE;
	v->a[53478] = anon_sym_LT;
	v->a[53479] = anon_sym_GT;
	small_parse_table_2674(v);
}

void	small_parse_table_2674(t_small_parse_table_array *v)
{
	v->a[53480] = actions(1963);
	v->a[53481] = 4;
	v->a[53482] = anon_sym_AMP_AMP;
	v->a[53483] = anon_sym_PIPE_PIPE;
	v->a[53484] = anon_sym_GT_GT;
	v->a[53485] = anon_sym_LT_LT;
	v->a[53486] = 8;
	v->a[53487] = actions(1436);
	v->a[53488] = 1;
	v->a[53489] = sym_comment;
	v->a[53490] = actions(2686);
	v->a[53491] = 1;
	v->a[53492] = anon_sym_DOLLAR;
	v->a[53493] = actions(2688);
	v->a[53494] = 1;
	v->a[53495] = anon_sym_DOLLAR_LBRACE;
	v->a[53496] = actions(2690);
	v->a[53497] = 1;
	v->a[53498] = anon_sym_DOLLAR_LPAREN;
	v->a[53499] = actions(2692);
	small_parse_table_2675(v);
}

/* EOF small_parse_table_534.c */
