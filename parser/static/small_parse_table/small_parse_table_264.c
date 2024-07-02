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
	v->a[26400] = 2;
	v->a[26401] = anon_sym_AMP_AMP;
	v->a[26402] = anon_sym_PIPE_PIPE;
	v->a[26403] = state(1181);
	v->a[26404] = 2;
	v->a[26405] = sym_variable_assignment;
	v->a[26406] = aux_sym__variable_assignments_repeat1;
	v->a[26407] = state(1134);
	v->a[26408] = 3;
	v->a[26409] = sym_file_redirect;
	v->a[26410] = sym_heredoc_redirect;
	v->a[26411] = aux_sym_redirected_statement_repeat1;
	v->a[26412] = actions(696);
	v->a[26413] = 4;
	v->a[26414] = anon_sym_SEMI_SEMI;
	v->a[26415] = aux_sym_heredoc_redirect_token1;
	v->a[26416] = anon_sym_AMP;
	v->a[26417] = anon_sym_SEMI;
	v->a[26418] = actions(690);
	v->a[26419] = 16;
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = anon_sym_LT;
	v->a[26421] = anon_sym_GT;
	v->a[26422] = anon_sym_GT_GT;
	v->a[26423] = anon_sym_LT_AMP;
	v->a[26424] = anon_sym_GT_AMP;
	v->a[26425] = anon_sym_GT_PIPE;
	v->a[26426] = anon_sym_LT_GT;
	v->a[26427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26428] = anon_sym_DOLLAR;
	v->a[26429] = anon_sym_DQUOTE;
	v->a[26430] = sym_raw_string;
	v->a[26431] = sym_number;
	v->a[26432] = anon_sym_DOLLAR_LBRACE;
	v->a[26433] = anon_sym_DOLLAR_LPAREN;
	v->a[26434] = anon_sym_BQUOTE;
	v->a[26435] = sym_word;
	v->a[26436] = 17;
	v->a[26437] = actions(668);
	v->a[26438] = 1;
	v->a[26439] = anon_sym_AMP;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = actions(680);
	v->a[26441] = 1;
	v->a[26442] = sym_comment;
	v->a[26443] = actions(730);
	v->a[26444] = 1;
	v->a[26445] = anon_sym_CARET;
	v->a[26446] = actions(732);
	v->a[26447] = 1;
	v->a[26448] = anon_sym_PIPE;
	v->a[26449] = actions(734);
	v->a[26450] = 1;
	v->a[26451] = anon_sym_AMP_AMP;
	v->a[26452] = actions(736);
	v->a[26453] = 1;
	v->a[26454] = anon_sym_PIPE_PIPE;
	v->a[26455] = actions(738);
	v->a[26456] = 1;
	v->a[26457] = anon_sym_QMARK;
	v->a[26458] = actions(740);
	v->a[26459] = 1;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = anon_sym_EQ;
	v->a[26461] = actions(1001);
	v->a[26462] = 1;
	v->a[26463] = anon_sym_RPAREN_RPAREN;
	v->a[26464] = actions(664);
	v->a[26465] = 2;
	v->a[26466] = anon_sym_LT;
	v->a[26467] = anon_sym_GT;
	v->a[26468] = actions(666);
	v->a[26469] = 2;
	v->a[26470] = anon_sym_GT_GT;
	v->a[26471] = anon_sym_LT_LT;
	v->a[26472] = actions(670);
	v->a[26473] = 2;
	v->a[26474] = anon_sym_EQ_EQ;
	v->a[26475] = anon_sym_BANG_EQ;
	v->a[26476] = actions(672);
	v->a[26477] = 2;
	v->a[26478] = anon_sym_LT_EQ;
	v->a[26479] = anon_sym_GT_EQ;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = actions(674);
	v->a[26481] = 2;
	v->a[26482] = anon_sym_PLUS;
	v->a[26483] = anon_sym_DASH;
	v->a[26484] = actions(678);
	v->a[26485] = 2;
	v->a[26486] = anon_sym_PLUS_PLUS2;
	v->a[26487] = anon_sym_DASH_DASH2;
	v->a[26488] = actions(676);
	v->a[26489] = 3;
	v->a[26490] = anon_sym_STAR;
	v->a[26491] = anon_sym_SLASH;
	v->a[26492] = anon_sym_PERCENT;
	v->a[26493] = actions(912);
	v->a[26494] = 10;
	v->a[26495] = anon_sym_PLUS_EQ;
	v->a[26496] = anon_sym_DASH_EQ;
	v->a[26497] = anon_sym_STAR_EQ;
	v->a[26498] = anon_sym_SLASH_EQ;
	v->a[26499] = anon_sym_PERCENT_EQ;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
