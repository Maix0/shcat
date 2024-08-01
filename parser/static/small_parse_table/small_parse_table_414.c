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
	v->a[41400] = anon_sym_PIPE;
	v->a[41401] = actions(584);
	v->a[41402] = 1;
	v->a[41403] = anon_sym_LT_LT;
	v->a[41404] = actions(586);
	v->a[41405] = 1;
	v->a[41406] = anon_sym_SEMI;
	v->a[41407] = actions(1878);
	v->a[41408] = 1;
	v->a[41409] = aux_sym_heredoc_redirect_token1;
	v->a[41410] = state(300);
	v->a[41411] = 1;
	v->a[41412] = sym_terminator;
	v->a[41413] = actions(582);
	v->a[41414] = 2;
	v->a[41415] = anon_sym_AMP_AMP;
	v->a[41416] = anon_sym_PIPE_PIPE;
	v->a[41417] = actions(591);
	v->a[41418] = 2;
	v->a[41419] = anon_sym_esac;
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = anon_sym_SEMI_SEMI;
	v->a[41421] = actions(1876);
	v->a[41422] = 3;
	v->a[41423] = anon_sym_LT;
	v->a[41424] = anon_sym_GT;
	v->a[41425] = anon_sym_GT_GT;
	v->a[41426] = state(971);
	v->a[41427] = 3;
	v->a[41428] = sym_file_redirect;
	v->a[41429] = sym_heredoc_redirect;
	v->a[41430] = aux_sym_redirected_statement_repeat1;
	v->a[41431] = 10;
	v->a[41432] = actions(3);
	v->a[41433] = 1;
	v->a[41434] = sym_comment;
	v->a[41435] = actions(580);
	v->a[41436] = 1;
	v->a[41437] = anon_sym_PIPE;
	v->a[41438] = actions(584);
	v->a[41439] = 1;
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = anon_sym_LT_LT;
	v->a[41441] = actions(586);
	v->a[41442] = 1;
	v->a[41443] = anon_sym_SEMI;
	v->a[41444] = actions(1878);
	v->a[41445] = 1;
	v->a[41446] = aux_sym_heredoc_redirect_token1;
	v->a[41447] = state(297);
	v->a[41448] = 1;
	v->a[41449] = sym_terminator;
	v->a[41450] = actions(582);
	v->a[41451] = 2;
	v->a[41452] = anon_sym_AMP_AMP;
	v->a[41453] = anon_sym_PIPE_PIPE;
	v->a[41454] = actions(591);
	v->a[41455] = 2;
	v->a[41456] = anon_sym_esac;
	v->a[41457] = anon_sym_SEMI_SEMI;
	v->a[41458] = actions(1876);
	v->a[41459] = 3;
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = anon_sym_LT;
	v->a[41461] = anon_sym_GT;
	v->a[41462] = anon_sym_GT_GT;
	v->a[41463] = state(971);
	v->a[41464] = 3;
	v->a[41465] = sym_file_redirect;
	v->a[41466] = sym_heredoc_redirect;
	v->a[41467] = aux_sym_redirected_statement_repeat1;
	v->a[41468] = 4;
	v->a[41469] = actions(3);
	v->a[41470] = 1;
	v->a[41471] = sym_comment;
	v->a[41472] = actions(771);
	v->a[41473] = 1;
	v->a[41474] = sym_variable_name;
	v->a[41475] = state(995);
	v->a[41476] = 2;
	v->a[41477] = sym_variable_assignment;
	v->a[41478] = aux_sym__variable_assignments_repeat1;
	v->a[41479] = actions(576);
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = 12;
	v->a[41481] = anon_sym_LT;
	v->a[41482] = anon_sym_GT;
	v->a[41483] = anon_sym_GT_GT;
	v->a[41484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41485] = anon_sym_DOLLAR;
	v->a[41486] = anon_sym_DQUOTE;
	v->a[41487] = sym_raw_string;
	v->a[41488] = sym_number;
	v->a[41489] = anon_sym_DOLLAR_LBRACE;
	v->a[41490] = anon_sym_DOLLAR_LPAREN;
	v->a[41491] = anon_sym_BQUOTE;
	v->a[41492] = sym_word;
	v->a[41493] = 10;
	v->a[41494] = actions(3);
	v->a[41495] = 1;
	v->a[41496] = sym_comment;
	v->a[41497] = actions(580);
	v->a[41498] = 1;
	v->a[41499] = anon_sym_PIPE;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
