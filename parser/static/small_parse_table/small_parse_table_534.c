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
	v->a[53400] = sym_comment;
	v->a[53401] = actions(3744);
	v->a[53402] = 1;
	v->a[53403] = sym__special_character;
	v->a[53404] = state(1166);
	v->a[53405] = 1;
	v->a[53406] = aux_sym__literal_repeat1;
	v->a[53407] = actions(3197);
	v->a[53408] = 6;
	v->a[53409] = sym_file_descriptor;
	v->a[53410] = sym_test_operator;
	v->a[53411] = sym__bare_dollar;
	v->a[53412] = sym__brace_start;
	v->a[53413] = ts_builtin_sym_end;
	v->a[53414] = aux_sym_heredoc_redirect_token1;
	v->a[53415] = actions(3195);
	v->a[53416] = 30;
	v->a[53417] = anon_sym_PIPE;
	v->a[53418] = anon_sym_SEMI_SEMI;
	v->a[53419] = anon_sym_PIPE_AMP;
	small_parse_table_2671(v);
}

void	small_parse_table_2671(t_small_parse_table_array *v)
{
	v->a[53420] = anon_sym_AMP_AMP;
	v->a[53421] = anon_sym_PIPE_PIPE;
	v->a[53422] = anon_sym_LT;
	v->a[53423] = anon_sym_GT;
	v->a[53424] = anon_sym_GT_GT;
	v->a[53425] = anon_sym_AMP_GT;
	v->a[53426] = anon_sym_AMP_GT_GT;
	v->a[53427] = anon_sym_LT_AMP;
	v->a[53428] = anon_sym_GT_AMP;
	v->a[53429] = anon_sym_GT_PIPE;
	v->a[53430] = anon_sym_LT_AMP_DASH;
	v->a[53431] = anon_sym_GT_AMP_DASH;
	v->a[53432] = anon_sym_LT_LT;
	v->a[53433] = anon_sym_LT_LT_DASH;
	v->a[53434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53435] = anon_sym_AMP;
	v->a[53436] = anon_sym_DOLLAR;
	v->a[53437] = anon_sym_DQUOTE;
	v->a[53438] = sym_raw_string;
	v->a[53439] = aux_sym_number_token1;
	small_parse_table_2672(v);
}

void	small_parse_table_2672(t_small_parse_table_array *v)
{
	v->a[53440] = aux_sym_number_token2;
	v->a[53441] = anon_sym_DOLLAR_LBRACE;
	v->a[53442] = anon_sym_DOLLAR_LPAREN;
	v->a[53443] = anon_sym_BQUOTE;
	v->a[53444] = anon_sym_DOLLAR_BQUOTE;
	v->a[53445] = sym_word;
	v->a[53446] = anon_sym_SEMI;
	v->a[53447] = 9;
	v->a[53448] = actions(3);
	v->a[53449] = 1;
	v->a[53450] = sym_comment;
	v->a[53451] = actions(2632);
	v->a[53452] = 1;
	v->a[53453] = aux_sym_heredoc_redirect_token1;
	v->a[53454] = actions(3747);
	v->a[53455] = 1;
	v->a[53456] = sym_variable_name;
	v->a[53457] = actions(2516);
	v->a[53458] = 2;
	v->a[53459] = anon_sym_PIPE;
	small_parse_table_2673(v);
}

void	small_parse_table_2673(t_small_parse_table_array *v)
{
	v->a[53460] = anon_sym_PIPE_AMP;
	v->a[53461] = state(2601);
	v->a[53462] = 2;
	v->a[53463] = sym_variable_assignment;
	v->a[53464] = aux_sym_variable_assignments_repeat1;
	v->a[53465] = actions(2526);
	v->a[53466] = 3;
	v->a[53467] = sym_file_descriptor;
	v->a[53468] = sym_test_operator;
	v->a[53469] = sym__brace_start;
	v->a[53470] = state(2613);
	v->a[53471] = 3;
	v->a[53472] = sym_file_redirect;
	v->a[53473] = sym_heredoc_redirect;
	v->a[53474] = aux_sym_redirected_statement_repeat1;
	v->a[53475] = actions(2630);
	v->a[53476] = 4;
	v->a[53477] = anon_sym_AMP_AMP;
	v->a[53478] = anon_sym_PIPE_PIPE;
	v->a[53479] = anon_sym_LT_LT;
	small_parse_table_2674(v);
}

void	small_parse_table_2674(t_small_parse_table_array *v)
{
	v->a[53480] = anon_sym_LT_LT_DASH;
	v->a[53481] = actions(2512);
	v->a[53482] = 22;
	v->a[53483] = anon_sym_LT;
	v->a[53484] = anon_sym_GT;
	v->a[53485] = anon_sym_GT_GT;
	v->a[53486] = anon_sym_AMP_GT;
	v->a[53487] = anon_sym_AMP_GT_GT;
	v->a[53488] = anon_sym_LT_AMP;
	v->a[53489] = anon_sym_GT_AMP;
	v->a[53490] = anon_sym_GT_PIPE;
	v->a[53491] = anon_sym_LT_AMP_DASH;
	v->a[53492] = anon_sym_GT_AMP_DASH;
	v->a[53493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53494] = anon_sym_DOLLAR;
	v->a[53495] = sym__special_character;
	v->a[53496] = anon_sym_DQUOTE;
	v->a[53497] = sym_raw_string;
	v->a[53498] = aux_sym_number_token1;
	v->a[53499] = aux_sym_number_token2;
	small_parse_table_2675(v);
}

/* EOF small_parse_table_534.c */
