/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1324.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6620(t_small_parse_table_array *v)
{
	v->a[132400] = anon_sym_PIPE;
	v->a[132401] = anon_sym_LT;
	v->a[132402] = anon_sym_GT;
	v->a[132403] = anon_sym_LT_LT;
	v->a[132404] = anon_sym_AMP_GT;
	v->a[132405] = anon_sym_LT_AMP;
	v->a[132406] = anon_sym_GT_AMP;
	v->a[132407] = anon_sym_DOLLAR;
	v->a[132408] = aux_sym_number_token1;
	v->a[132409] = aux_sym_number_token2;
	v->a[132410] = anon_sym_DOLLAR_LPAREN;
	v->a[132411] = anon_sym_BQUOTE;
	v->a[132412] = sym_word;
	v->a[132413] = actions(1314);
	v->a[132414] = 27;
	v->a[132415] = sym_file_descriptor;
	v->a[132416] = sym__concat;
	v->a[132417] = sym_variable_name;
	v->a[132418] = sym_test_operator;
	v->a[132419] = sym__brace_start;
	small_parse_table_6621(v);
}

void	small_parse_table_6621(t_small_parse_table_array *v)
{
	v->a[132420] = anon_sym_LPAREN_LPAREN;
	v->a[132421] = anon_sym_PIPE_PIPE;
	v->a[132422] = anon_sym_AMP_AMP;
	v->a[132423] = anon_sym_GT_GT;
	v->a[132424] = anon_sym_PIPE_AMP;
	v->a[132425] = anon_sym_AMP_GT_GT;
	v->a[132426] = anon_sym_GT_PIPE;
	v->a[132427] = anon_sym_LT_AMP_DASH;
	v->a[132428] = anon_sym_GT_AMP_DASH;
	v->a[132429] = anon_sym_LT_LT_DASH;
	v->a[132430] = anon_sym_LT_LT_LT;
	v->a[132431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132432] = anon_sym_DOLLAR_LBRACK;
	v->a[132433] = aux_sym_concatenation_token1;
	v->a[132434] = sym__special_character;
	v->a[132435] = anon_sym_DQUOTE;
	v->a[132436] = sym_raw_string;
	v->a[132437] = sym_ansi_c_string;
	v->a[132438] = anon_sym_DOLLAR_LBRACE;
	v->a[132439] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6622(v);
}

void	small_parse_table_6622(t_small_parse_table_array *v)
{
	v->a[132440] = anon_sym_LT_LPAREN;
	v->a[132441] = anon_sym_GT_LPAREN;
	v->a[132442] = 5;
	v->a[132443] = actions(71);
	v->a[132444] = 1;
	v->a[132445] = sym_comment;
	v->a[132446] = state(2551);
	v->a[132447] = 1;
	v->a[132448] = aux_sym_concatenation_repeat1;
	v->a[132449] = actions(1105);
	v->a[132450] = 2;
	v->a[132451] = sym__concat;
	v->a[132452] = aux_sym_concatenation_token1;
	v->a[132453] = actions(1273);
	v->a[132454] = 14;
	v->a[132455] = anon_sym_EQ;
	v->a[132456] = anon_sym_PIPE;
	v->a[132457] = anon_sym_CARET;
	v->a[132458] = anon_sym_AMP;
	v->a[132459] = anon_sym_LT;
	small_parse_table_6623(v);
}

void	small_parse_table_6623(t_small_parse_table_array *v)
{
	v->a[132460] = anon_sym_GT;
	v->a[132461] = anon_sym_LT_LT;
	v->a[132462] = anon_sym_GT_GT;
	v->a[132463] = anon_sym_PLUS;
	v->a[132464] = anon_sym_DASH;
	v->a[132465] = anon_sym_STAR;
	v->a[132466] = anon_sym_SLASH;
	v->a[132467] = anon_sym_PERCENT;
	v->a[132468] = anon_sym_STAR_STAR;
	v->a[132469] = actions(1369);
	v->a[132470] = 23;
	v->a[132471] = sym_test_operator;
	v->a[132472] = anon_sym_PLUS_PLUS;
	v->a[132473] = anon_sym_DASH_DASH;
	v->a[132474] = anon_sym_PLUS_EQ;
	v->a[132475] = anon_sym_DASH_EQ;
	v->a[132476] = anon_sym_STAR_EQ;
	v->a[132477] = anon_sym_SLASH_EQ;
	v->a[132478] = anon_sym_PERCENT_EQ;
	v->a[132479] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6624(v);
}

void	small_parse_table_6624(t_small_parse_table_array *v)
{
	v->a[132480] = anon_sym_LT_LT_EQ;
	v->a[132481] = anon_sym_GT_GT_EQ;
	v->a[132482] = anon_sym_AMP_EQ;
	v->a[132483] = anon_sym_CARET_EQ;
	v->a[132484] = anon_sym_PIPE_EQ;
	v->a[132485] = anon_sym_PIPE_PIPE;
	v->a[132486] = anon_sym_AMP_AMP;
	v->a[132487] = anon_sym_EQ_EQ;
	v->a[132488] = anon_sym_BANG_EQ;
	v->a[132489] = anon_sym_LT_EQ;
	v->a[132490] = anon_sym_GT_EQ;
	v->a[132491] = anon_sym_RBRACK;
	v->a[132492] = anon_sym_EQ_TILDE;
	v->a[132493] = anon_sym_QMARK;
	v->a[132494] = 3;
	v->a[132495] = actions(71);
	v->a[132496] = 1;
	v->a[132497] = sym_comment;
	v->a[132498] = actions(4552);
	v->a[132499] = 14;
	small_parse_table_6625(v);
}

/* EOF small_parse_table_1324.c */
