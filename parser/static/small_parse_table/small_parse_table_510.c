/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_510.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2550(t_small_parse_table_array *v)
{
	v->a[51000] = actions(1209);
	v->a[51001] = 2;
	v->a[51002] = sym_file_descriptor;
	v->a[51003] = sym_variable_name;
	v->a[51004] = actions(1207);
	v->a[51005] = 21;
	v->a[51006] = anon_sym_PIPE;
	v->a[51007] = anon_sym_AMP_AMP;
	v->a[51008] = anon_sym_PIPE_PIPE;
	v->a[51009] = anon_sym_LT;
	v->a[51010] = anon_sym_GT;
	v->a[51011] = anon_sym_GT_GT;
	v->a[51012] = anon_sym_LT_AMP;
	v->a[51013] = anon_sym_GT_AMP;
	v->a[51014] = anon_sym_GT_PIPE;
	v->a[51015] = anon_sym_LT_GT;
	v->a[51016] = anon_sym_LT_LT;
	v->a[51017] = anon_sym_LT_LT_DASH;
	v->a[51018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51019] = anon_sym_DOLLAR;
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = anon_sym_DQUOTE;
	v->a[51021] = sym_raw_string;
	v->a[51022] = sym_number;
	v->a[51023] = anon_sym_DOLLAR_LBRACE;
	v->a[51024] = anon_sym_DOLLAR_LPAREN;
	v->a[51025] = anon_sym_BQUOTE;
	v->a[51026] = sym_word;
	v->a[51027] = 15;
	v->a[51028] = actions(664);
	v->a[51029] = 1;
	v->a[51030] = sym_comment;
	v->a[51031] = actions(1560);
	v->a[51032] = 1;
	v->a[51033] = anon_sym_LPAREN;
	v->a[51034] = actions(1562);
	v->a[51035] = 1;
	v->a[51036] = anon_sym_BANG;
	v->a[51037] = actions(1570);
	v->a[51038] = 1;
	v->a[51039] = anon_sym_TILDE;
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = actions(1572);
	v->a[51041] = 1;
	v->a[51042] = anon_sym_DOLLAR;
	v->a[51043] = actions(1574);
	v->a[51044] = 1;
	v->a[51045] = anon_sym_DQUOTE;
	v->a[51046] = actions(1578);
	v->a[51047] = 1;
	v->a[51048] = anon_sym_DOLLAR_LBRACE;
	v->a[51049] = actions(1580);
	v->a[51050] = 1;
	v->a[51051] = anon_sym_DOLLAR_LPAREN;
	v->a[51052] = actions(1582);
	v->a[51053] = 1;
	v->a[51054] = anon_sym_BQUOTE;
	v->a[51055] = actions(1584);
	v->a[51056] = 1;
	v->a[51057] = sym_variable_name;
	v->a[51058] = actions(1566);
	v->a[51059] = 2;
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = anon_sym_PLUS_PLUS;
	v->a[51061] = anon_sym_DASH_DASH;
	v->a[51062] = actions(1568);
	v->a[51063] = 2;
	v->a[51064] = anon_sym_DASH2;
	v->a[51065] = anon_sym_PLUS2;
	v->a[51066] = actions(1576);
	v->a[51067] = 2;
	v->a[51068] = sym_number;
	v->a[51069] = aux_sym__simple_variable_name_token1;
	v->a[51070] = state(255);
	v->a[51071] = 3;
	v->a[51072] = sym_string;
	v->a[51073] = sym_simple_expansion;
	v->a[51074] = sym_expansion;
	v->a[51075] = state(219);
	v->a[51076] = 8;
	v->a[51077] = sym__arithmetic_expression;
	v->a[51078] = sym_arithmetic_literal;
	v->a[51079] = sym_arithmetic_binary_expression;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = sym_arithmetic_ternary_expression;
	v->a[51081] = sym_arithmetic_unary_expression;
	v->a[51082] = sym_arithmetic_postfix_expression;
	v->a[51083] = sym_arithmetic_parenthesized_expression;
	v->a[51084] = sym_command_substitution;
	v->a[51085] = 5;
	v->a[51086] = actions(3);
	v->a[51087] = 1;
	v->a[51088] = sym_comment;
	v->a[51089] = actions(495);
	v->a[51090] = 2;
	v->a[51091] = sym_file_descriptor;
	v->a[51092] = sym_variable_name;
	v->a[51093] = state(854);
	v->a[51094] = 2;
	v->a[51095] = sym_concatenation;
	v->a[51096] = aux_sym_for_statement_repeat1;
	v->a[51097] = state(1048);
	v->a[51098] = 5;
	v->a[51099] = sym_arithmetic_expansion;
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
