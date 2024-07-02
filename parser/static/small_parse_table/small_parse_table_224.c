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
	v->a[22400] = anon_sym_GT_GT_EQ;
	v->a[22401] = anon_sym_AMP_EQ;
	v->a[22402] = anon_sym_CARET_EQ;
	v->a[22403] = anon_sym_PIPE_EQ;
	v->a[22404] = anon_sym_EQ_EQ;
	v->a[22405] = anon_sym_BANG_EQ;
	v->a[22406] = anon_sym_LT_EQ;
	v->a[22407] = anon_sym_GT_EQ;
	v->a[22408] = anon_sym_QMARK;
	v->a[22409] = anon_sym_COLON;
	v->a[22410] = anon_sym_PLUS_PLUS2;
	v->a[22411] = anon_sym_DASH_DASH2;
	v->a[22412] = 6;
	v->a[22413] = actions(3);
	v->a[22414] = 1;
	v->a[22415] = sym_comment;
	v->a[22416] = actions(361);
	v->a[22417] = 1;
	v->a[22418] = sym_file_descriptor;
	v->a[22419] = actions(417);
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = 1;
	v->a[22421] = sym_variable_name;
	v->a[22422] = actions(415);
	v->a[22423] = 2;
	v->a[22424] = aux_sym__simple_variable_name_token1;
	v->a[22425] = aux_sym__multiline_variable_name_token1;
	v->a[22426] = actions(413);
	v->a[22427] = 9;
	v->a[22428] = anon_sym_BANG;
	v->a[22429] = anon_sym_DASH;
	v->a[22430] = anon_sym_STAR;
	v->a[22431] = anon_sym_QMARK;
	v->a[22432] = anon_sym_DOLLAR;
	v->a[22433] = anon_sym_POUND;
	v->a[22434] = anon_sym_AT;
	v->a[22435] = anon_sym_0;
	v->a[22436] = anon_sym__;
	v->a[22437] = actions(363);
	v->a[22438] = 21;
	v->a[22439] = anon_sym_PIPE;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = anon_sym_AMP_AMP;
	v->a[22441] = anon_sym_PIPE_PIPE;
	v->a[22442] = anon_sym_LT;
	v->a[22443] = anon_sym_GT;
	v->a[22444] = anon_sym_GT_GT;
	v->a[22445] = anon_sym_LT_AMP;
	v->a[22446] = anon_sym_GT_AMP;
	v->a[22447] = anon_sym_GT_PIPE;
	v->a[22448] = anon_sym_LT_GT;
	v->a[22449] = anon_sym_LT_LT;
	v->a[22450] = anon_sym_LT_LT_DASH;
	v->a[22451] = aux_sym_heredoc_redirect_token1;
	v->a[22452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22453] = anon_sym_DQUOTE;
	v->a[22454] = sym_raw_string;
	v->a[22455] = sym_number;
	v->a[22456] = anon_sym_DOLLAR_LBRACE;
	v->a[22457] = anon_sym_DOLLAR_LPAREN;
	v->a[22458] = anon_sym_BQUOTE;
	v->a[22459] = sym_word;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = 12;
	v->a[22461] = actions(3);
	v->a[22462] = 1;
	v->a[22463] = sym_comment;
	v->a[22464] = actions(692);
	v->a[22465] = 1;
	v->a[22466] = anon_sym_PIPE;
	v->a[22467] = actions(702);
	v->a[22468] = 1;
	v->a[22469] = sym_file_descriptor;
	v->a[22470] = actions(765);
	v->a[22471] = 1;
	v->a[22472] = sym_variable_name;
	v->a[22473] = state(668);
	v->a[22474] = 1;
	v->a[22475] = sym_terminator;
	v->a[22476] = actions(694);
	v->a[22477] = 2;
	v->a[22478] = anon_sym_esac;
	v->a[22479] = anon_sym_SEMI_SEMI;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = actions(759);
	v->a[22481] = 2;
	v->a[22482] = anon_sym_AMP_AMP;
	v->a[22483] = anon_sym_PIPE_PIPE;
	v->a[22484] = actions(761);
	v->a[22485] = 2;
	v->a[22486] = anon_sym_LT_LT;
	v->a[22487] = anon_sym_LT_LT_DASH;
	v->a[22488] = state(1048);
	v->a[22489] = 2;
	v->a[22490] = sym_variable_assignment;
	v->a[22491] = aux_sym__variable_assignments_repeat1;
	v->a[22492] = actions(763);
	v->a[22493] = 3;
	v->a[22494] = aux_sym_heredoc_redirect_token1;
	v->a[22495] = anon_sym_AMP;
	v->a[22496] = anon_sym_SEMI;
	v->a[22497] = state(1059);
	v->a[22498] = 3;
	v->a[22499] = sym_file_redirect;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
