/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_435.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2175(t_small_parse_table_array *v)
{
	v->a[43500] = sym_command_substitution;
	v->a[43501] = 12;
	v->a[43502] = actions(407);
	v->a[43503] = 1;
	v->a[43504] = sym_comment;
	v->a[43505] = actions(1540);
	v->a[43506] = 1;
	v->a[43507] = anon_sym_LPAREN;
	v->a[43508] = actions(1542);
	v->a[43509] = 1;
	v->a[43510] = anon_sym_BANG;
	v->a[43511] = actions(1548);
	v->a[43512] = 1;
	v->a[43513] = anon_sym_DOLLAR;
	v->a[43514] = actions(1550);
	v->a[43515] = 1;
	v->a[43516] = anon_sym_DQUOTE;
	v->a[43517] = actions(1554);
	v->a[43518] = 1;
	v->a[43519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2176(v);
}

void	small_parse_table_2176(t_small_parse_table_array *v)
{
	v->a[43520] = actions(1556);
	v->a[43521] = 1;
	v->a[43522] = sym_variable_name;
	v->a[43523] = actions(1544);
	v->a[43524] = 2;
	v->a[43525] = anon_sym_PLUS_PLUS;
	v->a[43526] = anon_sym_DASH_DASH;
	v->a[43527] = actions(1546);
	v->a[43528] = 2;
	v->a[43529] = anon_sym_DASH2;
	v->a[43530] = anon_sym_PLUS2;
	v->a[43531] = actions(1552);
	v->a[43532] = 2;
	v->a[43533] = sym_number;
	v->a[43534] = aux_sym__simple_variable_name_token1;
	v->a[43535] = state(157);
	v->a[43536] = 3;
	v->a[43537] = sym_string;
	v->a[43538] = sym_simple_expansion;
	v->a[43539] = sym_expansion;
	small_parse_table_2177(v);
}

void	small_parse_table_2177(t_small_parse_table_array *v)
{
	v->a[43540] = state(248);
	v->a[43541] = 7;
	v->a[43542] = sym__arithmetic_expression;
	v->a[43543] = sym_arithmetic_literal;
	v->a[43544] = sym_arithmetic_binary_expression;
	v->a[43545] = sym_arithmetic_ternary_expression;
	v->a[43546] = sym_arithmetic_unary_expression;
	v->a[43547] = sym_arithmetic_postfix_expression;
	v->a[43548] = sym_arithmetic_parenthesized_expression;
	v->a[43549] = 12;
	v->a[43550] = actions(407);
	v->a[43551] = 1;
	v->a[43552] = sym_comment;
	v->a[43553] = actions(1540);
	v->a[43554] = 1;
	v->a[43555] = anon_sym_LPAREN;
	v->a[43556] = actions(1542);
	v->a[43557] = 1;
	v->a[43558] = anon_sym_BANG;
	v->a[43559] = actions(1548);
	small_parse_table_2178(v);
}

void	small_parse_table_2178(t_small_parse_table_array *v)
{
	v->a[43560] = 1;
	v->a[43561] = anon_sym_DOLLAR;
	v->a[43562] = actions(1550);
	v->a[43563] = 1;
	v->a[43564] = anon_sym_DQUOTE;
	v->a[43565] = actions(1554);
	v->a[43566] = 1;
	v->a[43567] = anon_sym_DOLLAR_LBRACE;
	v->a[43568] = actions(1556);
	v->a[43569] = 1;
	v->a[43570] = sym_variable_name;
	v->a[43571] = actions(1544);
	v->a[43572] = 2;
	v->a[43573] = anon_sym_PLUS_PLUS;
	v->a[43574] = anon_sym_DASH_DASH;
	v->a[43575] = actions(1546);
	v->a[43576] = 2;
	v->a[43577] = anon_sym_DASH2;
	v->a[43578] = anon_sym_PLUS2;
	v->a[43579] = actions(1552);
	small_parse_table_2179(v);
}

void	small_parse_table_2179(t_small_parse_table_array *v)
{
	v->a[43580] = 2;
	v->a[43581] = sym_number;
	v->a[43582] = aux_sym__simple_variable_name_token1;
	v->a[43583] = state(157);
	v->a[43584] = 3;
	v->a[43585] = sym_string;
	v->a[43586] = sym_simple_expansion;
	v->a[43587] = sym_expansion;
	v->a[43588] = state(155);
	v->a[43589] = 7;
	v->a[43590] = sym__arithmetic_expression;
	v->a[43591] = sym_arithmetic_literal;
	v->a[43592] = sym_arithmetic_binary_expression;
	v->a[43593] = sym_arithmetic_ternary_expression;
	v->a[43594] = sym_arithmetic_unary_expression;
	v->a[43595] = sym_arithmetic_postfix_expression;
	v->a[43596] = sym_arithmetic_parenthesized_expression;
	v->a[43597] = 12;
	v->a[43598] = actions(407);
	v->a[43599] = 1;
	small_parse_table_2180(v);
}

/* EOF small_parse_table_435.c */
