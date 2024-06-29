/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_224.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1120(t_small_parse_table_array *v)
{
	v->a[22400] = anon_sym_LT_AMP_DASH;
	v->a[22401] = anon_sym_GT_AMP_DASH;
	v->a[22402] = anon_sym_LT_LT;
	v->a[22403] = anon_sym_LT_LT_DASH;
	v->a[22404] = aux_sym_heredoc_redirect_token1;
	v->a[22405] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22406] = anon_sym_AMP;
	v->a[22407] = anon_sym_DOLLAR;
	v->a[22408] = anon_sym_DQUOTE;
	v->a[22409] = sym_raw_string;
	v->a[22410] = sym_number;
	v->a[22411] = anon_sym_DOLLAR_LBRACE;
	v->a[22412] = anon_sym_DOLLAR_LPAREN;
	v->a[22413] = anon_sym_BQUOTE;
	v->a[22414] = sym_word;
	v->a[22415] = anon_sym_SEMI;
	v->a[22416] = 14;
	v->a[22417] = actions(3);
	v->a[22418] = 1;
	v->a[22419] = sym_comment;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = actions(577);
	v->a[22421] = 1;
	v->a[22422] = sym_file_descriptor;
	v->a[22423] = actions(585);
	v->a[22424] = 1;
	v->a[22425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22426] = actions(588);
	v->a[22427] = 1;
	v->a[22428] = anon_sym_DOLLAR;
	v->a[22429] = actions(591);
	v->a[22430] = 1;
	v->a[22431] = anon_sym_DQUOTE;
	v->a[22432] = actions(594);
	v->a[22433] = 1;
	v->a[22434] = anon_sym_DOLLAR_LBRACE;
	v->a[22435] = actions(597);
	v->a[22436] = 1;
	v->a[22437] = anon_sym_DOLLAR_LPAREN;
	v->a[22438] = actions(600);
	v->a[22439] = 1;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = anon_sym_BQUOTE;
	v->a[22441] = actions(603);
	v->a[22442] = 1;
	v->a[22443] = sym__bare_dollar;
	v->a[22444] = state(206);
	v->a[22445] = 1;
	v->a[22446] = aux_sym_command_repeat2;
	v->a[22447] = state(712);
	v->a[22448] = 1;
	v->a[22449] = sym_concatenation;
	v->a[22450] = actions(582);
	v->a[22451] = 3;
	v->a[22452] = sym_raw_string;
	v->a[22453] = sym_number;
	v->a[22454] = sym_word;
	v->a[22455] = state(334);
	v->a[22456] = 5;
	v->a[22457] = sym_arithmetic_expansion;
	v->a[22458] = sym_string;
	v->a[22459] = sym_simple_expansion;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = sym_expansion;
	v->a[22461] = sym_command_substitution;
	v->a[22462] = actions(557);
	v->a[22463] = 20;
	v->a[22464] = anon_sym_PIPE;
	v->a[22465] = anon_sym_RPAREN;
	v->a[22466] = anon_sym_SEMI_SEMI;
	v->a[22467] = anon_sym_AMP_AMP;
	v->a[22468] = anon_sym_PIPE_PIPE;
	v->a[22469] = anon_sym_LT;
	v->a[22470] = anon_sym_GT;
	v->a[22471] = anon_sym_GT_GT;
	v->a[22472] = anon_sym_AMP_GT;
	v->a[22473] = anon_sym_AMP_GT_GT;
	v->a[22474] = anon_sym_LT_AMP;
	v->a[22475] = anon_sym_GT_AMP;
	v->a[22476] = anon_sym_GT_PIPE;
	v->a[22477] = anon_sym_LT_AMP_DASH;
	v->a[22478] = anon_sym_GT_AMP_DASH;
	v->a[22479] = anon_sym_LT_LT;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = anon_sym_LT_LT_DASH;
	v->a[22481] = aux_sym_heredoc_redirect_token1;
	v->a[22482] = anon_sym_AMP;
	v->a[22483] = anon_sym_SEMI;
	v->a[22484] = 5;
	v->a[22485] = actions(3);
	v->a[22486] = 1;
	v->a[22487] = sym_comment;
	v->a[22488] = actions(538);
	v->a[22489] = 2;
	v->a[22490] = sym_file_descriptor;
	v->a[22491] = sym_variable_name;
	v->a[22492] = state(211);
	v->a[22493] = 2;
	v->a[22494] = sym_concatenation;
	v->a[22495] = aux_sym_for_statement_repeat1;
	v->a[22496] = state(361);
	v->a[22497] = 5;
	v->a[22498] = sym_arithmetic_expansion;
	v->a[22499] = sym_string;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
