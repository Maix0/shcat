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
	v->a[38400] = aux_sym_number_token2;
	v->a[38401] = actions(4961);
	v->a[38402] = 1;
	v->a[38403] = anon_sym_DOLLAR_LBRACE;
	v->a[38404] = actions(4963);
	v->a[38405] = 1;
	v->a[38406] = anon_sym_DOLLAR_LPAREN;
	v->a[38407] = actions(4965);
	v->a[38408] = 1;
	v->a[38409] = anon_sym_BQUOTE;
	v->a[38410] = actions(4967);
	v->a[38411] = 1;
	v->a[38412] = anon_sym_DOLLAR_BQUOTE;
	v->a[38413] = actions(4971);
	v->a[38414] = 1;
	v->a[38415] = sym_test_operator;
	v->a[38416] = actions(4973);
	v->a[38417] = 1;
	v->a[38418] = sym__brace_start;
	v->a[38419] = state(2776);
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = 1;
	v->a[38421] = aux_sym__literal_repeat1;
	v->a[38422] = actions(4945);
	v->a[38423] = 2;
	v->a[38424] = anon_sym_LPAREN_LPAREN;
	v->a[38425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38426] = actions(4955);
	v->a[38427] = 2;
	v->a[38428] = sym_raw_string;
	v->a[38429] = sym_ansi_c_string;
	v->a[38430] = actions(4969);
	v->a[38431] = 2;
	v->a[38432] = anon_sym_LT_LPAREN;
	v->a[38433] = anon_sym_GT_LPAREN;
	v->a[38434] = state(967);
	v->a[38435] = 2;
	v->a[38436] = sym_concatenation;
	v->a[38437] = aux_sym_for_statement_repeat1;
	v->a[38438] = actions(2094);
	v->a[38439] = 7;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_PIPE;
	v->a[38441] = anon_sym_LT;
	v->a[38442] = anon_sym_GT;
	v->a[38443] = anon_sym_LT_LT;
	v->a[38444] = anon_sym_AMP_GT;
	v->a[38445] = anon_sym_LT_AMP;
	v->a[38446] = anon_sym_GT_AMP;
	v->a[38447] = state(2489);
	v->a[38448] = 9;
	v->a[38449] = sym_arithmetic_expansion;
	v->a[38450] = sym_brace_expression;
	v->a[38451] = sym_string;
	v->a[38452] = sym_translated_string;
	v->a[38453] = sym_number;
	v->a[38454] = sym_simple_expansion;
	v->a[38455] = sym_expansion;
	v->a[38456] = sym_command_substitution;
	v->a[38457] = sym_process_substitution;
	v->a[38458] = actions(2096);
	v->a[38459] = 11;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = sym_file_descriptor;
	v->a[38461] = anon_sym_PIPE_PIPE;
	v->a[38462] = anon_sym_AMP_AMP;
	v->a[38463] = anon_sym_GT_GT;
	v->a[38464] = anon_sym_PIPE_AMP;
	v->a[38465] = anon_sym_RBRACK;
	v->a[38466] = anon_sym_AMP_GT_GT;
	v->a[38467] = anon_sym_GT_PIPE;
	v->a[38468] = anon_sym_LT_AMP_DASH;
	v->a[38469] = anon_sym_GT_AMP_DASH;
	v->a[38470] = anon_sym_LT_LT_DASH;
	v->a[38471] = 3;
	v->a[38472] = actions(3);
	v->a[38473] = 1;
	v->a[38474] = sym_comment;
	v->a[38475] = actions(1334);
	v->a[38476] = 6;
	v->a[38477] = sym_file_descriptor;
	v->a[38478] = sym__concat;
	v->a[38479] = sym_test_operator;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = sym__bare_dollar;
	v->a[38481] = sym__brace_start;
	v->a[38482] = aux_sym_heredoc_redirect_token1;
	v->a[38483] = actions(1332);
	v->a[38484] = 43;
	v->a[38485] = anon_sym_LPAREN_LPAREN;
	v->a[38486] = anon_sym_SEMI;
	v->a[38487] = anon_sym_PIPE_PIPE;
	v->a[38488] = anon_sym_AMP_AMP;
	v->a[38489] = anon_sym_PIPE;
	v->a[38490] = anon_sym_AMP;
	v->a[38491] = anon_sym_EQ_EQ;
	v->a[38492] = anon_sym_LT;
	v->a[38493] = anon_sym_GT;
	v->a[38494] = anon_sym_LT_LT;
	v->a[38495] = anon_sym_GT_GT;
	v->a[38496] = anon_sym_LPAREN;
	v->a[38497] = anon_sym_SEMI_SEMI;
	v->a[38498] = anon_sym_SEMI_AMP;
	v->a[38499] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
