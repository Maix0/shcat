/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_610.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3050(t_small_parse_table_array *v)
{
	v->a[61000] = sym_comment;
	v->a[61001] = actions(1163);
	v->a[61002] = 2;
	v->a[61003] = sym_file_descriptor;
	v->a[61004] = sym__concat;
	v->a[61005] = actions(1161);
	v->a[61006] = 25;
	v->a[61007] = anon_sym_PIPE;
	v->a[61008] = anon_sym_AMP_AMP;
	v->a[61009] = anon_sym_PIPE_PIPE;
	v->a[61010] = anon_sym_LT;
	v->a[61011] = anon_sym_GT;
	v->a[61012] = anon_sym_GT_GT;
	v->a[61013] = anon_sym_AMP_GT;
	v->a[61014] = anon_sym_AMP_GT_GT;
	v->a[61015] = anon_sym_LT_AMP;
	v->a[61016] = anon_sym_GT_AMP;
	v->a[61017] = anon_sym_GT_PIPE;
	v->a[61018] = anon_sym_LT_AMP_DASH;
	v->a[61019] = anon_sym_GT_AMP_DASH;
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = anon_sym_LT_LT;
	v->a[61021] = anon_sym_LT_LT_DASH;
	v->a[61022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61023] = aux_sym_concatenation_token1;
	v->a[61024] = anon_sym_DOLLAR;
	v->a[61025] = anon_sym_DQUOTE;
	v->a[61026] = sym_raw_string;
	v->a[61027] = sym_number;
	v->a[61028] = anon_sym_DOLLAR_LBRACE;
	v->a[61029] = anon_sym_DOLLAR_LPAREN;
	v->a[61030] = anon_sym_BQUOTE;
	v->a[61031] = sym_word;
	v->a[61032] = 16;
	v->a[61033] = actions(1094);
	v->a[61034] = 1;
	v->a[61035] = sym_comment;
	v->a[61036] = actions(1869);
	v->a[61037] = 1;
	v->a[61038] = anon_sym_LPAREN;
	v->a[61039] = actions(1871);
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = 1;
	v->a[61041] = anon_sym_BANG;
	v->a[61042] = actions(1879);
	v->a[61043] = 1;
	v->a[61044] = anon_sym_TILDE;
	v->a[61045] = actions(1881);
	v->a[61046] = 1;
	v->a[61047] = anon_sym_DOLLAR;
	v->a[61048] = actions(1883);
	v->a[61049] = 1;
	v->a[61050] = anon_sym_DQUOTE;
	v->a[61051] = actions(1887);
	v->a[61052] = 1;
	v->a[61053] = anon_sym_DOLLAR_LBRACE;
	v->a[61054] = actions(1889);
	v->a[61055] = 1;
	v->a[61056] = anon_sym_DOLLAR_LPAREN;
	v->a[61057] = actions(1891);
	v->a[61058] = 1;
	v->a[61059] = anon_sym_BQUOTE;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = actions(1893);
	v->a[61061] = 1;
	v->a[61062] = sym_variable_name;
	v->a[61063] = actions(1895);
	v->a[61064] = 1;
	v->a[61065] = anon_sym_RPAREN_RPAREN;
	v->a[61066] = actions(1875);
	v->a[61067] = 2;
	v->a[61068] = anon_sym_PLUS_PLUS;
	v->a[61069] = anon_sym_DASH_DASH;
	v->a[61070] = actions(1877);
	v->a[61071] = 2;
	v->a[61072] = anon_sym_DASH2;
	v->a[61073] = anon_sym_PLUS2;
	v->a[61074] = actions(1885);
	v->a[61075] = 2;
	v->a[61076] = sym_number;
	v->a[61077] = aux_sym__simple_variable_name_token1;
	v->a[61078] = state(365);
	v->a[61079] = 3;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = sym_string;
	v->a[61081] = sym_simple_expansion;
	v->a[61082] = sym_expansion;
	v->a[61083] = state(512);
	v->a[61084] = 8;
	v->a[61085] = sym__arithmetic_expression;
	v->a[61086] = sym_arithmetic_literal;
	v->a[61087] = sym_arithmetic_binary_expression;
	v->a[61088] = sym_arithmetic_ternary_expression;
	v->a[61089] = sym_arithmetic_unary_expression;
	v->a[61090] = sym_arithmetic_postfix_expression;
	v->a[61091] = sym_arithmetic_parenthesized_expression;
	v->a[61092] = sym_command_substitution;
	v->a[61093] = 16;
	v->a[61094] = actions(1094);
	v->a[61095] = 1;
	v->a[61096] = sym_comment;
	v->a[61097] = actions(1869);
	v->a[61098] = 1;
	v->a[61099] = anon_sym_LPAREN;
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
