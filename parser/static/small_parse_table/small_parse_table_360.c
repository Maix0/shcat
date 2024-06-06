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
	v->a[36000] = sym__brace_start;
	v->a[36001] = aux_sym_heredoc_redirect_token1;
	v->a[36002] = actions(2772);
	v->a[36003] = 35;
	v->a[36004] = anon_sym_esac;
	v->a[36005] = anon_sym_PIPE;
	v->a[36006] = anon_sym_SEMI_SEMI;
	v->a[36007] = anon_sym_SEMI_AMP;
	v->a[36008] = anon_sym_SEMI_SEMI_AMP;
	v->a[36009] = anon_sym_PIPE_AMP;
	v->a[36010] = anon_sym_AMP_AMP;
	v->a[36011] = anon_sym_PIPE_PIPE;
	v->a[36012] = anon_sym_LT;
	v->a[36013] = anon_sym_GT;
	v->a[36014] = anon_sym_GT_GT;
	v->a[36015] = anon_sym_AMP_GT;
	v->a[36016] = anon_sym_AMP_GT_GT;
	v->a[36017] = anon_sym_LT_AMP;
	v->a[36018] = anon_sym_GT_AMP;
	v->a[36019] = anon_sym_GT_PIPE;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_LT_AMP_DASH;
	v->a[36021] = anon_sym_GT_AMP_DASH;
	v->a[36022] = anon_sym_LT_LT;
	v->a[36023] = anon_sym_LT_LT_DASH;
	v->a[36024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36025] = anon_sym_AMP;
	v->a[36026] = aux_sym_concatenation_token1;
	v->a[36027] = anon_sym_DOLLAR;
	v->a[36028] = sym__special_character;
	v->a[36029] = anon_sym_DQUOTE;
	v->a[36030] = sym_raw_string;
	v->a[36031] = aux_sym_number_token1;
	v->a[36032] = aux_sym_number_token2;
	v->a[36033] = anon_sym_DOLLAR_LBRACE;
	v->a[36034] = anon_sym_DOLLAR_LPAREN;
	v->a[36035] = anon_sym_BQUOTE;
	v->a[36036] = anon_sym_DOLLAR_BQUOTE;
	v->a[36037] = sym_word;
	v->a[36038] = anon_sym_SEMI;
	v->a[36039] = 3;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = actions(3);
	v->a[36041] = 1;
	v->a[36042] = sym_comment;
	v->a[36043] = actions(3066);
	v->a[36044] = 6;
	v->a[36045] = sym_file_descriptor;
	v->a[36046] = sym__concat;
	v->a[36047] = sym_test_operator;
	v->a[36048] = sym__bare_dollar;
	v->a[36049] = sym__brace_start;
	v->a[36050] = aux_sym_heredoc_redirect_token1;
	v->a[36051] = actions(3064);
	v->a[36052] = 34;
	v->a[36053] = anon_sym_LPAREN;
	v->a[36054] = anon_sym_PIPE;
	v->a[36055] = anon_sym_RPAREN;
	v->a[36056] = anon_sym_SEMI_SEMI;
	v->a[36057] = anon_sym_PIPE_AMP;
	v->a[36058] = anon_sym_AMP_AMP;
	v->a[36059] = anon_sym_PIPE_PIPE;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = anon_sym_LT;
	v->a[36061] = anon_sym_GT;
	v->a[36062] = anon_sym_GT_GT;
	v->a[36063] = anon_sym_AMP_GT;
	v->a[36064] = anon_sym_AMP_GT_GT;
	v->a[36065] = anon_sym_LT_AMP;
	v->a[36066] = anon_sym_GT_AMP;
	v->a[36067] = anon_sym_GT_PIPE;
	v->a[36068] = anon_sym_LT_AMP_DASH;
	v->a[36069] = anon_sym_GT_AMP_DASH;
	v->a[36070] = anon_sym_LT_LT;
	v->a[36071] = anon_sym_LT_LT_DASH;
	v->a[36072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36073] = anon_sym_AMP;
	v->a[36074] = aux_sym_concatenation_token1;
	v->a[36075] = anon_sym_DOLLAR;
	v->a[36076] = sym__special_character;
	v->a[36077] = anon_sym_DQUOTE;
	v->a[36078] = sym_raw_string;
	v->a[36079] = aux_sym_number_token1;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = aux_sym_number_token2;
	v->a[36081] = anon_sym_DOLLAR_LBRACE;
	v->a[36082] = anon_sym_DOLLAR_LPAREN;
	v->a[36083] = anon_sym_BQUOTE;
	v->a[36084] = anon_sym_DOLLAR_BQUOTE;
	v->a[36085] = sym_word;
	v->a[36086] = anon_sym_SEMI;
	v->a[36087] = 3;
	v->a[36088] = actions(3);
	v->a[36089] = 1;
	v->a[36090] = sym_comment;
	v->a[36091] = actions(2888);
	v->a[36092] = 6;
	v->a[36093] = sym_file_descriptor;
	v->a[36094] = sym__concat;
	v->a[36095] = sym_test_operator;
	v->a[36096] = sym__bare_dollar;
	v->a[36097] = sym__brace_start;
	v->a[36098] = aux_sym_heredoc_redirect_token1;
	v->a[36099] = actions(2886);
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
