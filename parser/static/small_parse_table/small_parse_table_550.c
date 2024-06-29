/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_550.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2750(t_small_parse_table_array *v)
{
	v->a[55000] = 2;
	v->a[55001] = sym_number;
	v->a[55002] = aux_sym__simple_variable_name_token1;
	v->a[55003] = state(370);
	v->a[55004] = 3;
	v->a[55005] = sym_string;
	v->a[55006] = sym_simple_expansion;
	v->a[55007] = sym_expansion;
	v->a[55008] = state(461);
	v->a[55009] = 8;
	v->a[55010] = sym__arithmetic_expression;
	v->a[55011] = sym_arithmetic_literal;
	v->a[55012] = sym_arithmetic_binary_expression;
	v->a[55013] = sym_arithmetic_ternary_expression;
	v->a[55014] = sym_arithmetic_unary_expression;
	v->a[55015] = sym_arithmetic_postfix_expression;
	v->a[55016] = sym_arithmetic_parenthesized_expression;
	v->a[55017] = sym_command_substitution;
	v->a[55018] = 16;
	v->a[55019] = actions(1074);
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = 1;
	v->a[55021] = sym_comment;
	v->a[55022] = actions(1831);
	v->a[55023] = 1;
	v->a[55024] = anon_sym_LPAREN;
	v->a[55025] = actions(1833);
	v->a[55026] = 1;
	v->a[55027] = anon_sym_BANG;
	v->a[55028] = actions(1841);
	v->a[55029] = 1;
	v->a[55030] = anon_sym_TILDE;
	v->a[55031] = actions(1843);
	v->a[55032] = 1;
	v->a[55033] = anon_sym_DOLLAR;
	v->a[55034] = actions(1845);
	v->a[55035] = 1;
	v->a[55036] = anon_sym_DQUOTE;
	v->a[55037] = actions(1849);
	v->a[55038] = 1;
	v->a[55039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = actions(1851);
	v->a[55041] = 1;
	v->a[55042] = anon_sym_DOLLAR_LPAREN;
	v->a[55043] = actions(1853);
	v->a[55044] = 1;
	v->a[55045] = anon_sym_BQUOTE;
	v->a[55046] = actions(1855);
	v->a[55047] = 1;
	v->a[55048] = sym_variable_name;
	v->a[55049] = actions(1859);
	v->a[55050] = 1;
	v->a[55051] = anon_sym_RPAREN_RPAREN;
	v->a[55052] = actions(1837);
	v->a[55053] = 2;
	v->a[55054] = anon_sym_PLUS_PLUS;
	v->a[55055] = anon_sym_DASH_DASH;
	v->a[55056] = actions(1839);
	v->a[55057] = 2;
	v->a[55058] = anon_sym_DASH2;
	v->a[55059] = anon_sym_PLUS2;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = actions(1847);
	v->a[55061] = 2;
	v->a[55062] = sym_number;
	v->a[55063] = aux_sym__simple_variable_name_token1;
	v->a[55064] = state(370);
	v->a[55065] = 3;
	v->a[55066] = sym_string;
	v->a[55067] = sym_simple_expansion;
	v->a[55068] = sym_expansion;
	v->a[55069] = state(468);
	v->a[55070] = 8;
	v->a[55071] = sym__arithmetic_expression;
	v->a[55072] = sym_arithmetic_literal;
	v->a[55073] = sym_arithmetic_binary_expression;
	v->a[55074] = sym_arithmetic_ternary_expression;
	v->a[55075] = sym_arithmetic_unary_expression;
	v->a[55076] = sym_arithmetic_postfix_expression;
	v->a[55077] = sym_arithmetic_parenthesized_expression;
	v->a[55078] = sym_command_substitution;
	v->a[55079] = 16;
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = actions(1074);
	v->a[55081] = 1;
	v->a[55082] = sym_comment;
	v->a[55083] = actions(1831);
	v->a[55084] = 1;
	v->a[55085] = anon_sym_LPAREN;
	v->a[55086] = actions(1833);
	v->a[55087] = 1;
	v->a[55088] = anon_sym_BANG;
	v->a[55089] = actions(1841);
	v->a[55090] = 1;
	v->a[55091] = anon_sym_TILDE;
	v->a[55092] = actions(1843);
	v->a[55093] = 1;
	v->a[55094] = anon_sym_DOLLAR;
	v->a[55095] = actions(1845);
	v->a[55096] = 1;
	v->a[55097] = anon_sym_DQUOTE;
	v->a[55098] = actions(1849);
	v->a[55099] = 1;
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
