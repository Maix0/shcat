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
	v->a[22409] = 12;
	v->a[22410] = actions(3);
	v->a[22411] = 1;
	v->a[22412] = sym_comment;
	v->a[22413] = actions(682);
	v->a[22414] = 1;
	v->a[22415] = anon_sym_PIPE;
	v->a[22416] = actions(690);
	v->a[22417] = 1;
	v->a[22418] = sym_file_descriptor;
	v->a[22419] = actions(692);
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = 1;
	v->a[22421] = sym_variable_name;
	v->a[22422] = state(730);
	v->a[22423] = 1;
	v->a[22424] = sym_terminator;
	v->a[22425] = actions(680);
	v->a[22426] = 2;
	v->a[22427] = anon_sym_esac;
	v->a[22428] = anon_sym_SEMI_SEMI;
	v->a[22429] = actions(684);
	v->a[22430] = 2;
	v->a[22431] = anon_sym_AMP_AMP;
	v->a[22432] = anon_sym_PIPE_PIPE;
	v->a[22433] = actions(686);
	v->a[22434] = 2;
	v->a[22435] = anon_sym_LT_LT;
	v->a[22436] = anon_sym_LT_LT_DASH;
	v->a[22437] = state(1174);
	v->a[22438] = 2;
	v->a[22439] = sym_variable_assignment;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = aux_sym__variable_assignments_repeat1;
	v->a[22441] = actions(688);
	v->a[22442] = 3;
	v->a[22443] = aux_sym_heredoc_redirect_token1;
	v->a[22444] = anon_sym_AMP;
	v->a[22445] = anon_sym_SEMI;
	v->a[22446] = state(1176);
	v->a[22447] = 3;
	v->a[22448] = sym_file_redirect;
	v->a[22449] = sym_heredoc_redirect;
	v->a[22450] = aux_sym_redirected_statement_repeat1;
	v->a[22451] = actions(678);
	v->a[22452] = 17;
	v->a[22453] = anon_sym_LT;
	v->a[22454] = anon_sym_GT;
	v->a[22455] = anon_sym_GT_GT;
	v->a[22456] = anon_sym_LT_AMP;
	v->a[22457] = anon_sym_GT_AMP;
	v->a[22458] = anon_sym_GT_PIPE;
	v->a[22459] = anon_sym_LT_AMP_DASH;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_GT_AMP_DASH;
	v->a[22461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22462] = anon_sym_DOLLAR;
	v->a[22463] = anon_sym_DQUOTE;
	v->a[22464] = sym_raw_string;
	v->a[22465] = sym_number;
	v->a[22466] = anon_sym_DOLLAR_LBRACE;
	v->a[22467] = anon_sym_DOLLAR_LPAREN;
	v->a[22468] = anon_sym_BQUOTE;
	v->a[22469] = sym_word;
	v->a[22470] = 12;
	v->a[22471] = actions(3);
	v->a[22472] = 1;
	v->a[22473] = sym_comment;
	v->a[22474] = actions(682);
	v->a[22475] = 1;
	v->a[22476] = anon_sym_PIPE;
	v->a[22477] = actions(690);
	v->a[22478] = 1;
	v->a[22479] = sym_file_descriptor;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = actions(692);
	v->a[22481] = 1;
	v->a[22482] = sym_variable_name;
	v->a[22483] = state(683);
	v->a[22484] = 1;
	v->a[22485] = sym_terminator;
	v->a[22486] = actions(684);
	v->a[22487] = 2;
	v->a[22488] = anon_sym_AMP_AMP;
	v->a[22489] = anon_sym_PIPE_PIPE;
	v->a[22490] = actions(686);
	v->a[22491] = 2;
	v->a[22492] = anon_sym_LT_LT;
	v->a[22493] = anon_sym_LT_LT_DASH;
	v->a[22494] = actions(695);
	v->a[22495] = 2;
	v->a[22496] = anon_sym_esac;
	v->a[22497] = anon_sym_SEMI_SEMI;
	v->a[22498] = state(1174);
	v->a[22499] = 2;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
