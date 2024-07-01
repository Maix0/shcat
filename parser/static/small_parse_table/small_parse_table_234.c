/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_234.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1170(t_small_parse_table_array *v)
{
	v->a[23400] = anon_sym_AMP_AMP;
	v->a[23401] = anon_sym_PIPE_PIPE;
	v->a[23402] = anon_sym_LT;
	v->a[23403] = anon_sym_GT;
	v->a[23404] = anon_sym_GT_GT;
	v->a[23405] = anon_sym_LT_AMP;
	v->a[23406] = anon_sym_GT_AMP;
	v->a[23407] = anon_sym_GT_PIPE;
	v->a[23408] = anon_sym_LT_GT;
	v->a[23409] = anon_sym_LT_LT;
	v->a[23410] = anon_sym_LT_LT_DASH;
	v->a[23411] = aux_sym_heredoc_redirect_token1;
	v->a[23412] = anon_sym_AMP;
	v->a[23413] = anon_sym_SEMI;
	v->a[23414] = 6;
	v->a[23415] = actions(3);
	v->a[23416] = 1;
	v->a[23417] = sym_comment;
	v->a[23418] = actions(367);
	v->a[23419] = 1;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = sym_file_descriptor;
	v->a[23421] = actions(429);
	v->a[23422] = 1;
	v->a[23423] = sym_variable_name;
	v->a[23424] = actions(427);
	v->a[23425] = 2;
	v->a[23426] = aux_sym__simple_variable_name_token1;
	v->a[23427] = aux_sym__multiline_variable_name_token1;
	v->a[23428] = actions(425);
	v->a[23429] = 9;
	v->a[23430] = anon_sym_BANG;
	v->a[23431] = anon_sym_DASH;
	v->a[23432] = anon_sym_STAR;
	v->a[23433] = anon_sym_QMARK;
	v->a[23434] = anon_sym_DOLLAR;
	v->a[23435] = anon_sym_POUND;
	v->a[23436] = anon_sym_AT;
	v->a[23437] = anon_sym_0;
	v->a[23438] = anon_sym__;
	v->a[23439] = actions(361);
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = 21;
	v->a[23441] = anon_sym_PIPE;
	v->a[23442] = anon_sym_AMP_AMP;
	v->a[23443] = anon_sym_PIPE_PIPE;
	v->a[23444] = anon_sym_LT;
	v->a[23445] = anon_sym_GT;
	v->a[23446] = anon_sym_GT_GT;
	v->a[23447] = anon_sym_LT_AMP;
	v->a[23448] = anon_sym_GT_AMP;
	v->a[23449] = anon_sym_GT_PIPE;
	v->a[23450] = anon_sym_LT_GT;
	v->a[23451] = anon_sym_LT_LT;
	v->a[23452] = anon_sym_LT_LT_DASH;
	v->a[23453] = aux_sym_heredoc_redirect_token1;
	v->a[23454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23455] = anon_sym_DQUOTE;
	v->a[23456] = sym_raw_string;
	v->a[23457] = sym_number;
	v->a[23458] = anon_sym_DOLLAR_LBRACE;
	v->a[23459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = anon_sym_BQUOTE;
	v->a[23461] = sym_word;
	v->a[23462] = 3;
	v->a[23463] = actions(664);
	v->a[23464] = 1;
	v->a[23465] = sym_comment;
	v->a[23466] = actions(893);
	v->a[23467] = 13;
	v->a[23468] = anon_sym_PIPE;
	v->a[23469] = anon_sym_EQ;
	v->a[23470] = anon_sym_LT;
	v->a[23471] = anon_sym_GT;
	v->a[23472] = anon_sym_GT_GT;
	v->a[23473] = anon_sym_LT_LT;
	v->a[23474] = anon_sym_CARET;
	v->a[23475] = anon_sym_AMP;
	v->a[23476] = anon_sym_PLUS;
	v->a[23477] = anon_sym_DASH;
	v->a[23478] = anon_sym_STAR;
	v->a[23479] = anon_sym_SLASH;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_PERCENT;
	v->a[23481] = actions(895);
	v->a[23482] = 21;
	v->a[23483] = anon_sym_AMP_AMP;
	v->a[23484] = anon_sym_PIPE_PIPE;
	v->a[23485] = anon_sym_RPAREN_RPAREN;
	v->a[23486] = anon_sym_PLUS_EQ;
	v->a[23487] = anon_sym_DASH_EQ;
	v->a[23488] = anon_sym_STAR_EQ;
	v->a[23489] = anon_sym_SLASH_EQ;
	v->a[23490] = anon_sym_PERCENT_EQ;
	v->a[23491] = anon_sym_LT_LT_EQ;
	v->a[23492] = anon_sym_GT_GT_EQ;
	v->a[23493] = anon_sym_AMP_EQ;
	v->a[23494] = anon_sym_CARET_EQ;
	v->a[23495] = anon_sym_PIPE_EQ;
	v->a[23496] = anon_sym_EQ_EQ;
	v->a[23497] = anon_sym_BANG_EQ;
	v->a[23498] = anon_sym_LT_EQ;
	v->a[23499] = anon_sym_GT_EQ;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
