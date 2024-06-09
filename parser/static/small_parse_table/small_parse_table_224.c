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
	v->a[22400] = 1;
	v->a[22401] = anon_sym_DOLLAR;
	v->a[22402] = actions(489);
	v->a[22403] = 1;
	v->a[22404] = anon_sym_DQUOTE;
	v->a[22405] = actions(491);
	v->a[22406] = 1;
	v->a[22407] = aux_sym_number_token1;
	v->a[22408] = actions(493);
	v->a[22409] = 1;
	v->a[22410] = aux_sym_number_token2;
	v->a[22411] = actions(495);
	v->a[22412] = 1;
	v->a[22413] = anon_sym_DOLLAR_LBRACE;
	v->a[22414] = actions(497);
	v->a[22415] = 1;
	v->a[22416] = anon_sym_DOLLAR_LPAREN;
	v->a[22417] = actions(499);
	v->a[22418] = 1;
	v->a[22419] = anon_sym_BQUOTE;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = actions(501);
	v->a[22421] = 1;
	v->a[22422] = sym__bare_dollar;
	v->a[22423] = state(220);
	v->a[22424] = 1;
	v->a[22425] = aux_sym_command_repeat2;
	v->a[22426] = state(753);
	v->a[22427] = 1;
	v->a[22428] = sym_concatenation;
	v->a[22429] = state(1206);
	v->a[22430] = 1;
	v->a[22431] = sym_subshell;
	v->a[22432] = actions(551);
	v->a[22433] = 2;
	v->a[22434] = sym_raw_string;
	v->a[22435] = sym_word;
	v->a[22436] = state(452);
	v->a[22437] = 6;
	v->a[22438] = sym_arithmetic_expansion;
	v->a[22439] = sym_string;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = sym_number;
	v->a[22441] = sym_simple_expansion;
	v->a[22442] = sym_expansion;
	v->a[22443] = sym_command_substitution;
	v->a[22444] = actions(455);
	v->a[22445] = 19;
	v->a[22446] = anon_sym_PIPE;
	v->a[22447] = anon_sym_SEMI_SEMI;
	v->a[22448] = anon_sym_AMP_AMP;
	v->a[22449] = anon_sym_PIPE_PIPE;
	v->a[22450] = anon_sym_LT;
	v->a[22451] = anon_sym_GT;
	v->a[22452] = anon_sym_GT_GT;
	v->a[22453] = anon_sym_AMP_GT;
	v->a[22454] = anon_sym_AMP_GT_GT;
	v->a[22455] = anon_sym_LT_AMP;
	v->a[22456] = anon_sym_GT_AMP;
	v->a[22457] = anon_sym_GT_PIPE;
	v->a[22458] = anon_sym_LT_AMP_DASH;
	v->a[22459] = anon_sym_GT_AMP_DASH;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_LT_LT;
	v->a[22461] = anon_sym_LT_LT_DASH;
	v->a[22462] = aux_sym_heredoc_redirect_token1;
	v->a[22463] = anon_sym_AMP;
	v->a[22464] = anon_sym_SEMI;
	v->a[22465] = 5;
	v->a[22466] = actions(3);
	v->a[22467] = 1;
	v->a[22468] = sym_comment;
	v->a[22469] = actions(555);
	v->a[22470] = 2;
	v->a[22471] = sym_file_descriptor;
	v->a[22472] = sym_variable_name;
	v->a[22473] = state(208);
	v->a[22474] = 2;
	v->a[22475] = sym_concatenation;
	v->a[22476] = aux_sym_for_statement_repeat1;
	v->a[22477] = state(378);
	v->a[22478] = 6;
	v->a[22479] = sym_arithmetic_expansion;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = sym_string;
	v->a[22481] = sym_number;
	v->a[22482] = sym_simple_expansion;
	v->a[22483] = sym_expansion;
	v->a[22484] = sym_command_substitution;
	v->a[22485] = actions(553);
	v->a[22486] = 30;
	v->a[22487] = anon_sym_esac;
	v->a[22488] = anon_sym_PIPE;
	v->a[22489] = anon_sym_SEMI_SEMI;
	v->a[22490] = anon_sym_AMP_AMP;
	v->a[22491] = anon_sym_PIPE_PIPE;
	v->a[22492] = anon_sym_LT;
	v->a[22493] = anon_sym_GT;
	v->a[22494] = anon_sym_GT_GT;
	v->a[22495] = anon_sym_AMP_GT;
	v->a[22496] = anon_sym_AMP_GT_GT;
	v->a[22497] = anon_sym_LT_AMP;
	v->a[22498] = anon_sym_GT_AMP;
	v->a[22499] = anon_sym_GT_PIPE;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
