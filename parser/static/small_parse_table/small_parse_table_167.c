/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_167.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_835(t_small_parse_table_array *v)
{
	v->a[16700] = anon_sym_EQ_EQ;
	v->a[16701] = anon_sym_BANG_EQ;
	v->a[16702] = actions(429);
	v->a[16703] = 2;
	v->a[16704] = anon_sym_LT_EQ;
	v->a[16705] = anon_sym_GT_EQ;
	v->a[16706] = actions(431);
	v->a[16707] = 2;
	v->a[16708] = anon_sym_PLUS;
	v->a[16709] = anon_sym_DASH;
	v->a[16710] = actions(433);
	v->a[16711] = 3;
	v->a[16712] = anon_sym_STAR;
	v->a[16713] = anon_sym_SLASH;
	v->a[16714] = anon_sym_PERCENT;
	v->a[16715] = actions(421);
	v->a[16716] = 13;
	v->a[16717] = anon_sym_RPAREN_RPAREN;
	v->a[16718] = anon_sym_PLUS_EQ;
	v->a[16719] = anon_sym_DASH_EQ;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = anon_sym_STAR_EQ;
	v->a[16721] = anon_sym_SLASH_EQ;
	v->a[16722] = anon_sym_PERCENT_EQ;
	v->a[16723] = anon_sym_LT_LT_EQ;
	v->a[16724] = anon_sym_GT_GT_EQ;
	v->a[16725] = anon_sym_AMP_EQ;
	v->a[16726] = anon_sym_CARET_EQ;
	v->a[16727] = anon_sym_PIPE_EQ;
	v->a[16728] = anon_sym_QMARK;
	v->a[16729] = anon_sym_COLON;
	v->a[16730] = 5;
	v->a[16731] = actions(3);
	v->a[16732] = 1;
	v->a[16733] = sym_comment;
	v->a[16734] = actions(387);
	v->a[16735] = 1;
	v->a[16736] = sym_variable_name;
	v->a[16737] = actions(385);
	v->a[16738] = 2;
	v->a[16739] = aux_sym__simple_variable_name_token1;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = aux_sym__multiline_variable_name_token1;
	v->a[16741] = actions(383);
	v->a[16742] = 8;
	v->a[16743] = anon_sym_BANG;
	v->a[16744] = anon_sym_DASH;
	v->a[16745] = anon_sym_STAR;
	v->a[16746] = anon_sym_QMARK;
	v->a[16747] = anon_sym_DOLLAR;
	v->a[16748] = anon_sym_POUND;
	v->a[16749] = anon_sym_AT;
	v->a[16750] = anon_sym_0;
	v->a[16751] = actions(345);
	v->a[16752] = 23;
	v->a[16753] = anon_sym_PIPE;
	v->a[16754] = anon_sym_SEMI_SEMI;
	v->a[16755] = anon_sym_AMP_AMP;
	v->a[16756] = anon_sym_PIPE_PIPE;
	v->a[16757] = anon_sym_LT;
	v->a[16758] = anon_sym_GT;
	v->a[16759] = anon_sym_GT_GT;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = anon_sym_LT_AMP;
	v->a[16761] = anon_sym_GT_AMP;
	v->a[16762] = anon_sym_GT_PIPE;
	v->a[16763] = anon_sym_LT_GT;
	v->a[16764] = anon_sym_LT_LT;
	v->a[16765] = anon_sym_LT_LT_DASH;
	v->a[16766] = aux_sym_heredoc_redirect_token1;
	v->a[16767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16768] = anon_sym_DQUOTE;
	v->a[16769] = sym_raw_string;
	v->a[16770] = sym_number;
	v->a[16771] = anon_sym_DOLLAR_LBRACE;
	v->a[16772] = anon_sym_DOLLAR_LPAREN;
	v->a[16773] = anon_sym_BQUOTE;
	v->a[16774] = sym_word;
	v->a[16775] = anon_sym_SEMI;
	v->a[16776] = 3;
	v->a[16777] = actions(407);
	v->a[16778] = 1;
	v->a[16779] = sym_comment;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = actions(435);
	v->a[16781] = 13;
	v->a[16782] = anon_sym_PIPE;
	v->a[16783] = anon_sym_EQ;
	v->a[16784] = anon_sym_LT;
	v->a[16785] = anon_sym_GT;
	v->a[16786] = anon_sym_GT_GT;
	v->a[16787] = anon_sym_LT_LT;
	v->a[16788] = anon_sym_CARET;
	v->a[16789] = anon_sym_AMP;
	v->a[16790] = anon_sym_PLUS;
	v->a[16791] = anon_sym_DASH;
	v->a[16792] = anon_sym_STAR;
	v->a[16793] = anon_sym_SLASH;
	v->a[16794] = anon_sym_PERCENT;
	v->a[16795] = actions(437);
	v->a[16796] = 21;
	v->a[16797] = anon_sym_AMP_AMP;
	v->a[16798] = anon_sym_PIPE_PIPE;
	v->a[16799] = anon_sym_RPAREN_RPAREN;
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
