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
	v->a[34400] = 3;
	v->a[34401] = sym_file_descriptor;
	v->a[34402] = sym__concat;
	v->a[34403] = sym__bare_dollar;
	v->a[34404] = actions(1176);
	v->a[34405] = 27;
	v->a[34406] = anon_sym_PIPE;
	v->a[34407] = anon_sym_RPAREN;
	v->a[34408] = anon_sym_SEMI_SEMI;
	v->a[34409] = anon_sym_AMP_AMP;
	v->a[34410] = anon_sym_PIPE_PIPE;
	v->a[34411] = anon_sym_LT;
	v->a[34412] = anon_sym_GT;
	v->a[34413] = anon_sym_GT_GT;
	v->a[34414] = anon_sym_LT_AMP;
	v->a[34415] = anon_sym_GT_AMP;
	v->a[34416] = anon_sym_GT_PIPE;
	v->a[34417] = anon_sym_LT_GT;
	v->a[34418] = anon_sym_LT_LT;
	v->a[34419] = anon_sym_LT_LT_DASH;
	small_parse_table_1721(v);
}

void	small_parse_table_1721(t_small_parse_table_array *v)
{
	v->a[34420] = aux_sym_heredoc_redirect_token1;
	v->a[34421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34422] = anon_sym_AMP;
	v->a[34423] = aux_sym_concatenation_token1;
	v->a[34424] = anon_sym_DOLLAR;
	v->a[34425] = anon_sym_DQUOTE;
	v->a[34426] = sym_raw_string;
	v->a[34427] = sym_number;
	v->a[34428] = anon_sym_DOLLAR_LBRACE;
	v->a[34429] = anon_sym_DOLLAR_LPAREN;
	v->a[34430] = anon_sym_BQUOTE;
	v->a[34431] = sym_word;
	v->a[34432] = anon_sym_SEMI;
	v->a[34433] = 6;
	v->a[34434] = actions(3);
	v->a[34435] = 1;
	v->a[34436] = sym_comment;
	v->a[34437] = actions(1170);
	v->a[34438] = 1;
	v->a[34439] = aux_sym_concatenation_token1;
	small_parse_table_1722(v);
}

void	small_parse_table_1722(t_small_parse_table_array *v)
{
	v->a[34440] = actions(1301);
	v->a[34441] = 1;
	v->a[34442] = sym__concat;
	v->a[34443] = state(440);
	v->a[34444] = 1;
	v->a[34445] = aux_sym_concatenation_repeat1;
	v->a[34446] = actions(1047);
	v->a[34447] = 2;
	v->a[34448] = sym_file_descriptor;
	v->a[34449] = sym_variable_name;
	v->a[34450] = actions(1043);
	v->a[34451] = 25;
	v->a[34452] = anon_sym_PIPE;
	v->a[34453] = anon_sym_SEMI_SEMI;
	v->a[34454] = anon_sym_AMP_AMP;
	v->a[34455] = anon_sym_PIPE_PIPE;
	v->a[34456] = anon_sym_LT;
	v->a[34457] = anon_sym_GT;
	v->a[34458] = anon_sym_GT_GT;
	v->a[34459] = anon_sym_LT_AMP;
	small_parse_table_1723(v);
}

void	small_parse_table_1723(t_small_parse_table_array *v)
{
	v->a[34460] = anon_sym_GT_AMP;
	v->a[34461] = anon_sym_GT_PIPE;
	v->a[34462] = anon_sym_LT_GT;
	v->a[34463] = anon_sym_LT_LT;
	v->a[34464] = anon_sym_LT_LT_DASH;
	v->a[34465] = aux_sym_heredoc_redirect_token1;
	v->a[34466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34467] = anon_sym_AMP;
	v->a[34468] = anon_sym_DOLLAR;
	v->a[34469] = anon_sym_DQUOTE;
	v->a[34470] = sym_raw_string;
	v->a[34471] = sym_number;
	v->a[34472] = anon_sym_DOLLAR_LBRACE;
	v->a[34473] = anon_sym_DOLLAR_LPAREN;
	v->a[34474] = anon_sym_BQUOTE;
	v->a[34475] = sym_word;
	v->a[34476] = anon_sym_SEMI;
	v->a[34477] = 3;
	v->a[34478] = actions(3);
	v->a[34479] = 1;
	small_parse_table_1724(v);
}

void	small_parse_table_1724(t_small_parse_table_array *v)
{
	v->a[34480] = sym_comment;
	v->a[34481] = actions(1201);
	v->a[34482] = 3;
	v->a[34483] = sym_file_descriptor;
	v->a[34484] = sym__concat;
	v->a[34485] = sym_variable_name;
	v->a[34486] = actions(1199);
	v->a[34487] = 27;
	v->a[34488] = anon_sym_esac;
	v->a[34489] = anon_sym_PIPE;
	v->a[34490] = anon_sym_SEMI_SEMI;
	v->a[34491] = anon_sym_AMP_AMP;
	v->a[34492] = anon_sym_PIPE_PIPE;
	v->a[34493] = anon_sym_LT;
	v->a[34494] = anon_sym_GT;
	v->a[34495] = anon_sym_GT_GT;
	v->a[34496] = anon_sym_LT_AMP;
	v->a[34497] = anon_sym_GT_AMP;
	v->a[34498] = anon_sym_GT_PIPE;
	v->a[34499] = anon_sym_LT_GT;
	small_parse_table_1725(v);
}

/* EOF small_parse_table_344.c */
