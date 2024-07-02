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
	v->a[29400] = actions(1069);
	v->a[29401] = 1;
	v->a[29402] = anon_sym_DOLLAR;
	v->a[29403] = actions(1071);
	v->a[29404] = 1;
	v->a[29405] = anon_sym_DQUOTE;
	v->a[29406] = actions(1073);
	v->a[29407] = 1;
	v->a[29408] = anon_sym_DOLLAR_LBRACE;
	v->a[29409] = actions(1075);
	v->a[29410] = 1;
	v->a[29411] = anon_sym_DOLLAR_LPAREN;
	v->a[29412] = actions(1077);
	v->a[29413] = 1;
	v->a[29414] = anon_sym_BQUOTE;
	v->a[29415] = actions(1079);
	v->a[29416] = 1;
	v->a[29417] = sym_file_descriptor;
	v->a[29418] = actions(1110);
	v->a[29419] = 1;
	small_parse_table_1471(v);
}

void	small_parse_table_1471(t_small_parse_table_array *v)
{
	v->a[29420] = aux_sym_heredoc_redirect_token1;
	v->a[29421] = state(1308);
	v->a[29422] = 1;
	v->a[29423] = aux_sym__heredoc_command;
	v->a[29424] = state(1725);
	v->a[29425] = 1;
	v->a[29426] = sym_concatenation;
	v->a[29427] = state(1951);
	v->a[29428] = 1;
	v->a[29429] = sym__heredoc_pipeline;
	v->a[29430] = state(1952);
	v->a[29431] = 1;
	v->a[29432] = sym__heredoc_expression;
	v->a[29433] = actions(1061);
	v->a[29434] = 2;
	v->a[29435] = anon_sym_AMP_AMP;
	v->a[29436] = anon_sym_PIPE_PIPE;
	v->a[29437] = state(1477);
	v->a[29438] = 2;
	v->a[29439] = sym_file_redirect;
	small_parse_table_1472(v);
}

void	small_parse_table_1472(t_small_parse_table_array *v)
{
	v->a[29440] = aux_sym_redirected_statement_repeat2;
	v->a[29441] = actions(1057);
	v->a[29442] = 3;
	v->a[29443] = sym_raw_string;
	v->a[29444] = sym_number;
	v->a[29445] = sym_word;
	v->a[29446] = state(1589);
	v->a[29447] = 5;
	v->a[29448] = sym_arithmetic_expansion;
	v->a[29449] = sym_string;
	v->a[29450] = sym_simple_expansion;
	v->a[29451] = sym_expansion;
	v->a[29452] = sym_command_substitution;
	v->a[29453] = actions(1063);
	v->a[29454] = 7;
	v->a[29455] = anon_sym_LT;
	v->a[29456] = anon_sym_GT;
	v->a[29457] = anon_sym_GT_GT;
	v->a[29458] = anon_sym_LT_AMP;
	v->a[29459] = anon_sym_GT_AMP;
	small_parse_table_1473(v);
}

void	small_parse_table_1473(t_small_parse_table_array *v)
{
	v->a[29460] = anon_sym_GT_PIPE;
	v->a[29461] = anon_sym_LT_GT;
	v->a[29462] = 16;
	v->a[29463] = actions(3);
	v->a[29464] = 1;
	v->a[29465] = sym_comment;
	v->a[29466] = actions(321);
	v->a[29467] = 1;
	v->a[29468] = anon_sym_LPAREN;
	v->a[29469] = actions(453);
	v->a[29470] = 1;
	v->a[29471] = sym_file_descriptor;
	v->a[29472] = actions(1114);
	v->a[29473] = 1;
	v->a[29474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29475] = actions(1116);
	v->a[29476] = 1;
	v->a[29477] = anon_sym_DOLLAR;
	v->a[29478] = actions(1118);
	v->a[29479] = 1;
	small_parse_table_1474(v);
}

void	small_parse_table_1474(t_small_parse_table_array *v)
{
	v->a[29480] = anon_sym_DQUOTE;
	v->a[29481] = actions(1120);
	v->a[29482] = 1;
	v->a[29483] = anon_sym_DOLLAR_LBRACE;
	v->a[29484] = actions(1122);
	v->a[29485] = 1;
	v->a[29486] = anon_sym_DOLLAR_LPAREN;
	v->a[29487] = actions(1124);
	v->a[29488] = 1;
	v->a[29489] = anon_sym_BQUOTE;
	v->a[29490] = actions(1126);
	v->a[29491] = 1;
	v->a[29492] = sym__bare_dollar;
	v->a[29493] = state(480);
	v->a[29494] = 1;
	v->a[29495] = aux_sym_command_repeat2;
	v->a[29496] = state(924);
	v->a[29497] = 1;
	v->a[29498] = sym_concatenation;
	v->a[29499] = state(1578);
	small_parse_table_1475(v);
}

/* EOF small_parse_table_294.c */
