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
	v->a[34400] = sym__concat;
	v->a[34401] = sym_test_operator;
	v->a[34402] = sym__bare_dollar;
	v->a[34403] = sym__brace_start;
	v->a[34404] = ts_builtin_sym_end;
	v->a[34405] = aux_sym_heredoc_redirect_token1;
	v->a[34406] = actions(2965);
	v->a[34407] = 33;
	v->a[34408] = anon_sym_LPAREN;
	v->a[34409] = anon_sym_PIPE;
	v->a[34410] = anon_sym_SEMI_SEMI;
	v->a[34411] = anon_sym_PIPE_AMP;
	v->a[34412] = anon_sym_AMP_AMP;
	v->a[34413] = anon_sym_PIPE_PIPE;
	v->a[34414] = anon_sym_LT;
	v->a[34415] = anon_sym_GT;
	v->a[34416] = anon_sym_GT_GT;
	v->a[34417] = anon_sym_AMP_GT;
	v->a[34418] = anon_sym_AMP_GT_GT;
	v->a[34419] = anon_sym_LT_AMP;
	small_parse_table_1721(v);
}

void	small_parse_table_1721(t_small_parse_table_array *v)
{
	v->a[34420] = anon_sym_GT_AMP;
	v->a[34421] = anon_sym_GT_PIPE;
	v->a[34422] = anon_sym_LT_AMP_DASH;
	v->a[34423] = anon_sym_GT_AMP_DASH;
	v->a[34424] = anon_sym_LT_LT;
	v->a[34425] = anon_sym_LT_LT_DASH;
	v->a[34426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34427] = anon_sym_AMP;
	v->a[34428] = aux_sym_concatenation_token1;
	v->a[34429] = anon_sym_DOLLAR;
	v->a[34430] = sym__special_character;
	v->a[34431] = anon_sym_DQUOTE;
	v->a[34432] = sym_raw_string;
	v->a[34433] = aux_sym_number_token1;
	v->a[34434] = aux_sym_number_token2;
	v->a[34435] = anon_sym_DOLLAR_LBRACE;
	v->a[34436] = anon_sym_DOLLAR_LPAREN;
	v->a[34437] = anon_sym_BQUOTE;
	v->a[34438] = anon_sym_DOLLAR_BQUOTE;
	v->a[34439] = sym_word;
	small_parse_table_1722(v);
}

void	small_parse_table_1722(t_small_parse_table_array *v)
{
	v->a[34440] = anon_sym_SEMI;
	v->a[34441] = 3;
	v->a[34442] = actions(3);
	v->a[34443] = 1;
	v->a[34444] = sym_comment;
	v->a[34445] = actions(3159);
	v->a[34446] = 7;
	v->a[34447] = sym_file_descriptor;
	v->a[34448] = sym__concat;
	v->a[34449] = sym_test_operator;
	v->a[34450] = sym__bare_dollar;
	v->a[34451] = sym__brace_start;
	v->a[34452] = ts_builtin_sym_end;
	v->a[34453] = aux_sym_heredoc_redirect_token1;
	v->a[34454] = actions(3157);
	v->a[34455] = 33;
	v->a[34456] = anon_sym_LPAREN;
	v->a[34457] = anon_sym_PIPE;
	v->a[34458] = anon_sym_SEMI_SEMI;
	v->a[34459] = anon_sym_PIPE_AMP;
	small_parse_table_1723(v);
}

void	small_parse_table_1723(t_small_parse_table_array *v)
{
	v->a[34460] = anon_sym_AMP_AMP;
	v->a[34461] = anon_sym_PIPE_PIPE;
	v->a[34462] = anon_sym_LT;
	v->a[34463] = anon_sym_GT;
	v->a[34464] = anon_sym_GT_GT;
	v->a[34465] = anon_sym_AMP_GT;
	v->a[34466] = anon_sym_AMP_GT_GT;
	v->a[34467] = anon_sym_LT_AMP;
	v->a[34468] = anon_sym_GT_AMP;
	v->a[34469] = anon_sym_GT_PIPE;
	v->a[34470] = anon_sym_LT_AMP_DASH;
	v->a[34471] = anon_sym_GT_AMP_DASH;
	v->a[34472] = anon_sym_LT_LT;
	v->a[34473] = anon_sym_LT_LT_DASH;
	v->a[34474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34475] = anon_sym_AMP;
	v->a[34476] = aux_sym_concatenation_token1;
	v->a[34477] = anon_sym_DOLLAR;
	v->a[34478] = sym__special_character;
	v->a[34479] = anon_sym_DQUOTE;
	small_parse_table_1724(v);
}

void	small_parse_table_1724(t_small_parse_table_array *v)
{
	v->a[34480] = sym_raw_string;
	v->a[34481] = aux_sym_number_token1;
	v->a[34482] = aux_sym_number_token2;
	v->a[34483] = anon_sym_DOLLAR_LBRACE;
	v->a[34484] = anon_sym_DOLLAR_LPAREN;
	v->a[34485] = anon_sym_BQUOTE;
	v->a[34486] = anon_sym_DOLLAR_BQUOTE;
	v->a[34487] = sym_word;
	v->a[34488] = anon_sym_SEMI;
	v->a[34489] = 5;
	v->a[34490] = actions(3);
	v->a[34491] = 1;
	v->a[34492] = sym_comment;
	v->a[34493] = actions(3448);
	v->a[34494] = 1;
	v->a[34495] = sym__special_character;
	v->a[34496] = state(799);
	v->a[34497] = 1;
	v->a[34498] = aux_sym__literal_repeat1;
	v->a[34499] = actions(3252);
	small_parse_table_1725(v);
}

/* EOF small_parse_table_344.c */
