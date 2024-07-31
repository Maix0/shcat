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
	v->a[29400] = 1;
	v->a[29401] = anon_sym_DOLLAR;
	v->a[29402] = actions(1197);
	v->a[29403] = 1;
	v->a[29404] = anon_sym_DQUOTE;
	v->a[29405] = actions(1200);
	v->a[29406] = 1;
	v->a[29407] = anon_sym_DOLLAR_LBRACE;
	v->a[29408] = actions(1203);
	v->a[29409] = 1;
	v->a[29410] = anon_sym_DOLLAR_LPAREN;
	v->a[29411] = actions(1206);
	v->a[29412] = 1;
	v->a[29413] = anon_sym_BQUOTE;
	v->a[29414] = state(404);
	v->a[29415] = 2;
	v->a[29416] = sym_concatenation;
	v->a[29417] = aux_sym_for_statement_repeat1;
	v->a[29418] = actions(1188);
	v->a[29419] = 3;
	small_parse_table_1471(v);
}

void	small_parse_table_1471(t_small_parse_table_array *v)
{
	v->a[29420] = sym_raw_string;
	v->a[29421] = sym_number;
	v->a[29422] = sym_word;
	v->a[29423] = state(685);
	v->a[29424] = 5;
	v->a[29425] = sym_arithmetic_expansion;
	v->a[29426] = sym_string;
	v->a[29427] = sym_simple_expansion;
	v->a[29428] = sym_expansion;
	v->a[29429] = sym_command_substitution;
	v->a[29430] = actions(618);
	v->a[29431] = 12;
	v->a[29432] = anon_sym_PIPE;
	v->a[29433] = anon_sym_AMP_AMP;
	v->a[29434] = anon_sym_PIPE_PIPE;
	v->a[29435] = anon_sym_LT;
	v->a[29436] = anon_sym_GT;
	v->a[29437] = anon_sym_GT_GT;
	v->a[29438] = anon_sym_LT_AMP;
	v->a[29439] = anon_sym_GT_AMP;
	small_parse_table_1472(v);
}

void	small_parse_table_1472(t_small_parse_table_array *v)
{
	v->a[29440] = anon_sym_GT_PIPE;
	v->a[29441] = anon_sym_LT_GT;
	v->a[29442] = anon_sym_LT_LT;
	v->a[29443] = anon_sym_LT_LT_DASH;
	v->a[29444] = 5;
	v->a[29445] = actions(3);
	v->a[29446] = 1;
	v->a[29447] = sym_comment;
	v->a[29448] = actions(1209);
	v->a[29449] = 1;
	v->a[29450] = aux_sym_concatenation_token1;
	v->a[29451] = actions(1211);
	v->a[29452] = 1;
	v->a[29453] = sym__concat;
	v->a[29454] = state(428);
	v->a[29455] = 1;
	v->a[29456] = aux_sym_concatenation_repeat1;
	v->a[29457] = actions(1071);
	v->a[29458] = 25;
	v->a[29459] = anon_sym_PIPE;
	small_parse_table_1473(v);
}

void	small_parse_table_1473(t_small_parse_table_array *v)
{
	v->a[29460] = anon_sym_RPAREN;
	v->a[29461] = anon_sym_SEMI_SEMI;
	v->a[29462] = anon_sym_AMP_AMP;
	v->a[29463] = anon_sym_PIPE_PIPE;
	v->a[29464] = anon_sym_LT;
	v->a[29465] = anon_sym_GT;
	v->a[29466] = anon_sym_GT_GT;
	v->a[29467] = anon_sym_LT_AMP;
	v->a[29468] = anon_sym_GT_AMP;
	v->a[29469] = anon_sym_GT_PIPE;
	v->a[29470] = anon_sym_LT_GT;
	v->a[29471] = anon_sym_LT_LT;
	v->a[29472] = anon_sym_LT_LT_DASH;
	v->a[29473] = aux_sym_heredoc_redirect_token1;
	v->a[29474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29475] = anon_sym_DOLLAR;
	v->a[29476] = anon_sym_DQUOTE;
	v->a[29477] = sym_raw_string;
	v->a[29478] = sym_number;
	v->a[29479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1474(v);
}

void	small_parse_table_1474(t_small_parse_table_array *v)
{
	v->a[29480] = anon_sym_DOLLAR_LPAREN;
	v->a[29481] = anon_sym_BQUOTE;
	v->a[29482] = sym_word;
	v->a[29483] = anon_sym_SEMI;
	v->a[29484] = 9;
	v->a[29485] = actions(3);
	v->a[29486] = 1;
	v->a[29487] = sym_comment;
	v->a[29488] = actions(746);
	v->a[29489] = 1;
	v->a[29490] = anon_sym_PIPE;
	v->a[29491] = actions(1185);
	v->a[29492] = 1;
	v->a[29493] = sym_variable_name;
	v->a[29494] = actions(1215);
	v->a[29495] = 1;
	v->a[29496] = aux_sym_heredoc_redirect_token1;
	v->a[29497] = actions(850);
	v->a[29498] = 2;
	v->a[29499] = anon_sym_LT_LT;
	small_parse_table_1475(v);
}

/* EOF small_parse_table_294.c */
