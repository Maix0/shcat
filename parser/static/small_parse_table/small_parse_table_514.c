/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_514.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2570(t_small_parse_table_array *v)
{
	v->a[51400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51401] = actions(2299);
	v->a[51402] = 1;
	v->a[51403] = sym_string_content;
	v->a[51404] = actions(2301);
	v->a[51405] = 1;
	v->a[51406] = anon_sym_DOLLAR_LBRACE;
	v->a[51407] = actions(2303);
	v->a[51408] = 1;
	v->a[51409] = anon_sym_DOLLAR_LPAREN;
	v->a[51410] = actions(2305);
	v->a[51411] = 1;
	v->a[51412] = anon_sym_BQUOTE;
	v->a[51413] = actions(2606);
	v->a[51414] = 1;
	v->a[51415] = anon_sym_DOLLAR;
	v->a[51416] = actions(2608);
	v->a[51417] = 1;
	v->a[51418] = anon_sym_DQUOTE;
	v->a[51419] = state(1177);
	small_parse_table_2571(v);
}

void	small_parse_table_2571(t_small_parse_table_array *v)
{
	v->a[51420] = 1;
	v->a[51421] = aux_sym_string_repeat1;
	v->a[51422] = state(1394);
	v->a[51423] = 4;
	v->a[51424] = sym_arithmetic_expansion;
	v->a[51425] = sym_simple_expansion;
	v->a[51426] = sym_expansion;
	v->a[51427] = sym_command_substitution;
	v->a[51428] = 4;
	v->a[51429] = actions(3);
	v->a[51430] = 1;
	v->a[51431] = sym_comment;
	v->a[51432] = actions(2428);
	v->a[51433] = 1;
	v->a[51434] = anon_sym_esac;
	v->a[51435] = actions(2430);
	v->a[51436] = 1;
	v->a[51437] = sym_extglob_pattern;
	v->a[51438] = actions(2426);
	v->a[51439] = 10;
	small_parse_table_2572(v);
}

void	small_parse_table_2572(t_small_parse_table_array *v)
{
	v->a[51440] = anon_sym_LPAREN;
	v->a[51441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51442] = anon_sym_DOLLAR;
	v->a[51443] = anon_sym_DQUOTE;
	v->a[51444] = sym_raw_string;
	v->a[51445] = sym_number;
	v->a[51446] = anon_sym_DOLLAR_LBRACE;
	v->a[51447] = anon_sym_DOLLAR_LPAREN;
	v->a[51448] = anon_sym_BQUOTE;
	v->a[51449] = sym_word;
	v->a[51450] = 10;
	v->a[51451] = actions(3);
	v->a[51452] = 1;
	v->a[51453] = sym_comment;
	v->a[51454] = actions(2293);
	v->a[51455] = 1;
	v->a[51456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51457] = actions(2299);
	v->a[51458] = 1;
	v->a[51459] = sym_string_content;
	small_parse_table_2573(v);
}

void	small_parse_table_2573(t_small_parse_table_array *v)
{
	v->a[51460] = actions(2301);
	v->a[51461] = 1;
	v->a[51462] = anon_sym_DOLLAR_LBRACE;
	v->a[51463] = actions(2303);
	v->a[51464] = 1;
	v->a[51465] = anon_sym_DOLLAR_LPAREN;
	v->a[51466] = actions(2305);
	v->a[51467] = 1;
	v->a[51468] = anon_sym_BQUOTE;
	v->a[51469] = actions(2610);
	v->a[51470] = 1;
	v->a[51471] = anon_sym_DOLLAR;
	v->a[51472] = actions(2612);
	v->a[51473] = 1;
	v->a[51474] = anon_sym_DQUOTE;
	v->a[51475] = state(1122);
	v->a[51476] = 1;
	v->a[51477] = aux_sym_string_repeat1;
	v->a[51478] = state(1394);
	v->a[51479] = 4;
	small_parse_table_2574(v);
}

void	small_parse_table_2574(t_small_parse_table_array *v)
{
	v->a[51480] = sym_arithmetic_expansion;
	v->a[51481] = sym_simple_expansion;
	v->a[51482] = sym_expansion;
	v->a[51483] = sym_command_substitution;
	v->a[51484] = 8;
	v->a[51485] = actions(3);
	v->a[51486] = 1;
	v->a[51487] = sym_comment;
	v->a[51488] = actions(2277);
	v->a[51489] = 1;
	v->a[51490] = anon_sym_POUND;
	v->a[51491] = actions(2279);
	v->a[51492] = 1;
	v->a[51493] = aux_sym__simple_variable_name_token1;
	v->a[51494] = actions(2281);
	v->a[51495] = 1;
	v->a[51496] = anon_sym_0;
	v->a[51497] = actions(2283);
	v->a[51498] = 1;
	v->a[51499] = sym_variable_name;
	small_parse_table_2575(v);
}

/* EOF small_parse_table_514.c */
