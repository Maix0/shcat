/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = 1;
	v->a[60401] = anon_sym_PIPE;
	v->a[60402] = state(1294);
	v->a[60403] = 1;
	v->a[60404] = aux_sym_pipeline_repeat1;
	v->a[60405] = actions(1914);
	v->a[60406] = 3;
	v->a[60407] = anon_sym_LT;
	v->a[60408] = anon_sym_GT;
	v->a[60409] = anon_sym_LT_LT;
	v->a[60410] = actions(1916);
	v->a[60411] = 8;
	v->a[60412] = anon_sym_AMP_AMP;
	v->a[60413] = anon_sym_PIPE_PIPE;
	v->a[60414] = anon_sym_GT_GT;
	v->a[60415] = anon_sym_LT_AMP;
	v->a[60416] = anon_sym_GT_AMP;
	v->a[60417] = anon_sym_GT_PIPE;
	v->a[60418] = anon_sym_LT_GT;
	v->a[60419] = anon_sym_LT_LT_DASH;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = 6;
	v->a[60421] = actions(3);
	v->a[60422] = 1;
	v->a[60423] = sym_comment;
	v->a[60424] = actions(2431);
	v->a[60425] = 1;
	v->a[60426] = sym_string_content;
	v->a[60427] = actions(2435);
	v->a[60428] = 1;
	v->a[60429] = sym_variable_name;
	v->a[60430] = actions(2483);
	v->a[60431] = 1;
	v->a[60432] = anon_sym_DQUOTE;
	v->a[60433] = actions(2433);
	v->a[60434] = 2;
	v->a[60435] = aux_sym__simple_variable_name_token1;
	v->a[60436] = aux_sym__multiline_variable_name_token1;
	v->a[60437] = actions(2427);
	v->a[60438] = 8;
	v->a[60439] = anon_sym_BANG;
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = anon_sym_DASH;
	v->a[60441] = anon_sym_STAR;
	v->a[60442] = anon_sym_QMARK;
	v->a[60443] = anon_sym_DOLLAR;
	v->a[60444] = anon_sym_POUND;
	v->a[60445] = anon_sym_AT;
	v->a[60446] = anon_sym_0;
	v->a[60447] = 6;
	v->a[60448] = actions(3);
	v->a[60449] = 1;
	v->a[60450] = sym_comment;
	v->a[60451] = actions(2431);
	v->a[60452] = 1;
	v->a[60453] = sym_string_content;
	v->a[60454] = actions(2435);
	v->a[60455] = 1;
	v->a[60456] = sym_variable_name;
	v->a[60457] = actions(2485);
	v->a[60458] = 1;
	v->a[60459] = anon_sym_DQUOTE;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = actions(2433);
	v->a[60461] = 2;
	v->a[60462] = aux_sym__simple_variable_name_token1;
	v->a[60463] = aux_sym__multiline_variable_name_token1;
	v->a[60464] = actions(2427);
	v->a[60465] = 8;
	v->a[60466] = anon_sym_BANG;
	v->a[60467] = anon_sym_DASH;
	v->a[60468] = anon_sym_STAR;
	v->a[60469] = anon_sym_QMARK;
	v->a[60470] = anon_sym_DOLLAR;
	v->a[60471] = anon_sym_POUND;
	v->a[60472] = anon_sym_AT;
	v->a[60473] = anon_sym_0;
	v->a[60474] = 6;
	v->a[60475] = actions(3);
	v->a[60476] = 1;
	v->a[60477] = sym_comment;
	v->a[60478] = actions(2431);
	v->a[60479] = 1;
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = sym_string_content;
	v->a[60481] = actions(2435);
	v->a[60482] = 1;
	v->a[60483] = sym_variable_name;
	v->a[60484] = actions(2487);
	v->a[60485] = 1;
	v->a[60486] = anon_sym_DQUOTE;
	v->a[60487] = actions(2433);
	v->a[60488] = 2;
	v->a[60489] = aux_sym__simple_variable_name_token1;
	v->a[60490] = aux_sym__multiline_variable_name_token1;
	v->a[60491] = actions(2427);
	v->a[60492] = 8;
	v->a[60493] = anon_sym_BANG;
	v->a[60494] = anon_sym_DASH;
	v->a[60495] = anon_sym_STAR;
	v->a[60496] = anon_sym_QMARK;
	v->a[60497] = anon_sym_DOLLAR;
	v->a[60498] = anon_sym_POUND;
	v->a[60499] = anon_sym_AT;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
