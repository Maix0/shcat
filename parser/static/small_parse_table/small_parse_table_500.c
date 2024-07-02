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
	v->a[50000] = 1;
	v->a[50001] = sym_variable_name;
	v->a[50002] = actions(1580);
	v->a[50003] = 2;
	v->a[50004] = anon_sym_PLUS_PLUS;
	v->a[50005] = anon_sym_DASH_DASH;
	v->a[50006] = actions(1582);
	v->a[50007] = 2;
	v->a[50008] = anon_sym_DASH2;
	v->a[50009] = anon_sym_PLUS2;
	v->a[50010] = actions(1590);
	v->a[50011] = 2;
	v->a[50012] = sym_number;
	v->a[50013] = aux_sym__simple_variable_name_token1;
	v->a[50014] = state(238);
	v->a[50015] = 3;
	v->a[50016] = sym_string;
	v->a[50017] = sym_simple_expansion;
	v->a[50018] = sym_expansion;
	v->a[50019] = state(257);
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = 8;
	v->a[50021] = sym__arithmetic_expression;
	v->a[50022] = sym_arithmetic_literal;
	v->a[50023] = sym_arithmetic_binary_expression;
	v->a[50024] = sym_arithmetic_ternary_expression;
	v->a[50025] = sym_arithmetic_unary_expression;
	v->a[50026] = sym_arithmetic_postfix_expression;
	v->a[50027] = sym_arithmetic_parenthesized_expression;
	v->a[50028] = sym_command_substitution;
	v->a[50029] = 6;
	v->a[50030] = actions(3);
	v->a[50031] = 1;
	v->a[50032] = sym_comment;
	v->a[50033] = actions(1760);
	v->a[50034] = 1;
	v->a[50035] = aux_sym_concatenation_token1;
	v->a[50036] = actions(1762);
	v->a[50037] = 1;
	v->a[50038] = sym__concat;
	v->a[50039] = state(846);
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = 1;
	v->a[50041] = aux_sym_concatenation_repeat1;
	v->a[50042] = actions(1229);
	v->a[50043] = 2;
	v->a[50044] = sym_file_descriptor;
	v->a[50045] = sym__bare_dollar;
	v->a[50046] = actions(1227);
	v->a[50047] = 21;
	v->a[50048] = anon_sym_PIPE;
	v->a[50049] = anon_sym_AMP_AMP;
	v->a[50050] = anon_sym_PIPE_PIPE;
	v->a[50051] = anon_sym_LT;
	v->a[50052] = anon_sym_GT;
	v->a[50053] = anon_sym_GT_GT;
	v->a[50054] = anon_sym_LT_AMP;
	v->a[50055] = anon_sym_GT_AMP;
	v->a[50056] = anon_sym_GT_PIPE;
	v->a[50057] = anon_sym_LT_GT;
	v->a[50058] = anon_sym_LT_LT;
	v->a[50059] = anon_sym_LT_LT_DASH;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50061] = anon_sym_DOLLAR;
	v->a[50062] = anon_sym_DQUOTE;
	v->a[50063] = sym_raw_string;
	v->a[50064] = sym_number;
	v->a[50065] = anon_sym_DOLLAR_LBRACE;
	v->a[50066] = anon_sym_DOLLAR_LPAREN;
	v->a[50067] = anon_sym_BQUOTE;
	v->a[50068] = sym_word;
	v->a[50069] = 3;
	v->a[50070] = actions(3);
	v->a[50071] = 1;
	v->a[50072] = sym_comment;
	v->a[50073] = actions(1178);
	v->a[50074] = 3;
	v->a[50075] = sym_file_descriptor;
	v->a[50076] = sym__concat;
	v->a[50077] = sym__bare_dollar;
	v->a[50078] = actions(1180);
	v->a[50079] = 23;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_LPAREN;
	v->a[50081] = anon_sym_PIPE;
	v->a[50082] = anon_sym_AMP_AMP;
	v->a[50083] = anon_sym_PIPE_PIPE;
	v->a[50084] = anon_sym_LT;
	v->a[50085] = anon_sym_GT;
	v->a[50086] = anon_sym_GT_GT;
	v->a[50087] = anon_sym_LT_AMP;
	v->a[50088] = anon_sym_GT_AMP;
	v->a[50089] = anon_sym_GT_PIPE;
	v->a[50090] = anon_sym_LT_GT;
	v->a[50091] = anon_sym_LT_LT;
	v->a[50092] = anon_sym_LT_LT_DASH;
	v->a[50093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50094] = aux_sym_concatenation_token1;
	v->a[50095] = anon_sym_DOLLAR;
	v->a[50096] = anon_sym_DQUOTE;
	v->a[50097] = sym_raw_string;
	v->a[50098] = sym_number;
	v->a[50099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
