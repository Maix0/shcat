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
	v->a[36000] = 6;
	v->a[36001] = actions(3);
	v->a[36002] = 1;
	v->a[36003] = sym_comment;
	v->a[36004] = actions(385);
	v->a[36005] = 1;
	v->a[36006] = sym_file_descriptor;
	v->a[36007] = actions(1306);
	v->a[36008] = 1;
	v->a[36009] = sym_variable_name;
	v->a[36010] = actions(1304);
	v->a[36011] = 2;
	v->a[36012] = aux_sym__simple_variable_name_token1;
	v->a[36013] = aux_sym__multiline_variable_name_token1;
	v->a[36014] = actions(1302);
	v->a[36015] = 9;
	v->a[36016] = anon_sym_BANG;
	v->a[36017] = anon_sym_DASH;
	v->a[36018] = anon_sym_STAR;
	v->a[36019] = anon_sym_QMARK;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_DOLLAR;
	v->a[36021] = anon_sym_POUND;
	v->a[36022] = anon_sym_AT;
	v->a[36023] = anon_sym_0;
	v->a[36024] = anon_sym__;
	v->a[36025] = actions(379);
	v->a[36026] = 20;
	v->a[36027] = anon_sym_PIPE;
	v->a[36028] = anon_sym_SEMI_SEMI;
	v->a[36029] = anon_sym_AMP_AMP;
	v->a[36030] = anon_sym_PIPE_PIPE;
	v->a[36031] = anon_sym_LT;
	v->a[36032] = anon_sym_GT;
	v->a[36033] = anon_sym_GT_GT;
	v->a[36034] = anon_sym_AMP_GT;
	v->a[36035] = anon_sym_AMP_GT_GT;
	v->a[36036] = anon_sym_LT_AMP;
	v->a[36037] = anon_sym_GT_AMP;
	v->a[36038] = anon_sym_GT_PIPE;
	v->a[36039] = anon_sym_LT_AMP_DASH;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = anon_sym_GT_AMP_DASH;
	v->a[36041] = anon_sym_LT_LT;
	v->a[36042] = anon_sym_LT_LT_DASH;
	v->a[36043] = aux_sym_heredoc_redirect_token1;
	v->a[36044] = anon_sym_AMP;
	v->a[36045] = anon_sym_BQUOTE;
	v->a[36046] = anon_sym_SEMI;
	v->a[36047] = 14;
	v->a[36048] = actions(3);
	v->a[36049] = 1;
	v->a[36050] = sym_comment;
	v->a[36051] = actions(542);
	v->a[36052] = 1;
	v->a[36053] = sym_file_descriptor;
	v->a[36054] = actions(969);
	v->a[36055] = 1;
	v->a[36056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36057] = actions(971);
	v->a[36058] = 1;
	v->a[36059] = anon_sym_DOLLAR;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = actions(973);
	v->a[36061] = 1;
	v->a[36062] = anon_sym_DQUOTE;
	v->a[36063] = actions(975);
	v->a[36064] = 1;
	v->a[36065] = anon_sym_DOLLAR_LBRACE;
	v->a[36066] = actions(977);
	v->a[36067] = 1;
	v->a[36068] = anon_sym_DOLLAR_LPAREN;
	v->a[36069] = actions(979);
	v->a[36070] = 1;
	v->a[36071] = anon_sym_BQUOTE;
	v->a[36072] = actions(981);
	v->a[36073] = 1;
	v->a[36074] = sym__bare_dollar;
	v->a[36075] = state(487);
	v->a[36076] = 1;
	v->a[36077] = aux_sym_command_repeat2;
	v->a[36078] = state(949);
	v->a[36079] = 1;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = sym_concatenation;
	v->a[36081] = actions(967);
	v->a[36082] = 3;
	v->a[36083] = sym_raw_string;
	v->a[36084] = sym_number;
	v->a[36085] = sym_word;
	v->a[36086] = state(830);
	v->a[36087] = 5;
	v->a[36088] = sym_arithmetic_expansion;
	v->a[36089] = sym_string;
	v->a[36090] = sym_simple_expansion;
	v->a[36091] = sym_expansion;
	v->a[36092] = sym_command_substitution;
	v->a[36093] = actions(544);
	v->a[36094] = 15;
	v->a[36095] = anon_sym_PIPE;
	v->a[36096] = anon_sym_AMP_AMP;
	v->a[36097] = anon_sym_PIPE_PIPE;
	v->a[36098] = anon_sym_LT;
	v->a[36099] = anon_sym_GT;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
