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
	v->a[36000] = anon_sym_GT;
	v->a[36001] = actions(1084);
	v->a[36002] = 2;
	v->a[36003] = anon_sym_GT_GT;
	v->a[36004] = anon_sym_LT_LT;
	v->a[36005] = actions(1086);
	v->a[36006] = 2;
	v->a[36007] = anon_sym_LT_EQ;
	v->a[36008] = anon_sym_GT_EQ;
	v->a[36009] = actions(1088);
	v->a[36010] = 2;
	v->a[36011] = anon_sym_PLUS;
	v->a[36012] = anon_sym_DASH;
	v->a[36013] = actions(1092);
	v->a[36014] = 2;
	v->a[36015] = anon_sym_PLUS_PLUS2;
	v->a[36016] = anon_sym_DASH_DASH2;
	v->a[36017] = actions(1116);
	v->a[36018] = 2;
	v->a[36019] = anon_sym_EQ_EQ;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_BANG_EQ;
	v->a[36021] = actions(1090);
	v->a[36022] = 3;
	v->a[36023] = anon_sym_STAR;
	v->a[36024] = anon_sym_SLASH;
	v->a[36025] = anon_sym_PERCENT;
	v->a[36026] = actions(1288);
	v->a[36027] = 10;
	v->a[36028] = anon_sym_PLUS_EQ;
	v->a[36029] = anon_sym_DASH_EQ;
	v->a[36030] = anon_sym_STAR_EQ;
	v->a[36031] = anon_sym_SLASH_EQ;
	v->a[36032] = anon_sym_PERCENT_EQ;
	v->a[36033] = anon_sym_LT_LT_EQ;
	v->a[36034] = anon_sym_GT_GT_EQ;
	v->a[36035] = anon_sym_AMP_EQ;
	v->a[36036] = anon_sym_CARET_EQ;
	v->a[36037] = anon_sym_PIPE_EQ;
	v->a[36038] = 3;
	v->a[36039] = actions(3);
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = 1;
	v->a[36041] = sym_comment;
	v->a[36042] = actions(1147);
	v->a[36043] = 3;
	v->a[36044] = sym_file_descriptor;
	v->a[36045] = sym__concat;
	v->a[36046] = sym_variable_name;
	v->a[36047] = actions(1149);
	v->a[36048] = 30;
	v->a[36049] = anon_sym_PIPE;
	v->a[36050] = anon_sym_RPAREN;
	v->a[36051] = anon_sym_SEMI_SEMI;
	v->a[36052] = anon_sym_AMP_AMP;
	v->a[36053] = anon_sym_PIPE_PIPE;
	v->a[36054] = anon_sym_LT;
	v->a[36055] = anon_sym_GT;
	v->a[36056] = anon_sym_GT_GT;
	v->a[36057] = anon_sym_AMP_GT;
	v->a[36058] = anon_sym_AMP_GT_GT;
	v->a[36059] = anon_sym_LT_AMP;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = anon_sym_GT_AMP;
	v->a[36061] = anon_sym_GT_PIPE;
	v->a[36062] = anon_sym_LT_AMP_DASH;
	v->a[36063] = anon_sym_GT_AMP_DASH;
	v->a[36064] = anon_sym_LT_LT;
	v->a[36065] = anon_sym_LT_LT_DASH;
	v->a[36066] = aux_sym_heredoc_redirect_token1;
	v->a[36067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36068] = anon_sym_AMP;
	v->a[36069] = aux_sym_concatenation_token1;
	v->a[36070] = anon_sym_DOLLAR;
	v->a[36071] = anon_sym_DQUOTE;
	v->a[36072] = sym_raw_string;
	v->a[36073] = sym_number;
	v->a[36074] = anon_sym_DOLLAR_LBRACE;
	v->a[36075] = anon_sym_DOLLAR_LPAREN;
	v->a[36076] = anon_sym_BQUOTE;
	v->a[36077] = sym_word;
	v->a[36078] = anon_sym_SEMI;
	v->a[36079] = 3;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = actions(3);
	v->a[36081] = 1;
	v->a[36082] = sym_comment;
	v->a[36083] = actions(1187);
	v->a[36084] = 3;
	v->a[36085] = sym_file_descriptor;
	v->a[36086] = sym__concat;
	v->a[36087] = sym__bare_dollar;
	v->a[36088] = actions(1185);
	v->a[36089] = 30;
	v->a[36090] = anon_sym_PIPE;
	v->a[36091] = anon_sym_RPAREN;
	v->a[36092] = anon_sym_SEMI_SEMI;
	v->a[36093] = anon_sym_AMP_AMP;
	v->a[36094] = anon_sym_PIPE_PIPE;
	v->a[36095] = anon_sym_LT;
	v->a[36096] = anon_sym_GT;
	v->a[36097] = anon_sym_GT_GT;
	v->a[36098] = anon_sym_AMP_GT;
	v->a[36099] = anon_sym_AMP_GT_GT;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
