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
	v->a[36000] = anon_sym_DOLLAR;
	v->a[36001] = anon_sym_DQUOTE;
	v->a[36002] = sym_raw_string;
	v->a[36003] = sym_number;
	v->a[36004] = anon_sym_DOLLAR_LBRACE;
	v->a[36005] = anon_sym_DOLLAR_LPAREN;
	v->a[36006] = anon_sym_BQUOTE;
	v->a[36007] = sym_word;
	v->a[36008] = anon_sym_SEMI;
	v->a[36009] = 6;
	v->a[36010] = actions(3);
	v->a[36011] = 1;
	v->a[36012] = sym_comment;
	v->a[36013] = actions(1097);
	v->a[36014] = 1;
	v->a[36015] = sym_file_descriptor;
	v->a[36016] = actions(1337);
	v->a[36017] = 1;
	v->a[36018] = aux_sym_concatenation_token1;
	v->a[36019] = actions(1390);
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = 1;
	v->a[36021] = sym__concat;
	v->a[36022] = state(503);
	v->a[36023] = 1;
	v->a[36024] = aux_sym_concatenation_repeat1;
	v->a[36025] = actions(1099);
	v->a[36026] = 25;
	v->a[36027] = anon_sym_esac;
	v->a[36028] = anon_sym_PIPE;
	v->a[36029] = anon_sym_SEMI_SEMI;
	v->a[36030] = anon_sym_AMP_AMP;
	v->a[36031] = anon_sym_PIPE_PIPE;
	v->a[36032] = anon_sym_LT;
	v->a[36033] = anon_sym_GT;
	v->a[36034] = anon_sym_GT_GT;
	v->a[36035] = anon_sym_LT_AMP;
	v->a[36036] = anon_sym_GT_AMP;
	v->a[36037] = anon_sym_GT_PIPE;
	v->a[36038] = anon_sym_LT_GT;
	v->a[36039] = anon_sym_LT_LT;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = anon_sym_LT_LT_DASH;
	v->a[36041] = aux_sym_heredoc_redirect_token1;
	v->a[36042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36043] = anon_sym_DOLLAR;
	v->a[36044] = anon_sym_DQUOTE;
	v->a[36045] = sym_raw_string;
	v->a[36046] = sym_number;
	v->a[36047] = anon_sym_DOLLAR_LBRACE;
	v->a[36048] = anon_sym_DOLLAR_LPAREN;
	v->a[36049] = anon_sym_BQUOTE;
	v->a[36050] = sym_word;
	v->a[36051] = anon_sym_SEMI;
	v->a[36052] = 3;
	v->a[36053] = actions(3);
	v->a[36054] = 1;
	v->a[36055] = sym_comment;
	v->a[36056] = actions(1110);
	v->a[36057] = 4;
	v->a[36058] = sym_file_descriptor;
	v->a[36059] = sym__concat;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = sym__bare_dollar;
	v->a[36061] = ts_builtin_sym_end;
	v->a[36062] = actions(1105);
	v->a[36063] = 25;
	v->a[36064] = anon_sym_PIPE;
	v->a[36065] = anon_sym_SEMI_SEMI;
	v->a[36066] = anon_sym_AMP_AMP;
	v->a[36067] = anon_sym_PIPE_PIPE;
	v->a[36068] = anon_sym_LT;
	v->a[36069] = anon_sym_GT;
	v->a[36070] = anon_sym_GT_GT;
	v->a[36071] = anon_sym_LT_AMP;
	v->a[36072] = anon_sym_GT_AMP;
	v->a[36073] = anon_sym_GT_PIPE;
	v->a[36074] = anon_sym_LT_GT;
	v->a[36075] = anon_sym_LT_LT;
	v->a[36076] = anon_sym_LT_LT_DASH;
	v->a[36077] = aux_sym_heredoc_redirect_token1;
	v->a[36078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36079] = aux_sym_concatenation_token1;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = anon_sym_DOLLAR;
	v->a[36081] = anon_sym_DQUOTE;
	v->a[36082] = sym_raw_string;
	v->a[36083] = sym_number;
	v->a[36084] = anon_sym_DOLLAR_LBRACE;
	v->a[36085] = anon_sym_DOLLAR_LPAREN;
	v->a[36086] = anon_sym_BQUOTE;
	v->a[36087] = sym_word;
	v->a[36088] = anon_sym_SEMI;
	v->a[36089] = 3;
	v->a[36090] = actions(3);
	v->a[36091] = 1;
	v->a[36092] = sym_comment;
	v->a[36093] = actions(686);
	v->a[36094] = 3;
	v->a[36095] = sym_file_descriptor;
	v->a[36096] = sym__concat;
	v->a[36097] = sym__bare_dollar;
	v->a[36098] = actions(684);
	v->a[36099] = 26;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
