/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_540.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2700(t_small_parse_table_array *v)
{
	v->a[54000] = anon_sym_BANG;
	v->a[54001] = actions(1754);
	v->a[54002] = 1;
	v->a[54003] = anon_sym_TILDE;
	v->a[54004] = actions(1756);
	v->a[54005] = 1;
	v->a[54006] = anon_sym_DOLLAR;
	v->a[54007] = actions(1758);
	v->a[54008] = 1;
	v->a[54009] = anon_sym_DQUOTE;
	v->a[54010] = actions(1762);
	v->a[54011] = 1;
	v->a[54012] = anon_sym_DOLLAR_LBRACE;
	v->a[54013] = actions(1764);
	v->a[54014] = 1;
	v->a[54015] = anon_sym_DOLLAR_LPAREN;
	v->a[54016] = actions(1766);
	v->a[54017] = 1;
	v->a[54018] = anon_sym_BQUOTE;
	v->a[54019] = actions(1768);
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = 1;
	v->a[54021] = sym_variable_name;
	v->a[54022] = actions(1896);
	v->a[54023] = 1;
	v->a[54024] = anon_sym_RPAREN_RPAREN;
	v->a[54025] = actions(1750);
	v->a[54026] = 2;
	v->a[54027] = anon_sym_PLUS_PLUS;
	v->a[54028] = anon_sym_DASH_DASH;
	v->a[54029] = actions(1752);
	v->a[54030] = 2;
	v->a[54031] = anon_sym_DASH2;
	v->a[54032] = anon_sym_PLUS2;
	v->a[54033] = actions(1760);
	v->a[54034] = 2;
	v->a[54035] = sym_number;
	v->a[54036] = aux_sym__simple_variable_name_token1;
	v->a[54037] = state(271);
	v->a[54038] = 3;
	v->a[54039] = sym_string;
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = sym_simple_expansion;
	v->a[54041] = sym_expansion;
	v->a[54042] = state(333);
	v->a[54043] = 8;
	v->a[54044] = sym__arithmetic_expression;
	v->a[54045] = sym_arithmetic_literal;
	v->a[54046] = sym_arithmetic_binary_expression;
	v->a[54047] = sym_arithmetic_ternary_expression;
	v->a[54048] = sym_arithmetic_unary_expression;
	v->a[54049] = sym_arithmetic_postfix_expression;
	v->a[54050] = sym_arithmetic_parenthesized_expression;
	v->a[54051] = sym_command_substitution;
	v->a[54052] = 6;
	v->a[54053] = actions(3);
	v->a[54054] = 1;
	v->a[54055] = sym_comment;
	v->a[54056] = actions(1303);
	v->a[54057] = 1;
	v->a[54058] = sym_file_descriptor;
	v->a[54059] = actions(1383);
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = 1;
	v->a[54061] = aux_sym_concatenation_token1;
	v->a[54062] = actions(1397);
	v->a[54063] = 1;
	v->a[54064] = sym__concat;
	v->a[54065] = state(859);
	v->a[54066] = 1;
	v->a[54067] = aux_sym_concatenation_repeat1;
	v->a[54068] = actions(1301);
	v->a[54069] = 23;
	v->a[54070] = anon_sym_PIPE;
	v->a[54071] = anon_sym_AMP_AMP;
	v->a[54072] = anon_sym_PIPE_PIPE;
	v->a[54073] = anon_sym_LT;
	v->a[54074] = anon_sym_GT;
	v->a[54075] = anon_sym_GT_GT;
	v->a[54076] = anon_sym_LT_AMP;
	v->a[54077] = anon_sym_GT_AMP;
	v->a[54078] = anon_sym_GT_PIPE;
	v->a[54079] = anon_sym_LT_AMP_DASH;
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = anon_sym_GT_AMP_DASH;
	v->a[54081] = anon_sym_LT_LT;
	v->a[54082] = anon_sym_LT_LT_DASH;
	v->a[54083] = aux_sym_heredoc_redirect_token1;
	v->a[54084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54085] = anon_sym_DOLLAR;
	v->a[54086] = anon_sym_DQUOTE;
	v->a[54087] = sym_raw_string;
	v->a[54088] = sym_number;
	v->a[54089] = anon_sym_DOLLAR_LBRACE;
	v->a[54090] = anon_sym_DOLLAR_LPAREN;
	v->a[54091] = anon_sym_BQUOTE;
	v->a[54092] = sym_word;
	v->a[54093] = 16;
	v->a[54094] = actions(870);
	v->a[54095] = 1;
	v->a[54096] = sym_comment;
	v->a[54097] = actions(1744);
	v->a[54098] = 1;
	v->a[54099] = anon_sym_LPAREN;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
