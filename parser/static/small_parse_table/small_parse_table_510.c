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
	v->a[51000] = 16;
	v->a[51001] = actions(870);
	v->a[51002] = 1;
	v->a[51003] = sym_comment;
	v->a[51004] = actions(1744);
	v->a[51005] = 1;
	v->a[51006] = anon_sym_LPAREN;
	v->a[51007] = actions(1746);
	v->a[51008] = 1;
	v->a[51009] = anon_sym_BANG;
	v->a[51010] = actions(1754);
	v->a[51011] = 1;
	v->a[51012] = anon_sym_TILDE;
	v->a[51013] = actions(1756);
	v->a[51014] = 1;
	v->a[51015] = anon_sym_DOLLAR;
	v->a[51016] = actions(1758);
	v->a[51017] = 1;
	v->a[51018] = anon_sym_DQUOTE;
	v->a[51019] = actions(1762);
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = 1;
	v->a[51021] = anon_sym_DOLLAR_LBRACE;
	v->a[51022] = actions(1764);
	v->a[51023] = 1;
	v->a[51024] = anon_sym_DOLLAR_LPAREN;
	v->a[51025] = actions(1766);
	v->a[51026] = 1;
	v->a[51027] = anon_sym_BQUOTE;
	v->a[51028] = actions(1768);
	v->a[51029] = 1;
	v->a[51030] = sym_variable_name;
	v->a[51031] = actions(1812);
	v->a[51032] = 1;
	v->a[51033] = anon_sym_RPAREN_RPAREN;
	v->a[51034] = actions(1750);
	v->a[51035] = 2;
	v->a[51036] = anon_sym_PLUS_PLUS;
	v->a[51037] = anon_sym_DASH_DASH;
	v->a[51038] = actions(1752);
	v->a[51039] = 2;
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = anon_sym_DASH2;
	v->a[51041] = anon_sym_PLUS2;
	v->a[51042] = actions(1760);
	v->a[51043] = 2;
	v->a[51044] = sym_number;
	v->a[51045] = aux_sym__simple_variable_name_token1;
	v->a[51046] = state(271);
	v->a[51047] = 3;
	v->a[51048] = sym_string;
	v->a[51049] = sym_simple_expansion;
	v->a[51050] = sym_expansion;
	v->a[51051] = state(390);
	v->a[51052] = 8;
	v->a[51053] = sym__arithmetic_expression;
	v->a[51054] = sym_arithmetic_literal;
	v->a[51055] = sym_arithmetic_binary_expression;
	v->a[51056] = sym_arithmetic_ternary_expression;
	v->a[51057] = sym_arithmetic_unary_expression;
	v->a[51058] = sym_arithmetic_postfix_expression;
	v->a[51059] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = sym_command_substitution;
	v->a[51061] = 4;
	v->a[51062] = actions(3);
	v->a[51063] = 1;
	v->a[51064] = sym_comment;
	v->a[51065] = actions(1575);
	v->a[51066] = 1;
	v->a[51067] = anon_sym_BQUOTE;
	v->a[51068] = actions(1577);
	v->a[51069] = 2;
	v->a[51070] = sym_file_descriptor;
	v->a[51071] = sym_variable_name;
	v->a[51072] = actions(1573);
	v->a[51073] = 24;
	v->a[51074] = anon_sym_for;
	v->a[51075] = anon_sym_while;
	v->a[51076] = anon_sym_until;
	v->a[51077] = anon_sym_if;
	v->a[51078] = anon_sym_case;
	v->a[51079] = anon_sym_LPAREN;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = anon_sym_LBRACE;
	v->a[51081] = anon_sym_BANG;
	v->a[51082] = anon_sym_LT;
	v->a[51083] = anon_sym_GT;
	v->a[51084] = anon_sym_GT_GT;
	v->a[51085] = anon_sym_LT_AMP;
	v->a[51086] = anon_sym_GT_AMP;
	v->a[51087] = anon_sym_GT_PIPE;
	v->a[51088] = anon_sym_LT_AMP_DASH;
	v->a[51089] = anon_sym_GT_AMP_DASH;
	v->a[51090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51091] = anon_sym_DOLLAR;
	v->a[51092] = anon_sym_DQUOTE;
	v->a[51093] = sym_raw_string;
	v->a[51094] = sym_number;
	v->a[51095] = anon_sym_DOLLAR_LBRACE;
	v->a[51096] = anon_sym_DOLLAR_LPAREN;
	v->a[51097] = sym_word;
	v->a[51098] = 4;
	v->a[51099] = actions(3);
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
