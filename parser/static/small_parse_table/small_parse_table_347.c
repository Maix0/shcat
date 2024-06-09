/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_347.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1735(t_small_parse_table_array *v)
{
	v->a[34700] = aux_sym_number_token2;
	v->a[34701] = anon_sym_DOLLAR_LBRACE;
	v->a[34702] = anon_sym_DOLLAR_LPAREN;
	v->a[34703] = anon_sym_BQUOTE;
	v->a[34704] = sym_word;
	v->a[34705] = anon_sym_SEMI;
	v->a[34706] = 3;
	v->a[34707] = actions(3);
	v->a[34708] = 1;
	v->a[34709] = sym_comment;
	v->a[34710] = actions(1251);
	v->a[34711] = 3;
	v->a[34712] = sym_file_descriptor;
	v->a[34713] = sym__concat;
	v->a[34714] = sym__bare_dollar;
	v->a[34715] = actions(1253);
	v->a[34716] = 31;
	v->a[34717] = anon_sym_PIPE;
	v->a[34718] = anon_sym_RPAREN;
	v->a[34719] = anon_sym_SEMI_SEMI;
	small_parse_table_1736(v);
}

void	small_parse_table_1736(t_small_parse_table_array *v)
{
	v->a[34720] = anon_sym_AMP_AMP;
	v->a[34721] = anon_sym_PIPE_PIPE;
	v->a[34722] = anon_sym_LT;
	v->a[34723] = anon_sym_GT;
	v->a[34724] = anon_sym_GT_GT;
	v->a[34725] = anon_sym_AMP_GT;
	v->a[34726] = anon_sym_AMP_GT_GT;
	v->a[34727] = anon_sym_LT_AMP;
	v->a[34728] = anon_sym_GT_AMP;
	v->a[34729] = anon_sym_GT_PIPE;
	v->a[34730] = anon_sym_LT_AMP_DASH;
	v->a[34731] = anon_sym_GT_AMP_DASH;
	v->a[34732] = anon_sym_LT_LT;
	v->a[34733] = anon_sym_LT_LT_DASH;
	v->a[34734] = aux_sym_heredoc_redirect_token1;
	v->a[34735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34736] = anon_sym_AMP;
	v->a[34737] = aux_sym_concatenation_token1;
	v->a[34738] = anon_sym_DOLLAR;
	v->a[34739] = anon_sym_DQUOTE;
	small_parse_table_1737(v);
}

void	small_parse_table_1737(t_small_parse_table_array *v)
{
	v->a[34740] = sym_raw_string;
	v->a[34741] = aux_sym_number_token1;
	v->a[34742] = aux_sym_number_token2;
	v->a[34743] = anon_sym_DOLLAR_LBRACE;
	v->a[34744] = anon_sym_DOLLAR_LPAREN;
	v->a[34745] = anon_sym_BQUOTE;
	v->a[34746] = sym_word;
	v->a[34747] = anon_sym_SEMI;
	v->a[34748] = 4;
	v->a[34749] = actions(1404);
	v->a[34750] = 1;
	v->a[34751] = sym_comment;
	v->a[34752] = actions(1402);
	v->a[34753] = 2;
	v->a[34754] = anon_sym_PLUS_PLUS2;
	v->a[34755] = anon_sym_DASH_DASH2;
	v->a[34756] = actions(1398);
	v->a[34757] = 13;
	v->a[34758] = anon_sym_PIPE;
	v->a[34759] = anon_sym_EQ;
	small_parse_table_1738(v);
}

void	small_parse_table_1738(t_small_parse_table_array *v)
{
	v->a[34760] = anon_sym_LT;
	v->a[34761] = anon_sym_GT;
	v->a[34762] = anon_sym_GT_GT;
	v->a[34763] = anon_sym_LT_LT;
	v->a[34764] = anon_sym_CARET;
	v->a[34765] = anon_sym_AMP;
	v->a[34766] = anon_sym_PLUS;
	v->a[34767] = anon_sym_DASH;
	v->a[34768] = anon_sym_STAR;
	v->a[34769] = anon_sym_SLASH;
	v->a[34770] = anon_sym_PERCENT;
	v->a[34771] = actions(1400);
	v->a[34772] = 19;
	v->a[34773] = anon_sym_AMP_AMP;
	v->a[34774] = anon_sym_PIPE_PIPE;
	v->a[34775] = anon_sym_RPAREN_RPAREN;
	v->a[34776] = anon_sym_PLUS_EQ;
	v->a[34777] = anon_sym_DASH_EQ;
	v->a[34778] = anon_sym_STAR_EQ;
	v->a[34779] = anon_sym_SLASH_EQ;
	small_parse_table_1739(v);
}

void	small_parse_table_1739(t_small_parse_table_array *v)
{
	v->a[34780] = anon_sym_PERCENT_EQ;
	v->a[34781] = anon_sym_LT_LT_EQ;
	v->a[34782] = anon_sym_GT_GT_EQ;
	v->a[34783] = anon_sym_AMP_EQ;
	v->a[34784] = anon_sym_CARET_EQ;
	v->a[34785] = anon_sym_PIPE_EQ;
	v->a[34786] = anon_sym_EQ_EQ;
	v->a[34787] = anon_sym_BANG_EQ;
	v->a[34788] = anon_sym_LT_EQ;
	v->a[34789] = anon_sym_GT_EQ;
	v->a[34790] = anon_sym_QMARK;
	v->a[34791] = anon_sym_COLON;
	v->a[34792] = 5;
	v->a[34793] = actions(1404);
	v->a[34794] = 1;
	v->a[34795] = sym_comment;
	v->a[34796] = actions(1402);
	v->a[34797] = 2;
	v->a[34798] = anon_sym_PLUS_PLUS2;
	v->a[34799] = anon_sym_DASH_DASH2;
	small_parse_table_1740(v);
}

/* EOF small_parse_table_347.c */
