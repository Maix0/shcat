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
	v->a[36001] = sym_comment;
	v->a[36002] = actions(1440);
	v->a[36003] = 1;
	v->a[36004] = anon_sym_LPAREN;
	v->a[36005] = actions(1444);
	v->a[36006] = 1;
	v->a[36007] = anon_sym_DOLLAR;
	v->a[36008] = actions(1446);
	v->a[36009] = 1;
	v->a[36010] = anon_sym_DQUOTE;
	v->a[36011] = actions(1450);
	v->a[36012] = 1;
	v->a[36013] = anon_sym_DOLLAR_LBRACE;
	v->a[36014] = actions(1452);
	v->a[36015] = 1;
	v->a[36016] = sym_variable_name;
	v->a[36017] = actions(1442);
	v->a[36018] = 2;
	v->a[36019] = anon_sym_DASH2;
	small_parse_table_1801(v);
}

void	small_parse_table_1801(t_small_parse_table_array *v)
{
	v->a[36020] = anon_sym_PLUS2;
	v->a[36021] = actions(1448);
	v->a[36022] = 2;
	v->a[36023] = sym_number;
	v->a[36024] = aux_sym__simple_variable_name_token1;
	v->a[36025] = state(1340);
	v->a[36026] = 3;
	v->a[36027] = sym_string;
	v->a[36028] = sym_simple_expansion;
	v->a[36029] = sym_expansion;
	v->a[36030] = state(1330);
	v->a[36031] = 7;
	v->a[36032] = sym__arithmetic_expression;
	v->a[36033] = sym_arithmetic_literal;
	v->a[36034] = sym_arithmetic_binary_expression;
	v->a[36035] = sym_arithmetic_ternary_expression;
	v->a[36036] = sym_arithmetic_unary_expression;
	v->a[36037] = sym_arithmetic_postfix_expression;
	v->a[36038] = sym_arithmetic_parenthesized_expression;
	v->a[36039] = 3;
	small_parse_table_1802(v);
}

void	small_parse_table_1802(t_small_parse_table_array *v)
{
	v->a[36040] = actions(3);
	v->a[36041] = 1;
	v->a[36042] = sym_comment;
	v->a[36043] = actions(1108);
	v->a[36044] = 1;
	v->a[36045] = sym__concat;
	v->a[36046] = actions(1106);
	v->a[36047] = 18;
	v->a[36048] = anon_sym_SEMI_SEMI;
	v->a[36049] = anon_sym_AMP_AMP;
	v->a[36050] = anon_sym_PIPE_PIPE;
	v->a[36051] = anon_sym_LT;
	v->a[36052] = anon_sym_GT;
	v->a[36053] = anon_sym_GT_GT;
	v->a[36054] = aux_sym_heredoc_redirect_token1;
	v->a[36055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36056] = aux_sym_concatenation_token1;
	v->a[36057] = anon_sym_DOLLAR;
	v->a[36058] = anon_sym_DQUOTE;
	v->a[36059] = sym_raw_string;
	small_parse_table_1803(v);
}

void	small_parse_table_1803(t_small_parse_table_array *v)
{
	v->a[36060] = sym_number;
	v->a[36061] = anon_sym_DOLLAR_LBRACE;
	v->a[36062] = anon_sym_DOLLAR_LPAREN;
	v->a[36063] = anon_sym_BQUOTE;
	v->a[36064] = sym_word;
	v->a[36065] = anon_sym_SEMI;
	v->a[36066] = 5;
	v->a[36067] = actions(3);
	v->a[36068] = 1;
	v->a[36069] = sym_comment;
	v->a[36070] = actions(1183);
	v->a[36071] = 1;
	v->a[36072] = sym_variable_name;
	v->a[36073] = actions(1181);
	v->a[36074] = 2;
	v->a[36075] = aux_sym__simple_variable_name_token1;
	v->a[36076] = aux_sym__multiline_variable_name_token1;
	v->a[36077] = actions(343);
	v->a[36078] = 8;
	v->a[36079] = anon_sym_PIPE;
	small_parse_table_1804(v);
}

void	small_parse_table_1804(t_small_parse_table_array *v)
{
	v->a[36080] = anon_sym_AMP_AMP;
	v->a[36081] = anon_sym_PIPE_PIPE;
	v->a[36082] = anon_sym_LT;
	v->a[36083] = anon_sym_GT;
	v->a[36084] = anon_sym_GT_GT;
	v->a[36085] = anon_sym_LT_LT;
	v->a[36086] = aux_sym_heredoc_redirect_token1;
	v->a[36087] = actions(1179);
	v->a[36088] = 8;
	v->a[36089] = anon_sym_BANG;
	v->a[36090] = anon_sym_DASH;
	v->a[36091] = anon_sym_STAR;
	v->a[36092] = anon_sym_QMARK;
	v->a[36093] = anon_sym_DOLLAR;
	v->a[36094] = anon_sym_POUND;
	v->a[36095] = anon_sym_AT;
	v->a[36096] = anon_sym_0;
	v->a[36097] = 3;
	v->a[36098] = actions(3);
	v->a[36099] = 1;
	small_parse_table_1805(v);
}

/* EOF small_parse_table_360.c */
