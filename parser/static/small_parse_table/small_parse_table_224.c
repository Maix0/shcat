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
	v->a[22400] = actions(57);
	v->a[22401] = 1;
	v->a[22402] = sym_comment;
	v->a[22403] = actions(3076);
	v->a[22404] = 1;
	v->a[22405] = sym_word;
	v->a[22406] = actions(3078);
	v->a[22407] = 1;
	v->a[22408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22409] = actions(3080);
	v->a[22410] = 1;
	v->a[22411] = anon_sym_DOLLAR;
	v->a[22412] = actions(3082);
	v->a[22413] = 1;
	v->a[22414] = sym__special_character;
	v->a[22415] = actions(3084);
	v->a[22416] = 1;
	v->a[22417] = anon_sym_DQUOTE;
	v->a[22418] = actions(3088);
	v->a[22419] = 1;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = aux_sym_number_token1;
	v->a[22421] = actions(3090);
	v->a[22422] = 1;
	v->a[22423] = aux_sym_number_token2;
	v->a[22424] = actions(3092);
	v->a[22425] = 1;
	v->a[22426] = anon_sym_DOLLAR_LBRACE;
	v->a[22427] = actions(3094);
	v->a[22428] = 1;
	v->a[22429] = anon_sym_DOLLAR_LPAREN;
	v->a[22430] = actions(3096);
	v->a[22431] = 1;
	v->a[22432] = anon_sym_BQUOTE;
	v->a[22433] = actions(3098);
	v->a[22434] = 1;
	v->a[22435] = anon_sym_DOLLAR_BQUOTE;
	v->a[22436] = actions(3100);
	v->a[22437] = 1;
	v->a[22438] = aux_sym__simple_variable_name_token1;
	v->a[22439] = actions(3102);
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = 1;
	v->a[22441] = sym__brace_start;
	v->a[22442] = state(1629);
	v->a[22443] = 1;
	v->a[22444] = aux_sym__literal_repeat1;
	v->a[22445] = actions(3086);
	v->a[22446] = 2;
	v->a[22447] = sym_test_operator;
	v->a[22448] = sym_raw_string;
	v->a[22449] = state(518);
	v->a[22450] = 2;
	v->a[22451] = sym_concatenation;
	v->a[22452] = aux_sym_unset_command_repeat1;
	v->a[22453] = actions(1039);
	v->a[22454] = 7;
	v->a[22455] = anon_sym_PIPE;
	v->a[22456] = anon_sym_LT;
	v->a[22457] = anon_sym_GT;
	v->a[22458] = anon_sym_AMP_GT;
	v->a[22459] = anon_sym_LT_AMP;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_GT_AMP;
	v->a[22461] = anon_sym_LT_LT;
	v->a[22462] = state(1442);
	v->a[22463] = 7;
	v->a[22464] = sym_arithmetic_expansion;
	v->a[22465] = sym_brace_expression;
	v->a[22466] = sym_string;
	v->a[22467] = sym_number;
	v->a[22468] = sym_simple_expansion;
	v->a[22469] = sym_expansion;
	v->a[22470] = sym_command_substitution;
	v->a[22471] = actions(1041);
	v->a[22472] = 10;
	v->a[22473] = sym_file_descriptor;
	v->a[22474] = anon_sym_PIPE_AMP;
	v->a[22475] = anon_sym_AMP_AMP;
	v->a[22476] = anon_sym_PIPE_PIPE;
	v->a[22477] = anon_sym_GT_GT;
	v->a[22478] = anon_sym_AMP_GT_GT;
	v->a[22479] = anon_sym_GT_PIPE;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = anon_sym_LT_AMP_DASH;
	v->a[22481] = anon_sym_GT_AMP_DASH;
	v->a[22482] = anon_sym_LT_LT_DASH;
	v->a[22483] = 6;
	v->a[22484] = actions(3);
	v->a[22485] = 1;
	v->a[22486] = sym_comment;
	v->a[22487] = actions(2956);
	v->a[22488] = 1;
	v->a[22489] = aux_sym_concatenation_token1;
	v->a[22490] = actions(3036);
	v->a[22491] = 1;
	v->a[22492] = sym__concat;
	v->a[22493] = state(541);
	v->a[22494] = 1;
	v->a[22495] = aux_sym_concatenation_repeat1;
	v->a[22496] = actions(3106);
	v->a[22497] = 4;
	v->a[22498] = sym_file_descriptor;
	v->a[22499] = sym_test_operator;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
