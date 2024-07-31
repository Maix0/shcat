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
	v->a[22400] = anon_sym_DOLLAR;
	v->a[22401] = actions(57);
	v->a[22402] = 1;
	v->a[22403] = anon_sym_DQUOTE;
	v->a[22404] = actions(61);
	v->a[22405] = 1;
	v->a[22406] = anon_sym_DOLLAR_LBRACE;
	v->a[22407] = actions(63);
	v->a[22408] = 1;
	v->a[22409] = anon_sym_DOLLAR_LPAREN;
	v->a[22410] = actions(535);
	v->a[22411] = 1;
	v->a[22412] = sym__bare_dollar;
	v->a[22413] = state(268);
	v->a[22414] = 1;
	v->a[22415] = aux_sym_command_repeat2;
	v->a[22416] = state(614);
	v->a[22417] = 1;
	v->a[22418] = sym_concatenation;
	v->a[22419] = actions(778);
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = 3;
	v->a[22421] = sym_raw_string;
	v->a[22422] = sym_number;
	v->a[22423] = sym_word;
	v->a[22424] = state(449);
	v->a[22425] = 5;
	v->a[22426] = sym_arithmetic_expansion;
	v->a[22427] = sym_string;
	v->a[22428] = sym_simple_expansion;
	v->a[22429] = sym_expansion;
	v->a[22430] = sym_command_substitution;
	v->a[22431] = actions(565);
	v->a[22432] = 16;
	v->a[22433] = anon_sym_PIPE;
	v->a[22434] = anon_sym_SEMI_SEMI;
	v->a[22435] = anon_sym_AMP_AMP;
	v->a[22436] = anon_sym_PIPE_PIPE;
	v->a[22437] = anon_sym_LT;
	v->a[22438] = anon_sym_GT;
	v->a[22439] = anon_sym_GT_GT;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = anon_sym_LT_AMP;
	v->a[22441] = anon_sym_GT_AMP;
	v->a[22442] = anon_sym_GT_PIPE;
	v->a[22443] = anon_sym_LT_GT;
	v->a[22444] = anon_sym_LT_LT;
	v->a[22445] = anon_sym_LT_LT_DASH;
	v->a[22446] = aux_sym_heredoc_redirect_token1;
	v->a[22447] = anon_sym_BQUOTE;
	v->a[22448] = anon_sym_SEMI;
	v->a[22449] = 12;
	v->a[22450] = actions(3);
	v->a[22451] = 1;
	v->a[22452] = sym_comment;
	v->a[22453] = actions(613);
	v->a[22454] = 1;
	v->a[22455] = ts_builtin_sym_end;
	v->a[22456] = actions(783);
	v->a[22457] = 1;
	v->a[22458] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22459] = actions(786);
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = 1;
	v->a[22461] = anon_sym_DOLLAR;
	v->a[22462] = actions(789);
	v->a[22463] = 1;
	v->a[22464] = anon_sym_DQUOTE;
	v->a[22465] = actions(792);
	v->a[22466] = 1;
	v->a[22467] = anon_sym_DOLLAR_LBRACE;
	v->a[22468] = actions(795);
	v->a[22469] = 1;
	v->a[22470] = anon_sym_DOLLAR_LPAREN;
	v->a[22471] = actions(798);
	v->a[22472] = 1;
	v->a[22473] = anon_sym_BQUOTE;
	v->a[22474] = state(258);
	v->a[22475] = 2;
	v->a[22476] = sym_concatenation;
	v->a[22477] = aux_sym_for_statement_repeat1;
	v->a[22478] = actions(780);
	v->a[22479] = 3;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = sym_raw_string;
	v->a[22481] = sym_number;
	v->a[22482] = sym_word;
	v->a[22483] = state(418);
	v->a[22484] = 5;
	v->a[22485] = sym_arithmetic_expansion;
	v->a[22486] = sym_string;
	v->a[22487] = sym_simple_expansion;
	v->a[22488] = sym_expansion;
	v->a[22489] = sym_command_substitution;
	v->a[22490] = actions(618);
	v->a[22491] = 15;
	v->a[22492] = anon_sym_PIPE;
	v->a[22493] = anon_sym_SEMI_SEMI;
	v->a[22494] = anon_sym_AMP_AMP;
	v->a[22495] = anon_sym_PIPE_PIPE;
	v->a[22496] = anon_sym_LT;
	v->a[22497] = anon_sym_GT;
	v->a[22498] = anon_sym_GT_GT;
	v->a[22499] = anon_sym_LT_AMP;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
