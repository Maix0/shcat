/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_20(t_small_parse_table_array *v)
{
	v->a[400] = 4;
	v->a[401] = sym_file_descriptor;
	v->a[402] = sym_test_operator;
	v->a[403] = sym__bare_dollar;
	v->a[404] = sym__brace_start;
	v->a[405] = actions(812);
	v->a[406] = 9;
	v->a[407] = anon_sym_BANG;
	v->a[408] = anon_sym_DASH;
	v->a[409] = anon_sym_STAR;
	v->a[410] = anon_sym_QMARK;
	v->a[411] = anon_sym_DOLLAR;
	v->a[412] = anon_sym_POUND;
	v->a[413] = anon_sym_AT;
	v->a[414] = anon_sym_0;
	v->a[415] = anon_sym__;
	v->a[416] = actions(810);
	v->a[417] = 35;
	v->a[418] = anon_sym_esac;
	v->a[419] = anon_sym_LPAREN;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = anon_sym_PIPE;
	v->a[421] = anon_sym_SEMI_SEMI;
	v->a[422] = anon_sym_SEMI_AMP;
	v->a[423] = anon_sym_SEMI_SEMI_AMP;
	v->a[424] = anon_sym_PIPE_AMP;
	v->a[425] = anon_sym_AMP_AMP;
	v->a[426] = anon_sym_PIPE_PIPE;
	v->a[427] = anon_sym_LT;
	v->a[428] = anon_sym_GT;
	v->a[429] = anon_sym_GT_GT;
	v->a[430] = anon_sym_AMP_GT;
	v->a[431] = anon_sym_AMP_GT_GT;
	v->a[432] = anon_sym_LT_AMP;
	v->a[433] = anon_sym_GT_AMP;
	v->a[434] = anon_sym_GT_PIPE;
	v->a[435] = anon_sym_LT_AMP_DASH;
	v->a[436] = anon_sym_GT_AMP_DASH;
	v->a[437] = anon_sym_LT_LT;
	v->a[438] = anon_sym_LT_LT_DASH;
	v->a[439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[441] = anon_sym_AMP;
	v->a[442] = sym__special_character;
	v->a[443] = anon_sym_DQUOTE;
	v->a[444] = sym_raw_string;
	v->a[445] = aux_sym_number_token1;
	v->a[446] = aux_sym_number_token2;
	v->a[447] = anon_sym_DOLLAR_LBRACE;
	v->a[448] = anon_sym_DOLLAR_LPAREN;
	v->a[449] = anon_sym_BQUOTE;
	v->a[450] = anon_sym_DOLLAR_BQUOTE;
	v->a[451] = sym_word;
	v->a[452] = anon_sym_SEMI;
	v->a[453] = 21;
	v->a[454] = actions(3);
	v->a[455] = 1;
	v->a[456] = sym_comment;
	v->a[457] = actions(729);
	v->a[458] = 1;
	v->a[459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = actions(731);
	v->a[461] = 1;
	v->a[462] = anon_sym_DOLLAR;
	v->a[463] = actions(733);
	v->a[464] = 1;
	v->a[465] = sym__special_character;
	v->a[466] = actions(735);
	v->a[467] = 1;
	v->a[468] = anon_sym_DQUOTE;
	v->a[469] = actions(737);
	v->a[470] = 1;
	v->a[471] = aux_sym_number_token1;
	v->a[472] = actions(739);
	v->a[473] = 1;
	v->a[474] = aux_sym_number_token2;
	v->a[475] = actions(741);
	v->a[476] = 1;
	v->a[477] = anon_sym_DOLLAR_LBRACE;
	v->a[478] = actions(743);
	v->a[479] = 1;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = anon_sym_DOLLAR_LPAREN;
	v->a[481] = actions(745);
	v->a[482] = 1;
	v->a[483] = anon_sym_BQUOTE;
	v->a[484] = actions(747);
	v->a[485] = 1;
	v->a[486] = anon_sym_DOLLAR_BQUOTE;
	v->a[487] = actions(751);
	v->a[488] = 1;
	v->a[489] = sym_variable_name;
	v->a[490] = actions(753);
	v->a[491] = 1;
	v->a[492] = sym_test_operator;
	v->a[493] = actions(755);
	v->a[494] = 1;
	v->a[495] = sym__brace_start;
	v->a[496] = actions(824);
	v->a[497] = 1;
	v->a[498] = aux_sym__simple_variable_name_token1;
	v->a[499] = state(683);
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
