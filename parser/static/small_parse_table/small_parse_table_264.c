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
	v->a[26400] = sym_file_descriptor;
	v->a[26401] = actions(978);
	v->a[26402] = 1;
	v->a[26403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26404] = actions(980);
	v->a[26405] = 1;
	v->a[26406] = anon_sym_DOLLAR;
	v->a[26407] = actions(982);
	v->a[26408] = 1;
	v->a[26409] = anon_sym_DQUOTE;
	v->a[26410] = actions(984);
	v->a[26411] = 1;
	v->a[26412] = aux_sym_number_token1;
	v->a[26413] = actions(986);
	v->a[26414] = 1;
	v->a[26415] = aux_sym_number_token2;
	v->a[26416] = actions(988);
	v->a[26417] = 1;
	v->a[26418] = anon_sym_DOLLAR_LBRACE;
	v->a[26419] = actions(990);
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = 1;
	v->a[26421] = anon_sym_DOLLAR_LPAREN;
	v->a[26422] = actions(992);
	v->a[26423] = 1;
	v->a[26424] = anon_sym_BQUOTE;
	v->a[26425] = state(1286);
	v->a[26426] = 1;
	v->a[26427] = sym_concatenation;
	v->a[26428] = actions(976);
	v->a[26429] = 2;
	v->a[26430] = sym_raw_string;
	v->a[26431] = sym_word;
	v->a[26432] = state(1066);
	v->a[26433] = 6;
	v->a[26434] = sym_arithmetic_expansion;
	v->a[26435] = sym_string;
	v->a[26436] = sym_number;
	v->a[26437] = sym_simple_expansion;
	v->a[26438] = sym_expansion;
	v->a[26439] = sym_command_substitution;
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = actions(748);
	v->a[26441] = 20;
	v->a[26442] = anon_sym_esac;
	v->a[26443] = anon_sym_PIPE;
	v->a[26444] = anon_sym_SEMI_SEMI;
	v->a[26445] = anon_sym_AMP_AMP;
	v->a[26446] = anon_sym_PIPE_PIPE;
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
	v->a[26457] = anon_sym_LT_LT;
	v->a[26458] = anon_sym_LT_LT_DASH;
	v->a[26459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = anon_sym_AMP;
	v->a[26461] = anon_sym_SEMI;
	v->a[26462] = 14;
	v->a[26463] = actions(3);
	v->a[26464] = 1;
	v->a[26465] = sym_comment;
	v->a[26466] = actions(905);
	v->a[26467] = 1;
	v->a[26468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26469] = actions(907);
	v->a[26470] = 1;
	v->a[26471] = anon_sym_DOLLAR;
	v->a[26472] = actions(909);
	v->a[26473] = 1;
	v->a[26474] = anon_sym_DQUOTE;
	v->a[26475] = actions(911);
	v->a[26476] = 1;
	v->a[26477] = aux_sym_number_token1;
	v->a[26478] = actions(913);
	v->a[26479] = 1;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = aux_sym_number_token2;
	v->a[26481] = actions(915);
	v->a[26482] = 1;
	v->a[26483] = anon_sym_DOLLAR_LBRACE;
	v->a[26484] = actions(917);
	v->a[26485] = 1;
	v->a[26486] = anon_sym_DOLLAR_LPAREN;
	v->a[26487] = actions(919);
	v->a[26488] = 1;
	v->a[26489] = anon_sym_BQUOTE;
	v->a[26490] = state(1105);
	v->a[26491] = 1;
	v->a[26492] = sym_concatenation;
	v->a[26493] = actions(750);
	v->a[26494] = 2;
	v->a[26495] = sym_file_descriptor;
	v->a[26496] = ts_builtin_sym_end;
	v->a[26497] = actions(994);
	v->a[26498] = 2;
	v->a[26499] = sym_raw_string;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
