/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1284.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6420(t_small_parse_table_array *v)
{
	v->a[128400] = aux_sym_concatenation_repeat1;
	v->a[128401] = actions(1286);
	v->a[128402] = 14;
	v->a[128403] = anon_sym_PIPE;
	v->a[128404] = anon_sym_LT;
	v->a[128405] = anon_sym_GT;
	v->a[128406] = anon_sym_LT_LT;
	v->a[128407] = anon_sym_AMP_GT;
	v->a[128408] = anon_sym_LT_AMP;
	v->a[128409] = anon_sym_GT_AMP;
	v->a[128410] = anon_sym_DOLLAR;
	v->a[128411] = sym__special_character;
	v->a[128412] = aux_sym_number_token1;
	v->a[128413] = aux_sym_number_token2;
	v->a[128414] = anon_sym_DOLLAR_LPAREN;
	v->a[128415] = anon_sym_BQUOTE;
	v->a[128416] = sym_word;
	v->a[128417] = actions(1288);
	v->a[128418] = 24;
	v->a[128419] = sym_file_descriptor;
	small_parse_table_6421(v);
}

void	small_parse_table_6421(t_small_parse_table_array *v)
{
	v->a[128420] = sym_test_operator;
	v->a[128421] = sym__brace_start;
	v->a[128422] = anon_sym_LPAREN_LPAREN;
	v->a[128423] = anon_sym_PIPE_PIPE;
	v->a[128424] = anon_sym_AMP_AMP;
	v->a[128425] = anon_sym_GT_GT;
	v->a[128426] = anon_sym_PIPE_AMP;
	v->a[128427] = anon_sym_RBRACK;
	v->a[128428] = anon_sym_AMP_GT_GT;
	v->a[128429] = anon_sym_GT_PIPE;
	v->a[128430] = anon_sym_LT_AMP_DASH;
	v->a[128431] = anon_sym_GT_AMP_DASH;
	v->a[128432] = anon_sym_LT_LT_DASH;
	v->a[128433] = anon_sym_LT_LT_LT;
	v->a[128434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128435] = anon_sym_DOLLAR_LBRACK;
	v->a[128436] = anon_sym_DQUOTE;
	v->a[128437] = sym_raw_string;
	v->a[128438] = sym_ansi_c_string;
	v->a[128439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6422(v);
}

void	small_parse_table_6422(t_small_parse_table_array *v)
{
	v->a[128440] = anon_sym_DOLLAR_BQUOTE;
	v->a[128441] = anon_sym_LT_LPAREN;
	v->a[128442] = anon_sym_GT_LPAREN;
	v->a[128443] = 3;
	v->a[128444] = actions(71);
	v->a[128445] = 1;
	v->a[128446] = sym_comment;
	v->a[128447] = actions(1348);
	v->a[128448] = 14;
	v->a[128449] = anon_sym_EQ;
	v->a[128450] = anon_sym_PIPE;
	v->a[128451] = anon_sym_CARET;
	v->a[128452] = anon_sym_AMP;
	v->a[128453] = anon_sym_LT;
	v->a[128454] = anon_sym_GT;
	v->a[128455] = anon_sym_LT_LT;
	v->a[128456] = anon_sym_GT_GT;
	v->a[128457] = anon_sym_PLUS;
	v->a[128458] = anon_sym_DASH;
	v->a[128459] = anon_sym_STAR;
	small_parse_table_6423(v);
}

void	small_parse_table_6423(t_small_parse_table_array *v)
{
	v->a[128460] = anon_sym_SLASH;
	v->a[128461] = anon_sym_PERCENT;
	v->a[128462] = anon_sym_STAR_STAR;
	v->a[128463] = actions(1350);
	v->a[128464] = 27;
	v->a[128465] = sym__concat;
	v->a[128466] = sym_test_operator;
	v->a[128467] = anon_sym_RPAREN_RPAREN;
	v->a[128468] = anon_sym_PLUS_PLUS;
	v->a[128469] = anon_sym_DASH_DASH;
	v->a[128470] = anon_sym_PLUS_EQ;
	v->a[128471] = anon_sym_DASH_EQ;
	v->a[128472] = anon_sym_STAR_EQ;
	v->a[128473] = anon_sym_SLASH_EQ;
	v->a[128474] = anon_sym_PERCENT_EQ;
	v->a[128475] = anon_sym_STAR_STAR_EQ;
	v->a[128476] = anon_sym_LT_LT_EQ;
	v->a[128477] = anon_sym_GT_GT_EQ;
	v->a[128478] = anon_sym_AMP_EQ;
	v->a[128479] = anon_sym_CARET_EQ;
	small_parse_table_6424(v);
}

void	small_parse_table_6424(t_small_parse_table_array *v)
{
	v->a[128480] = anon_sym_PIPE_EQ;
	v->a[128481] = anon_sym_PIPE_PIPE;
	v->a[128482] = anon_sym_AMP_AMP;
	v->a[128483] = anon_sym_EQ_EQ;
	v->a[128484] = anon_sym_BANG_EQ;
	v->a[128485] = anon_sym_LT_EQ;
	v->a[128486] = anon_sym_GT_EQ;
	v->a[128487] = anon_sym_RBRACK_RBRACK;
	v->a[128488] = anon_sym_EQ_TILDE;
	v->a[128489] = anon_sym_QMARK;
	v->a[128490] = anon_sym_COLON;
	v->a[128491] = aux_sym_concatenation_token1;
	v->a[128492] = 3;
	v->a[128493] = actions(71);
	v->a[128494] = 1;
	v->a[128495] = sym_comment;
	v->a[128496] = actions(1312);
	v->a[128497] = 14;
	v->a[128498] = anon_sym_EQ;
	v->a[128499] = anon_sym_PIPE;
	small_parse_table_6425(v);
}

/* EOF small_parse_table_1284.c */
