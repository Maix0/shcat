/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1394.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6970(t_small_parse_table_array *v)
{
	v->a[139400] = anon_sym_PIPE;
	v->a[139401] = anon_sym_LT;
	v->a[139402] = anon_sym_GT;
	v->a[139403] = anon_sym_LT_LT;
	v->a[139404] = anon_sym_AMP_GT;
	v->a[139405] = anon_sym_LT_AMP;
	v->a[139406] = anon_sym_GT_AMP;
	v->a[139407] = anon_sym_DOLLAR;
	v->a[139408] = aux_sym_number_token1;
	v->a[139409] = aux_sym_number_token2;
	v->a[139410] = anon_sym_DOLLAR_LPAREN;
	v->a[139411] = anon_sym_BQUOTE;
	v->a[139412] = aux_sym__simple_variable_name_token1;
	v->a[139413] = sym_word;
	v->a[139414] = actions(1330);
	v->a[139415] = 25;
	v->a[139416] = sym_file_descriptor;
	v->a[139417] = sym__concat;
	v->a[139418] = sym_test_operator;
	v->a[139419] = sym__brace_start;
	small_parse_table_6971(v);
}

void	small_parse_table_6971(t_small_parse_table_array *v)
{
	v->a[139420] = anon_sym_LPAREN_LPAREN;
	v->a[139421] = anon_sym_PIPE_PIPE;
	v->a[139422] = anon_sym_AMP_AMP;
	v->a[139423] = anon_sym_GT_GT;
	v->a[139424] = anon_sym_PIPE_AMP;
	v->a[139425] = anon_sym_AMP_GT_GT;
	v->a[139426] = anon_sym_GT_PIPE;
	v->a[139427] = anon_sym_LT_AMP_DASH;
	v->a[139428] = anon_sym_GT_AMP_DASH;
	v->a[139429] = anon_sym_LT_LT_DASH;
	v->a[139430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139431] = anon_sym_DOLLAR_LBRACK;
	v->a[139432] = aux_sym_concatenation_token1;
	v->a[139433] = sym__special_character;
	v->a[139434] = anon_sym_DQUOTE;
	v->a[139435] = sym_raw_string;
	v->a[139436] = sym_ansi_c_string;
	v->a[139437] = anon_sym_DOLLAR_LBRACE;
	v->a[139438] = anon_sym_DOLLAR_BQUOTE;
	v->a[139439] = anon_sym_LT_LPAREN;
	small_parse_table_6972(v);
}

void	small_parse_table_6972(t_small_parse_table_array *v)
{
	v->a[139440] = anon_sym_GT_LPAREN;
	v->a[139441] = 3;
	v->a[139442] = actions(71);
	v->a[139443] = 1;
	v->a[139444] = sym_comment;
	v->a[139445] = actions(1344);
	v->a[139446] = 14;
	v->a[139447] = anon_sym_EQ;
	v->a[139448] = anon_sym_PIPE;
	v->a[139449] = anon_sym_CARET;
	v->a[139450] = anon_sym_AMP;
	v->a[139451] = anon_sym_LT;
	v->a[139452] = anon_sym_GT;
	v->a[139453] = anon_sym_LT_LT;
	v->a[139454] = anon_sym_GT_GT;
	v->a[139455] = anon_sym_PLUS;
	v->a[139456] = anon_sym_DASH;
	v->a[139457] = anon_sym_STAR;
	v->a[139458] = anon_sym_SLASH;
	v->a[139459] = anon_sym_PERCENT;
	small_parse_table_6973(v);
}

void	small_parse_table_6973(t_small_parse_table_array *v)
{
	v->a[139460] = anon_sym_STAR_STAR;
	v->a[139461] = actions(1346);
	v->a[139462] = 25;
	v->a[139463] = sym__concat;
	v->a[139464] = sym_test_operator;
	v->a[139465] = anon_sym_PLUS_PLUS;
	v->a[139466] = anon_sym_DASH_DASH;
	v->a[139467] = anon_sym_PLUS_EQ;
	v->a[139468] = anon_sym_DASH_EQ;
	v->a[139469] = anon_sym_STAR_EQ;
	v->a[139470] = anon_sym_SLASH_EQ;
	v->a[139471] = anon_sym_PERCENT_EQ;
	v->a[139472] = anon_sym_STAR_STAR_EQ;
	v->a[139473] = anon_sym_LT_LT_EQ;
	v->a[139474] = anon_sym_GT_GT_EQ;
	v->a[139475] = anon_sym_AMP_EQ;
	v->a[139476] = anon_sym_CARET_EQ;
	v->a[139477] = anon_sym_PIPE_EQ;
	v->a[139478] = anon_sym_PIPE_PIPE;
	v->a[139479] = anon_sym_AMP_AMP;
	small_parse_table_6974(v);
}

void	small_parse_table_6974(t_small_parse_table_array *v)
{
	v->a[139480] = anon_sym_EQ_EQ;
	v->a[139481] = anon_sym_BANG_EQ;
	v->a[139482] = anon_sym_LT_EQ;
	v->a[139483] = anon_sym_GT_EQ;
	v->a[139484] = anon_sym_RBRACK;
	v->a[139485] = anon_sym_EQ_TILDE;
	v->a[139486] = anon_sym_QMARK;
	v->a[139487] = aux_sym_concatenation_token1;
	v->a[139488] = 3;
	v->a[139489] = actions(71);
	v->a[139490] = 1;
	v->a[139491] = sym_comment;
	v->a[139492] = actions(1356);
	v->a[139493] = 14;
	v->a[139494] = anon_sym_EQ;
	v->a[139495] = anon_sym_PIPE;
	v->a[139496] = anon_sym_CARET;
	v->a[139497] = anon_sym_AMP;
	v->a[139498] = anon_sym_LT;
	v->a[139499] = anon_sym_GT;
	small_parse_table_6975(v);
}

/* EOF small_parse_table_1394.c */
