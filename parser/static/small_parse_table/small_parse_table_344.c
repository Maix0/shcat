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
	v->a[34400] = 1;
	v->a[34401] = sym_variable_name;
	v->a[34402] = actions(1268);
	v->a[34403] = 2;
	v->a[34404] = anon_sym_esac;
	v->a[34405] = anon_sym_SEMI_SEMI;
	v->a[34406] = actions(1245);
	v->a[34407] = 24;
	v->a[34408] = anon_sym_for;
	v->a[34409] = anon_sym_while;
	v->a[34410] = anon_sym_until;
	v->a[34411] = anon_sym_if;
	v->a[34412] = anon_sym_case;
	v->a[34413] = anon_sym_LPAREN;
	v->a[34414] = anon_sym_LBRACE;
	v->a[34415] = anon_sym_BANG;
	v->a[34416] = anon_sym_LT;
	v->a[34417] = anon_sym_GT;
	v->a[34418] = anon_sym_GT_GT;
	v->a[34419] = anon_sym_LT_AMP;
	small_parse_table_1721(v);
}

void	small_parse_table_1721(t_small_parse_table_array *v)
{
	v->a[34420] = anon_sym_GT_AMP;
	v->a[34421] = anon_sym_GT_PIPE;
	v->a[34422] = anon_sym_LT_GT;
	v->a[34423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34424] = anon_sym_DOLLAR;
	v->a[34425] = anon_sym_DQUOTE;
	v->a[34426] = sym_raw_string;
	v->a[34427] = sym_number;
	v->a[34428] = anon_sym_DOLLAR_LBRACE;
	v->a[34429] = anon_sym_DOLLAR_LPAREN;
	v->a[34430] = anon_sym_BQUOTE;
	v->a[34431] = sym_word;
	v->a[34432] = 4;
	v->a[34433] = actions(3);
	v->a[34434] = 1;
	v->a[34435] = sym_comment;
	v->a[34436] = actions(1249);
	v->a[34437] = 1;
	v->a[34438] = sym_variable_name;
	v->a[34439] = actions(1268);
	small_parse_table_1722(v);
}

void	small_parse_table_1722(t_small_parse_table_array *v)
{
	v->a[34440] = 2;
	v->a[34441] = anon_sym_esac;
	v->a[34442] = anon_sym_SEMI_SEMI;
	v->a[34443] = actions(1245);
	v->a[34444] = 24;
	v->a[34445] = anon_sym_for;
	v->a[34446] = anon_sym_while;
	v->a[34447] = anon_sym_until;
	v->a[34448] = anon_sym_if;
	v->a[34449] = anon_sym_case;
	v->a[34450] = anon_sym_LPAREN;
	v->a[34451] = anon_sym_LBRACE;
	v->a[34452] = anon_sym_BANG;
	v->a[34453] = anon_sym_LT;
	v->a[34454] = anon_sym_GT;
	v->a[34455] = anon_sym_GT_GT;
	v->a[34456] = anon_sym_LT_AMP;
	v->a[34457] = anon_sym_GT_AMP;
	v->a[34458] = anon_sym_GT_PIPE;
	v->a[34459] = anon_sym_LT_GT;
	small_parse_table_1723(v);
}

void	small_parse_table_1723(t_small_parse_table_array *v)
{
	v->a[34460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34461] = anon_sym_DOLLAR;
	v->a[34462] = anon_sym_DQUOTE;
	v->a[34463] = sym_raw_string;
	v->a[34464] = sym_number;
	v->a[34465] = anon_sym_DOLLAR_LBRACE;
	v->a[34466] = anon_sym_DOLLAR_LPAREN;
	v->a[34467] = anon_sym_BQUOTE;
	v->a[34468] = sym_word;
	v->a[34469] = 3;
	v->a[34470] = actions(3);
	v->a[34471] = 1;
	v->a[34472] = sym_comment;
	v->a[34473] = actions(1147);
	v->a[34474] = 1;
	v->a[34475] = sym__concat;
	v->a[34476] = actions(1145);
	v->a[34477] = 26;
	v->a[34478] = anon_sym_esac;
	v->a[34479] = anon_sym_PIPE;
	small_parse_table_1724(v);
}

void	small_parse_table_1724(t_small_parse_table_array *v)
{
	v->a[34480] = anon_sym_SEMI_SEMI;
	v->a[34481] = anon_sym_AMP_AMP;
	v->a[34482] = anon_sym_PIPE_PIPE;
	v->a[34483] = anon_sym_LT;
	v->a[34484] = anon_sym_GT;
	v->a[34485] = anon_sym_GT_GT;
	v->a[34486] = anon_sym_LT_AMP;
	v->a[34487] = anon_sym_GT_AMP;
	v->a[34488] = anon_sym_GT_PIPE;
	v->a[34489] = anon_sym_LT_GT;
	v->a[34490] = anon_sym_LT_LT;
	v->a[34491] = anon_sym_LT_LT_DASH;
	v->a[34492] = aux_sym_heredoc_redirect_token1;
	v->a[34493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34494] = aux_sym_concatenation_token1;
	v->a[34495] = anon_sym_DOLLAR;
	v->a[34496] = anon_sym_DQUOTE;
	v->a[34497] = sym_raw_string;
	v->a[34498] = sym_number;
	v->a[34499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1725(v);
}

/* EOF small_parse_table_344.c */
