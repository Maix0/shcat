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
	v->a[38400] = anon_sym_LT_LT;
	v->a[38401] = anon_sym_LT_LT_DASH;
	v->a[38402] = aux_sym_heredoc_redirect_token1;
	v->a[38403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38404] = anon_sym_AMP;
	v->a[38405] = aux_sym_concatenation_token1;
	v->a[38406] = anon_sym_DOLLAR;
	v->a[38407] = anon_sym_DQUOTE;
	v->a[38408] = sym_raw_string;
	v->a[38409] = aux_sym_number_token1;
	v->a[38410] = aux_sym_number_token2;
	v->a[38411] = anon_sym_DOLLAR_LBRACE;
	v->a[38412] = anon_sym_DOLLAR_LPAREN;
	v->a[38413] = anon_sym_BQUOTE;
	v->a[38414] = sym_word;
	v->a[38415] = anon_sym_SEMI;
	v->a[38416] = 5;
	v->a[38417] = actions(3);
	v->a[38418] = 1;
	v->a[38419] = sym_comment;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = state(934);
	v->a[38421] = 1;
	v->a[38422] = sym_concatenation;
	v->a[38423] = actions(755);
	v->a[38424] = 2;
	v->a[38425] = sym_file_descriptor;
	v->a[38426] = sym_variable_name;
	v->a[38427] = state(774);
	v->a[38428] = 6;
	v->a[38429] = sym_arithmetic_expansion;
	v->a[38430] = sym_string;
	v->a[38431] = sym_number;
	v->a[38432] = sym_simple_expansion;
	v->a[38433] = sym_expansion;
	v->a[38434] = sym_command_substitution;
	v->a[38435] = actions(757);
	v->a[38436] = 25;
	v->a[38437] = anon_sym_PIPE;
	v->a[38438] = anon_sym_AMP_AMP;
	v->a[38439] = anon_sym_PIPE_PIPE;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_LT;
	v->a[38441] = anon_sym_GT;
	v->a[38442] = anon_sym_GT_GT;
	v->a[38443] = anon_sym_AMP_GT;
	v->a[38444] = anon_sym_AMP_GT_GT;
	v->a[38445] = anon_sym_LT_AMP;
	v->a[38446] = anon_sym_GT_AMP;
	v->a[38447] = anon_sym_GT_PIPE;
	v->a[38448] = anon_sym_LT_AMP_DASH;
	v->a[38449] = anon_sym_GT_AMP_DASH;
	v->a[38450] = anon_sym_LT_LT;
	v->a[38451] = anon_sym_LT_LT_DASH;
	v->a[38452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38453] = anon_sym_DOLLAR;
	v->a[38454] = anon_sym_DQUOTE;
	v->a[38455] = sym_raw_string;
	v->a[38456] = aux_sym_number_token1;
	v->a[38457] = aux_sym_number_token2;
	v->a[38458] = anon_sym_DOLLAR_LBRACE;
	v->a[38459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = anon_sym_BQUOTE;
	v->a[38461] = sym_word;
	v->a[38462] = 3;
	v->a[38463] = actions(3);
	v->a[38464] = 1;
	v->a[38465] = sym_comment;
	v->a[38466] = actions(1247);
	v->a[38467] = 4;
	v->a[38468] = sym_file_descriptor;
	v->a[38469] = sym__concat;
	v->a[38470] = sym_variable_name;
	v->a[38471] = ts_builtin_sym_end;
	v->a[38472] = actions(1249);
	v->a[38473] = 30;
	v->a[38474] = anon_sym_PIPE;
	v->a[38475] = anon_sym_SEMI_SEMI;
	v->a[38476] = anon_sym_AMP_AMP;
	v->a[38477] = anon_sym_PIPE_PIPE;
	v->a[38478] = anon_sym_LT;
	v->a[38479] = anon_sym_GT;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = anon_sym_GT_GT;
	v->a[38481] = anon_sym_AMP_GT;
	v->a[38482] = anon_sym_AMP_GT_GT;
	v->a[38483] = anon_sym_LT_AMP;
	v->a[38484] = anon_sym_GT_AMP;
	v->a[38485] = anon_sym_GT_PIPE;
	v->a[38486] = anon_sym_LT_AMP_DASH;
	v->a[38487] = anon_sym_GT_AMP_DASH;
	v->a[38488] = anon_sym_LT_LT;
	v->a[38489] = anon_sym_LT_LT_DASH;
	v->a[38490] = aux_sym_heredoc_redirect_token1;
	v->a[38491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38492] = anon_sym_AMP;
	v->a[38493] = aux_sym_concatenation_token1;
	v->a[38494] = anon_sym_DOLLAR;
	v->a[38495] = anon_sym_DQUOTE;
	v->a[38496] = sym_raw_string;
	v->a[38497] = aux_sym_number_token1;
	v->a[38498] = aux_sym_number_token2;
	v->a[38499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
