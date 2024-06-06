/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_324.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1620(t_small_parse_table_array *v)
{
	v->a[32400] = 1;
	v->a[32401] = aux_sym_number_token2;
	v->a[32402] = actions(2366);
	v->a[32403] = 1;
	v->a[32404] = anon_sym_DOLLAR_LBRACE;
	v->a[32405] = actions(2368);
	v->a[32406] = 1;
	v->a[32407] = anon_sym_DOLLAR_LPAREN;
	v->a[32408] = actions(2370);
	v->a[32409] = 1;
	v->a[32410] = anon_sym_BQUOTE;
	v->a[32411] = actions(2372);
	v->a[32412] = 1;
	v->a[32413] = anon_sym_DOLLAR_BQUOTE;
	v->a[32414] = actions(2376);
	v->a[32415] = 1;
	v->a[32416] = sym__brace_start;
	v->a[32417] = actions(3412);
	v->a[32418] = 1;
	v->a[32419] = sym__special_character;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = actions(3414);
	v->a[32421] = 1;
	v->a[32422] = sym_test_operator;
	v->a[32423] = state(1981);
	v->a[32424] = 1;
	v->a[32425] = aux_sym__literal_repeat1;
	v->a[32426] = state(2315);
	v->a[32427] = 1;
	v->a[32428] = sym_concatenation;
	v->a[32429] = actions(1530);
	v->a[32430] = 2;
	v->a[32431] = sym_file_descriptor;
	v->a[32432] = aux_sym_heredoc_redirect_token1;
	v->a[32433] = actions(3410);
	v->a[32434] = 2;
	v->a[32435] = sym_raw_string;
	v->a[32436] = sym_word;
	v->a[32437] = state(2608);
	v->a[32438] = 7;
	v->a[32439] = sym_arithmetic_expansion;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = sym_brace_expression;
	v->a[32441] = sym_string;
	v->a[32442] = sym_number;
	v->a[32443] = sym_simple_expansion;
	v->a[32444] = sym_expansion;
	v->a[32445] = sym_command_substitution;
	v->a[32446] = actions(1528);
	v->a[32447] = 16;
	v->a[32448] = anon_sym_PIPE;
	v->a[32449] = anon_sym_PIPE_AMP;
	v->a[32450] = anon_sym_AMP_AMP;
	v->a[32451] = anon_sym_PIPE_PIPE;
	v->a[32452] = anon_sym_LT;
	v->a[32453] = anon_sym_GT;
	v->a[32454] = anon_sym_GT_GT;
	v->a[32455] = anon_sym_AMP_GT;
	v->a[32456] = anon_sym_AMP_GT_GT;
	v->a[32457] = anon_sym_LT_AMP;
	v->a[32458] = anon_sym_GT_AMP;
	v->a[32459] = anon_sym_GT_PIPE;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = anon_sym_LT_AMP_DASH;
	v->a[32461] = anon_sym_GT_AMP_DASH;
	v->a[32462] = anon_sym_LT_LT;
	v->a[32463] = anon_sym_LT_LT_DASH;
	v->a[32464] = 3;
	v->a[32465] = actions(3);
	v->a[32466] = 1;
	v->a[32467] = sym_comment;
	v->a[32468] = actions(3050);
	v->a[32469] = 6;
	v->a[32470] = sym_file_descriptor;
	v->a[32471] = sym__concat;
	v->a[32472] = sym_test_operator;
	v->a[32473] = sym__bare_dollar;
	v->a[32474] = sym__brace_start;
	v->a[32475] = aux_sym_heredoc_redirect_token1;
	v->a[32476] = actions(3048);
	v->a[32477] = 35;
	v->a[32478] = anon_sym_LPAREN;
	v->a[32479] = anon_sym_PIPE;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = anon_sym_SEMI_SEMI;
	v->a[32481] = anon_sym_SEMI_AMP;
	v->a[32482] = anon_sym_SEMI_SEMI_AMP;
	v->a[32483] = anon_sym_PIPE_AMP;
	v->a[32484] = anon_sym_AMP_AMP;
	v->a[32485] = anon_sym_PIPE_PIPE;
	v->a[32486] = anon_sym_LT;
	v->a[32487] = anon_sym_GT;
	v->a[32488] = anon_sym_GT_GT;
	v->a[32489] = anon_sym_AMP_GT;
	v->a[32490] = anon_sym_AMP_GT_GT;
	v->a[32491] = anon_sym_LT_AMP;
	v->a[32492] = anon_sym_GT_AMP;
	v->a[32493] = anon_sym_GT_PIPE;
	v->a[32494] = anon_sym_LT_AMP_DASH;
	v->a[32495] = anon_sym_GT_AMP_DASH;
	v->a[32496] = anon_sym_LT_LT;
	v->a[32497] = anon_sym_LT_LT_DASH;
	v->a[32498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32499] = anon_sym_AMP;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
