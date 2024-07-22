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
	v->a[45000] = anon_sym_PLUS_PLUS;
	v->a[45001] = anon_sym_DASH_DASH;
	v->a[45002] = actions(1477);
	v->a[45003] = 2;
	v->a[45004] = anon_sym_DASH2;
	v->a[45005] = anon_sym_PLUS2;
	v->a[45006] = actions(1485);
	v->a[45007] = 2;
	v->a[45008] = sym_number;
	v->a[45009] = aux_sym__simple_variable_name_token1;
	v->a[45010] = state(194);
	v->a[45011] = 3;
	v->a[45012] = sym_string;
	v->a[45013] = sym_simple_expansion;
	v->a[45014] = sym_expansion;
	v->a[45015] = state(278);
	v->a[45016] = 8;
	v->a[45017] = sym__arithmetic_expression;
	v->a[45018] = sym_arithmetic_literal;
	v->a[45019] = sym_arithmetic_binary_expression;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = sym_arithmetic_ternary_expression;
	v->a[45021] = sym_arithmetic_unary_expression;
	v->a[45022] = sym_arithmetic_postfix_expression;
	v->a[45023] = sym_arithmetic_parenthesized_expression;
	v->a[45024] = sym_command_substitution;
	v->a[45025] = 7;
	v->a[45026] = actions(3);
	v->a[45027] = 1;
	v->a[45028] = sym_comment;
	v->a[45029] = actions(1457);
	v->a[45030] = 1;
	v->a[45031] = sym_file_descriptor;
	v->a[45032] = actions(1460);
	v->a[45033] = 1;
	v->a[45034] = sym_variable_name;
	v->a[45035] = actions(1629);
	v->a[45036] = 1;
	v->a[45037] = anon_sym_RPAREN;
	v->a[45038] = actions(1454);
	v->a[45039] = 7;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = anon_sym_LT;
	v->a[45041] = anon_sym_GT;
	v->a[45042] = anon_sym_GT_GT;
	v->a[45043] = anon_sym_LT_AMP;
	v->a[45044] = anon_sym_GT_AMP;
	v->a[45045] = anon_sym_GT_PIPE;
	v->a[45046] = anon_sym_LT_GT;
	v->a[45047] = actions(1449);
	v->a[45048] = 8;
	v->a[45049] = anon_sym_PIPE;
	v->a[45050] = anon_sym_SEMI_SEMI;
	v->a[45051] = anon_sym_AMP_AMP;
	v->a[45052] = anon_sym_PIPE_PIPE;
	v->a[45053] = anon_sym_LT_LT;
	v->a[45054] = anon_sym_LT_LT_DASH;
	v->a[45055] = aux_sym_heredoc_redirect_token1;
	v->a[45056] = anon_sym_SEMI;
	v->a[45057] = actions(1447);
	v->a[45058] = 9;
	v->a[45059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = anon_sym_DOLLAR;
	v->a[45061] = anon_sym_DQUOTE;
	v->a[45062] = sym_raw_string;
	v->a[45063] = sym_number;
	v->a[45064] = anon_sym_DOLLAR_LBRACE;
	v->a[45065] = anon_sym_DOLLAR_LPAREN;
	v->a[45066] = anon_sym_BQUOTE;
	v->a[45067] = sym_word;
	v->a[45068] = 3;
	v->a[45069] = actions(3);
	v->a[45070] = 1;
	v->a[45071] = sym_comment;
	v->a[45072] = actions(1239);
	v->a[45073] = 2;
	v->a[45074] = sym_file_descriptor;
	v->a[45075] = sym__bare_dollar;
	v->a[45076] = actions(1235);
	v->a[45077] = 25;
	v->a[45078] = anon_sym_esac;
	v->a[45079] = anon_sym_PIPE;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = anon_sym_SEMI_SEMI;
	v->a[45081] = anon_sym_AMP_AMP;
	v->a[45082] = anon_sym_PIPE_PIPE;
	v->a[45083] = anon_sym_LT;
	v->a[45084] = anon_sym_GT;
	v->a[45085] = anon_sym_GT_GT;
	v->a[45086] = anon_sym_LT_AMP;
	v->a[45087] = anon_sym_GT_AMP;
	v->a[45088] = anon_sym_GT_PIPE;
	v->a[45089] = anon_sym_LT_GT;
	v->a[45090] = anon_sym_LT_LT;
	v->a[45091] = anon_sym_LT_LT_DASH;
	v->a[45092] = aux_sym_heredoc_redirect_token1;
	v->a[45093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45094] = anon_sym_DOLLAR;
	v->a[45095] = anon_sym_DQUOTE;
	v->a[45096] = sym_raw_string;
	v->a[45097] = sym_number;
	v->a[45098] = anon_sym_DOLLAR_LBRACE;
	v->a[45099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
