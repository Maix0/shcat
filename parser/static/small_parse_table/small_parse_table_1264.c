/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1264.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6320(t_small_parse_table_array *v)
{
	v->a[126400] = 1;
	v->a[126401] = sym__concat;
	v->a[126402] = state(2435);
	v->a[126403] = 1;
	v->a[126404] = aux_sym_concatenation_repeat1;
	v->a[126405] = actions(1265);
	v->a[126406] = 14;
	v->a[126407] = anon_sym_PIPE;
	v->a[126408] = anon_sym_LT;
	v->a[126409] = anon_sym_GT;
	v->a[126410] = anon_sym_LT_LT;
	v->a[126411] = anon_sym_AMP_GT;
	v->a[126412] = anon_sym_LT_AMP;
	v->a[126413] = anon_sym_GT_AMP;
	v->a[126414] = anon_sym_DOLLAR;
	v->a[126415] = aux_sym_number_token1;
	v->a[126416] = aux_sym_number_token2;
	v->a[126417] = anon_sym_DOLLAR_LPAREN;
	v->a[126418] = anon_sym_BQUOTE;
	v->a[126419] = aux_sym__simple_variable_name_token1;
	small_parse_table_6321(v);
}

void	small_parse_table_6321(t_small_parse_table_array *v)
{
	v->a[126420] = sym_word;
	v->a[126421] = actions(1267);
	v->a[126422] = 24;
	v->a[126423] = sym_file_descriptor;
	v->a[126424] = sym_variable_name;
	v->a[126425] = sym_test_operator;
	v->a[126426] = sym__brace_start;
	v->a[126427] = anon_sym_LPAREN_LPAREN;
	v->a[126428] = anon_sym_PIPE_PIPE;
	v->a[126429] = anon_sym_AMP_AMP;
	v->a[126430] = anon_sym_GT_GT;
	v->a[126431] = anon_sym_PIPE_AMP;
	v->a[126432] = anon_sym_AMP_GT_GT;
	v->a[126433] = anon_sym_GT_PIPE;
	v->a[126434] = anon_sym_LT_AMP_DASH;
	v->a[126435] = anon_sym_GT_AMP_DASH;
	v->a[126436] = anon_sym_LT_LT_DASH;
	v->a[126437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126438] = anon_sym_DOLLAR_LBRACK;
	v->a[126439] = sym__special_character;
	small_parse_table_6322(v);
}

void	small_parse_table_6322(t_small_parse_table_array *v)
{
	v->a[126440] = anon_sym_DQUOTE;
	v->a[126441] = sym_raw_string;
	v->a[126442] = sym_ansi_c_string;
	v->a[126443] = anon_sym_DOLLAR_LBRACE;
	v->a[126444] = anon_sym_DOLLAR_BQUOTE;
	v->a[126445] = anon_sym_LT_LPAREN;
	v->a[126446] = anon_sym_GT_LPAREN;
	v->a[126447] = 5;
	v->a[126448] = actions(71);
	v->a[126449] = 1;
	v->a[126450] = sym_comment;
	v->a[126451] = state(2495);
	v->a[126452] = 1;
	v->a[126453] = aux_sym_concatenation_repeat1;
	v->a[126454] = actions(1143);
	v->a[126455] = 2;
	v->a[126456] = sym__concat;
	v->a[126457] = aux_sym_concatenation_token1;
	v->a[126458] = actions(1261);
	v->a[126459] = 14;
	small_parse_table_6323(v);
}

void	small_parse_table_6323(t_small_parse_table_array *v)
{
	v->a[126460] = anon_sym_EQ;
	v->a[126461] = anon_sym_PIPE;
	v->a[126462] = anon_sym_CARET;
	v->a[126463] = anon_sym_AMP;
	v->a[126464] = anon_sym_LT;
	v->a[126465] = anon_sym_GT;
	v->a[126466] = anon_sym_LT_LT;
	v->a[126467] = anon_sym_GT_GT;
	v->a[126468] = anon_sym_PLUS;
	v->a[126469] = anon_sym_DASH;
	v->a[126470] = anon_sym_STAR;
	v->a[126471] = anon_sym_SLASH;
	v->a[126472] = anon_sym_PERCENT;
	v->a[126473] = anon_sym_STAR_STAR;
	v->a[126474] = actions(1263);
	v->a[126475] = 24;
	v->a[126476] = sym_test_operator;
	v->a[126477] = anon_sym_RPAREN_RPAREN;
	v->a[126478] = anon_sym_PLUS_PLUS;
	v->a[126479] = anon_sym_DASH_DASH;
	small_parse_table_6324(v);
}

void	small_parse_table_6324(t_small_parse_table_array *v)
{
	v->a[126480] = anon_sym_PLUS_EQ;
	v->a[126481] = anon_sym_DASH_EQ;
	v->a[126482] = anon_sym_STAR_EQ;
	v->a[126483] = anon_sym_SLASH_EQ;
	v->a[126484] = anon_sym_PERCENT_EQ;
	v->a[126485] = anon_sym_STAR_STAR_EQ;
	v->a[126486] = anon_sym_LT_LT_EQ;
	v->a[126487] = anon_sym_GT_GT_EQ;
	v->a[126488] = anon_sym_AMP_EQ;
	v->a[126489] = anon_sym_CARET_EQ;
	v->a[126490] = anon_sym_PIPE_EQ;
	v->a[126491] = anon_sym_PIPE_PIPE;
	v->a[126492] = anon_sym_AMP_AMP;
	v->a[126493] = anon_sym_EQ_EQ;
	v->a[126494] = anon_sym_BANG_EQ;
	v->a[126495] = anon_sym_LT_EQ;
	v->a[126496] = anon_sym_GT_EQ;
	v->a[126497] = anon_sym_EQ_TILDE;
	v->a[126498] = anon_sym_QMARK;
	v->a[126499] = sym__special_character;
	small_parse_table_6325(v);
}

/* EOF small_parse_table_1264.c */
