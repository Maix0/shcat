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
	v->a[23400] = sym_file_descriptor;
	v->a[23401] = sym_test_operator;
	v->a[23402] = sym__brace_start;
	v->a[23403] = actions(3578);
	v->a[23404] = 9;
	v->a[23405] = anon_sym_DASH;
	v->a[23406] = anon_sym_STAR;
	v->a[23407] = anon_sym_BANG;
	v->a[23408] = anon_sym_QMARK;
	v->a[23409] = anon_sym_DOLLAR;
	v->a[23410] = anon_sym_POUND;
	v->a[23411] = anon_sym_AT2;
	v->a[23412] = anon_sym_0;
	v->a[23413] = anon_sym__;
	v->a[23414] = actions(1239);
	v->a[23415] = 36;
	v->a[23416] = anon_sym_LPAREN_LPAREN;
	v->a[23417] = anon_sym_SEMI;
	v->a[23418] = anon_sym_PIPE_PIPE;
	v->a[23419] = anon_sym_AMP_AMP;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_PIPE;
	v->a[23421] = anon_sym_AMP;
	v->a[23422] = anon_sym_LT;
	v->a[23423] = anon_sym_GT;
	v->a[23424] = anon_sym_LT_LT;
	v->a[23425] = anon_sym_GT_GT;
	v->a[23426] = anon_sym_RPAREN;
	v->a[23427] = anon_sym_SEMI_SEMI;
	v->a[23428] = anon_sym_PIPE_AMP;
	v->a[23429] = anon_sym_AMP_GT;
	v->a[23430] = anon_sym_AMP_GT_GT;
	v->a[23431] = anon_sym_LT_AMP;
	v->a[23432] = anon_sym_GT_AMP;
	v->a[23433] = anon_sym_GT_PIPE;
	v->a[23434] = anon_sym_LT_AMP_DASH;
	v->a[23435] = anon_sym_GT_AMP_DASH;
	v->a[23436] = anon_sym_LT_LT_DASH;
	v->a[23437] = aux_sym_heredoc_redirect_token1;
	v->a[23438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23439] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = sym__special_character;
	v->a[23441] = sym_raw_string;
	v->a[23442] = sym_ansi_c_string;
	v->a[23443] = aux_sym_number_token1;
	v->a[23444] = aux_sym_number_token2;
	v->a[23445] = anon_sym_DOLLAR_LBRACE;
	v->a[23446] = anon_sym_DOLLAR_LPAREN;
	v->a[23447] = anon_sym_BQUOTE;
	v->a[23448] = anon_sym_DOLLAR_BQUOTE;
	v->a[23449] = anon_sym_LT_LPAREN;
	v->a[23450] = anon_sym_GT_LPAREN;
	v->a[23451] = sym_word;
	v->a[23452] = 8;
	v->a[23453] = actions(3);
	v->a[23454] = 1;
	v->a[23455] = sym_comment;
	v->a[23456] = actions(3282);
	v->a[23457] = 1;
	v->a[23458] = anon_sym_DQUOTE;
	v->a[23459] = actions(3286);
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = 1;
	v->a[23461] = sym_variable_name;
	v->a[23462] = state(1628);
	v->a[23463] = 1;
	v->a[23464] = sym_string;
	v->a[23465] = actions(3284);
	v->a[23466] = 2;
	v->a[23467] = aux_sym__simple_variable_name_token1;
	v->a[23468] = aux_sym__multiline_variable_name_token1;
	v->a[23469] = actions(1241);
	v->a[23470] = 3;
	v->a[23471] = sym_file_descriptor;
	v->a[23472] = sym_test_operator;
	v->a[23473] = sym__brace_start;
	v->a[23474] = actions(3280);
	v->a[23475] = 9;
	v->a[23476] = anon_sym_DASH;
	v->a[23477] = anon_sym_STAR;
	v->a[23478] = anon_sym_BANG;
	v->a[23479] = anon_sym_QMARK;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_DOLLAR;
	v->a[23481] = anon_sym_POUND;
	v->a[23482] = anon_sym_AT2;
	v->a[23483] = anon_sym_0;
	v->a[23484] = anon_sym__;
	v->a[23485] = actions(1239);
	v->a[23486] = 36;
	v->a[23487] = anon_sym_LPAREN_LPAREN;
	v->a[23488] = anon_sym_SEMI;
	v->a[23489] = anon_sym_PIPE_PIPE;
	v->a[23490] = anon_sym_AMP_AMP;
	v->a[23491] = anon_sym_PIPE;
	v->a[23492] = anon_sym_AMP;
	v->a[23493] = anon_sym_LT;
	v->a[23494] = anon_sym_GT;
	v->a[23495] = anon_sym_LT_LT;
	v->a[23496] = anon_sym_GT_GT;
	v->a[23497] = anon_sym_SEMI_SEMI;
	v->a[23498] = anon_sym_PIPE_AMP;
	v->a[23499] = anon_sym_AMP_GT;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
