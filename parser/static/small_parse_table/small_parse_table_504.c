/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_504.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2520(t_small_parse_table_array *v)
{
	v->a[50400] = 2;
	v->a[50401] = sym_file_redirect;
	v->a[50402] = aux_sym_redirected_statement_repeat2;
	v->a[50403] = actions(1924);
	v->a[50404] = 3;
	v->a[50405] = anon_sym_LT;
	v->a[50406] = anon_sym_GT;
	v->a[50407] = anon_sym_GT_GT;
	v->a[50408] = actions(2091);
	v->a[50409] = 6;
	v->a[50410] = anon_sym_PIPE;
	v->a[50411] = anon_sym_SEMI_SEMI;
	v->a[50412] = anon_sym_AMP_AMP;
	v->a[50413] = anon_sym_PIPE_PIPE;
	v->a[50414] = anon_sym_LT_LT;
	v->a[50415] = anon_sym_SEMI;
	v->a[50416] = 10;
	v->a[50417] = actions(3);
	v->a[50418] = 1;
	v->a[50419] = sym_comment;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = actions(2293);
	v->a[50421] = 1;
	v->a[50422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50423] = actions(2299);
	v->a[50424] = 1;
	v->a[50425] = sym_string_content;
	v->a[50426] = actions(2301);
	v->a[50427] = 1;
	v->a[50428] = anon_sym_DOLLAR_LBRACE;
	v->a[50429] = actions(2303);
	v->a[50430] = 1;
	v->a[50431] = anon_sym_DOLLAR_LPAREN;
	v->a[50432] = actions(2305);
	v->a[50433] = 1;
	v->a[50434] = anon_sym_BQUOTE;
	v->a[50435] = actions(2495);
	v->a[50436] = 1;
	v->a[50437] = anon_sym_DOLLAR;
	v->a[50438] = actions(2497);
	v->a[50439] = 1;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = anon_sym_DQUOTE;
	v->a[50441] = state(1162);
	v->a[50442] = 1;
	v->a[50443] = aux_sym_string_repeat1;
	v->a[50444] = state(1394);
	v->a[50445] = 4;
	v->a[50446] = sym_arithmetic_expansion;
	v->a[50447] = sym_simple_expansion;
	v->a[50448] = sym_expansion;
	v->a[50449] = sym_command_substitution;
	v->a[50450] = 10;
	v->a[50451] = actions(3);
	v->a[50452] = 1;
	v->a[50453] = sym_comment;
	v->a[50454] = actions(2293);
	v->a[50455] = 1;
	v->a[50456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50457] = actions(2299);
	v->a[50458] = 1;
	v->a[50459] = sym_string_content;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = actions(2301);
	v->a[50461] = 1;
	v->a[50462] = anon_sym_DOLLAR_LBRACE;
	v->a[50463] = actions(2303);
	v->a[50464] = 1;
	v->a[50465] = anon_sym_DOLLAR_LPAREN;
	v->a[50466] = actions(2305);
	v->a[50467] = 1;
	v->a[50468] = anon_sym_BQUOTE;
	v->a[50469] = actions(2499);
	v->a[50470] = 1;
	v->a[50471] = anon_sym_DOLLAR;
	v->a[50472] = actions(2501);
	v->a[50473] = 1;
	v->a[50474] = anon_sym_DQUOTE;
	v->a[50475] = state(1176);
	v->a[50476] = 1;
	v->a[50477] = aux_sym_string_repeat1;
	v->a[50478] = state(1394);
	v->a[50479] = 4;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = sym_arithmetic_expansion;
	v->a[50481] = sym_simple_expansion;
	v->a[50482] = sym_expansion;
	v->a[50483] = sym_command_substitution;
	v->a[50484] = 8;
	v->a[50485] = actions(3);
	v->a[50486] = 1;
	v->a[50487] = sym_comment;
	v->a[50488] = actions(2277);
	v->a[50489] = 1;
	v->a[50490] = anon_sym_POUND;
	v->a[50491] = actions(2279);
	v->a[50492] = 1;
	v->a[50493] = aux_sym__simple_variable_name_token1;
	v->a[50494] = actions(2281);
	v->a[50495] = 1;
	v->a[50496] = anon_sym_0;
	v->a[50497] = actions(2283);
	v->a[50498] = 1;
	v->a[50499] = sym_variable_name;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
