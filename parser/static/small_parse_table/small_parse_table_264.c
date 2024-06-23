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
	v->a[26400] = 14;
	v->a[26401] = actions(3);
	v->a[26402] = 1;
	v->a[26403] = sym_comment;
	v->a[26404] = actions(807);
	v->a[26405] = 1;
	v->a[26406] = anon_sym_PIPE;
	v->a[26407] = actions(811);
	v->a[26408] = 1;
	v->a[26409] = sym_file_descriptor;
	v->a[26410] = actions(813);
	v->a[26411] = 1;
	v->a[26412] = sym_variable_name;
	v->a[26413] = actions(951);
	v->a[26414] = 1;
	v->a[26415] = ts_builtin_sym_end;
	v->a[26416] = actions(953);
	v->a[26417] = 1;
	v->a[26418] = anon_sym_SEMI_SEMI;
	v->a[26419] = actions(955);
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = 1;
	v->a[26421] = aux_sym_heredoc_redirect_token1;
	v->a[26422] = actions(957);
	v->a[26423] = 1;
	v->a[26424] = anon_sym_AMP;
	v->a[26425] = actions(959);
	v->a[26426] = 1;
	v->a[26427] = anon_sym_SEMI;
	v->a[26428] = actions(861);
	v->a[26429] = 2;
	v->a[26430] = anon_sym_LT_LT;
	v->a[26431] = anon_sym_LT_LT_DASH;
	v->a[26432] = actions(934);
	v->a[26433] = 2;
	v->a[26434] = anon_sym_AMP_AMP;
	v->a[26435] = anon_sym_PIPE_PIPE;
	v->a[26436] = state(1285);
	v->a[26437] = 2;
	v->a[26438] = sym_variable_assignment;
	v->a[26439] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = state(1289);
	v->a[26441] = 3;
	v->a[26442] = sym_file_redirect;
	v->a[26443] = sym_heredoc_redirect;
	v->a[26444] = aux_sym_redirected_statement_repeat1;
	v->a[26445] = actions(805);
	v->a[26446] = 19;
	v->a[26447] = anon_sym_LT;
	v->a[26448] = anon_sym_GT;
	v->a[26449] = anon_sym_GT_GT;
	v->a[26450] = anon_sym_AMP_GT;
	v->a[26451] = anon_sym_AMP_GT_GT;
	v->a[26452] = anon_sym_LT_AMP;
	v->a[26453] = anon_sym_GT_AMP;
	v->a[26454] = anon_sym_GT_PIPE;
	v->a[26455] = anon_sym_LT_AMP_DASH;
	v->a[26456] = anon_sym_GT_AMP_DASH;
	v->a[26457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26458] = anon_sym_DOLLAR;
	v->a[26459] = anon_sym_DQUOTE;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = sym_raw_string;
	v->a[26461] = sym_number;
	v->a[26462] = anon_sym_DOLLAR_LBRACE;
	v->a[26463] = anon_sym_DOLLAR_LPAREN;
	v->a[26464] = anon_sym_BQUOTE;
	v->a[26465] = sym_word;
	v->a[26466] = 12;
	v->a[26467] = actions(3);
	v->a[26468] = 1;
	v->a[26469] = sym_comment;
	v->a[26470] = actions(717);
	v->a[26471] = 1;
	v->a[26472] = sym_file_descriptor;
	v->a[26473] = actions(824);
	v->a[26474] = 1;
	v->a[26475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26476] = actions(826);
	v->a[26477] = 1;
	v->a[26478] = anon_sym_DOLLAR;
	v->a[26479] = actions(828);
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = 1;
	v->a[26481] = anon_sym_DQUOTE;
	v->a[26482] = actions(830);
	v->a[26483] = 1;
	v->a[26484] = anon_sym_DOLLAR_LBRACE;
	v->a[26485] = actions(832);
	v->a[26486] = 1;
	v->a[26487] = anon_sym_DOLLAR_LPAREN;
	v->a[26488] = actions(834);
	v->a[26489] = 1;
	v->a[26490] = anon_sym_BQUOTE;
	v->a[26491] = state(1376);
	v->a[26492] = 1;
	v->a[26493] = sym_concatenation;
	v->a[26494] = actions(961);
	v->a[26495] = 3;
	v->a[26496] = sym_raw_string;
	v->a[26497] = sym_number;
	v->a[26498] = sym_word;
	v->a[26499] = state(1338);
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
