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
	v->a[32400] = anon_sym_AMP_GT_GT;
	v->a[32401] = anon_sym_LT_AMP;
	v->a[32402] = anon_sym_GT_AMP;
	v->a[32403] = anon_sym_GT_PIPE;
	v->a[32404] = anon_sym_LT_AMP_DASH;
	v->a[32405] = anon_sym_GT_AMP_DASH;
	v->a[32406] = anon_sym_LT_LT;
	v->a[32407] = anon_sym_LT_LT_DASH;
	v->a[32408] = aux_sym_heredoc_redirect_token1;
	v->a[32409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32410] = anon_sym_AMP;
	v->a[32411] = anon_sym_DOLLAR;
	v->a[32412] = anon_sym_DQUOTE;
	v->a[32413] = sym_raw_string;
	v->a[32414] = aux_sym_number_token1;
	v->a[32415] = aux_sym_number_token2;
	v->a[32416] = anon_sym_DOLLAR_LBRACE;
	v->a[32417] = anon_sym_DOLLAR_LPAREN;
	v->a[32418] = anon_sym_BQUOTE;
	v->a[32419] = sym_word;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = anon_sym_SEMI;
	v->a[32421] = 3;
	v->a[32422] = actions(3);
	v->a[32423] = 1;
	v->a[32424] = sym_comment;
	v->a[32425] = actions(1329);
	v->a[32426] = 3;
	v->a[32427] = sym_file_descriptor;
	v->a[32428] = sym__concat;
	v->a[32429] = sym__bare_dollar;
	v->a[32430] = actions(1327);
	v->a[32431] = 32;
	v->a[32432] = anon_sym_LPAREN;
	v->a[32433] = anon_sym_PIPE;
	v->a[32434] = anon_sym_RPAREN;
	v->a[32435] = anon_sym_SEMI_SEMI;
	v->a[32436] = anon_sym_AMP_AMP;
	v->a[32437] = anon_sym_PIPE_PIPE;
	v->a[32438] = anon_sym_LT;
	v->a[32439] = anon_sym_GT;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = anon_sym_GT_GT;
	v->a[32441] = anon_sym_AMP_GT;
	v->a[32442] = anon_sym_AMP_GT_GT;
	v->a[32443] = anon_sym_LT_AMP;
	v->a[32444] = anon_sym_GT_AMP;
	v->a[32445] = anon_sym_GT_PIPE;
	v->a[32446] = anon_sym_LT_AMP_DASH;
	v->a[32447] = anon_sym_GT_AMP_DASH;
	v->a[32448] = anon_sym_LT_LT;
	v->a[32449] = anon_sym_LT_LT_DASH;
	v->a[32450] = aux_sym_heredoc_redirect_token1;
	v->a[32451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32452] = anon_sym_AMP;
	v->a[32453] = aux_sym_concatenation_token1;
	v->a[32454] = anon_sym_DOLLAR;
	v->a[32455] = anon_sym_DQUOTE;
	v->a[32456] = sym_raw_string;
	v->a[32457] = aux_sym_number_token1;
	v->a[32458] = aux_sym_number_token2;
	v->a[32459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = anon_sym_DOLLAR_LPAREN;
	v->a[32461] = anon_sym_BQUOTE;
	v->a[32462] = sym_word;
	v->a[32463] = anon_sym_SEMI;
	v->a[32464] = 5;
	v->a[32465] = actions(3);
	v->a[32466] = 1;
	v->a[32467] = sym_comment;
	v->a[32468] = actions(565);
	v->a[32469] = 2;
	v->a[32470] = sym_file_descriptor;
	v->a[32471] = sym_variable_name;
	v->a[32472] = state(368);
	v->a[32473] = 2;
	v->a[32474] = sym_concatenation;
	v->a[32475] = aux_sym_for_statement_repeat1;
	v->a[32476] = state(784);
	v->a[32477] = 6;
	v->a[32478] = sym_arithmetic_expansion;
	v->a[32479] = sym_string;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = sym_number;
	v->a[32481] = sym_simple_expansion;
	v->a[32482] = sym_expansion;
	v->a[32483] = sym_command_substitution;
	v->a[32484] = actions(567);
	v->a[32485] = 25;
	v->a[32486] = anon_sym_PIPE;
	v->a[32487] = anon_sym_AMP_AMP;
	v->a[32488] = anon_sym_PIPE_PIPE;
	v->a[32489] = anon_sym_LT;
	v->a[32490] = anon_sym_GT;
	v->a[32491] = anon_sym_GT_GT;
	v->a[32492] = anon_sym_AMP_GT;
	v->a[32493] = anon_sym_AMP_GT_GT;
	v->a[32494] = anon_sym_LT_AMP;
	v->a[32495] = anon_sym_GT_AMP;
	v->a[32496] = anon_sym_GT_PIPE;
	v->a[32497] = anon_sym_LT_AMP_DASH;
	v->a[32498] = anon_sym_GT_AMP_DASH;
	v->a[32499] = anon_sym_LT_LT;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
