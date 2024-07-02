/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = sym_variable_name;
	v->a[45001] = actions(1617);
	v->a[45002] = 1;
	v->a[45003] = anon_sym_RPAREN_RPAREN;
	v->a[45004] = actions(1580);
	v->a[45005] = 2;
	v->a[45006] = anon_sym_PLUS_PLUS;
	v->a[45007] = anon_sym_DASH_DASH;
	v->a[45008] = actions(1582);
	v->a[45009] = 2;
	v->a[45010] = anon_sym_DASH2;
	v->a[45011] = anon_sym_PLUS2;
	v->a[45012] = actions(1590);
	v->a[45013] = 2;
	v->a[45014] = sym_number;
	v->a[45015] = aux_sym__simple_variable_name_token1;
	v->a[45016] = state(238);
	v->a[45017] = 3;
	v->a[45018] = sym_string;
	v->a[45019] = sym_simple_expansion;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = sym_expansion;
	v->a[45021] = state(289);
	v->a[45022] = 8;
	v->a[45023] = sym__arithmetic_expression;
	v->a[45024] = sym_arithmetic_literal;
	v->a[45025] = sym_arithmetic_binary_expression;
	v->a[45026] = sym_arithmetic_ternary_expression;
	v->a[45027] = sym_arithmetic_unary_expression;
	v->a[45028] = sym_arithmetic_postfix_expression;
	v->a[45029] = sym_arithmetic_parenthesized_expression;
	v->a[45030] = sym_command_substitution;
	v->a[45031] = 6;
	v->a[45032] = actions(3);
	v->a[45033] = 1;
	v->a[45034] = sym_comment;
	v->a[45035] = actions(1619);
	v->a[45036] = 1;
	v->a[45037] = aux_sym_concatenation_token1;
	v->a[45038] = actions(1622);
	v->a[45039] = 1;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = sym__concat;
	v->a[45041] = state(725);
	v->a[45042] = 1;
	v->a[45043] = aux_sym_concatenation_repeat1;
	v->a[45044] = actions(1092);
	v->a[45045] = 2;
	v->a[45046] = sym_file_descriptor;
	v->a[45047] = sym__bare_dollar;
	v->a[45048] = actions(1094);
	v->a[45049] = 22;
	v->a[45050] = anon_sym_LPAREN;
	v->a[45051] = anon_sym_PIPE;
	v->a[45052] = anon_sym_AMP_AMP;
	v->a[45053] = anon_sym_PIPE_PIPE;
	v->a[45054] = anon_sym_LT;
	v->a[45055] = anon_sym_GT;
	v->a[45056] = anon_sym_GT_GT;
	v->a[45057] = anon_sym_LT_AMP;
	v->a[45058] = anon_sym_GT_AMP;
	v->a[45059] = anon_sym_GT_PIPE;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = anon_sym_LT_GT;
	v->a[45061] = anon_sym_LT_LT;
	v->a[45062] = anon_sym_LT_LT_DASH;
	v->a[45063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45064] = anon_sym_DOLLAR;
	v->a[45065] = anon_sym_DQUOTE;
	v->a[45066] = sym_raw_string;
	v->a[45067] = sym_number;
	v->a[45068] = anon_sym_DOLLAR_LBRACE;
	v->a[45069] = anon_sym_DOLLAR_LPAREN;
	v->a[45070] = anon_sym_BQUOTE;
	v->a[45071] = sym_word;
	v->a[45072] = 5;
	v->a[45073] = actions(3);
	v->a[45074] = 1;
	v->a[45075] = sym_comment;
	v->a[45076] = actions(702);
	v->a[45077] = 1;
	v->a[45078] = sym_variable_name;
	v->a[45079] = actions(1457);
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = 1;
	v->a[45081] = sym_file_descriptor;
	v->a[45082] = actions(690);
	v->a[45083] = 8;
	v->a[45084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45085] = anon_sym_DOLLAR;
	v->a[45086] = anon_sym_DQUOTE;
	v->a[45087] = sym_raw_string;
	v->a[45088] = sym_number;
	v->a[45089] = anon_sym_DOLLAR_LBRACE;
	v->a[45090] = anon_sym_DOLLAR_LPAREN;
	v->a[45091] = sym_word;
	v->a[45092] = actions(1459);
	v->a[45093] = 17;
	v->a[45094] = anon_sym_PIPE;
	v->a[45095] = anon_sym_SEMI_SEMI;
	v->a[45096] = anon_sym_AMP_AMP;
	v->a[45097] = anon_sym_PIPE_PIPE;
	v->a[45098] = anon_sym_LT;
	v->a[45099] = anon_sym_GT;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
