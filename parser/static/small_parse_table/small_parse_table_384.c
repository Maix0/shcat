/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_384.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1920(t_small_parse_table_array *v)
{
	v->a[38400] = anon_sym_AMP_AMP;
	v->a[38401] = anon_sym_PIPE_PIPE;
	v->a[38402] = anon_sym_LT;
	v->a[38403] = anon_sym_GT;
	v->a[38404] = anon_sym_GT_GT;
	v->a[38405] = anon_sym_AMP_GT;
	v->a[38406] = anon_sym_AMP_GT_GT;
	v->a[38407] = anon_sym_LT_AMP;
	v->a[38408] = anon_sym_GT_AMP;
	v->a[38409] = anon_sym_GT_PIPE;
	v->a[38410] = anon_sym_LT_AMP_DASH;
	v->a[38411] = anon_sym_GT_AMP_DASH;
	v->a[38412] = anon_sym_LT_LT;
	v->a[38413] = anon_sym_LT_LT_DASH;
	v->a[38414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38415] = anon_sym_AMP;
	v->a[38416] = aux_sym_concatenation_token1;
	v->a[38417] = anon_sym_DOLLAR;
	v->a[38418] = sym__special_character;
	v->a[38419] = anon_sym_DQUOTE;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = sym_raw_string;
	v->a[38421] = aux_sym_number_token1;
	v->a[38422] = aux_sym_number_token2;
	v->a[38423] = anon_sym_DOLLAR_LBRACE;
	v->a[38424] = anon_sym_DOLLAR_LPAREN;
	v->a[38425] = anon_sym_BQUOTE;
	v->a[38426] = anon_sym_DOLLAR_BQUOTE;
	v->a[38427] = sym_word;
	v->a[38428] = anon_sym_SEMI;
	v->a[38429] = 3;
	v->a[38430] = actions(3);
	v->a[38431] = 1;
	v->a[38432] = sym_comment;
	v->a[38433] = actions(2828);
	v->a[38434] = 6;
	v->a[38435] = sym_file_descriptor;
	v->a[38436] = sym__concat;
	v->a[38437] = sym_variable_name;
	v->a[38438] = sym_test_operator;
	v->a[38439] = sym__brace_start;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = aux_sym_heredoc_redirect_token1;
	v->a[38441] = actions(2826);
	v->a[38442] = 34;
	v->a[38443] = anon_sym_PIPE;
	v->a[38444] = anon_sym_RPAREN;
	v->a[38445] = anon_sym_SEMI_SEMI;
	v->a[38446] = anon_sym_PIPE_AMP;
	v->a[38447] = anon_sym_AMP_AMP;
	v->a[38448] = anon_sym_PIPE_PIPE;
	v->a[38449] = anon_sym_LT;
	v->a[38450] = anon_sym_GT;
	v->a[38451] = anon_sym_GT_GT;
	v->a[38452] = anon_sym_AMP_GT;
	v->a[38453] = anon_sym_AMP_GT_GT;
	v->a[38454] = anon_sym_LT_AMP;
	v->a[38455] = anon_sym_GT_AMP;
	v->a[38456] = anon_sym_GT_PIPE;
	v->a[38457] = anon_sym_LT_AMP_DASH;
	v->a[38458] = anon_sym_GT_AMP_DASH;
	v->a[38459] = anon_sym_LT_LT;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = anon_sym_LT_LT_DASH;
	v->a[38461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38462] = anon_sym_AMP;
	v->a[38463] = aux_sym_concatenation_token1;
	v->a[38464] = anon_sym_DOLLAR;
	v->a[38465] = sym__special_character;
	v->a[38466] = anon_sym_DQUOTE;
	v->a[38467] = sym_raw_string;
	v->a[38468] = aux_sym_number_token1;
	v->a[38469] = aux_sym_number_token2;
	v->a[38470] = anon_sym_DOLLAR_LBRACE;
	v->a[38471] = anon_sym_DOLLAR_LPAREN;
	v->a[38472] = anon_sym_BQUOTE;
	v->a[38473] = anon_sym_DOLLAR_BQUOTE;
	v->a[38474] = aux_sym__simple_variable_name_token1;
	v->a[38475] = sym_word;
	v->a[38476] = anon_sym_SEMI;
	v->a[38477] = 3;
	v->a[38478] = actions(3);
	v->a[38479] = 1;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = sym_comment;
	v->a[38481] = actions(3062);
	v->a[38482] = 6;
	v->a[38483] = sym_file_descriptor;
	v->a[38484] = sym__concat;
	v->a[38485] = sym_test_operator;
	v->a[38486] = sym__bare_dollar;
	v->a[38487] = sym__brace_start;
	v->a[38488] = aux_sym_heredoc_redirect_token1;
	v->a[38489] = actions(3060);
	v->a[38490] = 34;
	v->a[38491] = anon_sym_PIPE;
	v->a[38492] = anon_sym_SEMI_SEMI;
	v->a[38493] = anon_sym_SEMI_AMP;
	v->a[38494] = anon_sym_SEMI_SEMI_AMP;
	v->a[38495] = anon_sym_PIPE_AMP;
	v->a[38496] = anon_sym_AMP_AMP;
	v->a[38497] = anon_sym_PIPE_PIPE;
	v->a[38498] = anon_sym_LT;
	v->a[38499] = anon_sym_GT;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
