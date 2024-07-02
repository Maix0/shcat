/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_554.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2770(t_small_parse_table_array *v)
{
	v->a[55400] = sym_number;
	v->a[55401] = anon_sym_DOLLAR_LBRACE;
	v->a[55402] = anon_sym_DOLLAR_LPAREN;
	v->a[55403] = anon_sym_BQUOTE;
	v->a[55404] = sym_word;
	v->a[55405] = 6;
	v->a[55406] = actions(3);
	v->a[55407] = 1;
	v->a[55408] = sym_comment;
	v->a[55409] = actions(1881);
	v->a[55410] = 1;
	v->a[55411] = aux_sym_concatenation_token1;
	v->a[55412] = actions(1883);
	v->a[55413] = 1;
	v->a[55414] = sym__concat;
	v->a[55415] = state(893);
	v->a[55416] = 1;
	v->a[55417] = aux_sym_concatenation_repeat1;
	v->a[55418] = actions(1043);
	v->a[55419] = 4;
	small_parse_table_2771(v);
}

void	small_parse_table_2771(t_small_parse_table_array *v)
{
	v->a[55420] = sym_file_descriptor;
	v->a[55421] = sym_variable_name;
	v->a[55422] = ts_builtin_sym_end;
	v->a[55423] = aux_sym_heredoc_redirect_token1;
	v->a[55424] = actions(1045);
	v->a[55425] = 15;
	v->a[55426] = anon_sym_PIPE;
	v->a[55427] = anon_sym_SEMI_SEMI;
	v->a[55428] = anon_sym_AMP_AMP;
	v->a[55429] = anon_sym_PIPE_PIPE;
	v->a[55430] = anon_sym_LT;
	v->a[55431] = anon_sym_GT;
	v->a[55432] = anon_sym_GT_GT;
	v->a[55433] = anon_sym_LT_AMP;
	v->a[55434] = anon_sym_GT_AMP;
	v->a[55435] = anon_sym_GT_PIPE;
	v->a[55436] = anon_sym_LT_GT;
	v->a[55437] = anon_sym_LT_LT;
	v->a[55438] = anon_sym_LT_LT_DASH;
	v->a[55439] = anon_sym_AMP;
	small_parse_table_2772(v);
}

void	small_parse_table_2772(t_small_parse_table_array *v)
{
	v->a[55440] = anon_sym_SEMI;
	v->a[55441] = 13;
	v->a[55442] = actions(3);
	v->a[55443] = 1;
	v->a[55444] = sym_comment;
	v->a[55445] = actions(1807);
	v->a[55446] = 1;
	v->a[55447] = sym__immediate_double_hash;
	v->a[55448] = actions(1885);
	v->a[55449] = 1;
	v->a[55450] = anon_sym_RPAREN;
	v->a[55451] = actions(1887);
	v->a[55452] = 1;
	v->a[55453] = anon_sym_RBRACE;
	v->a[55454] = actions(1890);
	v->a[55455] = 1;
	v->a[55456] = anon_sym_DQUOTE;
	v->a[55457] = actions(1892);
	v->a[55458] = 1;
	v->a[55459] = sym_raw_string;
	small_parse_table_2773(v);
}

void	small_parse_table_2773(t_small_parse_table_array *v)
{
	v->a[55460] = actions(1894);
	v->a[55461] = 1;
	v->a[55462] = aux_sym__expansion_regex_token1;
	v->a[55463] = actions(1896);
	v->a[55464] = 1;
	v->a[55465] = sym_regex;
	v->a[55466] = state(2037);
	v->a[55467] = 1;
	v->a[55468] = sym__expansion_expression;
	v->a[55469] = state(2109);
	v->a[55470] = 1;
	v->a[55471] = sym__expansion_regex;
	v->a[55472] = state(1749);
	v->a[55473] = 2;
	v->a[55474] = sym_string;
	v->a[55475] = aux_sym__expansion_regex_repeat1;
	v->a[55476] = actions(1801);
	v->a[55477] = 3;
	v->a[55478] = anon_sym_PERCENT;
	v->a[55479] = anon_sym_POUND;
	small_parse_table_2774(v);
}

void	small_parse_table_2774(t_small_parse_table_array *v)
{
	v->a[55480] = anon_sym_PERCENT_PERCENT;
	v->a[55481] = actions(1805);
	v->a[55482] = 8;
	v->a[55483] = anon_sym_COLON_DASH;
	v->a[55484] = anon_sym_DASH3;
	v->a[55485] = anon_sym_COLON_EQ;
	v->a[55486] = anon_sym_EQ2;
	v->a[55487] = anon_sym_COLON_QMARK;
	v->a[55488] = anon_sym_QMARK2;
	v->a[55489] = anon_sym_COLON_PLUS;
	v->a[55490] = anon_sym_PLUS3;
	v->a[55491] = 11;
	v->a[55492] = actions(3);
	v->a[55493] = 1;
	v->a[55494] = sym_comment;
	v->a[55495] = actions(692);
	v->a[55496] = 1;
	v->a[55497] = anon_sym_PIPE;
	v->a[55498] = actions(1900);
	v->a[55499] = 1;
	small_parse_table_2775(v);
}

/* EOF small_parse_table_554.c */
