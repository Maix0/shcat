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
	v->a[38400] = anon_sym_DOLLAR_LPAREN;
	v->a[38401] = anon_sym_BQUOTE;
	v->a[38402] = sym_word;
	v->a[38403] = anon_sym_SEMI;
	v->a[38404] = 3;
	v->a[38405] = actions(3);
	v->a[38406] = 1;
	v->a[38407] = sym_comment;
	v->a[38408] = actions(1118);
	v->a[38409] = 3;
	v->a[38410] = sym_file_descriptor;
	v->a[38411] = sym__concat;
	v->a[38412] = sym_variable_name;
	v->a[38413] = actions(1116);
	v->a[38414] = 30;
	v->a[38415] = anon_sym_esac;
	v->a[38416] = anon_sym_PIPE;
	v->a[38417] = anon_sym_SEMI_SEMI;
	v->a[38418] = anon_sym_AMP_AMP;
	v->a[38419] = anon_sym_PIPE_PIPE;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = anon_sym_LT;
	v->a[38421] = anon_sym_GT;
	v->a[38422] = anon_sym_GT_GT;
	v->a[38423] = anon_sym_AMP_GT;
	v->a[38424] = anon_sym_AMP_GT_GT;
	v->a[38425] = anon_sym_LT_AMP;
	v->a[38426] = anon_sym_GT_AMP;
	v->a[38427] = anon_sym_GT_PIPE;
	v->a[38428] = anon_sym_LT_AMP_DASH;
	v->a[38429] = anon_sym_GT_AMP_DASH;
	v->a[38430] = anon_sym_LT_LT;
	v->a[38431] = anon_sym_LT_LT_DASH;
	v->a[38432] = aux_sym_heredoc_redirect_token1;
	v->a[38433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38434] = anon_sym_AMP;
	v->a[38435] = aux_sym_concatenation_token1;
	v->a[38436] = anon_sym_DOLLAR;
	v->a[38437] = anon_sym_DQUOTE;
	v->a[38438] = sym_raw_string;
	v->a[38439] = sym_number;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_DOLLAR_LBRACE;
	v->a[38441] = anon_sym_DOLLAR_LPAREN;
	v->a[38442] = anon_sym_BQUOTE;
	v->a[38443] = sym_word;
	v->a[38444] = anon_sym_SEMI;
	v->a[38445] = 7;
	v->a[38446] = actions(1074);
	v->a[38447] = 1;
	v->a[38448] = sym_comment;
	v->a[38449] = actions(1338);
	v->a[38450] = 2;
	v->a[38451] = anon_sym_GT_GT;
	v->a[38452] = anon_sym_LT_LT;
	v->a[38453] = actions(1350);
	v->a[38454] = 2;
	v->a[38455] = anon_sym_PLUS;
	v->a[38456] = anon_sym_DASH;
	v->a[38457] = actions(1356);
	v->a[38458] = 2;
	v->a[38459] = anon_sym_PLUS_PLUS2;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = anon_sym_DASH_DASH2;
	v->a[38461] = actions(1352);
	v->a[38462] = 3;
	v->a[38463] = anon_sym_STAR;
	v->a[38464] = anon_sym_SLASH;
	v->a[38465] = anon_sym_PERCENT;
	v->a[38466] = actions(1186);
	v->a[38467] = 6;
	v->a[38468] = anon_sym_PIPE;
	v->a[38469] = anon_sym_EQ;
	v->a[38470] = anon_sym_LT;
	v->a[38471] = anon_sym_GT;
	v->a[38472] = anon_sym_CARET;
	v->a[38473] = anon_sym_AMP;
	v->a[38474] = actions(1188);
	v->a[38475] = 18;
	v->a[38476] = anon_sym_RPAREN;
	v->a[38477] = anon_sym_AMP_AMP;
	v->a[38478] = anon_sym_PIPE_PIPE;
	v->a[38479] = anon_sym_PLUS_EQ;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = anon_sym_DASH_EQ;
	v->a[38481] = anon_sym_STAR_EQ;
	v->a[38482] = anon_sym_SLASH_EQ;
	v->a[38483] = anon_sym_PERCENT_EQ;
	v->a[38484] = anon_sym_LT_LT_EQ;
	v->a[38485] = anon_sym_GT_GT_EQ;
	v->a[38486] = anon_sym_AMP_EQ;
	v->a[38487] = anon_sym_CARET_EQ;
	v->a[38488] = anon_sym_PIPE_EQ;
	v->a[38489] = anon_sym_EQ_EQ;
	v->a[38490] = anon_sym_BANG_EQ;
	v->a[38491] = anon_sym_LT_EQ;
	v->a[38492] = anon_sym_GT_EQ;
	v->a[38493] = anon_sym_QMARK;
	v->a[38494] = 4;
	v->a[38495] = actions(1074);
	v->a[38496] = 1;
	v->a[38497] = sym_comment;
	v->a[38498] = actions(1356);
	v->a[38499] = 2;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
