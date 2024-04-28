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
	v->a[36000] = anon_sym_LT;
	v->a[36001] = anon_sym_GT;
	v->a[36002] = anon_sym_LT_LT;
	v->a[36003] = anon_sym_AMP_GT;
	v->a[36004] = anon_sym_LT_AMP;
	v->a[36005] = anon_sym_GT_AMP;
	v->a[36006] = anon_sym_DOLLAR;
	v->a[36007] = aux_sym_number_token1;
	v->a[36008] = aux_sym_number_token2;
	v->a[36009] = anon_sym_DOLLAR_LPAREN;
	v->a[36010] = sym_word;
	v->a[36011] = actions(2500);
	v->a[36012] = 26;
	v->a[36013] = sym_file_descriptor;
	v->a[36014] = sym_variable_name;
	v->a[36015] = sym_test_operator;
	v->a[36016] = sym__brace_start;
	v->a[36017] = anon_sym_LPAREN_LPAREN;
	v->a[36018] = anon_sym_PIPE_PIPE;
	v->a[36019] = anon_sym_AMP_AMP;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_GT_GT;
	v->a[36021] = anon_sym_PIPE_AMP;
	v->a[36022] = anon_sym_AMP_GT_GT;
	v->a[36023] = anon_sym_GT_PIPE;
	v->a[36024] = anon_sym_LT_AMP_DASH;
	v->a[36025] = anon_sym_GT_AMP_DASH;
	v->a[36026] = anon_sym_LT_LT_DASH;
	v->a[36027] = anon_sym_LT_LT_LT;
	v->a[36028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36029] = anon_sym_DOLLAR_LBRACK;
	v->a[36030] = sym__special_character;
	v->a[36031] = anon_sym_DQUOTE;
	v->a[36032] = sym_raw_string;
	v->a[36033] = sym_ansi_c_string;
	v->a[36034] = anon_sym_DOLLAR_LBRACE;
	v->a[36035] = anon_sym_BQUOTE;
	v->a[36036] = anon_sym_DOLLAR_BQUOTE;
	v->a[36037] = anon_sym_LT_LPAREN;
	v->a[36038] = anon_sym_GT_LPAREN;
	v->a[36039] = 23;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = actions(71);
	v->a[36041] = 1;
	v->a[36042] = sym_comment;
	v->a[36043] = actions(4816);
	v->a[36044] = 1;
	v->a[36045] = sym_word;
	v->a[36046] = actions(4820);
	v->a[36047] = 1;
	v->a[36048] = anon_sym_DOLLAR_LBRACK;
	v->a[36049] = actions(4822);
	v->a[36050] = 1;
	v->a[36051] = anon_sym_DOLLAR;
	v->a[36052] = actions(4824);
	v->a[36053] = 1;
	v->a[36054] = sym__special_character;
	v->a[36055] = actions(4826);
	v->a[36056] = 1;
	v->a[36057] = anon_sym_DQUOTE;
	v->a[36058] = actions(4830);
	v->a[36059] = 1;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = aux_sym_number_token1;
	v->a[36061] = actions(4832);
	v->a[36062] = 1;
	v->a[36063] = aux_sym_number_token2;
	v->a[36064] = actions(4834);
	v->a[36065] = 1;
	v->a[36066] = anon_sym_DOLLAR_LBRACE;
	v->a[36067] = actions(4836);
	v->a[36068] = 1;
	v->a[36069] = anon_sym_DOLLAR_LPAREN;
	v->a[36070] = actions(4838);
	v->a[36071] = 1;
	v->a[36072] = anon_sym_BQUOTE;
	v->a[36073] = actions(4840);
	v->a[36074] = 1;
	v->a[36075] = anon_sym_DOLLAR_BQUOTE;
	v->a[36076] = actions(4844);
	v->a[36077] = 1;
	v->a[36078] = aux_sym__simple_variable_name_token1;
	v->a[36079] = actions(4846);
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = 1;
	v->a[36081] = sym_test_operator;
	v->a[36082] = actions(4848);
	v->a[36083] = 1;
	v->a[36084] = sym__brace_start;
	v->a[36085] = state(2939);
	v->a[36086] = 1;
	v->a[36087] = aux_sym__literal_repeat1;
	v->a[36088] = actions(4818);
	v->a[36089] = 2;
	v->a[36090] = anon_sym_LPAREN_LPAREN;
	v->a[36091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36092] = actions(4828);
	v->a[36093] = 2;
	v->a[36094] = sym_raw_string;
	v->a[36095] = sym_ansi_c_string;
	v->a[36096] = actions(4842);
	v->a[36097] = 2;
	v->a[36098] = anon_sym_LT_LPAREN;
	v->a[36099] = anon_sym_GT_LPAREN;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
