/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_524.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2620(t_small_parse_table_array *v)
{
	v->a[52400] = sym__bare_dollar;
	v->a[52401] = actions(983);
	v->a[52402] = 24;
	v->a[52403] = anon_sym_PIPE;
	v->a[52404] = anon_sym_AMP_AMP;
	v->a[52405] = anon_sym_PIPE_PIPE;
	v->a[52406] = anon_sym_LT;
	v->a[52407] = anon_sym_GT;
	v->a[52408] = anon_sym_GT_GT;
	v->a[52409] = anon_sym_AMP_GT;
	v->a[52410] = anon_sym_AMP_GT_GT;
	v->a[52411] = anon_sym_LT_AMP;
	v->a[52412] = anon_sym_GT_AMP;
	v->a[52413] = anon_sym_GT_PIPE;
	v->a[52414] = anon_sym_LT_AMP_DASH;
	v->a[52415] = anon_sym_GT_AMP_DASH;
	v->a[52416] = anon_sym_LT_LT;
	v->a[52417] = anon_sym_LT_LT_DASH;
	v->a[52418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52419] = anon_sym_DOLLAR;
	small_parse_table_2621(v);
}

void	small_parse_table_2621(t_small_parse_table_array *v)
{
	v->a[52420] = anon_sym_DQUOTE;
	v->a[52421] = sym_raw_string;
	v->a[52422] = sym_number;
	v->a[52423] = anon_sym_DOLLAR_LBRACE;
	v->a[52424] = anon_sym_DOLLAR_LPAREN;
	v->a[52425] = anon_sym_BQUOTE;
	v->a[52426] = sym_word;
	v->a[52427] = 3;
	v->a[52428] = actions(3);
	v->a[52429] = 1;
	v->a[52430] = sym_comment;
	v->a[52431] = actions(1524);
	v->a[52432] = 2;
	v->a[52433] = sym_file_descriptor;
	v->a[52434] = sym_variable_name;
	v->a[52435] = actions(1520);
	v->a[52436] = 27;
	v->a[52437] = anon_sym_for;
	v->a[52438] = anon_sym_while;
	v->a[52439] = anon_sym_until;
	small_parse_table_2622(v);
}

void	small_parse_table_2622(t_small_parse_table_array *v)
{
	v->a[52440] = anon_sym_if;
	v->a[52441] = anon_sym_case;
	v->a[52442] = anon_sym_LPAREN;
	v->a[52443] = anon_sym_LBRACE;
	v->a[52444] = anon_sym_BANG;
	v->a[52445] = anon_sym_LT;
	v->a[52446] = anon_sym_GT;
	v->a[52447] = anon_sym_GT_GT;
	v->a[52448] = anon_sym_AMP_GT;
	v->a[52449] = anon_sym_AMP_GT_GT;
	v->a[52450] = anon_sym_LT_AMP;
	v->a[52451] = anon_sym_GT_AMP;
	v->a[52452] = anon_sym_GT_PIPE;
	v->a[52453] = anon_sym_LT_AMP_DASH;
	v->a[52454] = anon_sym_GT_AMP_DASH;
	v->a[52455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52456] = anon_sym_DOLLAR;
	v->a[52457] = anon_sym_DQUOTE;
	v->a[52458] = sym_raw_string;
	v->a[52459] = sym_number;
	small_parse_table_2623(v);
}

void	small_parse_table_2623(t_small_parse_table_array *v)
{
	v->a[52460] = anon_sym_DOLLAR_LBRACE;
	v->a[52461] = anon_sym_DOLLAR_LPAREN;
	v->a[52462] = anon_sym_BQUOTE;
	v->a[52463] = sym_word;
	v->a[52464] = 3;
	v->a[52465] = actions(3);
	v->a[52466] = 1;
	v->a[52467] = sym_comment;
	v->a[52468] = actions(1044);
	v->a[52469] = 3;
	v->a[52470] = sym_file_descriptor;
	v->a[52471] = sym__concat;
	v->a[52472] = sym__bare_dollar;
	v->a[52473] = actions(1042);
	v->a[52474] = 26;
	v->a[52475] = anon_sym_LPAREN;
	v->a[52476] = anon_sym_PIPE;
	v->a[52477] = anon_sym_AMP_AMP;
	v->a[52478] = anon_sym_PIPE_PIPE;
	v->a[52479] = anon_sym_LT;
	small_parse_table_2624(v);
}

void	small_parse_table_2624(t_small_parse_table_array *v)
{
	v->a[52480] = anon_sym_GT;
	v->a[52481] = anon_sym_GT_GT;
	v->a[52482] = anon_sym_AMP_GT;
	v->a[52483] = anon_sym_AMP_GT_GT;
	v->a[52484] = anon_sym_LT_AMP;
	v->a[52485] = anon_sym_GT_AMP;
	v->a[52486] = anon_sym_GT_PIPE;
	v->a[52487] = anon_sym_LT_AMP_DASH;
	v->a[52488] = anon_sym_GT_AMP_DASH;
	v->a[52489] = anon_sym_LT_LT;
	v->a[52490] = anon_sym_LT_LT_DASH;
	v->a[52491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52492] = aux_sym_concatenation_token1;
	v->a[52493] = anon_sym_DOLLAR;
	v->a[52494] = anon_sym_DQUOTE;
	v->a[52495] = sym_raw_string;
	v->a[52496] = sym_number;
	v->a[52497] = anon_sym_DOLLAR_LBRACE;
	v->a[52498] = anon_sym_DOLLAR_LPAREN;
	v->a[52499] = anon_sym_BQUOTE;
	small_parse_table_2625(v);
}

/* EOF small_parse_table_524.c */
