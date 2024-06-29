/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_595.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2975(t_small_parse_table_array *v)
{
	v->a[59500] = 1;
	v->a[59501] = anon_sym_TILDE;
	v->a[59502] = actions(1843);
	v->a[59503] = 1;
	v->a[59504] = anon_sym_DOLLAR;
	v->a[59505] = actions(1845);
	v->a[59506] = 1;
	v->a[59507] = anon_sym_DQUOTE;
	v->a[59508] = actions(1849);
	v->a[59509] = 1;
	v->a[59510] = anon_sym_DOLLAR_LBRACE;
	v->a[59511] = actions(1851);
	v->a[59512] = 1;
	v->a[59513] = anon_sym_DOLLAR_LPAREN;
	v->a[59514] = actions(1853);
	v->a[59515] = 1;
	v->a[59516] = anon_sym_BQUOTE;
	v->a[59517] = actions(1855);
	v->a[59518] = 1;
	v->a[59519] = sym_variable_name;
	small_parse_table_2976(v);
}

void	small_parse_table_2976(t_small_parse_table_array *v)
{
	v->a[59520] = actions(1837);
	v->a[59521] = 2;
	v->a[59522] = anon_sym_PLUS_PLUS;
	v->a[59523] = anon_sym_DASH_DASH;
	v->a[59524] = actions(1839);
	v->a[59525] = 2;
	v->a[59526] = anon_sym_DASH2;
	v->a[59527] = anon_sym_PLUS2;
	v->a[59528] = actions(1847);
	v->a[59529] = 2;
	v->a[59530] = sym_number;
	v->a[59531] = aux_sym__simple_variable_name_token1;
	v->a[59532] = state(370);
	v->a[59533] = 3;
	v->a[59534] = sym_string;
	v->a[59535] = sym_simple_expansion;
	v->a[59536] = sym_expansion;
	v->a[59537] = state(408);
	v->a[59538] = 8;
	v->a[59539] = sym__arithmetic_expression;
	small_parse_table_2977(v);
}

void	small_parse_table_2977(t_small_parse_table_array *v)
{
	v->a[59540] = sym_arithmetic_literal;
	v->a[59541] = sym_arithmetic_binary_expression;
	v->a[59542] = sym_arithmetic_ternary_expression;
	v->a[59543] = sym_arithmetic_unary_expression;
	v->a[59544] = sym_arithmetic_postfix_expression;
	v->a[59545] = sym_arithmetic_parenthesized_expression;
	v->a[59546] = sym_command_substitution;
	v->a[59547] = 15;
	v->a[59548] = actions(1074);
	v->a[59549] = 1;
	v->a[59550] = sym_comment;
	v->a[59551] = actions(1831);
	v->a[59552] = 1;
	v->a[59553] = anon_sym_LPAREN;
	v->a[59554] = actions(1833);
	v->a[59555] = 1;
	v->a[59556] = anon_sym_BANG;
	v->a[59557] = actions(1841);
	v->a[59558] = 1;
	v->a[59559] = anon_sym_TILDE;
	small_parse_table_2978(v);
}

void	small_parse_table_2978(t_small_parse_table_array *v)
{
	v->a[59560] = actions(1843);
	v->a[59561] = 1;
	v->a[59562] = anon_sym_DOLLAR;
	v->a[59563] = actions(1845);
	v->a[59564] = 1;
	v->a[59565] = anon_sym_DQUOTE;
	v->a[59566] = actions(1849);
	v->a[59567] = 1;
	v->a[59568] = anon_sym_DOLLAR_LBRACE;
	v->a[59569] = actions(1851);
	v->a[59570] = 1;
	v->a[59571] = anon_sym_DOLLAR_LPAREN;
	v->a[59572] = actions(1853);
	v->a[59573] = 1;
	v->a[59574] = anon_sym_BQUOTE;
	v->a[59575] = actions(1855);
	v->a[59576] = 1;
	v->a[59577] = sym_variable_name;
	v->a[59578] = actions(1837);
	v->a[59579] = 2;
	small_parse_table_2979(v);
}

void	small_parse_table_2979(t_small_parse_table_array *v)
{
	v->a[59580] = anon_sym_PLUS_PLUS;
	v->a[59581] = anon_sym_DASH_DASH;
	v->a[59582] = actions(1839);
	v->a[59583] = 2;
	v->a[59584] = anon_sym_DASH2;
	v->a[59585] = anon_sym_PLUS2;
	v->a[59586] = actions(1847);
	v->a[59587] = 2;
	v->a[59588] = sym_number;
	v->a[59589] = aux_sym__simple_variable_name_token1;
	v->a[59590] = state(370);
	v->a[59591] = 3;
	v->a[59592] = sym_string;
	v->a[59593] = sym_simple_expansion;
	v->a[59594] = sym_expansion;
	v->a[59595] = state(407);
	v->a[59596] = 8;
	v->a[59597] = sym__arithmetic_expression;
	v->a[59598] = sym_arithmetic_literal;
	v->a[59599] = sym_arithmetic_binary_expression;
	small_parse_table_2980(v);
}

/* EOF small_parse_table_595.c */
