/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1774.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8870(t_small_parse_table_array *v)
{
	v->a[177400] = sym_arithmetic_expansion;
	v->a[177401] = sym_brace_expression;
	v->a[177402] = sym_string;
	v->a[177403] = sym_translated_string;
	v->a[177404] = sym_number;
	v->a[177405] = sym_simple_expansion;
	v->a[177406] = sym_expansion;
	v->a[177407] = sym_command_substitution;
	v->a[177408] = sym_process_substitution;
	v->a[177409] = 3;
	v->a[177410] = actions(3);
	v->a[177411] = 1;
	v->a[177412] = sym_comment;
	v->a[177413] = actions(1294);
	v->a[177414] = 5;
	v->a[177415] = sym_file_descriptor;
	v->a[177416] = sym__concat;
	v->a[177417] = sym_test_operator;
	v->a[177418] = sym__brace_start;
	v->a[177419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_8871(v);
}

void	small_parse_table_8871(t_small_parse_table_array *v)
{
	v->a[177420] = actions(1292);
	v->a[177421] = 31;
	v->a[177422] = anon_sym_LPAREN_LPAREN;
	v->a[177423] = anon_sym_PIPE_PIPE;
	v->a[177424] = anon_sym_AMP_AMP;
	v->a[177425] = anon_sym_LT;
	v->a[177426] = anon_sym_GT;
	v->a[177427] = anon_sym_GT_GT;
	v->a[177428] = anon_sym_AMP_GT;
	v->a[177429] = anon_sym_AMP_GT_GT;
	v->a[177430] = anon_sym_LT_AMP;
	v->a[177431] = anon_sym_GT_AMP;
	v->a[177432] = anon_sym_GT_PIPE;
	v->a[177433] = anon_sym_LT_AMP_DASH;
	v->a[177434] = anon_sym_GT_AMP_DASH;
	v->a[177435] = anon_sym_LT_LT_LT;
	v->a[177436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[177437] = anon_sym_DOLLAR_LBRACK;
	v->a[177438] = aux_sym_concatenation_token1;
	v->a[177439] = anon_sym_DOLLAR;
	small_parse_table_8872(v);
}

void	small_parse_table_8872(t_small_parse_table_array *v)
{
	v->a[177440] = sym__special_character;
	v->a[177441] = anon_sym_DQUOTE;
	v->a[177442] = sym_raw_string;
	v->a[177443] = sym_ansi_c_string;
	v->a[177444] = aux_sym_number_token1;
	v->a[177445] = aux_sym_number_token2;
	v->a[177446] = anon_sym_DOLLAR_LBRACE;
	v->a[177447] = anon_sym_DOLLAR_LPAREN;
	v->a[177448] = anon_sym_BQUOTE;
	v->a[177449] = anon_sym_DOLLAR_BQUOTE;
	v->a[177450] = anon_sym_LT_LPAREN;
	v->a[177451] = anon_sym_GT_LPAREN;
	v->a[177452] = sym_word;
	v->a[177453] = 3;
	v->a[177454] = actions(71);
	v->a[177455] = 1;
	v->a[177456] = sym_comment;
	v->a[177457] = actions(1336);
	v->a[177458] = 13;
	v->a[177459] = anon_sym_PIPE;
	small_parse_table_8873(v);
}

void	small_parse_table_8873(t_small_parse_table_array *v)
{
	v->a[177460] = anon_sym_CARET;
	v->a[177461] = anon_sym_AMP;
	v->a[177462] = anon_sym_LT;
	v->a[177463] = anon_sym_GT;
	v->a[177464] = anon_sym_LT_LT;
	v->a[177465] = anon_sym_GT_GT;
	v->a[177466] = anon_sym_PLUS;
	v->a[177467] = anon_sym_DASH;
	v->a[177468] = anon_sym_STAR;
	v->a[177469] = anon_sym_SLASH;
	v->a[177470] = anon_sym_PERCENT;
	v->a[177471] = anon_sym_STAR_STAR;
	v->a[177472] = actions(1338);
	v->a[177473] = 23;
	v->a[177474] = anon_sym_COMMA;
	v->a[177475] = anon_sym_PLUS_PLUS;
	v->a[177476] = anon_sym_DASH_DASH;
	v->a[177477] = anon_sym_PLUS_EQ;
	v->a[177478] = anon_sym_DASH_EQ;
	v->a[177479] = anon_sym_STAR_EQ;
	small_parse_table_8874(v);
}

void	small_parse_table_8874(t_small_parse_table_array *v)
{
	v->a[177480] = anon_sym_SLASH_EQ;
	v->a[177481] = anon_sym_PERCENT_EQ;
	v->a[177482] = anon_sym_STAR_STAR_EQ;
	v->a[177483] = anon_sym_LT_LT_EQ;
	v->a[177484] = anon_sym_GT_GT_EQ;
	v->a[177485] = anon_sym_AMP_EQ;
	v->a[177486] = anon_sym_CARET_EQ;
	v->a[177487] = anon_sym_PIPE_EQ;
	v->a[177488] = anon_sym_PIPE_PIPE;
	v->a[177489] = anon_sym_DASHo;
	v->a[177490] = anon_sym_AMP_AMP;
	v->a[177491] = anon_sym_DASHa;
	v->a[177492] = anon_sym_EQ_EQ;
	v->a[177493] = anon_sym_BANG_EQ;
	v->a[177494] = anon_sym_LT_EQ;
	v->a[177495] = anon_sym_GT_EQ;
	v->a[177496] = anon_sym_RPAREN;
	v->a[177497] = 8;
	v->a[177498] = actions(3);
	v->a[177499] = 1;
	small_parse_table_8875(v);
}

/* EOF small_parse_table_1774.c */
