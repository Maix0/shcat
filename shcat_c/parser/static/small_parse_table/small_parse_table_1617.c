/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1617.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8085(t_small_parse_table_array *v)
{
	v->a[161700] = 2;
	v->a[161701] = aux_sym__simple_variable_name_token1;
	v->a[161702] = aux_sym__multiline_variable_name_token1;
	v->a[161703] = actions(7440);
	v->a[161704] = 9;
	v->a[161705] = anon_sym_DASH;
	v->a[161706] = anon_sym_STAR;
	v->a[161707] = anon_sym_BANG;
	v->a[161708] = anon_sym_QMARK;
	v->a[161709] = anon_sym_DOLLAR;
	v->a[161710] = anon_sym_POUND;
	v->a[161711] = anon_sym_AT2;
	v->a[161712] = anon_sym_0;
	v->a[161713] = anon_sym__;
	v->a[161714] = actions(1239);
	v->a[161715] = 22;
	v->a[161716] = anon_sym_SEMI;
	v->a[161717] = anon_sym_PIPE_PIPE;
	v->a[161718] = anon_sym_AMP_AMP;
	v->a[161719] = anon_sym_PIPE;
	small_parse_table_8086(v);
}

void	small_parse_table_8086(t_small_parse_table_array *v)
{
	v->a[161720] = anon_sym_AMP;
	v->a[161721] = anon_sym_LT;
	v->a[161722] = anon_sym_GT;
	v->a[161723] = anon_sym_LT_LT;
	v->a[161724] = anon_sym_GT_GT;
	v->a[161725] = anon_sym_SEMI_SEMI;
	v->a[161726] = anon_sym_PIPE_AMP;
	v->a[161727] = anon_sym_AMP_GT;
	v->a[161728] = anon_sym_AMP_GT_GT;
	v->a[161729] = anon_sym_LT_AMP;
	v->a[161730] = anon_sym_GT_AMP;
	v->a[161731] = anon_sym_GT_PIPE;
	v->a[161732] = anon_sym_LT_AMP_DASH;
	v->a[161733] = anon_sym_GT_AMP_DASH;
	v->a[161734] = anon_sym_LT_LT_DASH;
	v->a[161735] = aux_sym_heredoc_redirect_token1;
	v->a[161736] = anon_sym_LT_LT_LT;
	v->a[161737] = anon_sym_BQUOTE;
	v->a[161738] = 8;
	v->a[161739] = actions(71);
	small_parse_table_8087(v);
}

void	small_parse_table_8087(t_small_parse_table_array *v)
{
	v->a[161740] = 1;
	v->a[161741] = sym_comment;
	v->a[161742] = actions(7322);
	v->a[161743] = 1;
	v->a[161744] = anon_sym_STAR_STAR;
	v->a[161745] = actions(6793);
	v->a[161746] = 2;
	v->a[161747] = anon_sym_PLUS_PLUS;
	v->a[161748] = anon_sym_DASH_DASH;
	v->a[161749] = actions(7316);
	v->a[161750] = 2;
	v->a[161751] = anon_sym_LT_LT;
	v->a[161752] = anon_sym_GT_GT;
	v->a[161753] = actions(7318);
	v->a[161754] = 2;
	v->a[161755] = anon_sym_PLUS;
	v->a[161756] = anon_sym_DASH;
	v->a[161757] = actions(7320);
	v->a[161758] = 3;
	v->a[161759] = anon_sym_STAR;
	small_parse_table_8088(v);
}

void	small_parse_table_8088(t_small_parse_table_array *v)
{
	v->a[161760] = anon_sym_SLASH;
	v->a[161761] = anon_sym_PERCENT;
	v->a[161762] = actions(6791);
	v->a[161763] = 6;
	v->a[161764] = anon_sym_EQ;
	v->a[161765] = anon_sym_PIPE;
	v->a[161766] = anon_sym_CARET;
	v->a[161767] = anon_sym_AMP;
	v->a[161768] = anon_sym_LT;
	v->a[161769] = anon_sym_GT;
	v->a[161770] = actions(6789);
	v->a[161771] = 21;
	v->a[161772] = sym_test_operator;
	v->a[161773] = anon_sym_PLUS_EQ;
	v->a[161774] = anon_sym_DASH_EQ;
	v->a[161775] = anon_sym_STAR_EQ;
	v->a[161776] = anon_sym_SLASH_EQ;
	v->a[161777] = anon_sym_PERCENT_EQ;
	v->a[161778] = anon_sym_STAR_STAR_EQ;
	v->a[161779] = anon_sym_LT_LT_EQ;
	small_parse_table_8089(v);
}

void	small_parse_table_8089(t_small_parse_table_array *v)
{
	v->a[161780] = anon_sym_GT_GT_EQ;
	v->a[161781] = anon_sym_AMP_EQ;
	v->a[161782] = anon_sym_CARET_EQ;
	v->a[161783] = anon_sym_PIPE_EQ;
	v->a[161784] = anon_sym_PIPE_PIPE;
	v->a[161785] = anon_sym_AMP_AMP;
	v->a[161786] = anon_sym_EQ_EQ;
	v->a[161787] = anon_sym_BANG_EQ;
	v->a[161788] = anon_sym_LT_EQ;
	v->a[161789] = anon_sym_GT_EQ;
	v->a[161790] = anon_sym_RBRACK_RBRACK;
	v->a[161791] = anon_sym_EQ_TILDE;
	v->a[161792] = anon_sym_QMARK;
	v->a[161793] = 3;
	v->a[161794] = actions(71);
	v->a[161795] = 1;
	v->a[161796] = sym_comment;
	v->a[161797] = actions(6864);
	v->a[161798] = 14;
	v->a[161799] = anon_sym_EQ;
	small_parse_table_8090(v);
}

/* EOF small_parse_table_1617.c */
