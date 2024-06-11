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
	v->a[41400] = anon_sym_PIPE_PIPE;
	v->a[41401] = anon_sym_LT;
	v->a[41402] = anon_sym_GT;
	v->a[41403] = anon_sym_GT_GT;
	v->a[41404] = anon_sym_AMP_GT;
	v->a[41405] = anon_sym_AMP_GT_GT;
	v->a[41406] = anon_sym_LT_AMP;
	v->a[41407] = anon_sym_GT_AMP;
	v->a[41408] = anon_sym_GT_PIPE;
	v->a[41409] = anon_sym_LT_AMP_DASH;
	v->a[41410] = anon_sym_GT_AMP_DASH;
	v->a[41411] = anon_sym_LT_LT;
	v->a[41412] = anon_sym_LT_LT_DASH;
	v->a[41413] = aux_sym_heredoc_redirect_token1;
	v->a[41414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41415] = anon_sym_AMP;
	v->a[41416] = aux_sym_concatenation_token1;
	v->a[41417] = anon_sym_DOLLAR;
	v->a[41418] = anon_sym_DQUOTE;
	v->a[41419] = sym_raw_string;
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = sym_number;
	v->a[41421] = anon_sym_DOLLAR_LBRACE;
	v->a[41422] = anon_sym_DOLLAR_LPAREN;
	v->a[41423] = anon_sym_BQUOTE;
	v->a[41424] = sym_word;
	v->a[41425] = anon_sym_SEMI;
	v->a[41426] = 14;
	v->a[41427] = actions(3);
	v->a[41428] = 1;
	v->a[41429] = sym_comment;
	v->a[41430] = actions(547);
	v->a[41431] = 1;
	v->a[41432] = sym_file_descriptor;
	v->a[41433] = actions(1011);
	v->a[41434] = 1;
	v->a[41435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41436] = actions(1013);
	v->a[41437] = 1;
	v->a[41438] = anon_sym_DOLLAR;
	v->a[41439] = actions(1015);
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = 1;
	v->a[41441] = anon_sym_DQUOTE;
	v->a[41442] = actions(1017);
	v->a[41443] = 1;
	v->a[41444] = anon_sym_DOLLAR_LBRACE;
	v->a[41445] = actions(1019);
	v->a[41446] = 1;
	v->a[41447] = anon_sym_DOLLAR_LPAREN;
	v->a[41448] = actions(1021);
	v->a[41449] = 1;
	v->a[41450] = anon_sym_BQUOTE;
	v->a[41451] = actions(1023);
	v->a[41452] = 1;
	v->a[41453] = sym__bare_dollar;
	v->a[41454] = state(475);
	v->a[41455] = 1;
	v->a[41456] = aux_sym_command_repeat2;
	v->a[41457] = state(1114);
	v->a[41458] = 1;
	v->a[41459] = sym_concatenation;
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = actions(1009);
	v->a[41461] = 3;
	v->a[41462] = sym_raw_string;
	v->a[41463] = sym_number;
	v->a[41464] = sym_word;
	v->a[41465] = state(951);
	v->a[41466] = 5;
	v->a[41467] = sym_arithmetic_expansion;
	v->a[41468] = sym_string;
	v->a[41469] = sym_simple_expansion;
	v->a[41470] = sym_expansion;
	v->a[41471] = sym_command_substitution;
	v->a[41472] = actions(545);
	v->a[41473] = 15;
	v->a[41474] = anon_sym_PIPE;
	v->a[41475] = anon_sym_AMP_AMP;
	v->a[41476] = anon_sym_PIPE_PIPE;
	v->a[41477] = anon_sym_LT;
	v->a[41478] = anon_sym_GT;
	v->a[41479] = anon_sym_GT_GT;
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = anon_sym_AMP_GT;
	v->a[41481] = anon_sym_AMP_GT_GT;
	v->a[41482] = anon_sym_LT_AMP;
	v->a[41483] = anon_sym_GT_AMP;
	v->a[41484] = anon_sym_GT_PIPE;
	v->a[41485] = anon_sym_LT_AMP_DASH;
	v->a[41486] = anon_sym_GT_AMP_DASH;
	v->a[41487] = anon_sym_LT_LT;
	v->a[41488] = anon_sym_LT_LT_DASH;
	v->a[41489] = 3;
	v->a[41490] = actions(3);
	v->a[41491] = 1;
	v->a[41492] = sym_comment;
	v->a[41493] = actions(1076);
	v->a[41494] = 3;
	v->a[41495] = sym_file_descriptor;
	v->a[41496] = sym__concat;
	v->a[41497] = sym__bare_dollar;
	v->a[41498] = actions(1074);
	v->a[41499] = 30;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
