/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1204.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6020(t_small_parse_table_array *v)
{
	v->a[120400] = actions(71);
	v->a[120401] = 1;
	v->a[120402] = sym_comment;
	v->a[120403] = actions(1296);
	v->a[120404] = 15;
	v->a[120405] = anon_sym_PIPE;
	v->a[120406] = anon_sym_EQ_EQ;
	v->a[120407] = anon_sym_LT;
	v->a[120408] = anon_sym_GT;
	v->a[120409] = anon_sym_LT_LT;
	v->a[120410] = anon_sym_EQ_TILDE;
	v->a[120411] = anon_sym_AMP_GT;
	v->a[120412] = anon_sym_LT_AMP;
	v->a[120413] = anon_sym_GT_AMP;
	v->a[120414] = anon_sym_DOLLAR;
	v->a[120415] = aux_sym_number_token1;
	v->a[120416] = aux_sym_number_token2;
	v->a[120417] = anon_sym_DOLLAR_LPAREN;
	v->a[120418] = anon_sym_BQUOTE;
	v->a[120419] = sym_word;
	small_parse_table_6021(v);
}

void	small_parse_table_6021(t_small_parse_table_array *v)
{
	v->a[120420] = actions(1298);
	v->a[120421] = 27;
	v->a[120422] = sym_file_descriptor;
	v->a[120423] = sym__concat;
	v->a[120424] = sym_test_operator;
	v->a[120425] = sym__bare_dollar;
	v->a[120426] = sym__brace_start;
	v->a[120427] = anon_sym_LPAREN_LPAREN;
	v->a[120428] = anon_sym_PIPE_PIPE;
	v->a[120429] = anon_sym_AMP_AMP;
	v->a[120430] = anon_sym_GT_GT;
	v->a[120431] = anon_sym_PIPE_AMP;
	v->a[120432] = anon_sym_AMP_GT_GT;
	v->a[120433] = anon_sym_GT_PIPE;
	v->a[120434] = anon_sym_LT_AMP_DASH;
	v->a[120435] = anon_sym_GT_AMP_DASH;
	v->a[120436] = anon_sym_LT_LT_DASH;
	v->a[120437] = anon_sym_LT_LT_LT;
	v->a[120438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120439] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6022(v);
}

void	small_parse_table_6022(t_small_parse_table_array *v)
{
	v->a[120440] = aux_sym_concatenation_token1;
	v->a[120441] = sym__special_character;
	v->a[120442] = anon_sym_DQUOTE;
	v->a[120443] = sym_raw_string;
	v->a[120444] = sym_ansi_c_string;
	v->a[120445] = anon_sym_DOLLAR_LBRACE;
	v->a[120446] = anon_sym_DOLLAR_BQUOTE;
	v->a[120447] = anon_sym_LT_LPAREN;
	v->a[120448] = anon_sym_GT_LPAREN;
	v->a[120449] = 6;
	v->a[120450] = actions(3);
	v->a[120451] = 1;
	v->a[120452] = sym_comment;
	v->a[120453] = actions(5638);
	v->a[120454] = 1;
	v->a[120455] = aux_sym_concatenation_token1;
	v->a[120456] = actions(5640);
	v->a[120457] = 1;
	v->a[120458] = sym__concat;
	v->a[120459] = state(2290);
	small_parse_table_6023(v);
}

void	small_parse_table_6023(t_small_parse_table_array *v)
{
	v->a[120460] = 1;
	v->a[120461] = aux_sym_concatenation_repeat1;
	v->a[120462] = actions(1263);
	v->a[120463] = 5;
	v->a[120464] = sym_file_descriptor;
	v->a[120465] = sym_variable_name;
	v->a[120466] = sym_test_operator;
	v->a[120467] = sym__brace_start;
	v->a[120468] = aux_sym_heredoc_redirect_token1;
	v->a[120469] = actions(1261);
	v->a[120470] = 34;
	v->a[120471] = anon_sym_LPAREN_LPAREN;
	v->a[120472] = anon_sym_PIPE_PIPE;
	v->a[120473] = anon_sym_AMP_AMP;
	v->a[120474] = anon_sym_PIPE;
	v->a[120475] = anon_sym_LT;
	v->a[120476] = anon_sym_GT;
	v->a[120477] = anon_sym_LT_LT;
	v->a[120478] = anon_sym_GT_GT;
	v->a[120479] = anon_sym_PIPE_AMP;
	small_parse_table_6024(v);
}

void	small_parse_table_6024(t_small_parse_table_array *v)
{
	v->a[120480] = anon_sym_AMP_GT;
	v->a[120481] = anon_sym_AMP_GT_GT;
	v->a[120482] = anon_sym_LT_AMP;
	v->a[120483] = anon_sym_GT_AMP;
	v->a[120484] = anon_sym_GT_PIPE;
	v->a[120485] = anon_sym_LT_AMP_DASH;
	v->a[120486] = anon_sym_GT_AMP_DASH;
	v->a[120487] = anon_sym_LT_LT_DASH;
	v->a[120488] = anon_sym_LT_LT_LT;
	v->a[120489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120490] = anon_sym_DOLLAR_LBRACK;
	v->a[120491] = anon_sym_DOLLAR;
	v->a[120492] = sym__special_character;
	v->a[120493] = anon_sym_DQUOTE;
	v->a[120494] = sym_raw_string;
	v->a[120495] = sym_ansi_c_string;
	v->a[120496] = aux_sym_number_token1;
	v->a[120497] = aux_sym_number_token2;
	v->a[120498] = anon_sym_DOLLAR_LBRACE;
	v->a[120499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6025(v);
}

/* EOF small_parse_table_1204.c */
