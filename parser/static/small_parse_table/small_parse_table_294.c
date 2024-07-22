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
	v->a[29400] = anon_sym_BQUOTE;
	v->a[29401] = sym_word;
	v->a[29402] = 6;
	v->a[29403] = actions(3);
	v->a[29404] = 1;
	v->a[29405] = sym_comment;
	v->a[29406] = actions(1101);
	v->a[29407] = 1;
	v->a[29408] = aux_sym_concatenation_token1;
	v->a[29409] = actions(1103);
	v->a[29410] = 1;
	v->a[29411] = sym__concat;
	v->a[29412] = state(380);
	v->a[29413] = 1;
	v->a[29414] = aux_sym_concatenation_repeat1;
	v->a[29415] = actions(1097);
	v->a[29416] = 3;
	v->a[29417] = sym_file_descriptor;
	v->a[29418] = sym__bare_dollar;
	v->a[29419] = ts_builtin_sym_end;
	small_parse_table_1471(v);
}

void	small_parse_table_1471(t_small_parse_table_array *v)
{
	v->a[29420] = actions(1099);
	v->a[29421] = 25;
	v->a[29422] = anon_sym_LPAREN;
	v->a[29423] = anon_sym_PIPE;
	v->a[29424] = anon_sym_SEMI_SEMI;
	v->a[29425] = anon_sym_AMP_AMP;
	v->a[29426] = anon_sym_PIPE_PIPE;
	v->a[29427] = anon_sym_LT;
	v->a[29428] = anon_sym_GT;
	v->a[29429] = anon_sym_GT_GT;
	v->a[29430] = anon_sym_LT_AMP;
	v->a[29431] = anon_sym_GT_AMP;
	v->a[29432] = anon_sym_GT_PIPE;
	v->a[29433] = anon_sym_LT_GT;
	v->a[29434] = anon_sym_LT_LT;
	v->a[29435] = anon_sym_LT_LT_DASH;
	v->a[29436] = aux_sym_heredoc_redirect_token1;
	v->a[29437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29438] = anon_sym_DOLLAR;
	v->a[29439] = anon_sym_DQUOTE;
	small_parse_table_1472(v);
}

void	small_parse_table_1472(t_small_parse_table_array *v)
{
	v->a[29440] = sym_raw_string;
	v->a[29441] = sym_number;
	v->a[29442] = anon_sym_DOLLAR_LBRACE;
	v->a[29443] = anon_sym_DOLLAR_LPAREN;
	v->a[29444] = anon_sym_BQUOTE;
	v->a[29445] = sym_word;
	v->a[29446] = anon_sym_SEMI;
	v->a[29447] = 7;
	v->a[29448] = actions(3);
	v->a[29449] = 1;
	v->a[29450] = sym_comment;
	v->a[29451] = actions(1030);
	v->a[29452] = 1;
	v->a[29453] = sym_variable_name;
	v->a[29454] = actions(1075);
	v->a[29455] = 1;
	v->a[29456] = sym_file_descriptor;
	v->a[29457] = state(1137);
	v->a[29458] = 2;
	v->a[29459] = sym_variable_assignment;
	small_parse_table_1473(v);
}

void	small_parse_table_1473(t_small_parse_table_array *v)
{
	v->a[29460] = aux_sym__variable_assignments_repeat1;
	v->a[29461] = state(1194);
	v->a[29462] = 3;
	v->a[29463] = sym_file_redirect;
	v->a[29464] = sym_heredoc_redirect;
	v->a[29465] = aux_sym_redirected_statement_repeat1;
	v->a[29466] = actions(780);
	v->a[29467] = 9;
	v->a[29468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29469] = anon_sym_DOLLAR;
	v->a[29470] = anon_sym_DQUOTE;
	v->a[29471] = sym_raw_string;
	v->a[29472] = sym_number;
	v->a[29473] = anon_sym_DOLLAR_LBRACE;
	v->a[29474] = anon_sym_DOLLAR_LPAREN;
	v->a[29475] = anon_sym_BQUOTE;
	v->a[29476] = sym_word;
	v->a[29477] = actions(782);
	v->a[29478] = 15;
	v->a[29479] = anon_sym_PIPE;
	small_parse_table_1474(v);
}

void	small_parse_table_1474(t_small_parse_table_array *v)
{
	v->a[29480] = anon_sym_SEMI_SEMI;
	v->a[29481] = anon_sym_AMP_AMP;
	v->a[29482] = anon_sym_PIPE_PIPE;
	v->a[29483] = anon_sym_LT;
	v->a[29484] = anon_sym_GT;
	v->a[29485] = anon_sym_GT_GT;
	v->a[29486] = anon_sym_LT_AMP;
	v->a[29487] = anon_sym_GT_AMP;
	v->a[29488] = anon_sym_GT_PIPE;
	v->a[29489] = anon_sym_LT_GT;
	v->a[29490] = anon_sym_LT_LT;
	v->a[29491] = anon_sym_LT_LT_DASH;
	v->a[29492] = aux_sym_heredoc_redirect_token1;
	v->a[29493] = anon_sym_SEMI;
	v->a[29494] = 20;
	v->a[29495] = actions(3);
	v->a[29496] = 1;
	v->a[29497] = sym_comment;
	v->a[29498] = actions(321);
	v->a[29499] = 1;
	small_parse_table_1475(v);
}

/* EOF small_parse_table_294.c */
