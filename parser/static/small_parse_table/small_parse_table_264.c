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
	v->a[26400] = actions(705);
	v->a[26401] = 1;
	v->a[26402] = anon_sym_DOLLAR_LBRACE;
	v->a[26403] = actions(707);
	v->a[26404] = 1;
	v->a[26405] = anon_sym_DOLLAR_LPAREN;
	v->a[26406] = actions(709);
	v->a[26407] = 1;
	v->a[26408] = anon_sym_BQUOTE;
	v->a[26409] = state(272);
	v->a[26410] = 2;
	v->a[26411] = sym_concatenation;
	v->a[26412] = aux_sym_for_statement_repeat1;
	v->a[26413] = actions(1001);
	v->a[26414] = 3;
	v->a[26415] = sym_raw_string;
	v->a[26416] = sym_number;
	v->a[26417] = sym_word;
	v->a[26418] = state(628);
	v->a[26419] = 5;
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = sym_arithmetic_expansion;
	v->a[26421] = sym_string;
	v->a[26422] = sym_simple_expansion;
	v->a[26423] = sym_expansion;
	v->a[26424] = sym_command_substitution;
	v->a[26425] = actions(604);
	v->a[26426] = 17;
	v->a[26427] = anon_sym_PIPE;
	v->a[26428] = anon_sym_SEMI_SEMI;
	v->a[26429] = anon_sym_AMP_AMP;
	v->a[26430] = anon_sym_PIPE_PIPE;
	v->a[26431] = anon_sym_LT;
	v->a[26432] = anon_sym_GT;
	v->a[26433] = anon_sym_GT_GT;
	v->a[26434] = anon_sym_LT_AMP;
	v->a[26435] = anon_sym_GT_AMP;
	v->a[26436] = anon_sym_GT_PIPE;
	v->a[26437] = anon_sym_LT_AMP_DASH;
	v->a[26438] = anon_sym_GT_AMP_DASH;
	v->a[26439] = anon_sym_LT_LT;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = anon_sym_LT_LT_DASH;
	v->a[26441] = aux_sym_heredoc_redirect_token1;
	v->a[26442] = anon_sym_AMP;
	v->a[26443] = anon_sym_SEMI;
	v->a[26444] = 7;
	v->a[26445] = actions(870);
	v->a[26446] = 1;
	v->a[26447] = sym_comment;
	v->a[26448] = actions(852);
	v->a[26449] = 2;
	v->a[26450] = anon_sym_GT_GT;
	v->a[26451] = anon_sym_LT_LT;
	v->a[26452] = actions(864);
	v->a[26453] = 2;
	v->a[26454] = anon_sym_PLUS;
	v->a[26455] = anon_sym_DASH;
	v->a[26456] = actions(868);
	v->a[26457] = 2;
	v->a[26458] = anon_sym_PLUS_PLUS2;
	v->a[26459] = anon_sym_DASH_DASH2;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = actions(866);
	v->a[26461] = 3;
	v->a[26462] = anon_sym_STAR;
	v->a[26463] = anon_sym_SLASH;
	v->a[26464] = anon_sym_PERCENT;
	v->a[26465] = actions(872);
	v->a[26466] = 6;
	v->a[26467] = anon_sym_PIPE;
	v->a[26468] = anon_sym_EQ;
	v->a[26469] = anon_sym_LT;
	v->a[26470] = anon_sym_GT;
	v->a[26471] = anon_sym_CARET;
	v->a[26472] = anon_sym_AMP;
	v->a[26473] = actions(874);
	v->a[26474] = 19;
	v->a[26475] = anon_sym_AMP_AMP;
	v->a[26476] = anon_sym_PIPE_PIPE;
	v->a[26477] = anon_sym_RPAREN_RPAREN;
	v->a[26478] = anon_sym_PLUS_EQ;
	v->a[26479] = anon_sym_DASH_EQ;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_STAR_EQ;
	v->a[26481] = anon_sym_SLASH_EQ;
	v->a[26482] = anon_sym_PERCENT_EQ;
	v->a[26483] = anon_sym_LT_LT_EQ;
	v->a[26484] = anon_sym_GT_GT_EQ;
	v->a[26485] = anon_sym_AMP_EQ;
	v->a[26486] = anon_sym_CARET_EQ;
	v->a[26487] = anon_sym_PIPE_EQ;
	v->a[26488] = anon_sym_EQ_EQ;
	v->a[26489] = anon_sym_BANG_EQ;
	v->a[26490] = anon_sym_LT_EQ;
	v->a[26491] = anon_sym_GT_EQ;
	v->a[26492] = anon_sym_QMARK;
	v->a[26493] = anon_sym_COLON;
	v->a[26494] = 12;
	v->a[26495] = actions(3);
	v->a[26496] = 1;
	v->a[26497] = sym_comment;
	v->a[26498] = actions(682);
	v->a[26499] = 1;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
