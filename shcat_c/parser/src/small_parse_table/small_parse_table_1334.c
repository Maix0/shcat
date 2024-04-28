/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1334.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6670(t_small_parse_table_array *v)
{
	v->a[133400] = anon_sym_GT;
	v->a[133401] = anon_sym_LT_LT;
	v->a[133402] = anon_sym_GT_GT;
	v->a[133403] = anon_sym_PLUS;
	v->a[133404] = anon_sym_DASH;
	v->a[133405] = anon_sym_STAR;
	v->a[133406] = anon_sym_SLASH;
	v->a[133407] = anon_sym_PERCENT;
	v->a[133408] = anon_sym_STAR_STAR;
	v->a[133409] = actions(1267);
	v->a[133410] = 23;
	v->a[133411] = sym_test_operator;
	v->a[133412] = anon_sym_PLUS_PLUS;
	v->a[133413] = anon_sym_DASH_DASH;
	v->a[133414] = anon_sym_PLUS_EQ;
	v->a[133415] = anon_sym_DASH_EQ;
	v->a[133416] = anon_sym_STAR_EQ;
	v->a[133417] = anon_sym_SLASH_EQ;
	v->a[133418] = anon_sym_PERCENT_EQ;
	v->a[133419] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6671(v);
}

void	small_parse_table_6671(t_small_parse_table_array *v)
{
	v->a[133420] = anon_sym_LT_LT_EQ;
	v->a[133421] = anon_sym_GT_GT_EQ;
	v->a[133422] = anon_sym_AMP_EQ;
	v->a[133423] = anon_sym_CARET_EQ;
	v->a[133424] = anon_sym_PIPE_EQ;
	v->a[133425] = anon_sym_PIPE_PIPE;
	v->a[133426] = anon_sym_AMP_AMP;
	v->a[133427] = anon_sym_EQ_EQ;
	v->a[133428] = anon_sym_BANG_EQ;
	v->a[133429] = anon_sym_LT_EQ;
	v->a[133430] = anon_sym_GT_EQ;
	v->a[133431] = anon_sym_RBRACK;
	v->a[133432] = anon_sym_EQ_TILDE;
	v->a[133433] = anon_sym_QMARK;
	v->a[133434] = 5;
	v->a[133435] = actions(71);
	v->a[133436] = 1;
	v->a[133437] = sym_comment;
	v->a[133438] = actions(6662);
	v->a[133439] = 1;
	small_parse_table_6672(v);
}

void	small_parse_table_6672(t_small_parse_table_array *v)
{
	v->a[133440] = sym__special_character;
	v->a[133441] = state(2568);
	v->a[133442] = 1;
	v->a[133443] = aux_sym__literal_repeat1;
	v->a[133444] = actions(5695);
	v->a[133445] = 12;
	v->a[133446] = anon_sym_PIPE;
	v->a[133447] = anon_sym_LT;
	v->a[133448] = anon_sym_GT;
	v->a[133449] = anon_sym_LT_LT;
	v->a[133450] = anon_sym_AMP_GT;
	v->a[133451] = anon_sym_LT_AMP;
	v->a[133452] = anon_sym_GT_AMP;
	v->a[133453] = anon_sym_DOLLAR;
	v->a[133454] = aux_sym_number_token1;
	v->a[133455] = aux_sym_number_token2;
	v->a[133456] = anon_sym_DOLLAR_LPAREN;
	v->a[133457] = sym_word;
	v->a[133458] = actions(5697);
	v->a[133459] = 26;
	small_parse_table_6673(v);
}

void	small_parse_table_6673(t_small_parse_table_array *v)
{
	v->a[133460] = sym_file_descriptor;
	v->a[133461] = sym_variable_name;
	v->a[133462] = sym_test_operator;
	v->a[133463] = sym__brace_start;
	v->a[133464] = anon_sym_LPAREN_LPAREN;
	v->a[133465] = anon_sym_PIPE_PIPE;
	v->a[133466] = anon_sym_AMP_AMP;
	v->a[133467] = anon_sym_GT_GT;
	v->a[133468] = anon_sym_PIPE_AMP;
	v->a[133469] = anon_sym_RBRACK;
	v->a[133470] = anon_sym_AMP_GT_GT;
	v->a[133471] = anon_sym_GT_PIPE;
	v->a[133472] = anon_sym_LT_AMP_DASH;
	v->a[133473] = anon_sym_GT_AMP_DASH;
	v->a[133474] = anon_sym_LT_LT_DASH;
	v->a[133475] = anon_sym_LT_LT_LT;
	v->a[133476] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[133477] = anon_sym_DOLLAR_LBRACK;
	v->a[133478] = anon_sym_DQUOTE;
	v->a[133479] = sym_raw_string;
	small_parse_table_6674(v);
}

void	small_parse_table_6674(t_small_parse_table_array *v)
{
	v->a[133480] = sym_ansi_c_string;
	v->a[133481] = anon_sym_DOLLAR_LBRACE;
	v->a[133482] = anon_sym_BQUOTE;
	v->a[133483] = anon_sym_DOLLAR_BQUOTE;
	v->a[133484] = anon_sym_LT_LPAREN;
	v->a[133485] = anon_sym_GT_LPAREN;
	v->a[133486] = 3;
	v->a[133487] = actions(71);
	v->a[133488] = 1;
	v->a[133489] = sym_comment;
	v->a[133490] = actions(1304);
	v->a[133491] = 13;
	v->a[133492] = anon_sym_PIPE;
	v->a[133493] = anon_sym_LT;
	v->a[133494] = anon_sym_GT;
	v->a[133495] = anon_sym_LT_LT;
	v->a[133496] = anon_sym_AMP_GT;
	v->a[133497] = anon_sym_LT_AMP;
	v->a[133498] = anon_sym_GT_AMP;
	v->a[133499] = anon_sym_DOLLAR;
	small_parse_table_6675(v);
}

/* EOF small_parse_table_1334.c */
