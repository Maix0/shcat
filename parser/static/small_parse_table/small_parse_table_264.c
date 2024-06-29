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
	v->a[26400] = anon_sym_LT_AMP;
	v->a[26401] = anon_sym_GT_AMP;
	v->a[26402] = anon_sym_GT_PIPE;
	v->a[26403] = anon_sym_LT_AMP_DASH;
	v->a[26404] = anon_sym_GT_AMP_DASH;
	v->a[26405] = anon_sym_LT_LT;
	v->a[26406] = anon_sym_LT_LT_DASH;
	v->a[26407] = aux_sym_heredoc_redirect_token1;
	v->a[26408] = anon_sym_AMP;
	v->a[26409] = anon_sym_SEMI;
	v->a[26410] = 20;
	v->a[26411] = actions(3);
	v->a[26412] = 1;
	v->a[26413] = sym_comment;
	v->a[26414] = actions(859);
	v->a[26415] = 1;
	v->a[26416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26417] = actions(861);
	v->a[26418] = 1;
	v->a[26419] = anon_sym_DOLLAR;
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = actions(863);
	v->a[26421] = 1;
	v->a[26422] = anon_sym_DQUOTE;
	v->a[26423] = actions(865);
	v->a[26424] = 1;
	v->a[26425] = anon_sym_DOLLAR_LBRACE;
	v->a[26426] = actions(867);
	v->a[26427] = 1;
	v->a[26428] = anon_sym_DOLLAR_LPAREN;
	v->a[26429] = actions(869);
	v->a[26430] = 1;
	v->a[26431] = anon_sym_BQUOTE;
	v->a[26432] = actions(871);
	v->a[26433] = 1;
	v->a[26434] = sym_file_descriptor;
	v->a[26435] = actions(941);
	v->a[26436] = 1;
	v->a[26437] = aux_sym_heredoc_redirect_token1;
	v->a[26438] = state(1532);
	v->a[26439] = 1;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = aux_sym__heredoc_command;
	v->a[26441] = state(1953);
	v->a[26442] = 1;
	v->a[26443] = sym_concatenation;
	v->a[26444] = state(2272);
	v->a[26445] = 1;
	v->a[26446] = sym__heredoc_expression;
	v->a[26447] = state(2273);
	v->a[26448] = 1;
	v->a[26449] = sym__heredoc_pipeline;
	v->a[26450] = actions(849);
	v->a[26451] = 2;
	v->a[26452] = anon_sym_PIPE;
	v->a[26453] = anon_sym_PIPE_AMP;
	v->a[26454] = actions(851);
	v->a[26455] = 2;
	v->a[26456] = anon_sym_AMP_AMP;
	v->a[26457] = anon_sym_PIPE_PIPE;
	v->a[26458] = actions(855);
	v->a[26459] = 2;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = anon_sym_LT_AMP_DASH;
	v->a[26461] = anon_sym_GT_AMP_DASH;
	v->a[26462] = state(1533);
	v->a[26463] = 2;
	v->a[26464] = sym_file_redirect;
	v->a[26465] = aux_sym_redirected_statement_repeat2;
	v->a[26466] = actions(847);
	v->a[26467] = 3;
	v->a[26468] = sym_raw_string;
	v->a[26469] = sym_number;
	v->a[26470] = sym_word;
	v->a[26471] = state(1788);
	v->a[26472] = 5;
	v->a[26473] = sym_arithmetic_expansion;
	v->a[26474] = sym_string;
	v->a[26475] = sym_simple_expansion;
	v->a[26476] = sym_expansion;
	v->a[26477] = sym_command_substitution;
	v->a[26478] = actions(853);
	v->a[26479] = 8;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_LT;
	v->a[26481] = anon_sym_GT;
	v->a[26482] = anon_sym_GT_GT;
	v->a[26483] = anon_sym_AMP_GT;
	v->a[26484] = anon_sym_AMP_GT_GT;
	v->a[26485] = anon_sym_LT_AMP;
	v->a[26486] = anon_sym_GT_AMP;
	v->a[26487] = anon_sym_GT_PIPE;
	v->a[26488] = 20;
	v->a[26489] = actions(3);
	v->a[26490] = 1;
	v->a[26491] = sym_comment;
	v->a[26492] = actions(859);
	v->a[26493] = 1;
	v->a[26494] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26495] = actions(861);
	v->a[26496] = 1;
	v->a[26497] = anon_sym_DOLLAR;
	v->a[26498] = actions(863);
	v->a[26499] = 1;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
