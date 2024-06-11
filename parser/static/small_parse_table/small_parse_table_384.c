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
	v->a[38400] = 2;
	v->a[38401] = anon_sym_LT;
	v->a[38402] = anon_sym_GT;
	v->a[38403] = actions(1084);
	v->a[38404] = 2;
	v->a[38405] = anon_sym_GT_GT;
	v->a[38406] = anon_sym_LT_LT;
	v->a[38407] = actions(1086);
	v->a[38408] = 2;
	v->a[38409] = anon_sym_LT_EQ;
	v->a[38410] = anon_sym_GT_EQ;
	v->a[38411] = actions(1088);
	v->a[38412] = 2;
	v->a[38413] = anon_sym_PLUS;
	v->a[38414] = anon_sym_DASH;
	v->a[38415] = actions(1092);
	v->a[38416] = 2;
	v->a[38417] = anon_sym_PLUS_PLUS2;
	v->a[38418] = anon_sym_DASH_DASH2;
	v->a[38419] = actions(1116);
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = 2;
	v->a[38421] = anon_sym_EQ_EQ;
	v->a[38422] = anon_sym_BANG_EQ;
	v->a[38423] = actions(1090);
	v->a[38424] = 3;
	v->a[38425] = anon_sym_STAR;
	v->a[38426] = anon_sym_SLASH;
	v->a[38427] = anon_sym_PERCENT;
	v->a[38428] = actions(1288);
	v->a[38429] = 10;
	v->a[38430] = anon_sym_PLUS_EQ;
	v->a[38431] = anon_sym_DASH_EQ;
	v->a[38432] = anon_sym_STAR_EQ;
	v->a[38433] = anon_sym_SLASH_EQ;
	v->a[38434] = anon_sym_PERCENT_EQ;
	v->a[38435] = anon_sym_LT_LT_EQ;
	v->a[38436] = anon_sym_GT_GT_EQ;
	v->a[38437] = anon_sym_AMP_EQ;
	v->a[38438] = anon_sym_CARET_EQ;
	v->a[38439] = anon_sym_PIPE_EQ;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = 3;
	v->a[38441] = actions(3);
	v->a[38442] = 1;
	v->a[38443] = sym_comment;
	v->a[38444] = actions(1004);
	v->a[38445] = 3;
	v->a[38446] = sym_file_descriptor;
	v->a[38447] = sym__concat;
	v->a[38448] = sym_variable_name;
	v->a[38449] = actions(999);
	v->a[38450] = 30;
	v->a[38451] = anon_sym_esac;
	v->a[38452] = anon_sym_PIPE;
	v->a[38453] = anon_sym_SEMI_SEMI;
	v->a[38454] = anon_sym_AMP_AMP;
	v->a[38455] = anon_sym_PIPE_PIPE;
	v->a[38456] = anon_sym_LT;
	v->a[38457] = anon_sym_GT;
	v->a[38458] = anon_sym_GT_GT;
	v->a[38459] = anon_sym_AMP_GT;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = anon_sym_AMP_GT_GT;
	v->a[38461] = anon_sym_LT_AMP;
	v->a[38462] = anon_sym_GT_AMP;
	v->a[38463] = anon_sym_GT_PIPE;
	v->a[38464] = anon_sym_LT_AMP_DASH;
	v->a[38465] = anon_sym_GT_AMP_DASH;
	v->a[38466] = anon_sym_LT_LT;
	v->a[38467] = anon_sym_LT_LT_DASH;
	v->a[38468] = aux_sym_heredoc_redirect_token1;
	v->a[38469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38470] = anon_sym_AMP;
	v->a[38471] = aux_sym_concatenation_token1;
	v->a[38472] = anon_sym_DOLLAR;
	v->a[38473] = anon_sym_DQUOTE;
	v->a[38474] = sym_raw_string;
	v->a[38475] = sym_number;
	v->a[38476] = anon_sym_DOLLAR_LBRACE;
	v->a[38477] = anon_sym_DOLLAR_LPAREN;
	v->a[38478] = anon_sym_BQUOTE;
	v->a[38479] = sym_word;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = anon_sym_SEMI;
	v->a[38481] = 3;
	v->a[38482] = actions(3);
	v->a[38483] = 1;
	v->a[38484] = sym_comment;
	v->a[38485] = actions(1100);
	v->a[38486] = 3;
	v->a[38487] = sym_file_descriptor;
	v->a[38488] = sym__concat;
	v->a[38489] = sym__bare_dollar;
	v->a[38490] = actions(1102);
	v->a[38491] = 30;
	v->a[38492] = anon_sym_esac;
	v->a[38493] = anon_sym_PIPE;
	v->a[38494] = anon_sym_SEMI_SEMI;
	v->a[38495] = anon_sym_AMP_AMP;
	v->a[38496] = anon_sym_PIPE_PIPE;
	v->a[38497] = anon_sym_LT;
	v->a[38498] = anon_sym_GT;
	v->a[38499] = anon_sym_GT_GT;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
