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
	v->a[26400] = anon_sym_PIPE;
	v->a[26401] = anon_sym_SEMI_SEMI;
	v->a[26402] = anon_sym_AMP_AMP;
	v->a[26403] = anon_sym_PIPE_PIPE;
	v->a[26404] = anon_sym_LT;
	v->a[26405] = anon_sym_GT;
	v->a[26406] = anon_sym_GT_GT;
	v->a[26407] = anon_sym_LT_LT;
	v->a[26408] = aux_sym_heredoc_redirect_token1;
	v->a[26409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26410] = anon_sym_DOLLAR;
	v->a[26411] = anon_sym_DQUOTE;
	v->a[26412] = sym_raw_string;
	v->a[26413] = sym_number;
	v->a[26414] = anon_sym_DOLLAR_LBRACE;
	v->a[26415] = anon_sym_DOLLAR_LPAREN;
	v->a[26416] = anon_sym_BQUOTE;
	v->a[26417] = sym_word;
	v->a[26418] = anon_sym_SEMI;
	v->a[26419] = 5;
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = actions(3);
	v->a[26421] = 1;
	v->a[26422] = sym_comment;
	v->a[26423] = actions(1156);
	v->a[26424] = 1;
	v->a[26425] = aux_sym_concatenation_token1;
	v->a[26426] = actions(1168);
	v->a[26427] = 1;
	v->a[26428] = sym__concat;
	v->a[26429] = state(374);
	v->a[26430] = 1;
	v->a[26431] = aux_sym_concatenation_repeat1;
	v->a[26432] = actions(880);
	v->a[26433] = 20;
	v->a[26434] = anon_sym_PIPE;
	v->a[26435] = anon_sym_RPAREN;
	v->a[26436] = anon_sym_SEMI_SEMI;
	v->a[26437] = anon_sym_AMP_AMP;
	v->a[26438] = anon_sym_PIPE_PIPE;
	v->a[26439] = anon_sym_LT;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = anon_sym_GT;
	v->a[26441] = anon_sym_GT_GT;
	v->a[26442] = anon_sym_LT_LT;
	v->a[26443] = aux_sym_heredoc_redirect_token1;
	v->a[26444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26445] = anon_sym_DOLLAR;
	v->a[26446] = anon_sym_DQUOTE;
	v->a[26447] = sym_raw_string;
	v->a[26448] = sym_number;
	v->a[26449] = anon_sym_DOLLAR_LBRACE;
	v->a[26450] = anon_sym_DOLLAR_LPAREN;
	v->a[26451] = anon_sym_BQUOTE;
	v->a[26452] = sym_word;
	v->a[26453] = anon_sym_SEMI;
	v->a[26454] = 3;
	v->a[26455] = actions(3);
	v->a[26456] = 1;
	v->a[26457] = sym_comment;
	v->a[26458] = actions(981);
	v->a[26459] = 2;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = sym__concat;
	v->a[26461] = sym__bare_dollar;
	v->a[26462] = actions(973);
	v->a[26463] = 21;
	v->a[26464] = anon_sym_PIPE;
	v->a[26465] = anon_sym_RPAREN;
	v->a[26466] = anon_sym_SEMI_SEMI;
	v->a[26467] = anon_sym_AMP_AMP;
	v->a[26468] = anon_sym_PIPE_PIPE;
	v->a[26469] = anon_sym_LT;
	v->a[26470] = anon_sym_GT;
	v->a[26471] = anon_sym_GT_GT;
	v->a[26472] = anon_sym_LT_LT;
	v->a[26473] = aux_sym_heredoc_redirect_token1;
	v->a[26474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26475] = aux_sym_concatenation_token1;
	v->a[26476] = anon_sym_DOLLAR;
	v->a[26477] = anon_sym_DQUOTE;
	v->a[26478] = sym_raw_string;
	v->a[26479] = sym_number;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_DOLLAR_LBRACE;
	v->a[26481] = anon_sym_DOLLAR_LPAREN;
	v->a[26482] = anon_sym_BQUOTE;
	v->a[26483] = sym_word;
	v->a[26484] = anon_sym_SEMI;
	v->a[26485] = 3;
	v->a[26486] = actions(3);
	v->a[26487] = 1;
	v->a[26488] = sym_comment;
	v->a[26489] = actions(1083);
	v->a[26490] = 2;
	v->a[26491] = sym__concat;
	v->a[26492] = sym__bare_dollar;
	v->a[26493] = actions(1085);
	v->a[26494] = 21;
	v->a[26495] = anon_sym_PIPE;
	v->a[26496] = anon_sym_RPAREN;
	v->a[26497] = anon_sym_SEMI_SEMI;
	v->a[26498] = anon_sym_AMP_AMP;
	v->a[26499] = anon_sym_PIPE_PIPE;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
