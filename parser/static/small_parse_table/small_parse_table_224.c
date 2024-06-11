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
	v->a[22400] = sym_raw_string;
	v->a[22401] = sym_number;
	v->a[22402] = sym_word;
	v->a[22403] = state(361);
	v->a[22404] = 5;
	v->a[22405] = sym_arithmetic_expansion;
	v->a[22406] = sym_string;
	v->a[22407] = sym_simple_expansion;
	v->a[22408] = sym_expansion;
	v->a[22409] = sym_command_substitution;
	v->a[22410] = actions(557);
	v->a[22411] = 20;
	v->a[22412] = anon_sym_esac;
	v->a[22413] = anon_sym_PIPE;
	v->a[22414] = anon_sym_SEMI_SEMI;
	v->a[22415] = anon_sym_AMP_AMP;
	v->a[22416] = anon_sym_PIPE_PIPE;
	v->a[22417] = anon_sym_LT;
	v->a[22418] = anon_sym_GT;
	v->a[22419] = anon_sym_GT_GT;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = anon_sym_AMP_GT;
	v->a[22421] = anon_sym_AMP_GT_GT;
	v->a[22422] = anon_sym_LT_AMP;
	v->a[22423] = anon_sym_GT_AMP;
	v->a[22424] = anon_sym_GT_PIPE;
	v->a[22425] = anon_sym_LT_AMP_DASH;
	v->a[22426] = anon_sym_GT_AMP_DASH;
	v->a[22427] = anon_sym_LT_LT;
	v->a[22428] = anon_sym_LT_LT_DASH;
	v->a[22429] = aux_sym_heredoc_redirect_token1;
	v->a[22430] = anon_sym_AMP;
	v->a[22431] = anon_sym_SEMI;
	v->a[22432] = 5;
	v->a[22433] = actions(3);
	v->a[22434] = 1;
	v->a[22435] = sym_comment;
	v->a[22436] = actions(608);
	v->a[22437] = 2;
	v->a[22438] = sym_file_descriptor;
	v->a[22439] = sym_variable_name;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = state(204);
	v->a[22441] = 2;
	v->a[22442] = sym_concatenation;
	v->a[22443] = aux_sym_for_statement_repeat1;
	v->a[22444] = state(400);
	v->a[22445] = 5;
	v->a[22446] = sym_arithmetic_expansion;
	v->a[22447] = sym_string;
	v->a[22448] = sym_simple_expansion;
	v->a[22449] = sym_expansion;
	v->a[22450] = sym_command_substitution;
	v->a[22451] = actions(610);
	v->a[22452] = 29;
	v->a[22453] = anon_sym_PIPE;
	v->a[22454] = anon_sym_RPAREN;
	v->a[22455] = anon_sym_SEMI_SEMI;
	v->a[22456] = anon_sym_AMP_AMP;
	v->a[22457] = anon_sym_PIPE_PIPE;
	v->a[22458] = anon_sym_LT;
	v->a[22459] = anon_sym_GT;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_GT_GT;
	v->a[22461] = anon_sym_AMP_GT;
	v->a[22462] = anon_sym_AMP_GT_GT;
	v->a[22463] = anon_sym_LT_AMP;
	v->a[22464] = anon_sym_GT_AMP;
	v->a[22465] = anon_sym_GT_PIPE;
	v->a[22466] = anon_sym_LT_AMP_DASH;
	v->a[22467] = anon_sym_GT_AMP_DASH;
	v->a[22468] = anon_sym_LT_LT;
	v->a[22469] = anon_sym_LT_LT_DASH;
	v->a[22470] = aux_sym_heredoc_redirect_token1;
	v->a[22471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22472] = anon_sym_AMP;
	v->a[22473] = anon_sym_DOLLAR;
	v->a[22474] = anon_sym_DQUOTE;
	v->a[22475] = sym_raw_string;
	v->a[22476] = sym_number;
	v->a[22477] = anon_sym_DOLLAR_LBRACE;
	v->a[22478] = anon_sym_DOLLAR_LPAREN;
	v->a[22479] = anon_sym_BQUOTE;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = sym_word;
	v->a[22481] = anon_sym_SEMI;
	v->a[22482] = 12;
	v->a[22483] = actions(3);
	v->a[22484] = 1;
	v->a[22485] = sym_comment;
	v->a[22486] = actions(636);
	v->a[22487] = 1;
	v->a[22488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22489] = actions(639);
	v->a[22490] = 1;
	v->a[22491] = anon_sym_DOLLAR;
	v->a[22492] = actions(642);
	v->a[22493] = 1;
	v->a[22494] = anon_sym_DQUOTE;
	v->a[22495] = actions(645);
	v->a[22496] = 1;
	v->a[22497] = anon_sym_DOLLAR_LBRACE;
	v->a[22498] = actions(648);
	v->a[22499] = 1;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
