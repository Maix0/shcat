/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_500.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2500(t_small_parse_table_array *v)
{
	v->a[50000] = actions(1744);
	v->a[50001] = 2;
	v->a[50002] = anon_sym_PLUS_PLUS;
	v->a[50003] = anon_sym_DASH_DASH;
	v->a[50004] = actions(1746);
	v->a[50005] = 2;
	v->a[50006] = anon_sym_DASH2;
	v->a[50007] = anon_sym_PLUS2;
	v->a[50008] = actions(1754);
	v->a[50009] = 2;
	v->a[50010] = sym_number;
	v->a[50011] = aux_sym__simple_variable_name_token1;
	v->a[50012] = state(260);
	v->a[50013] = 3;
	v->a[50014] = sym_string;
	v->a[50015] = sym_simple_expansion;
	v->a[50016] = sym_expansion;
	v->a[50017] = state(307);
	v->a[50018] = 8;
	v->a[50019] = sym__arithmetic_expression;
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = sym_arithmetic_literal;
	v->a[50021] = sym_arithmetic_binary_expression;
	v->a[50022] = sym_arithmetic_ternary_expression;
	v->a[50023] = sym_arithmetic_unary_expression;
	v->a[50024] = sym_arithmetic_postfix_expression;
	v->a[50025] = sym_arithmetic_parenthesized_expression;
	v->a[50026] = sym_command_substitution;
	v->a[50027] = 15;
	v->a[50028] = actions(664);
	v->a[50029] = 1;
	v->a[50030] = sym_comment;
	v->a[50031] = actions(1740);
	v->a[50032] = 1;
	v->a[50033] = anon_sym_LPAREN;
	v->a[50034] = actions(1742);
	v->a[50035] = 1;
	v->a[50036] = anon_sym_BANG;
	v->a[50037] = actions(1748);
	v->a[50038] = 1;
	v->a[50039] = anon_sym_TILDE;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = actions(1750);
	v->a[50041] = 1;
	v->a[50042] = anon_sym_DOLLAR;
	v->a[50043] = actions(1752);
	v->a[50044] = 1;
	v->a[50045] = anon_sym_DQUOTE;
	v->a[50046] = actions(1756);
	v->a[50047] = 1;
	v->a[50048] = anon_sym_DOLLAR_LBRACE;
	v->a[50049] = actions(1758);
	v->a[50050] = 1;
	v->a[50051] = anon_sym_DOLLAR_LPAREN;
	v->a[50052] = actions(1760);
	v->a[50053] = 1;
	v->a[50054] = anon_sym_BQUOTE;
	v->a[50055] = actions(1762);
	v->a[50056] = 1;
	v->a[50057] = sym_variable_name;
	v->a[50058] = actions(1744);
	v->a[50059] = 2;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_PLUS_PLUS;
	v->a[50061] = anon_sym_DASH_DASH;
	v->a[50062] = actions(1746);
	v->a[50063] = 2;
	v->a[50064] = anon_sym_DASH2;
	v->a[50065] = anon_sym_PLUS2;
	v->a[50066] = actions(1754);
	v->a[50067] = 2;
	v->a[50068] = sym_number;
	v->a[50069] = aux_sym__simple_variable_name_token1;
	v->a[50070] = state(260);
	v->a[50071] = 3;
	v->a[50072] = sym_string;
	v->a[50073] = sym_simple_expansion;
	v->a[50074] = sym_expansion;
	v->a[50075] = state(308);
	v->a[50076] = 8;
	v->a[50077] = sym__arithmetic_expression;
	v->a[50078] = sym_arithmetic_literal;
	v->a[50079] = sym_arithmetic_binary_expression;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = sym_arithmetic_ternary_expression;
	v->a[50081] = sym_arithmetic_unary_expression;
	v->a[50082] = sym_arithmetic_postfix_expression;
	v->a[50083] = sym_arithmetic_parenthesized_expression;
	v->a[50084] = sym_command_substitution;
	v->a[50085] = 15;
	v->a[50086] = actions(664);
	v->a[50087] = 1;
	v->a[50088] = sym_comment;
	v->a[50089] = actions(1740);
	v->a[50090] = 1;
	v->a[50091] = anon_sym_LPAREN;
	v->a[50092] = actions(1742);
	v->a[50093] = 1;
	v->a[50094] = anon_sym_BANG;
	v->a[50095] = actions(1748);
	v->a[50096] = 1;
	v->a[50097] = anon_sym_TILDE;
	v->a[50098] = actions(1750);
	v->a[50099] = 1;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
