/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1124.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5620(t_small_parse_table_array *v)
{
	v->a[112400] = 1;
	v->a[112401] = sym_comment;
	v->a[112402] = actions(5692);
	v->a[112403] = 1;
	v->a[112404] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112405] = actions(5698);
	v->a[112406] = 1;
	v->a[112407] = anon_sym_DQUOTE;
	v->a[112408] = actions(5702);
	v->a[112409] = 1;
	v->a[112410] = aux_sym_number_token1;
	v->a[112411] = actions(5704);
	v->a[112412] = 1;
	v->a[112413] = aux_sym_number_token2;
	v->a[112414] = actions(5706);
	v->a[112415] = 1;
	v->a[112416] = anon_sym_DOLLAR_LBRACE;
	v->a[112417] = actions(5708);
	v->a[112418] = 1;
	v->a[112419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5621(v);
}

void	small_parse_table_5621(t_small_parse_table_array *v)
{
	v->a[112420] = actions(5710);
	v->a[112421] = 1;
	v->a[112422] = anon_sym_BQUOTE;
	v->a[112423] = actions(5712);
	v->a[112424] = 1;
	v->a[112425] = anon_sym_DOLLAR_BQUOTE;
	v->a[112426] = actions(5718);
	v->a[112427] = 1;
	v->a[112428] = sym__brace_start;
	v->a[112429] = actions(6444);
	v->a[112430] = 1;
	v->a[112431] = sym_word;
	v->a[112432] = actions(6448);
	v->a[112433] = 1;
	v->a[112434] = sym__special_character;
	v->a[112435] = actions(6452);
	v->a[112436] = 1;
	v->a[112437] = sym__comment_word;
	v->a[112438] = actions(6462);
	v->a[112439] = 1;
	small_parse_table_5622(v);
}

void	small_parse_table_5622(t_small_parse_table_array *v)
{
	v->a[112440] = anon_sym_DOLLAR;
	v->a[112441] = actions(6450);
	v->a[112442] = 3;
	v->a[112443] = sym_test_operator;
	v->a[112444] = sym__bare_dollar;
	v->a[112445] = sym_raw_string;
	v->a[112446] = state(654);
	v->a[112447] = 7;
	v->a[112448] = sym_arithmetic_expansion;
	v->a[112449] = sym_brace_expression;
	v->a[112450] = sym_string;
	v->a[112451] = sym_number;
	v->a[112452] = sym_simple_expansion;
	v->a[112453] = sym_expansion;
	v->a[112454] = sym_command_substitution;
	v->a[112455] = 3;
	v->a[112456] = actions(3);
	v->a[112457] = 1;
	v->a[112458] = sym_comment;
	v->a[112459] = actions(6205);
	small_parse_table_5623(v);
}

void	small_parse_table_5623(t_small_parse_table_array *v)
{
	v->a[112460] = 2;
	v->a[112461] = sym_file_descriptor;
	v->a[112462] = aux_sym_heredoc_redirect_token1;
	v->a[112463] = actions(6207);
	v->a[112464] = 21;
	v->a[112465] = anon_sym_PIPE;
	v->a[112466] = anon_sym_SEMI_SEMI;
	v->a[112467] = anon_sym_SEMI_AMP;
	v->a[112468] = anon_sym_SEMI_SEMI_AMP;
	v->a[112469] = anon_sym_PIPE_AMP;
	v->a[112470] = anon_sym_AMP_AMP;
	v->a[112471] = anon_sym_PIPE_PIPE;
	v->a[112472] = anon_sym_LT;
	v->a[112473] = anon_sym_GT;
	v->a[112474] = anon_sym_GT_GT;
	v->a[112475] = anon_sym_AMP_GT;
	v->a[112476] = anon_sym_AMP_GT_GT;
	v->a[112477] = anon_sym_LT_AMP;
	v->a[112478] = anon_sym_GT_AMP;
	v->a[112479] = anon_sym_GT_PIPE;
	small_parse_table_5624(v);
}

void	small_parse_table_5624(t_small_parse_table_array *v)
{
	v->a[112480] = anon_sym_LT_AMP_DASH;
	v->a[112481] = anon_sym_GT_AMP_DASH;
	v->a[112482] = anon_sym_LT_LT;
	v->a[112483] = anon_sym_LT_LT_DASH;
	v->a[112484] = anon_sym_AMP;
	v->a[112485] = anon_sym_SEMI;
	v->a[112486] = 10;
	v->a[112487] = actions(3);
	v->a[112488] = 1;
	v->a[112489] = sym_comment;
	v->a[112490] = actions(2514);
	v->a[112491] = 1;
	v->a[112492] = anon_sym_RPAREN;
	v->a[112493] = actions(2743);
	v->a[112494] = 1;
	v->a[112495] = aux_sym_heredoc_redirect_token1;
	v->a[112496] = actions(5680);
	v->a[112497] = 1;
	v->a[112498] = sym_file_descriptor;
	v->a[112499] = actions(2945);
	small_parse_table_5625(v);
}

/* EOF small_parse_table_1124.c */
