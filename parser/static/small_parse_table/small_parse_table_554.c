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
	v->a[55400] = 5;
	v->a[55401] = sym_file_descriptor;
	v->a[55402] = sym__concat;
	v->a[55403] = sym_test_operator;
	v->a[55404] = sym__brace_start;
	v->a[55405] = aux_sym_heredoc_redirect_token1;
	v->a[55406] = actions(2826);
	v->a[55407] = 33;
	v->a[55408] = anon_sym_PIPE;
	v->a[55409] = anon_sym_RPAREN;
	v->a[55410] = anon_sym_SEMI_SEMI;
	v->a[55411] = anon_sym_PIPE_AMP;
	v->a[55412] = anon_sym_AMP_AMP;
	v->a[55413] = anon_sym_PIPE_PIPE;
	v->a[55414] = anon_sym_LT;
	v->a[55415] = anon_sym_GT;
	v->a[55416] = anon_sym_GT_GT;
	v->a[55417] = anon_sym_AMP_GT;
	v->a[55418] = anon_sym_AMP_GT_GT;
	v->a[55419] = anon_sym_LT_AMP;
	small_parse_table_2771(v);
}

void	small_parse_table_2771(t_small_parse_table_array *v)
{
	v->a[55420] = anon_sym_GT_AMP;
	v->a[55421] = anon_sym_GT_PIPE;
	v->a[55422] = anon_sym_LT_AMP_DASH;
	v->a[55423] = anon_sym_GT_AMP_DASH;
	v->a[55424] = anon_sym_LT_LT;
	v->a[55425] = anon_sym_LT_LT_DASH;
	v->a[55426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55427] = anon_sym_AMP;
	v->a[55428] = aux_sym_concatenation_token1;
	v->a[55429] = anon_sym_DOLLAR;
	v->a[55430] = sym__special_character;
	v->a[55431] = anon_sym_DQUOTE;
	v->a[55432] = sym_raw_string;
	v->a[55433] = aux_sym_number_token1;
	v->a[55434] = aux_sym_number_token2;
	v->a[55435] = anon_sym_DOLLAR_LBRACE;
	v->a[55436] = anon_sym_DOLLAR_LPAREN;
	v->a[55437] = anon_sym_BQUOTE;
	v->a[55438] = anon_sym_DOLLAR_BQUOTE;
	v->a[55439] = sym_word;
	small_parse_table_2772(v);
}

void	small_parse_table_2772(t_small_parse_table_array *v)
{
	v->a[55440] = anon_sym_SEMI;
	v->a[55441] = 19;
	v->a[55442] = actions(3);
	v->a[55443] = 1;
	v->a[55444] = sym_comment;
	v->a[55445] = actions(3718);
	v->a[55446] = 1;
	v->a[55447] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55448] = actions(3720);
	v->a[55449] = 1;
	v->a[55450] = anon_sym_DOLLAR;
	v->a[55451] = actions(3722);
	v->a[55452] = 1;
	v->a[55453] = sym__special_character;
	v->a[55454] = actions(3724);
	v->a[55455] = 1;
	v->a[55456] = anon_sym_DQUOTE;
	v->a[55457] = actions(3726);
	v->a[55458] = 1;
	v->a[55459] = aux_sym_number_token1;
	small_parse_table_2773(v);
}

void	small_parse_table_2773(t_small_parse_table_array *v)
{
	v->a[55460] = actions(3728);
	v->a[55461] = 1;
	v->a[55462] = aux_sym_number_token2;
	v->a[55463] = actions(3730);
	v->a[55464] = 1;
	v->a[55465] = anon_sym_DOLLAR_LBRACE;
	v->a[55466] = actions(3732);
	v->a[55467] = 1;
	v->a[55468] = anon_sym_DOLLAR_LPAREN;
	v->a[55469] = actions(3734);
	v->a[55470] = 1;
	v->a[55471] = anon_sym_BQUOTE;
	v->a[55472] = actions(3736);
	v->a[55473] = 1;
	v->a[55474] = anon_sym_DOLLAR_BQUOTE;
	v->a[55475] = actions(3738);
	v->a[55476] = 1;
	v->a[55477] = sym_test_operator;
	v->a[55478] = actions(3740);
	v->a[55479] = 1;
	small_parse_table_2774(v);
}

void	small_parse_table_2774(t_small_parse_table_array *v)
{
	v->a[55480] = sym__brace_start;
	v->a[55481] = state(1824);
	v->a[55482] = 1;
	v->a[55483] = aux_sym__literal_repeat1;
	v->a[55484] = actions(1390);
	v->a[55485] = 2;
	v->a[55486] = sym_file_descriptor;
	v->a[55487] = aux_sym_heredoc_redirect_token1;
	v->a[55488] = actions(3716);
	v->a[55489] = 2;
	v->a[55490] = sym_raw_string;
	v->a[55491] = sym_word;
	v->a[55492] = state(1170);
	v->a[55493] = 2;
	v->a[55494] = sym_concatenation;
	v->a[55495] = aux_sym_for_statement_repeat1;
	v->a[55496] = state(1685);
	v->a[55497] = 7;
	v->a[55498] = sym_arithmetic_expansion;
	v->a[55499] = sym_brace_expression;
	small_parse_table_2775(v);
}

/* EOF small_parse_table_554.c */
