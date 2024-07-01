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
	v->a[22400] = sym_concatenation;
	v->a[22401] = aux_sym_for_statement_repeat1;
	v->a[22402] = actions(720);
	v->a[22403] = 3;
	v->a[22404] = sym_raw_string;
	v->a[22405] = sym_number;
	v->a[22406] = sym_word;
	v->a[22407] = state(521);
	v->a[22408] = 5;
	v->a[22409] = sym_arithmetic_expansion;
	v->a[22410] = sym_string;
	v->a[22411] = sym_simple_expansion;
	v->a[22412] = sym_expansion;
	v->a[22413] = sym_command_substitution;
	v->a[22414] = actions(554);
	v->a[22415] = 16;
	v->a[22416] = anon_sym_PIPE;
	v->a[22417] = anon_sym_SEMI_SEMI;
	v->a[22418] = anon_sym_AMP_AMP;
	v->a[22419] = anon_sym_PIPE_PIPE;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = anon_sym_LT;
	v->a[22421] = anon_sym_GT;
	v->a[22422] = anon_sym_GT_GT;
	v->a[22423] = anon_sym_LT_AMP;
	v->a[22424] = anon_sym_GT_AMP;
	v->a[22425] = anon_sym_GT_PIPE;
	v->a[22426] = anon_sym_LT_GT;
	v->a[22427] = anon_sym_LT_LT;
	v->a[22428] = anon_sym_LT_LT_DASH;
	v->a[22429] = aux_sym_heredoc_redirect_token1;
	v->a[22430] = anon_sym_AMP;
	v->a[22431] = anon_sym_SEMI;
	v->a[22432] = 12;
	v->a[22433] = actions(3);
	v->a[22434] = 1;
	v->a[22435] = sym_comment;
	v->a[22436] = actions(499);
	v->a[22437] = 1;
	v->a[22438] = sym_file_descriptor;
	v->a[22439] = actions(775);
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = 1;
	v->a[22441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22442] = actions(778);
	v->a[22443] = 1;
	v->a[22444] = anon_sym_DOLLAR;
	v->a[22445] = actions(781);
	v->a[22446] = 1;
	v->a[22447] = anon_sym_DQUOTE;
	v->a[22448] = actions(784);
	v->a[22449] = 1;
	v->a[22450] = anon_sym_DOLLAR_LBRACE;
	v->a[22451] = actions(787);
	v->a[22452] = 1;
	v->a[22453] = anon_sym_DOLLAR_LPAREN;
	v->a[22454] = actions(790);
	v->a[22455] = 1;
	v->a[22456] = anon_sym_BQUOTE;
	v->a[22457] = state(233);
	v->a[22458] = 2;
	v->a[22459] = sym_concatenation;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = aux_sym_for_statement_repeat1;
	v->a[22461] = actions(772);
	v->a[22462] = 3;
	v->a[22463] = sym_raw_string;
	v->a[22464] = sym_number;
	v->a[22465] = sym_word;
	v->a[22466] = state(463);
	v->a[22467] = 5;
	v->a[22468] = sym_arithmetic_expansion;
	v->a[22469] = sym_string;
	v->a[22470] = sym_simple_expansion;
	v->a[22471] = sym_expansion;
	v->a[22472] = sym_command_substitution;
	v->a[22473] = actions(504);
	v->a[22474] = 17;
	v->a[22475] = anon_sym_esac;
	v->a[22476] = anon_sym_PIPE;
	v->a[22477] = anon_sym_SEMI_SEMI;
	v->a[22478] = anon_sym_AMP_AMP;
	v->a[22479] = anon_sym_PIPE_PIPE;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = anon_sym_LT;
	v->a[22481] = anon_sym_GT;
	v->a[22482] = anon_sym_GT_GT;
	v->a[22483] = anon_sym_LT_AMP;
	v->a[22484] = anon_sym_GT_AMP;
	v->a[22485] = anon_sym_GT_PIPE;
	v->a[22486] = anon_sym_LT_GT;
	v->a[22487] = anon_sym_LT_LT;
	v->a[22488] = anon_sym_LT_LT_DASH;
	v->a[22489] = aux_sym_heredoc_redirect_token1;
	v->a[22490] = anon_sym_AMP;
	v->a[22491] = anon_sym_SEMI;
	v->a[22492] = 3;
	v->a[22493] = actions(664);
	v->a[22494] = 1;
	v->a[22495] = sym_comment;
	v->a[22496] = actions(793);
	v->a[22497] = 13;
	v->a[22498] = anon_sym_PIPE;
	v->a[22499] = anon_sym_EQ;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
