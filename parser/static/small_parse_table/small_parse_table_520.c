/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_520.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2600(t_small_parse_table_array *v)
{
	v->a[52000] = anon_sym_BQUOTE;
	v->a[52001] = actions(1768);
	v->a[52002] = 1;
	v->a[52003] = sym_variable_name;
	v->a[52004] = actions(1832);
	v->a[52005] = 1;
	v->a[52006] = anon_sym_RPAREN_RPAREN;
	v->a[52007] = actions(1750);
	v->a[52008] = 2;
	v->a[52009] = anon_sym_PLUS_PLUS;
	v->a[52010] = anon_sym_DASH_DASH;
	v->a[52011] = actions(1752);
	v->a[52012] = 2;
	v->a[52013] = anon_sym_DASH2;
	v->a[52014] = anon_sym_PLUS2;
	v->a[52015] = actions(1760);
	v->a[52016] = 2;
	v->a[52017] = sym_number;
	v->a[52018] = aux_sym__simple_variable_name_token1;
	v->a[52019] = state(271);
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = 3;
	v->a[52021] = sym_string;
	v->a[52022] = sym_simple_expansion;
	v->a[52023] = sym_expansion;
	v->a[52024] = state(377);
	v->a[52025] = 8;
	v->a[52026] = sym__arithmetic_expression;
	v->a[52027] = sym_arithmetic_literal;
	v->a[52028] = sym_arithmetic_binary_expression;
	v->a[52029] = sym_arithmetic_ternary_expression;
	v->a[52030] = sym_arithmetic_unary_expression;
	v->a[52031] = sym_arithmetic_postfix_expression;
	v->a[52032] = sym_arithmetic_parenthesized_expression;
	v->a[52033] = sym_command_substitution;
	v->a[52034] = 16;
	v->a[52035] = actions(870);
	v->a[52036] = 1;
	v->a[52037] = sym_comment;
	v->a[52038] = actions(1744);
	v->a[52039] = 1;
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = anon_sym_LPAREN;
	v->a[52041] = actions(1746);
	v->a[52042] = 1;
	v->a[52043] = anon_sym_BANG;
	v->a[52044] = actions(1754);
	v->a[52045] = 1;
	v->a[52046] = anon_sym_TILDE;
	v->a[52047] = actions(1756);
	v->a[52048] = 1;
	v->a[52049] = anon_sym_DOLLAR;
	v->a[52050] = actions(1758);
	v->a[52051] = 1;
	v->a[52052] = anon_sym_DQUOTE;
	v->a[52053] = actions(1762);
	v->a[52054] = 1;
	v->a[52055] = anon_sym_DOLLAR_LBRACE;
	v->a[52056] = actions(1764);
	v->a[52057] = 1;
	v->a[52058] = anon_sym_DOLLAR_LPAREN;
	v->a[52059] = actions(1766);
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = 1;
	v->a[52061] = anon_sym_BQUOTE;
	v->a[52062] = actions(1768);
	v->a[52063] = 1;
	v->a[52064] = sym_variable_name;
	v->a[52065] = actions(1834);
	v->a[52066] = 1;
	v->a[52067] = anon_sym_RPAREN_RPAREN;
	v->a[52068] = actions(1750);
	v->a[52069] = 2;
	v->a[52070] = anon_sym_PLUS_PLUS;
	v->a[52071] = anon_sym_DASH_DASH;
	v->a[52072] = actions(1752);
	v->a[52073] = 2;
	v->a[52074] = anon_sym_DASH2;
	v->a[52075] = anon_sym_PLUS2;
	v->a[52076] = actions(1760);
	v->a[52077] = 2;
	v->a[52078] = sym_number;
	v->a[52079] = aux_sym__simple_variable_name_token1;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = state(271);
	v->a[52081] = 3;
	v->a[52082] = sym_string;
	v->a[52083] = sym_simple_expansion;
	v->a[52084] = sym_expansion;
	v->a[52085] = state(321);
	v->a[52086] = 8;
	v->a[52087] = sym__arithmetic_expression;
	v->a[52088] = sym_arithmetic_literal;
	v->a[52089] = sym_arithmetic_binary_expression;
	v->a[52090] = sym_arithmetic_ternary_expression;
	v->a[52091] = sym_arithmetic_unary_expression;
	v->a[52092] = sym_arithmetic_postfix_expression;
	v->a[52093] = sym_arithmetic_parenthesized_expression;
	v->a[52094] = sym_command_substitution;
	v->a[52095] = 3;
	v->a[52096] = actions(3);
	v->a[52097] = 1;
	v->a[52098] = sym_comment;
	v->a[52099] = actions(1194);
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
