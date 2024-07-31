/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_264.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1320(t_small_parse_table_array *v)
{
	v->a[26400] = anon_sym_DQUOTE;
	v->a[26401] = sym_raw_string;
	v->a[26402] = sym_number;
	v->a[26403] = anon_sym_DOLLAR_LBRACE;
	v->a[26404] = anon_sym_DOLLAR_LPAREN;
	v->a[26405] = anon_sym_BQUOTE;
	v->a[26406] = sym_word;
	v->a[26407] = anon_sym_SEMI;
	v->a[26408] = 5;
	v->a[26409] = actions(3);
	v->a[26410] = 1;
	v->a[26411] = sym_comment;
	v->a[26412] = actions(1021);
	v->a[26413] = 1;
	v->a[26414] = sym_variable_name;
	v->a[26415] = actions(1019);
	v->a[26416] = 2;
	v->a[26417] = aux_sym__simple_variable_name_token1;
	v->a[26418] = aux_sym__multiline_variable_name_token1;
	v->a[26419] = actions(1017);
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = 8;
	v->a[26421] = anon_sym_BANG;
	v->a[26422] = anon_sym_DASH;
	v->a[26423] = anon_sym_STAR;
	v->a[26424] = anon_sym_QMARK;
	v->a[26425] = anon_sym_DOLLAR;
	v->a[26426] = anon_sym_POUND;
	v->a[26427] = anon_sym_AT;
	v->a[26428] = anon_sym_0;
	v->a[26429] = actions(345);
	v->a[26430] = 18;
	v->a[26431] = anon_sym_AMP_AMP;
	v->a[26432] = anon_sym_PIPE_PIPE;
	v->a[26433] = anon_sym_LT;
	v->a[26434] = anon_sym_GT;
	v->a[26435] = anon_sym_GT_GT;
	v->a[26436] = anon_sym_LT_AMP;
	v->a[26437] = anon_sym_GT_AMP;
	v->a[26438] = anon_sym_GT_PIPE;
	v->a[26439] = anon_sym_LT_GT;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = aux_sym_heredoc_redirect_token1;
	v->a[26441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26442] = anon_sym_DQUOTE;
	v->a[26443] = sym_raw_string;
	v->a[26444] = sym_number;
	v->a[26445] = anon_sym_DOLLAR_LBRACE;
	v->a[26446] = anon_sym_DOLLAR_LPAREN;
	v->a[26447] = anon_sym_BQUOTE;
	v->a[26448] = sym_word;
	v->a[26449] = 6;
	v->a[26450] = actions(3);
	v->a[26451] = 1;
	v->a[26452] = sym_comment;
	v->a[26453] = actions(1027);
	v->a[26454] = 1;
	v->a[26455] = aux_sym_concatenation_token1;
	v->a[26456] = actions(1029);
	v->a[26457] = 1;
	v->a[26458] = sym__concat;
	v->a[26459] = state(362);
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = 1;
	v->a[26461] = aux_sym_concatenation_repeat1;
	v->a[26462] = actions(1023);
	v->a[26463] = 2;
	v->a[26464] = sym_variable_name;
	v->a[26465] = ts_builtin_sym_end;
	v->a[26466] = actions(1025);
	v->a[26467] = 24;
	v->a[26468] = anon_sym_PIPE;
	v->a[26469] = anon_sym_SEMI_SEMI;
	v->a[26470] = anon_sym_AMP_AMP;
	v->a[26471] = anon_sym_PIPE_PIPE;
	v->a[26472] = anon_sym_LT;
	v->a[26473] = anon_sym_GT;
	v->a[26474] = anon_sym_GT_GT;
	v->a[26475] = anon_sym_LT_AMP;
	v->a[26476] = anon_sym_GT_AMP;
	v->a[26477] = anon_sym_GT_PIPE;
	v->a[26478] = anon_sym_LT_GT;
	v->a[26479] = anon_sym_LT_LT;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_LT_LT_DASH;
	v->a[26481] = aux_sym_heredoc_redirect_token1;
	v->a[26482] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26483] = anon_sym_DOLLAR;
	v->a[26484] = anon_sym_DQUOTE;
	v->a[26485] = sym_raw_string;
	v->a[26486] = sym_number;
	v->a[26487] = anon_sym_DOLLAR_LBRACE;
	v->a[26488] = anon_sym_DOLLAR_LPAREN;
	v->a[26489] = anon_sym_BQUOTE;
	v->a[26490] = sym_word;
	v->a[26491] = anon_sym_SEMI;
	v->a[26492] = 6;
	v->a[26493] = actions(3);
	v->a[26494] = 1;
	v->a[26495] = sym_comment;
	v->a[26496] = actions(1011);
	v->a[26497] = 1;
	v->a[26498] = sym__bare_dollar;
	v->a[26499] = actions(1031);
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
