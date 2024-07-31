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
	v->a[38400] = anon_sym_DQUOTE;
	v->a[38401] = sym_raw_string;
	v->a[38402] = sym_number;
	v->a[38403] = anon_sym_DOLLAR_LBRACE;
	v->a[38404] = anon_sym_DOLLAR_LPAREN;
	v->a[38405] = sym_word;
	v->a[38406] = actions(1306);
	v->a[38407] = 16;
	v->a[38408] = anon_sym_PIPE;
	v->a[38409] = anon_sym_SEMI_SEMI;
	v->a[38410] = anon_sym_AMP_AMP;
	v->a[38411] = anon_sym_PIPE_PIPE;
	v->a[38412] = anon_sym_LT;
	v->a[38413] = anon_sym_GT;
	v->a[38414] = anon_sym_GT_GT;
	v->a[38415] = anon_sym_LT_AMP;
	v->a[38416] = anon_sym_GT_AMP;
	v->a[38417] = anon_sym_GT_PIPE;
	v->a[38418] = anon_sym_LT_GT;
	v->a[38419] = anon_sym_LT_LT;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = anon_sym_LT_LT_DASH;
	v->a[38421] = aux_sym_heredoc_redirect_token1;
	v->a[38422] = anon_sym_BQUOTE;
	v->a[38423] = anon_sym_SEMI;
	v->a[38424] = 4;
	v->a[38425] = actions(3);
	v->a[38426] = 1;
	v->a[38427] = sym_comment;
	v->a[38428] = actions(1249);
	v->a[38429] = 1;
	v->a[38430] = sym_variable_name;
	v->a[38431] = actions(1268);
	v->a[38432] = 1;
	v->a[38433] = anon_sym_BQUOTE;
	v->a[38434] = actions(1245);
	v->a[38435] = 23;
	v->a[38436] = anon_sym_for;
	v->a[38437] = anon_sym_while;
	v->a[38438] = anon_sym_until;
	v->a[38439] = anon_sym_if;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_case;
	v->a[38441] = anon_sym_LPAREN;
	v->a[38442] = anon_sym_LBRACE;
	v->a[38443] = anon_sym_BANG;
	v->a[38444] = anon_sym_LT;
	v->a[38445] = anon_sym_GT;
	v->a[38446] = anon_sym_GT_GT;
	v->a[38447] = anon_sym_LT_AMP;
	v->a[38448] = anon_sym_GT_AMP;
	v->a[38449] = anon_sym_GT_PIPE;
	v->a[38450] = anon_sym_LT_GT;
	v->a[38451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38452] = anon_sym_DOLLAR;
	v->a[38453] = anon_sym_DQUOTE;
	v->a[38454] = sym_raw_string;
	v->a[38455] = sym_number;
	v->a[38456] = anon_sym_DOLLAR_LBRACE;
	v->a[38457] = anon_sym_DOLLAR_LPAREN;
	v->a[38458] = sym_word;
	v->a[38459] = 6;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = actions(3);
	v->a[38461] = 1;
	v->a[38462] = sym_comment;
	v->a[38463] = actions(1011);
	v->a[38464] = 1;
	v->a[38465] = sym_variable_name;
	v->a[38466] = actions(1441);
	v->a[38467] = 1;
	v->a[38468] = aux_sym_concatenation_token1;
	v->a[38469] = actions(1444);
	v->a[38470] = 1;
	v->a[38471] = sym__concat;
	v->a[38472] = state(639);
	v->a[38473] = 1;
	v->a[38474] = aux_sym_concatenation_repeat1;
	v->a[38475] = actions(1003);
	v->a[38476] = 21;
	v->a[38477] = anon_sym_PIPE;
	v->a[38478] = anon_sym_AMP_AMP;
	v->a[38479] = anon_sym_PIPE_PIPE;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = anon_sym_LT;
	v->a[38481] = anon_sym_GT;
	v->a[38482] = anon_sym_GT_GT;
	v->a[38483] = anon_sym_LT_AMP;
	v->a[38484] = anon_sym_GT_AMP;
	v->a[38485] = anon_sym_GT_PIPE;
	v->a[38486] = anon_sym_LT_GT;
	v->a[38487] = anon_sym_LT_LT;
	v->a[38488] = anon_sym_LT_LT_DASH;
	v->a[38489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38490] = anon_sym_DOLLAR;
	v->a[38491] = anon_sym_DQUOTE;
	v->a[38492] = sym_raw_string;
	v->a[38493] = sym_number;
	v->a[38494] = anon_sym_DOLLAR_LBRACE;
	v->a[38495] = anon_sym_DOLLAR_LPAREN;
	v->a[38496] = anon_sym_BQUOTE;
	v->a[38497] = sym_word;
	v->a[38498] = 4;
	v->a[38499] = actions(3);
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
