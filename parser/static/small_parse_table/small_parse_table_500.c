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
	v->a[50000] = anon_sym_DOLLAR_LPAREN;
	v->a[50001] = anon_sym_BQUOTE;
	v->a[50002] = sym_word;
	v->a[50003] = 15;
	v->a[50004] = actions(501);
	v->a[50005] = 1;
	v->a[50006] = sym_comment;
	v->a[50007] = actions(1692);
	v->a[50008] = 1;
	v->a[50009] = anon_sym_LPAREN;
	v->a[50010] = actions(1694);
	v->a[50011] = 1;
	v->a[50012] = anon_sym_BANG;
	v->a[50013] = actions(1700);
	v->a[50014] = 1;
	v->a[50015] = anon_sym_TILDE;
	v->a[50016] = actions(1702);
	v->a[50017] = 1;
	v->a[50018] = anon_sym_DOLLAR;
	v->a[50019] = actions(1704);
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = 1;
	v->a[50021] = anon_sym_DQUOTE;
	v->a[50022] = actions(1708);
	v->a[50023] = 1;
	v->a[50024] = anon_sym_DOLLAR_LBRACE;
	v->a[50025] = actions(1710);
	v->a[50026] = 1;
	v->a[50027] = anon_sym_DOLLAR_LPAREN;
	v->a[50028] = actions(1712);
	v->a[50029] = 1;
	v->a[50030] = anon_sym_BQUOTE;
	v->a[50031] = actions(1714);
	v->a[50032] = 1;
	v->a[50033] = sym_variable_name;
	v->a[50034] = actions(1696);
	v->a[50035] = 2;
	v->a[50036] = anon_sym_PLUS_PLUS;
	v->a[50037] = anon_sym_DASH_DASH;
	v->a[50038] = actions(1698);
	v->a[50039] = 2;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = anon_sym_DASH2;
	v->a[50041] = anon_sym_PLUS2;
	v->a[50042] = actions(1706);
	v->a[50043] = 2;
	v->a[50044] = sym_number;
	v->a[50045] = aux_sym__simple_variable_name_token1;
	v->a[50046] = state(238);
	v->a[50047] = 3;
	v->a[50048] = sym_string;
	v->a[50049] = sym_simple_expansion;
	v->a[50050] = sym_expansion;
	v->a[50051] = state(306);
	v->a[50052] = 8;
	v->a[50053] = sym__arithmetic_expression;
	v->a[50054] = sym_arithmetic_literal;
	v->a[50055] = sym_arithmetic_binary_expression;
	v->a[50056] = sym_arithmetic_ternary_expression;
	v->a[50057] = sym_arithmetic_unary_expression;
	v->a[50058] = sym_arithmetic_postfix_expression;
	v->a[50059] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = sym_command_substitution;
	v->a[50061] = 15;
	v->a[50062] = actions(501);
	v->a[50063] = 1;
	v->a[50064] = sym_comment;
	v->a[50065] = actions(1692);
	v->a[50066] = 1;
	v->a[50067] = anon_sym_LPAREN;
	v->a[50068] = actions(1694);
	v->a[50069] = 1;
	v->a[50070] = anon_sym_BANG;
	v->a[50071] = actions(1700);
	v->a[50072] = 1;
	v->a[50073] = anon_sym_TILDE;
	v->a[50074] = actions(1702);
	v->a[50075] = 1;
	v->a[50076] = anon_sym_DOLLAR;
	v->a[50077] = actions(1704);
	v->a[50078] = 1;
	v->a[50079] = anon_sym_DQUOTE;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = actions(1708);
	v->a[50081] = 1;
	v->a[50082] = anon_sym_DOLLAR_LBRACE;
	v->a[50083] = actions(1710);
	v->a[50084] = 1;
	v->a[50085] = anon_sym_DOLLAR_LPAREN;
	v->a[50086] = actions(1712);
	v->a[50087] = 1;
	v->a[50088] = anon_sym_BQUOTE;
	v->a[50089] = actions(1714);
	v->a[50090] = 1;
	v->a[50091] = sym_variable_name;
	v->a[50092] = actions(1696);
	v->a[50093] = 2;
	v->a[50094] = anon_sym_PLUS_PLUS;
	v->a[50095] = anon_sym_DASH_DASH;
	v->a[50096] = actions(1698);
	v->a[50097] = 2;
	v->a[50098] = anon_sym_DASH2;
	v->a[50099] = anon_sym_PLUS2;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
