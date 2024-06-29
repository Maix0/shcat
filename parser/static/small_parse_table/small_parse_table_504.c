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
	v->a[50400] = anon_sym_GT_GT;
	v->a[50401] = anon_sym_AMP_GT;
	v->a[50402] = anon_sym_AMP_GT_GT;
	v->a[50403] = anon_sym_LT_AMP;
	v->a[50404] = anon_sym_GT_AMP;
	v->a[50405] = anon_sym_GT_PIPE;
	v->a[50406] = anon_sym_LT_AMP_DASH;
	v->a[50407] = anon_sym_GT_AMP_DASH;
	v->a[50408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50409] = anon_sym_DOLLAR;
	v->a[50410] = anon_sym_DQUOTE;
	v->a[50411] = sym_raw_string;
	v->a[50412] = sym_number;
	v->a[50413] = anon_sym_DOLLAR_LBRACE;
	v->a[50414] = anon_sym_DOLLAR_LPAREN;
	v->a[50415] = anon_sym_BQUOTE;
	v->a[50416] = sym_word;
	v->a[50417] = 3;
	v->a[50418] = actions(3);
	v->a[50419] = 1;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = sym_comment;
	v->a[50421] = actions(1276);
	v->a[50422] = 2;
	v->a[50423] = sym_file_descriptor;
	v->a[50424] = sym_variable_name;
	v->a[50425] = actions(1274);
	v->a[50426] = 28;
	v->a[50427] = anon_sym_for;
	v->a[50428] = anon_sym_while;
	v->a[50429] = anon_sym_until;
	v->a[50430] = anon_sym_if;
	v->a[50431] = anon_sym_case;
	v->a[50432] = anon_sym_LPAREN;
	v->a[50433] = anon_sym_LBRACE;
	v->a[50434] = anon_sym_RBRACE;
	v->a[50435] = anon_sym_BANG;
	v->a[50436] = anon_sym_LT;
	v->a[50437] = anon_sym_GT;
	v->a[50438] = anon_sym_GT_GT;
	v->a[50439] = anon_sym_AMP_GT;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = anon_sym_AMP_GT_GT;
	v->a[50441] = anon_sym_LT_AMP;
	v->a[50442] = anon_sym_GT_AMP;
	v->a[50443] = anon_sym_GT_PIPE;
	v->a[50444] = anon_sym_LT_AMP_DASH;
	v->a[50445] = anon_sym_GT_AMP_DASH;
	v->a[50446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50447] = anon_sym_DOLLAR;
	v->a[50448] = anon_sym_DQUOTE;
	v->a[50449] = sym_raw_string;
	v->a[50450] = sym_number;
	v->a[50451] = anon_sym_DOLLAR_LBRACE;
	v->a[50452] = anon_sym_DOLLAR_LPAREN;
	v->a[50453] = anon_sym_BQUOTE;
	v->a[50454] = sym_word;
	v->a[50455] = 6;
	v->a[50456] = actions(3);
	v->a[50457] = 1;
	v->a[50458] = sym_comment;
	v->a[50459] = actions(1693);
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = 1;
	v->a[50461] = aux_sym_concatenation_token1;
	v->a[50462] = actions(1695);
	v->a[50463] = 1;
	v->a[50464] = sym__concat;
	v->a[50465] = state(802);
	v->a[50466] = 1;
	v->a[50467] = aux_sym_concatenation_repeat1;
	v->a[50468] = actions(1000);
	v->a[50469] = 2;
	v->a[50470] = sym_file_descriptor;
	v->a[50471] = sym__bare_dollar;
	v->a[50472] = actions(993);
	v->a[50473] = 25;
	v->a[50474] = anon_sym_LPAREN;
	v->a[50475] = anon_sym_PIPE;
	v->a[50476] = anon_sym_AMP_AMP;
	v->a[50477] = anon_sym_PIPE_PIPE;
	v->a[50478] = anon_sym_LT;
	v->a[50479] = anon_sym_GT;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = anon_sym_GT_GT;
	v->a[50481] = anon_sym_AMP_GT;
	v->a[50482] = anon_sym_AMP_GT_GT;
	v->a[50483] = anon_sym_LT_AMP;
	v->a[50484] = anon_sym_GT_AMP;
	v->a[50485] = anon_sym_GT_PIPE;
	v->a[50486] = anon_sym_LT_AMP_DASH;
	v->a[50487] = anon_sym_GT_AMP_DASH;
	v->a[50488] = anon_sym_LT_LT;
	v->a[50489] = anon_sym_LT_LT_DASH;
	v->a[50490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50491] = anon_sym_DOLLAR;
	v->a[50492] = anon_sym_DQUOTE;
	v->a[50493] = sym_raw_string;
	v->a[50494] = sym_number;
	v->a[50495] = anon_sym_DOLLAR_LBRACE;
	v->a[50496] = anon_sym_DOLLAR_LPAREN;
	v->a[50497] = anon_sym_BQUOTE;
	v->a[50498] = sym_word;
	v->a[50499] = 4;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
