/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_294.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1470(t_small_parse_table_array *v)
{
	v->a[29400] = sym_heredoc_redirect;
	v->a[29401] = aux_sym_redirected_statement_repeat1;
	v->a[29402] = actions(1004);
	v->a[29403] = 8;
	v->a[29404] = anon_sym_SEMI_SEMI;
	v->a[29405] = anon_sym_AMP_AMP;
	v->a[29406] = anon_sym_PIPE_PIPE;
	v->a[29407] = anon_sym_LT_LT;
	v->a[29408] = anon_sym_LT_LT_DASH;
	v->a[29409] = aux_sym_heredoc_redirect_token1;
	v->a[29410] = anon_sym_AMP;
	v->a[29411] = anon_sym_SEMI;
	v->a[29412] = actions(1000);
	v->a[29413] = 20;
	v->a[29414] = anon_sym_LT;
	v->a[29415] = anon_sym_GT;
	v->a[29416] = anon_sym_GT_GT;
	v->a[29417] = anon_sym_AMP_GT;
	v->a[29418] = anon_sym_AMP_GT_GT;
	v->a[29419] = anon_sym_LT_AMP;
	small_parse_table_1471(v);
}

void	small_parse_table_1471(t_small_parse_table_array *v)
{
	v->a[29420] = anon_sym_GT_AMP;
	v->a[29421] = anon_sym_GT_PIPE;
	v->a[29422] = anon_sym_LT_AMP_DASH;
	v->a[29423] = anon_sym_GT_AMP_DASH;
	v->a[29424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29425] = anon_sym_DOLLAR;
	v->a[29426] = anon_sym_DQUOTE;
	v->a[29427] = sym_raw_string;
	v->a[29428] = aux_sym_number_token1;
	v->a[29429] = aux_sym_number_token2;
	v->a[29430] = anon_sym_DOLLAR_LBRACE;
	v->a[29431] = anon_sym_DOLLAR_LPAREN;
	v->a[29432] = anon_sym_BQUOTE;
	v->a[29433] = sym_word;
	v->a[29434] = 6;
	v->a[29435] = actions(3);
	v->a[29436] = 1;
	v->a[29437] = sym_comment;
	v->a[29438] = actions(1159);
	v->a[29439] = 1;
	small_parse_table_1472(v);
}

void	small_parse_table_1472(t_small_parse_table_array *v)
{
	v->a[29440] = aux_sym_concatenation_token1;
	v->a[29441] = actions(1167);
	v->a[29442] = 1;
	v->a[29443] = sym__concat;
	v->a[29444] = state(291);
	v->a[29445] = 1;
	v->a[29446] = aux_sym_concatenation_repeat1;
	v->a[29447] = actions(1127);
	v->a[29448] = 2;
	v->a[29449] = sym_file_descriptor;
	v->a[29450] = sym__bare_dollar;
	v->a[29451] = actions(1129);
	v->a[29452] = 31;
	v->a[29453] = anon_sym_LPAREN;
	v->a[29454] = anon_sym_PIPE;
	v->a[29455] = anon_sym_RPAREN;
	v->a[29456] = anon_sym_SEMI_SEMI;
	v->a[29457] = anon_sym_AMP_AMP;
	v->a[29458] = anon_sym_PIPE_PIPE;
	v->a[29459] = anon_sym_LT;
	small_parse_table_1473(v);
}

void	small_parse_table_1473(t_small_parse_table_array *v)
{
	v->a[29460] = anon_sym_GT;
	v->a[29461] = anon_sym_GT_GT;
	v->a[29462] = anon_sym_AMP_GT;
	v->a[29463] = anon_sym_AMP_GT_GT;
	v->a[29464] = anon_sym_LT_AMP;
	v->a[29465] = anon_sym_GT_AMP;
	v->a[29466] = anon_sym_GT_PIPE;
	v->a[29467] = anon_sym_LT_AMP_DASH;
	v->a[29468] = anon_sym_GT_AMP_DASH;
	v->a[29469] = anon_sym_LT_LT;
	v->a[29470] = anon_sym_LT_LT_DASH;
	v->a[29471] = aux_sym_heredoc_redirect_token1;
	v->a[29472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29473] = anon_sym_AMP;
	v->a[29474] = anon_sym_DOLLAR;
	v->a[29475] = anon_sym_DQUOTE;
	v->a[29476] = sym_raw_string;
	v->a[29477] = aux_sym_number_token1;
	v->a[29478] = aux_sym_number_token2;
	v->a[29479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1474(v);
}

void	small_parse_table_1474(t_small_parse_table_array *v)
{
	v->a[29480] = anon_sym_DOLLAR_LPAREN;
	v->a[29481] = anon_sym_BQUOTE;
	v->a[29482] = sym_word;
	v->a[29483] = anon_sym_SEMI;
	v->a[29484] = 10;
	v->a[29485] = actions(3);
	v->a[29486] = 1;
	v->a[29487] = sym_comment;
	v->a[29488] = actions(1002);
	v->a[29489] = 1;
	v->a[29490] = anon_sym_PIPE;
	v->a[29491] = actions(1006);
	v->a[29492] = 1;
	v->a[29493] = sym_file_descriptor;
	v->a[29494] = actions(1095);
	v->a[29495] = 1;
	v->a[29496] = sym_variable_name;
	v->a[29497] = actions(1062);
	v->a[29498] = 2;
	v->a[29499] = anon_sym_LT_LT;
	small_parse_table_1475(v);
}

/* EOF small_parse_table_294.c */
