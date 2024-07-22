/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_714.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3570(t_small_parse_table_array *v)
{
	v->a[71400] = actions(2879);
	v->a[71401] = 1;
	v->a[71402] = aux_sym_heredoc_redirect_token1;
	v->a[71403] = state(2020);
	v->a[71404] = 1;
	v->a[71405] = sym__heredoc_expression;
	v->a[71406] = actions(1006);
	v->a[71407] = 2;
	v->a[71408] = anon_sym_AMP_AMP;
	v->a[71409] = anon_sym_PIPE_PIPE;
	v->a[71410] = state(1552);
	v->a[71411] = 2;
	v->a[71412] = sym_file_redirect;
	v->a[71413] = aux_sym_redirected_statement_repeat2;
	v->a[71414] = actions(1008);
	v->a[71415] = 7;
	v->a[71416] = anon_sym_LT;
	v->a[71417] = anon_sym_GT;
	v->a[71418] = anon_sym_GT_GT;
	v->a[71419] = anon_sym_LT_AMP;
	small_parse_table_3571(v);
}

void	small_parse_table_3571(t_small_parse_table_array *v)
{
	v->a[71420] = anon_sym_GT_AMP;
	v->a[71421] = anon_sym_GT_PIPE;
	v->a[71422] = anon_sym_LT_GT;
	v->a[71423] = 3;
	v->a[71424] = actions(3);
	v->a[71425] = 1;
	v->a[71426] = sym_comment;
	v->a[71427] = actions(694);
	v->a[71428] = 1;
	v->a[71429] = sym__concat;
	v->a[71430] = actions(692);
	v->a[71431] = 13;
	v->a[71432] = anon_sym_SEMI_SEMI;
	v->a[71433] = aux_sym_heredoc_redirect_token1;
	v->a[71434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71435] = aux_sym_concatenation_token1;
	v->a[71436] = anon_sym_DOLLAR;
	v->a[71437] = anon_sym_DQUOTE;
	v->a[71438] = sym_raw_string;
	v->a[71439] = sym_number;
	small_parse_table_3572(v);
}

void	small_parse_table_3572(t_small_parse_table_array *v)
{
	v->a[71440] = anon_sym_DOLLAR_LBRACE;
	v->a[71441] = anon_sym_DOLLAR_LPAREN;
	v->a[71442] = anon_sym_BQUOTE;
	v->a[71443] = sym_word;
	v->a[71444] = anon_sym_SEMI;
	v->a[71445] = 3;
	v->a[71446] = actions(3);
	v->a[71447] = 1;
	v->a[71448] = sym_comment;
	v->a[71449] = actions(571);
	v->a[71450] = 1;
	v->a[71451] = sym__concat;
	v->a[71452] = actions(569);
	v->a[71453] = 13;
	v->a[71454] = anon_sym_SEMI_SEMI;
	v->a[71455] = aux_sym_heredoc_redirect_token1;
	v->a[71456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71457] = aux_sym_concatenation_token1;
	v->a[71458] = anon_sym_DOLLAR;
	v->a[71459] = anon_sym_DQUOTE;
	small_parse_table_3573(v);
}

void	small_parse_table_3573(t_small_parse_table_array *v)
{
	v->a[71460] = sym_raw_string;
	v->a[71461] = sym_number;
	v->a[71462] = anon_sym_DOLLAR_LBRACE;
	v->a[71463] = anon_sym_DOLLAR_LPAREN;
	v->a[71464] = anon_sym_BQUOTE;
	v->a[71465] = sym_word;
	v->a[71466] = anon_sym_SEMI;
	v->a[71467] = 7;
	v->a[71468] = actions(3);
	v->a[71469] = 1;
	v->a[71470] = sym_comment;
	v->a[71471] = actions(1024);
	v->a[71472] = 1;
	v->a[71473] = sym_file_descriptor;
	v->a[71474] = actions(2881);
	v->a[71475] = 1;
	v->a[71476] = aux_sym_heredoc_redirect_token1;
	v->a[71477] = state(1972);
	v->a[71478] = 1;
	v->a[71479] = sym__heredoc_expression;
	small_parse_table_3574(v);
}

void	small_parse_table_3574(t_small_parse_table_array *v)
{
	v->a[71480] = actions(1006);
	v->a[71481] = 2;
	v->a[71482] = anon_sym_AMP_AMP;
	v->a[71483] = anon_sym_PIPE_PIPE;
	v->a[71484] = state(1552);
	v->a[71485] = 2;
	v->a[71486] = sym_file_redirect;
	v->a[71487] = aux_sym_redirected_statement_repeat2;
	v->a[71488] = actions(1008);
	v->a[71489] = 7;
	v->a[71490] = anon_sym_LT;
	v->a[71491] = anon_sym_GT;
	v->a[71492] = anon_sym_GT_GT;
	v->a[71493] = anon_sym_LT_AMP;
	v->a[71494] = anon_sym_GT_AMP;
	v->a[71495] = anon_sym_GT_PIPE;
	v->a[71496] = anon_sym_LT_GT;
	v->a[71497] = 5;
	v->a[71498] = actions(501);
	v->a[71499] = 1;
	small_parse_table_3575(v);
}

/* EOF small_parse_table_714.c */
