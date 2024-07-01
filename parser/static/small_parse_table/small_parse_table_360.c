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
	v->a[36000] = anon_sym_PIPE_PIPE;
	v->a[36001] = anon_sym_LT;
	v->a[36002] = anon_sym_GT;
	v->a[36003] = anon_sym_GT_GT;
	v->a[36004] = anon_sym_LT_AMP;
	v->a[36005] = anon_sym_GT_AMP;
	v->a[36006] = anon_sym_GT_PIPE;
	v->a[36007] = anon_sym_LT_GT;
	v->a[36008] = anon_sym_LT_LT;
	v->a[36009] = anon_sym_LT_LT_DASH;
	v->a[36010] = aux_sym_heredoc_redirect_token1;
	v->a[36011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36012] = anon_sym_AMP;
	v->a[36013] = aux_sym_concatenation_token1;
	v->a[36014] = anon_sym_DOLLAR;
	v->a[36015] = anon_sym_DQUOTE;
	v->a[36016] = sym_raw_string;
	v->a[36017] = sym_number;
	v->a[36018] = anon_sym_DOLLAR_LBRACE;
	v->a[36019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_BQUOTE;
	v->a[36021] = sym_word;
	v->a[36022] = anon_sym_SEMI;
	v->a[36023] = 3;
	v->a[36024] = actions(3);
	v->a[36025] = 1;
	v->a[36026] = sym_comment;
	v->a[36027] = actions(753);
	v->a[36028] = 3;
	v->a[36029] = sym_file_descriptor;
	v->a[36030] = sym__concat;
	v->a[36031] = sym__bare_dollar;
	v->a[36032] = actions(751);
	v->a[36033] = 27;
	v->a[36034] = anon_sym_PIPE;
	v->a[36035] = anon_sym_RPAREN;
	v->a[36036] = anon_sym_SEMI_SEMI;
	v->a[36037] = anon_sym_AMP_AMP;
	v->a[36038] = anon_sym_PIPE_PIPE;
	v->a[36039] = anon_sym_LT;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = anon_sym_GT;
	v->a[36041] = anon_sym_GT_GT;
	v->a[36042] = anon_sym_LT_AMP;
	v->a[36043] = anon_sym_GT_AMP;
	v->a[36044] = anon_sym_GT_PIPE;
	v->a[36045] = anon_sym_LT_GT;
	v->a[36046] = anon_sym_LT_LT;
	v->a[36047] = anon_sym_LT_LT_DASH;
	v->a[36048] = aux_sym_heredoc_redirect_token1;
	v->a[36049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36050] = anon_sym_AMP;
	v->a[36051] = aux_sym_concatenation_token1;
	v->a[36052] = anon_sym_DOLLAR;
	v->a[36053] = anon_sym_DQUOTE;
	v->a[36054] = sym_raw_string;
	v->a[36055] = sym_number;
	v->a[36056] = anon_sym_DOLLAR_LBRACE;
	v->a[36057] = anon_sym_DOLLAR_LPAREN;
	v->a[36058] = anon_sym_BQUOTE;
	v->a[36059] = sym_word;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = anon_sym_SEMI;
	v->a[36061] = 3;
	v->a[36062] = actions(3);
	v->a[36063] = 1;
	v->a[36064] = sym_comment;
	v->a[36065] = actions(908);
	v->a[36066] = 4;
	v->a[36067] = sym_file_descriptor;
	v->a[36068] = sym__concat;
	v->a[36069] = sym_variable_name;
	v->a[36070] = ts_builtin_sym_end;
	v->a[36071] = actions(906);
	v->a[36072] = 26;
	v->a[36073] = anon_sym_PIPE;
	v->a[36074] = anon_sym_SEMI_SEMI;
	v->a[36075] = anon_sym_AMP_AMP;
	v->a[36076] = anon_sym_PIPE_PIPE;
	v->a[36077] = anon_sym_LT;
	v->a[36078] = anon_sym_GT;
	v->a[36079] = anon_sym_GT_GT;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = anon_sym_LT_AMP;
	v->a[36081] = anon_sym_GT_AMP;
	v->a[36082] = anon_sym_GT_PIPE;
	v->a[36083] = anon_sym_LT_GT;
	v->a[36084] = anon_sym_LT_LT;
	v->a[36085] = anon_sym_LT_LT_DASH;
	v->a[36086] = aux_sym_heredoc_redirect_token1;
	v->a[36087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36088] = anon_sym_AMP;
	v->a[36089] = aux_sym_concatenation_token1;
	v->a[36090] = anon_sym_DOLLAR;
	v->a[36091] = anon_sym_DQUOTE;
	v->a[36092] = sym_raw_string;
	v->a[36093] = sym_number;
	v->a[36094] = anon_sym_DOLLAR_LBRACE;
	v->a[36095] = anon_sym_DOLLAR_LPAREN;
	v->a[36096] = anon_sym_BQUOTE;
	v->a[36097] = sym_word;
	v->a[36098] = anon_sym_SEMI;
	v->a[36099] = 6;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
