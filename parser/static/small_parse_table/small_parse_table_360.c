/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_360.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1800(t_small_parse_table_array *v)
{
	v->a[36000] = 1;
	v->a[36001] = sym__concat;
	v->a[36002] = state(519);
	v->a[36003] = 1;
	v->a[36004] = aux_sym_concatenation_repeat1;
	v->a[36005] = actions(565);
	v->a[36006] = 2;
	v->a[36007] = sym_file_descriptor;
	v->a[36008] = sym_variable_name;
	v->a[36009] = actions(567);
	v->a[36010] = 29;
	v->a[36011] = anon_sym_PIPE;
	v->a[36012] = anon_sym_SEMI_SEMI;
	v->a[36013] = anon_sym_AMP_AMP;
	v->a[36014] = anon_sym_PIPE_PIPE;
	v->a[36015] = anon_sym_LT;
	v->a[36016] = anon_sym_GT;
	v->a[36017] = anon_sym_GT_GT;
	v->a[36018] = anon_sym_AMP_GT;
	v->a[36019] = anon_sym_AMP_GT_GT;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_LT_AMP;
	v->a[36021] = anon_sym_GT_AMP;
	v->a[36022] = anon_sym_GT_PIPE;
	v->a[36023] = anon_sym_LT_AMP_DASH;
	v->a[36024] = anon_sym_GT_AMP_DASH;
	v->a[36025] = anon_sym_LT_LT;
	v->a[36026] = anon_sym_LT_LT_DASH;
	v->a[36027] = aux_sym_heredoc_redirect_token1;
	v->a[36028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36029] = anon_sym_AMP;
	v->a[36030] = anon_sym_DOLLAR;
	v->a[36031] = anon_sym_DQUOTE;
	v->a[36032] = sym_raw_string;
	v->a[36033] = aux_sym_number_token1;
	v->a[36034] = aux_sym_number_token2;
	v->a[36035] = anon_sym_DOLLAR_LBRACE;
	v->a[36036] = anon_sym_DOLLAR_LPAREN;
	v->a[36037] = anon_sym_BQUOTE;
	v->a[36038] = sym_word;
	v->a[36039] = anon_sym_SEMI;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = 3;
	v->a[36041] = actions(1404);
	v->a[36042] = 1;
	v->a[36043] = sym_comment;
	v->a[36044] = actions(1249);
	v->a[36045] = 13;
	v->a[36046] = anon_sym_PIPE;
	v->a[36047] = anon_sym_EQ;
	v->a[36048] = anon_sym_LT;
	v->a[36049] = anon_sym_GT;
	v->a[36050] = anon_sym_GT_GT;
	v->a[36051] = anon_sym_LT_LT;
	v->a[36052] = anon_sym_CARET;
	v->a[36053] = anon_sym_AMP;
	v->a[36054] = anon_sym_PLUS;
	v->a[36055] = anon_sym_DASH;
	v->a[36056] = anon_sym_STAR;
	v->a[36057] = anon_sym_SLASH;
	v->a[36058] = anon_sym_PERCENT;
	v->a[36059] = actions(1247);
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = 21;
	v->a[36061] = anon_sym_AMP_AMP;
	v->a[36062] = anon_sym_PIPE_PIPE;
	v->a[36063] = anon_sym_RPAREN_RPAREN;
	v->a[36064] = anon_sym_PLUS_EQ;
	v->a[36065] = anon_sym_DASH_EQ;
	v->a[36066] = anon_sym_STAR_EQ;
	v->a[36067] = anon_sym_SLASH_EQ;
	v->a[36068] = anon_sym_PERCENT_EQ;
	v->a[36069] = anon_sym_LT_LT_EQ;
	v->a[36070] = anon_sym_GT_GT_EQ;
	v->a[36071] = anon_sym_AMP_EQ;
	v->a[36072] = anon_sym_CARET_EQ;
	v->a[36073] = anon_sym_PIPE_EQ;
	v->a[36074] = anon_sym_EQ_EQ;
	v->a[36075] = anon_sym_BANG_EQ;
	v->a[36076] = anon_sym_LT_EQ;
	v->a[36077] = anon_sym_GT_EQ;
	v->a[36078] = anon_sym_QMARK;
	v->a[36079] = anon_sym_COLON;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = anon_sym_PLUS_PLUS2;
	v->a[36081] = anon_sym_DASH_DASH2;
	v->a[36082] = 3;
	v->a[36083] = actions(1404);
	v->a[36084] = 1;
	v->a[36085] = sym_comment;
	v->a[36086] = actions(1190);
	v->a[36087] = 13;
	v->a[36088] = anon_sym_PIPE;
	v->a[36089] = anon_sym_EQ;
	v->a[36090] = anon_sym_LT;
	v->a[36091] = anon_sym_GT;
	v->a[36092] = anon_sym_GT_GT;
	v->a[36093] = anon_sym_LT_LT;
	v->a[36094] = anon_sym_CARET;
	v->a[36095] = anon_sym_AMP;
	v->a[36096] = anon_sym_PLUS;
	v->a[36097] = anon_sym_DASH;
	v->a[36098] = anon_sym_STAR;
	v->a[36099] = anon_sym_SLASH;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
