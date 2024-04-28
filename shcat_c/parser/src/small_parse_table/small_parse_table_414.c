/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_414.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2070(t_small_parse_table_array *v)
{
	v->a[41400] = aux_sym_variable_assignments_repeat1;
	v->a[41401] = state(4697);
	v->a[41402] = 3;
	v->a[41403] = sym_file_redirect;
	v->a[41404] = sym_heredoc_redirect;
	v->a[41405] = aux_sym_redirected_statement_repeat1;
	v->a[41406] = actions(4247);
	v->a[41407] = 17;
	v->a[41408] = anon_sym_LPAREN_LPAREN;
	v->a[41409] = anon_sym_LT_LT_LT;
	v->a[41410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41411] = anon_sym_DOLLAR_LBRACK;
	v->a[41412] = anon_sym_DOLLAR;
	v->a[41413] = sym__special_character;
	v->a[41414] = anon_sym_DQUOTE;
	v->a[41415] = sym_raw_string;
	v->a[41416] = sym_ansi_c_string;
	v->a[41417] = aux_sym_number_token1;
	v->a[41418] = aux_sym_number_token2;
	v->a[41419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = anon_sym_DOLLAR_LPAREN;
	v->a[41421] = anon_sym_DOLLAR_BQUOTE;
	v->a[41422] = anon_sym_LT_LPAREN;
	v->a[41423] = anon_sym_GT_LPAREN;
	v->a[41424] = sym_word;
	v->a[41425] = actions(4253);
	v->a[41426] = 20;
	v->a[41427] = anon_sym_SEMI;
	v->a[41428] = anon_sym_PIPE_PIPE;
	v->a[41429] = anon_sym_AMP_AMP;
	v->a[41430] = anon_sym_PIPE;
	v->a[41431] = anon_sym_AMP;
	v->a[41432] = anon_sym_LT;
	v->a[41433] = anon_sym_GT;
	v->a[41434] = anon_sym_LT_LT;
	v->a[41435] = anon_sym_GT_GT;
	v->a[41436] = anon_sym_SEMI_SEMI;
	v->a[41437] = anon_sym_PIPE_AMP;
	v->a[41438] = anon_sym_AMP_GT;
	v->a[41439] = anon_sym_AMP_GT_GT;
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = anon_sym_LT_AMP;
	v->a[41441] = anon_sym_GT_AMP;
	v->a[41442] = anon_sym_GT_PIPE;
	v->a[41443] = anon_sym_LT_AMP_DASH;
	v->a[41444] = anon_sym_GT_AMP_DASH;
	v->a[41445] = anon_sym_LT_LT_DASH;
	v->a[41446] = anon_sym_BQUOTE;
	v->a[41447] = 3;
	v->a[41448] = actions(3);
	v->a[41449] = 1;
	v->a[41450] = sym_comment;
	v->a[41451] = actions(1302);
	v->a[41452] = 7;
	v->a[41453] = sym_file_descriptor;
	v->a[41454] = sym__concat;
	v->a[41455] = sym_test_operator;
	v->a[41456] = sym__bare_dollar;
	v->a[41457] = sym__brace_start;
	v->a[41458] = ts_builtin_sym_end;
	v->a[41459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = actions(1300);
	v->a[41461] = 41;
	v->a[41462] = anon_sym_LPAREN_LPAREN;
	v->a[41463] = anon_sym_SEMI;
	v->a[41464] = anon_sym_PIPE_PIPE;
	v->a[41465] = anon_sym_AMP_AMP;
	v->a[41466] = anon_sym_PIPE;
	v->a[41467] = anon_sym_AMP;
	v->a[41468] = anon_sym_EQ_EQ;
	v->a[41469] = anon_sym_LT;
	v->a[41470] = anon_sym_GT;
	v->a[41471] = anon_sym_LT_LT;
	v->a[41472] = anon_sym_GT_GT;
	v->a[41473] = anon_sym_LPAREN;
	v->a[41474] = anon_sym_SEMI_SEMI;
	v->a[41475] = anon_sym_PIPE_AMP;
	v->a[41476] = anon_sym_EQ_TILDE;
	v->a[41477] = anon_sym_AMP_GT;
	v->a[41478] = anon_sym_AMP_GT_GT;
	v->a[41479] = anon_sym_LT_AMP;
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = anon_sym_GT_AMP;
	v->a[41481] = anon_sym_GT_PIPE;
	v->a[41482] = anon_sym_LT_AMP_DASH;
	v->a[41483] = anon_sym_GT_AMP_DASH;
	v->a[41484] = anon_sym_LT_LT_DASH;
	v->a[41485] = anon_sym_LT_LT_LT;
	v->a[41486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41487] = anon_sym_DOLLAR_LBRACK;
	v->a[41488] = aux_sym_concatenation_token1;
	v->a[41489] = anon_sym_DOLLAR;
	v->a[41490] = sym__special_character;
	v->a[41491] = anon_sym_DQUOTE;
	v->a[41492] = sym_raw_string;
	v->a[41493] = sym_ansi_c_string;
	v->a[41494] = aux_sym_number_token1;
	v->a[41495] = aux_sym_number_token2;
	v->a[41496] = anon_sym_DOLLAR_LBRACE;
	v->a[41497] = anon_sym_DOLLAR_LPAREN;
	v->a[41498] = anon_sym_BQUOTE;
	v->a[41499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
