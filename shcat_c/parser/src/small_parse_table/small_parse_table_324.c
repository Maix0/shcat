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
	v->a[32400] = anon_sym_DOLLAR;
	v->a[32401] = actions(4637);
	v->a[32402] = 1;
	v->a[32403] = sym__special_character;
	v->a[32404] = actions(4639);
	v->a[32405] = 1;
	v->a[32406] = anon_sym_DQUOTE;
	v->a[32407] = actions(4643);
	v->a[32408] = 1;
	v->a[32409] = aux_sym_number_token1;
	v->a[32410] = actions(4645);
	v->a[32411] = 1;
	v->a[32412] = aux_sym_number_token2;
	v->a[32413] = actions(4647);
	v->a[32414] = 1;
	v->a[32415] = anon_sym_DOLLAR_LBRACE;
	v->a[32416] = actions(4649);
	v->a[32417] = 1;
	v->a[32418] = anon_sym_DOLLAR_LPAREN;
	v->a[32419] = actions(4651);
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = 1;
	v->a[32421] = anon_sym_BQUOTE;
	v->a[32422] = actions(4653);
	v->a[32423] = 1;
	v->a[32424] = anon_sym_DOLLAR_BQUOTE;
	v->a[32425] = actions(4657);
	v->a[32426] = 1;
	v->a[32427] = sym_test_operator;
	v->a[32428] = actions(4659);
	v->a[32429] = 1;
	v->a[32430] = sym__brace_start;
	v->a[32431] = state(2914);
	v->a[32432] = 1;
	v->a[32433] = aux_sym__literal_repeat1;
	v->a[32434] = actions(4631);
	v->a[32435] = 2;
	v->a[32436] = anon_sym_LPAREN_LPAREN;
	v->a[32437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32438] = actions(4641);
	v->a[32439] = 2;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = sym_raw_string;
	v->a[32441] = sym_ansi_c_string;
	v->a[32442] = actions(4655);
	v->a[32443] = 2;
	v->a[32444] = anon_sym_LT_LPAREN;
	v->a[32445] = anon_sym_GT_LPAREN;
	v->a[32446] = state(936);
	v->a[32447] = 2;
	v->a[32448] = sym_concatenation;
	v->a[32449] = aux_sym_for_statement_repeat1;
	v->a[32450] = actions(2072);
	v->a[32451] = 7;
	v->a[32452] = anon_sym_PIPE;
	v->a[32453] = anon_sym_LT;
	v->a[32454] = anon_sym_GT;
	v->a[32455] = anon_sym_LT_LT;
	v->a[32456] = anon_sym_AMP_GT;
	v->a[32457] = anon_sym_LT_AMP;
	v->a[32458] = anon_sym_GT_AMP;
	v->a[32459] = state(2487);
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = 9;
	v->a[32461] = sym_arithmetic_expansion;
	v->a[32462] = sym_brace_expression;
	v->a[32463] = sym_string;
	v->a[32464] = sym_translated_string;
	v->a[32465] = sym_number;
	v->a[32466] = sym_simple_expansion;
	v->a[32467] = sym_expansion;
	v->a[32468] = sym_command_substitution;
	v->a[32469] = sym_process_substitution;
	v->a[32470] = actions(2074);
	v->a[32471] = 11;
	v->a[32472] = sym_file_descriptor;
	v->a[32473] = anon_sym_PIPE_PIPE;
	v->a[32474] = anon_sym_AMP_AMP;
	v->a[32475] = anon_sym_GT_GT;
	v->a[32476] = anon_sym_PIPE_AMP;
	v->a[32477] = anon_sym_AMP_GT_GT;
	v->a[32478] = anon_sym_GT_PIPE;
	v->a[32479] = anon_sym_LT_AMP_DASH;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = anon_sym_GT_AMP_DASH;
	v->a[32481] = anon_sym_LT_LT_DASH;
	v->a[32482] = anon_sym_LT_LT_LT;
	v->a[32483] = 3;
	v->a[32484] = actions(3);
	v->a[32485] = 1;
	v->a[32486] = sym_comment;
	v->a[32487] = actions(1310);
	v->a[32488] = 6;
	v->a[32489] = sym_file_descriptor;
	v->a[32490] = sym__concat;
	v->a[32491] = sym_test_operator;
	v->a[32492] = sym__bare_dollar;
	v->a[32493] = sym__brace_start;
	v->a[32494] = aux_sym_heredoc_redirect_token1;
	v->a[32495] = actions(1308);
	v->a[32496] = 43;
	v->a[32497] = anon_sym_LPAREN_LPAREN;
	v->a[32498] = anon_sym_SEMI;
	v->a[32499] = anon_sym_PIPE_PIPE;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
