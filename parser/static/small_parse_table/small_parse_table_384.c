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
	v->a[38400] = anon_sym_DOLLAR_LBRACE;
	v->a[38401] = anon_sym_DOLLAR_LPAREN;
	v->a[38402] = anon_sym_BQUOTE;
	v->a[38403] = sym_word;
	v->a[38404] = anon_sym_SEMI;
	v->a[38405] = 3;
	v->a[38406] = actions(3);
	v->a[38407] = 1;
	v->a[38408] = sym_comment;
	v->a[38409] = actions(1005);
	v->a[38410] = 3;
	v->a[38411] = sym_file_descriptor;
	v->a[38412] = sym__concat;
	v->a[38413] = sym__bare_dollar;
	v->a[38414] = actions(1003);
	v->a[38415] = 28;
	v->a[38416] = anon_sym_PIPE;
	v->a[38417] = anon_sym_RPAREN;
	v->a[38418] = anon_sym_SEMI_SEMI;
	v->a[38419] = anon_sym_AMP_AMP;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = anon_sym_PIPE_PIPE;
	v->a[38421] = anon_sym_LT;
	v->a[38422] = anon_sym_GT;
	v->a[38423] = anon_sym_GT_GT;
	v->a[38424] = anon_sym_LT_AMP;
	v->a[38425] = anon_sym_GT_AMP;
	v->a[38426] = anon_sym_GT_PIPE;
	v->a[38427] = anon_sym_LT_AMP_DASH;
	v->a[38428] = anon_sym_GT_AMP_DASH;
	v->a[38429] = anon_sym_LT_LT;
	v->a[38430] = anon_sym_LT_LT_DASH;
	v->a[38431] = aux_sym_heredoc_redirect_token1;
	v->a[38432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38433] = anon_sym_AMP;
	v->a[38434] = aux_sym_concatenation_token1;
	v->a[38435] = anon_sym_DOLLAR;
	v->a[38436] = anon_sym_DQUOTE;
	v->a[38437] = sym_raw_string;
	v->a[38438] = sym_number;
	v->a[38439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_DOLLAR_LPAREN;
	v->a[38441] = anon_sym_BQUOTE;
	v->a[38442] = sym_word;
	v->a[38443] = anon_sym_SEMI;
	v->a[38444] = 3;
	v->a[38445] = actions(3);
	v->a[38446] = 1;
	v->a[38447] = sym_comment;
	v->a[38448] = actions(1401);
	v->a[38449] = 2;
	v->a[38450] = sym_file_descriptor;
	v->a[38451] = sym_variable_name;
	v->a[38452] = actions(1399);
	v->a[38453] = 29;
	v->a[38454] = anon_sym_for;
	v->a[38455] = anon_sym_while;
	v->a[38456] = anon_sym_until;
	v->a[38457] = anon_sym_done;
	v->a[38458] = anon_sym_if;
	v->a[38459] = anon_sym_then;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = anon_sym_case;
	v->a[38461] = anon_sym_LPAREN;
	v->a[38462] = anon_sym_RPAREN;
	v->a[38463] = anon_sym_SEMI_SEMI;
	v->a[38464] = anon_sym_LBRACE;
	v->a[38465] = anon_sym_BANG;
	v->a[38466] = anon_sym_LT;
	v->a[38467] = anon_sym_GT;
	v->a[38468] = anon_sym_GT_GT;
	v->a[38469] = anon_sym_LT_AMP;
	v->a[38470] = anon_sym_GT_AMP;
	v->a[38471] = anon_sym_GT_PIPE;
	v->a[38472] = anon_sym_LT_AMP_DASH;
	v->a[38473] = anon_sym_GT_AMP_DASH;
	v->a[38474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38475] = anon_sym_DOLLAR;
	v->a[38476] = anon_sym_DQUOTE;
	v->a[38477] = sym_raw_string;
	v->a[38478] = sym_number;
	v->a[38479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = anon_sym_DOLLAR_LPAREN;
	v->a[38481] = anon_sym_BQUOTE;
	v->a[38482] = sym_word;
	v->a[38483] = 3;
	v->a[38484] = actions(3);
	v->a[38485] = 1;
	v->a[38486] = sym_comment;
	v->a[38487] = actions(1041);
	v->a[38488] = 3;
	v->a[38489] = sym_file_descriptor;
	v->a[38490] = sym__concat;
	v->a[38491] = sym__bare_dollar;
	v->a[38492] = actions(1039);
	v->a[38493] = 28;
	v->a[38494] = anon_sym_PIPE;
	v->a[38495] = anon_sym_RPAREN;
	v->a[38496] = anon_sym_SEMI_SEMI;
	v->a[38497] = anon_sym_AMP_AMP;
	v->a[38498] = anon_sym_PIPE_PIPE;
	v->a[38499] = anon_sym_LT;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
