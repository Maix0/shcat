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
	v->a[22401] = anon_sym_DQUOTE;
	v->a[22402] = sym_raw_string;
	v->a[22403] = sym_number;
	v->a[22404] = anon_sym_DOLLAR_LBRACE;
	v->a[22405] = anon_sym_DOLLAR_LPAREN;
	v->a[22406] = anon_sym_BQUOTE;
	v->a[22407] = sym_word;
	v->a[22408] = anon_sym_SEMI;
	v->a[22409] = 6;
	v->a[22410] = actions(3);
	v->a[22411] = 1;
	v->a[22412] = sym_comment;
	v->a[22413] = actions(837);
	v->a[22414] = 1;
	v->a[22415] = aux_sym_concatenation_token1;
	v->a[22416] = actions(921);
	v->a[22417] = 1;
	v->a[22418] = sym__bare_dollar;
	v->a[22419] = actions(1007);
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = 1;
	v->a[22421] = sym__concat;
	v->a[22422] = state(290);
	v->a[22423] = 1;
	v->a[22424] = aux_sym_concatenation_repeat1;
	v->a[22425] = actions(923);
	v->a[22426] = 20;
	v->a[22427] = anon_sym_esac;
	v->a[22428] = anon_sym_PIPE;
	v->a[22429] = anon_sym_SEMI_SEMI;
	v->a[22430] = anon_sym_AMP_AMP;
	v->a[22431] = anon_sym_PIPE_PIPE;
	v->a[22432] = anon_sym_LT;
	v->a[22433] = anon_sym_GT;
	v->a[22434] = anon_sym_GT_GT;
	v->a[22435] = anon_sym_LT_LT;
	v->a[22436] = aux_sym_heredoc_redirect_token1;
	v->a[22437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22438] = anon_sym_DOLLAR;
	v->a[22439] = anon_sym_DQUOTE;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = sym_raw_string;
	v->a[22441] = sym_number;
	v->a[22442] = anon_sym_DOLLAR_LBRACE;
	v->a[22443] = anon_sym_DOLLAR_LPAREN;
	v->a[22444] = anon_sym_BQUOTE;
	v->a[22445] = sym_word;
	v->a[22446] = anon_sym_SEMI;
	v->a[22447] = 5;
	v->a[22448] = actions(3);
	v->a[22449] = 1;
	v->a[22450] = sym_comment;
	v->a[22451] = actions(423);
	v->a[22452] = 1;
	v->a[22453] = sym_variable_name;
	v->a[22454] = state(260);
	v->a[22455] = 2;
	v->a[22456] = sym_concatenation;
	v->a[22457] = aux_sym_for_statement_repeat1;
	v->a[22458] = state(589);
	v->a[22459] = 5;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = sym_arithmetic_expansion;
	v->a[22461] = sym_string;
	v->a[22462] = sym_simple_expansion;
	v->a[22463] = sym_expansion;
	v->a[22464] = sym_command_substitution;
	v->a[22465] = actions(421);
	v->a[22466] = 16;
	v->a[22467] = anon_sym_PIPE;
	v->a[22468] = anon_sym_AMP_AMP;
	v->a[22469] = anon_sym_PIPE_PIPE;
	v->a[22470] = anon_sym_LT;
	v->a[22471] = anon_sym_GT;
	v->a[22472] = anon_sym_GT_GT;
	v->a[22473] = anon_sym_LT_LT;
	v->a[22474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22475] = anon_sym_DOLLAR;
	v->a[22476] = anon_sym_DQUOTE;
	v->a[22477] = sym_raw_string;
	v->a[22478] = sym_number;
	v->a[22479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = anon_sym_DOLLAR_LPAREN;
	v->a[22481] = anon_sym_BQUOTE;
	v->a[22482] = sym_word;
	v->a[22483] = 6;
	v->a[22484] = actions(3);
	v->a[22485] = 1;
	v->a[22486] = sym_comment;
	v->a[22487] = actions(917);
	v->a[22488] = 1;
	v->a[22489] = sym_variable_name;
	v->a[22490] = actions(927);
	v->a[22491] = 1;
	v->a[22492] = aux_sym_concatenation_token1;
	v->a[22493] = actions(1009);
	v->a[22494] = 1;
	v->a[22495] = sym__concat;
	v->a[22496] = state(267);
	v->a[22497] = 1;
	v->a[22498] = aux_sym_concatenation_repeat1;
	v->a[22499] = actions(919);
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
