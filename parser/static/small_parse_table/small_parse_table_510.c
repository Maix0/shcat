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
	v->a[51000] = state(238);
	v->a[51001] = 3;
	v->a[51002] = sym_string;
	v->a[51003] = sym_simple_expansion;
	v->a[51004] = sym_expansion;
	v->a[51005] = state(247);
	v->a[51006] = 8;
	v->a[51007] = sym__arithmetic_expression;
	v->a[51008] = sym_arithmetic_literal;
	v->a[51009] = sym_arithmetic_binary_expression;
	v->a[51010] = sym_arithmetic_ternary_expression;
	v->a[51011] = sym_arithmetic_unary_expression;
	v->a[51012] = sym_arithmetic_postfix_expression;
	v->a[51013] = sym_arithmetic_parenthesized_expression;
	v->a[51014] = sym_command_substitution;
	v->a[51015] = 3;
	v->a[51016] = actions(3);
	v->a[51017] = 1;
	v->a[51018] = sym_comment;
	v->a[51019] = actions(796);
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = 3;
	v->a[51021] = sym_file_descriptor;
	v->a[51022] = sym__concat;
	v->a[51023] = sym__bare_dollar;
	v->a[51024] = actions(794);
	v->a[51025] = 23;
	v->a[51026] = anon_sym_LPAREN;
	v->a[51027] = anon_sym_PIPE;
	v->a[51028] = anon_sym_AMP_AMP;
	v->a[51029] = anon_sym_PIPE_PIPE;
	v->a[51030] = anon_sym_LT;
	v->a[51031] = anon_sym_GT;
	v->a[51032] = anon_sym_GT_GT;
	v->a[51033] = anon_sym_LT_AMP;
	v->a[51034] = anon_sym_GT_AMP;
	v->a[51035] = anon_sym_GT_PIPE;
	v->a[51036] = anon_sym_LT_GT;
	v->a[51037] = anon_sym_LT_LT;
	v->a[51038] = anon_sym_LT_LT_DASH;
	v->a[51039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = aux_sym_concatenation_token1;
	v->a[51041] = anon_sym_DOLLAR;
	v->a[51042] = anon_sym_DQUOTE;
	v->a[51043] = sym_raw_string;
	v->a[51044] = sym_number;
	v->a[51045] = anon_sym_DOLLAR_LBRACE;
	v->a[51046] = anon_sym_DOLLAR_LPAREN;
	v->a[51047] = anon_sym_BQUOTE;
	v->a[51048] = sym_word;
	v->a[51049] = 4;
	v->a[51050] = actions(3);
	v->a[51051] = 1;
	v->a[51052] = sym_comment;
	v->a[51053] = actions(1424);
	v->a[51054] = 1;
	v->a[51055] = anon_sym_BQUOTE;
	v->a[51056] = actions(1426);
	v->a[51057] = 2;
	v->a[51058] = sym_file_descriptor;
	v->a[51059] = sym_variable_name;
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = actions(1422);
	v->a[51061] = 23;
	v->a[51062] = anon_sym_for;
	v->a[51063] = anon_sym_while;
	v->a[51064] = anon_sym_until;
	v->a[51065] = anon_sym_if;
	v->a[51066] = anon_sym_case;
	v->a[51067] = anon_sym_LPAREN;
	v->a[51068] = anon_sym_LBRACE;
	v->a[51069] = anon_sym_BANG;
	v->a[51070] = anon_sym_LT;
	v->a[51071] = anon_sym_GT;
	v->a[51072] = anon_sym_GT_GT;
	v->a[51073] = anon_sym_LT_AMP;
	v->a[51074] = anon_sym_GT_AMP;
	v->a[51075] = anon_sym_GT_PIPE;
	v->a[51076] = anon_sym_LT_GT;
	v->a[51077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51078] = anon_sym_DOLLAR;
	v->a[51079] = anon_sym_DQUOTE;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = sym_raw_string;
	v->a[51081] = sym_number;
	v->a[51082] = anon_sym_DOLLAR_LBRACE;
	v->a[51083] = anon_sym_DOLLAR_LPAREN;
	v->a[51084] = sym_word;
	v->a[51085] = 3;
	v->a[51086] = actions(3);
	v->a[51087] = 1;
	v->a[51088] = sym_comment;
	v->a[51089] = actions(796);
	v->a[51090] = 3;
	v->a[51091] = sym_file_descriptor;
	v->a[51092] = sym__concat;
	v->a[51093] = sym_variable_name;
	v->a[51094] = actions(794);
	v->a[51095] = 22;
	v->a[51096] = anon_sym_PIPE;
	v->a[51097] = anon_sym_AMP_AMP;
	v->a[51098] = anon_sym_PIPE_PIPE;
	v->a[51099] = anon_sym_LT;
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
