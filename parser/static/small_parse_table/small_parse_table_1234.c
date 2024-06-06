/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1234.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6170(t_small_parse_table_array *v)
{
	v->a[123400] = actions(3);
	v->a[123401] = 1;
	v->a[123402] = sym_comment;
	v->a[123403] = actions(7092);
	v->a[123404] = 1;
	v->a[123405] = aux_sym_concatenation_token1;
	v->a[123406] = actions(7094);
	v->a[123407] = 1;
	v->a[123408] = sym__concat;
	v->a[123409] = state(2603);
	v->a[123410] = 1;
	v->a[123411] = aux_sym_concatenation_repeat1;
	v->a[123412] = actions(2664);
	v->a[123413] = 3;
	v->a[123414] = sym_test_operator;
	v->a[123415] = sym__brace_start;
	v->a[123416] = aux_sym_heredoc_redirect_token1;
	v->a[123417] = actions(2662);
	v->a[123418] = 15;
	v->a[123419] = anon_sym_SEMI_SEMI;
	small_parse_table_6171(v);
}

void	small_parse_table_6171(t_small_parse_table_array *v)
{
	v->a[123420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123421] = anon_sym_AMP;
	v->a[123422] = anon_sym_DOLLAR;
	v->a[123423] = sym__special_character;
	v->a[123424] = anon_sym_DQUOTE;
	v->a[123425] = sym_raw_string;
	v->a[123426] = aux_sym_number_token1;
	v->a[123427] = aux_sym_number_token2;
	v->a[123428] = anon_sym_DOLLAR_LBRACE;
	v->a[123429] = anon_sym_DOLLAR_LPAREN;
	v->a[123430] = anon_sym_BQUOTE;
	v->a[123431] = anon_sym_DOLLAR_BQUOTE;
	v->a[123432] = sym_word;
	v->a[123433] = anon_sym_SEMI;
	v->a[123434] = 5;
	v->a[123435] = actions(3);
	v->a[123436] = 1;
	v->a[123437] = sym_comment;
	v->a[123438] = actions(2516);
	v->a[123439] = 2;
	small_parse_table_6172(v);
}

void	small_parse_table_6172(t_small_parse_table_array *v)
{
	v->a[123440] = anon_sym_PIPE;
	v->a[123441] = anon_sym_PIPE_AMP;
	v->a[123442] = actions(2632);
	v->a[123443] = 2;
	v->a[123444] = sym_file_descriptor;
	v->a[123445] = aux_sym_heredoc_redirect_token1;
	v->a[123446] = state(2613);
	v->a[123447] = 3;
	v->a[123448] = sym_file_redirect;
	v->a[123449] = sym_heredoc_redirect;
	v->a[123450] = aux_sym_redirected_statement_repeat1;
	v->a[123451] = actions(2630);
	v->a[123452] = 14;
	v->a[123453] = anon_sym_AMP_AMP;
	v->a[123454] = anon_sym_PIPE_PIPE;
	v->a[123455] = anon_sym_LT;
	v->a[123456] = anon_sym_GT;
	v->a[123457] = anon_sym_GT_GT;
	v->a[123458] = anon_sym_AMP_GT;
	v->a[123459] = anon_sym_AMP_GT_GT;
	small_parse_table_6173(v);
}

void	small_parse_table_6173(t_small_parse_table_array *v)
{
	v->a[123460] = anon_sym_LT_AMP;
	v->a[123461] = anon_sym_GT_AMP;
	v->a[123462] = anon_sym_GT_PIPE;
	v->a[123463] = anon_sym_LT_AMP_DASH;
	v->a[123464] = anon_sym_GT_AMP_DASH;
	v->a[123465] = anon_sym_LT_LT;
	v->a[123466] = anon_sym_LT_LT_DASH;
	v->a[123467] = 4;
	v->a[123468] = actions(3);
	v->a[123469] = 1;
	v->a[123470] = sym_comment;
	v->a[123471] = actions(2632);
	v->a[123472] = 2;
	v->a[123473] = sym_file_descriptor;
	v->a[123474] = aux_sym_heredoc_redirect_token1;
	v->a[123475] = state(2613);
	v->a[123476] = 3;
	v->a[123477] = sym_file_redirect;
	v->a[123478] = sym_heredoc_redirect;
	v->a[123479] = aux_sym_redirected_statement_repeat1;
	small_parse_table_6174(v);
}

void	small_parse_table_6174(t_small_parse_table_array *v)
{
	v->a[123480] = actions(2630);
	v->a[123481] = 16;
	v->a[123482] = anon_sym_PIPE;
	v->a[123483] = anon_sym_PIPE_AMP;
	v->a[123484] = anon_sym_AMP_AMP;
	v->a[123485] = anon_sym_PIPE_PIPE;
	v->a[123486] = anon_sym_LT;
	v->a[123487] = anon_sym_GT;
	v->a[123488] = anon_sym_GT_GT;
	v->a[123489] = anon_sym_AMP_GT;
	v->a[123490] = anon_sym_AMP_GT_GT;
	v->a[123491] = anon_sym_LT_AMP;
	v->a[123492] = anon_sym_GT_AMP;
	v->a[123493] = anon_sym_GT_PIPE;
	v->a[123494] = anon_sym_LT_AMP_DASH;
	v->a[123495] = anon_sym_GT_AMP_DASH;
	v->a[123496] = anon_sym_LT_LT;
	v->a[123497] = anon_sym_LT_LT_DASH;
	v->a[123498] = 5;
	v->a[123499] = actions(57);
	small_parse_table_6175(v);
}

/* EOF small_parse_table_1234.c */
