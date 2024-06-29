/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_344.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1720(t_small_parse_table_array *v)
{
	v->a[34400] = anon_sym_GT;
	v->a[34401] = anon_sym_GT_GT;
	v->a[34402] = anon_sym_AMP_GT;
	v->a[34403] = anon_sym_AMP_GT_GT;
	v->a[34404] = anon_sym_LT_AMP;
	v->a[34405] = anon_sym_GT_AMP;
	v->a[34406] = anon_sym_GT_PIPE;
	v->a[34407] = anon_sym_LT_AMP_DASH;
	v->a[34408] = anon_sym_GT_AMP_DASH;
	v->a[34409] = anon_sym_LT_LT;
	v->a[34410] = anon_sym_LT_LT_DASH;
	v->a[34411] = aux_sym_heredoc_redirect_token1;
	v->a[34412] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34413] = anon_sym_AMP;
	v->a[34414] = anon_sym_DOLLAR;
	v->a[34415] = anon_sym_DQUOTE;
	v->a[34416] = sym_raw_string;
	v->a[34417] = sym_number;
	v->a[34418] = anon_sym_DOLLAR_LBRACE;
	v->a[34419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1721(v);
}

void	small_parse_table_1721(t_small_parse_table_array *v)
{
	v->a[34420] = anon_sym_BQUOTE;
	v->a[34421] = sym_word;
	v->a[34422] = anon_sym_SEMI;
	v->a[34423] = 17;
	v->a[34424] = actions(1074);
	v->a[34425] = 1;
	v->a[34426] = sym_comment;
	v->a[34427] = actions(1136);
	v->a[34428] = 1;
	v->a[34429] = anon_sym_PIPE;
	v->a[34430] = actions(1138);
	v->a[34431] = 1;
	v->a[34432] = anon_sym_AMP_AMP;
	v->a[34433] = actions(1140);
	v->a[34434] = 1;
	v->a[34435] = anon_sym_PIPE_PIPE;
	v->a[34436] = actions(1150);
	v->a[34437] = 1;
	v->a[34438] = anon_sym_CARET;
	v->a[34439] = actions(1152);
	small_parse_table_1722(v);
}

void	small_parse_table_1722(t_small_parse_table_array *v)
{
	v->a[34440] = 1;
	v->a[34441] = anon_sym_AMP;
	v->a[34442] = actions(1239);
	v->a[34443] = 1;
	v->a[34444] = anon_sym_EQ;
	v->a[34445] = actions(1241);
	v->a[34446] = 1;
	v->a[34447] = anon_sym_QMARK;
	v->a[34448] = actions(1270);
	v->a[34449] = 1;
	v->a[34450] = anon_sym_RPAREN_RPAREN;
	v->a[34451] = actions(1144);
	v->a[34452] = 2;
	v->a[34453] = anon_sym_LT;
	v->a[34454] = anon_sym_GT;
	v->a[34455] = actions(1146);
	v->a[34456] = 2;
	v->a[34457] = anon_sym_GT_GT;
	v->a[34458] = anon_sym_LT_LT;
	v->a[34459] = actions(1154);
	small_parse_table_1723(v);
}

void	small_parse_table_1723(t_small_parse_table_array *v)
{
	v->a[34460] = 2;
	v->a[34461] = anon_sym_EQ_EQ;
	v->a[34462] = anon_sym_BANG_EQ;
	v->a[34463] = actions(1156);
	v->a[34464] = 2;
	v->a[34465] = anon_sym_LT_EQ;
	v->a[34466] = anon_sym_GT_EQ;
	v->a[34467] = actions(1158);
	v->a[34468] = 2;
	v->a[34469] = anon_sym_PLUS;
	v->a[34470] = anon_sym_DASH;
	v->a[34471] = actions(1162);
	v->a[34472] = 2;
	v->a[34473] = anon_sym_PLUS_PLUS2;
	v->a[34474] = anon_sym_DASH_DASH2;
	v->a[34475] = actions(1160);
	v->a[34476] = 3;
	v->a[34477] = anon_sym_STAR;
	v->a[34478] = anon_sym_SLASH;
	v->a[34479] = anon_sym_PERCENT;
	small_parse_table_1724(v);
}

void	small_parse_table_1724(t_small_parse_table_array *v)
{
	v->a[34480] = actions(1252);
	v->a[34481] = 10;
	v->a[34482] = anon_sym_PLUS_EQ;
	v->a[34483] = anon_sym_DASH_EQ;
	v->a[34484] = anon_sym_STAR_EQ;
	v->a[34485] = anon_sym_SLASH_EQ;
	v->a[34486] = anon_sym_PERCENT_EQ;
	v->a[34487] = anon_sym_LT_LT_EQ;
	v->a[34488] = anon_sym_GT_GT_EQ;
	v->a[34489] = anon_sym_AMP_EQ;
	v->a[34490] = anon_sym_CARET_EQ;
	v->a[34491] = anon_sym_PIPE_EQ;
	v->a[34492] = 14;
	v->a[34493] = actions(3);
	v->a[34494] = 1;
	v->a[34495] = sym_comment;
	v->a[34496] = actions(552);
	v->a[34497] = 1;
	v->a[34498] = sym_file_descriptor;
	v->a[34499] = actions(969);
	small_parse_table_1725(v);
}

/* EOF small_parse_table_344.c */
