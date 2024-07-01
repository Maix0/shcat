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
	v->a[26401] = actions(746);
	v->a[26402] = 1;
	v->a[26403] = sym_file_descriptor;
	v->a[26404] = actions(810);
	v->a[26405] = 1;
	v->a[26406] = sym_variable_name;
	v->a[26407] = actions(997);
	v->a[26408] = 1;
	v->a[26409] = ts_builtin_sym_end;
	v->a[26410] = state(1065);
	v->a[26411] = 2;
	v->a[26412] = sym_variable_assignment;
	v->a[26413] = aux_sym__variable_assignments_repeat1;
	v->a[26414] = state(1073);
	v->a[26415] = 3;
	v->a[26416] = sym_file_redirect;
	v->a[26417] = sym_heredoc_redirect;
	v->a[26418] = aux_sym_redirected_statement_repeat1;
	v->a[26419] = actions(960);
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = 8;
	v->a[26421] = anon_sym_SEMI_SEMI;
	v->a[26422] = anon_sym_AMP_AMP;
	v->a[26423] = anon_sym_PIPE_PIPE;
	v->a[26424] = anon_sym_LT_LT;
	v->a[26425] = anon_sym_LT_LT_DASH;
	v->a[26426] = aux_sym_heredoc_redirect_token1;
	v->a[26427] = anon_sym_AMP;
	v->a[26428] = anon_sym_SEMI;
	v->a[26429] = actions(734);
	v->a[26430] = 16;
	v->a[26431] = anon_sym_LT;
	v->a[26432] = anon_sym_GT;
	v->a[26433] = anon_sym_GT_GT;
	v->a[26434] = anon_sym_LT_AMP;
	v->a[26435] = anon_sym_GT_AMP;
	v->a[26436] = anon_sym_GT_PIPE;
	v->a[26437] = anon_sym_LT_GT;
	v->a[26438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26439] = anon_sym_DOLLAR;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = anon_sym_DQUOTE;
	v->a[26441] = sym_raw_string;
	v->a[26442] = sym_number;
	v->a[26443] = anon_sym_DOLLAR_LBRACE;
	v->a[26444] = anon_sym_DOLLAR_LPAREN;
	v->a[26445] = anon_sym_BQUOTE;
	v->a[26446] = sym_word;
	v->a[26447] = 4;
	v->a[26448] = actions(664);
	v->a[26449] = 1;
	v->a[26450] = sym_comment;
	v->a[26451] = actions(942);
	v->a[26452] = 2;
	v->a[26453] = anon_sym_PLUS_PLUS2;
	v->a[26454] = anon_sym_DASH_DASH2;
	v->a[26455] = actions(696);
	v->a[26456] = 13;
	v->a[26457] = anon_sym_PIPE;
	v->a[26458] = anon_sym_EQ;
	v->a[26459] = anon_sym_LT;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = anon_sym_GT;
	v->a[26461] = anon_sym_GT_GT;
	v->a[26462] = anon_sym_LT_LT;
	v->a[26463] = anon_sym_CARET;
	v->a[26464] = anon_sym_AMP;
	v->a[26465] = anon_sym_PLUS;
	v->a[26466] = anon_sym_DASH;
	v->a[26467] = anon_sym_STAR;
	v->a[26468] = anon_sym_SLASH;
	v->a[26469] = anon_sym_PERCENT;
	v->a[26470] = actions(698);
	v->a[26471] = 18;
	v->a[26472] = anon_sym_RPAREN;
	v->a[26473] = anon_sym_AMP_AMP;
	v->a[26474] = anon_sym_PIPE_PIPE;
	v->a[26475] = anon_sym_PLUS_EQ;
	v->a[26476] = anon_sym_DASH_EQ;
	v->a[26477] = anon_sym_STAR_EQ;
	v->a[26478] = anon_sym_SLASH_EQ;
	v->a[26479] = anon_sym_PERCENT_EQ;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_LT_LT_EQ;
	v->a[26481] = anon_sym_GT_GT_EQ;
	v->a[26482] = anon_sym_AMP_EQ;
	v->a[26483] = anon_sym_CARET_EQ;
	v->a[26484] = anon_sym_PIPE_EQ;
	v->a[26485] = anon_sym_EQ_EQ;
	v->a[26486] = anon_sym_BANG_EQ;
	v->a[26487] = anon_sym_LT_EQ;
	v->a[26488] = anon_sym_GT_EQ;
	v->a[26489] = anon_sym_QMARK;
	v->a[26490] = 17;
	v->a[26491] = actions(664);
	v->a[26492] = 1;
	v->a[26493] = sym_comment;
	v->a[26494] = actions(702);
	v->a[26495] = 1;
	v->a[26496] = anon_sym_CARET;
	v->a[26497] = actions(704);
	v->a[26498] = 1;
	v->a[26499] = anon_sym_AMP;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
