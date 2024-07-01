/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_445.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2225(t_small_parse_table_array *v)
{
	v->a[44500] = actions(1576);
	v->a[44501] = 2;
	v->a[44502] = sym_number;
	v->a[44503] = aux_sym__simple_variable_name_token1;
	v->a[44504] = state(255);
	v->a[44505] = 3;
	v->a[44506] = sym_string;
	v->a[44507] = sym_simple_expansion;
	v->a[44508] = sym_expansion;
	v->a[44509] = state(275);
	v->a[44510] = 8;
	v->a[44511] = sym__arithmetic_expression;
	v->a[44512] = sym_arithmetic_literal;
	v->a[44513] = sym_arithmetic_binary_expression;
	v->a[44514] = sym_arithmetic_ternary_expression;
	v->a[44515] = sym_arithmetic_unary_expression;
	v->a[44516] = sym_arithmetic_postfix_expression;
	v->a[44517] = sym_arithmetic_parenthesized_expression;
	v->a[44518] = sym_command_substitution;
	v->a[44519] = 16;
	small_parse_table_2226(v);
}

void	small_parse_table_2226(t_small_parse_table_array *v)
{
	v->a[44520] = actions(664);
	v->a[44521] = 1;
	v->a[44522] = sym_comment;
	v->a[44523] = actions(1560);
	v->a[44524] = 1;
	v->a[44525] = anon_sym_LPAREN;
	v->a[44526] = actions(1562);
	v->a[44527] = 1;
	v->a[44528] = anon_sym_BANG;
	v->a[44529] = actions(1570);
	v->a[44530] = 1;
	v->a[44531] = anon_sym_TILDE;
	v->a[44532] = actions(1572);
	v->a[44533] = 1;
	v->a[44534] = anon_sym_DOLLAR;
	v->a[44535] = actions(1574);
	v->a[44536] = 1;
	v->a[44537] = anon_sym_DQUOTE;
	v->a[44538] = actions(1578);
	v->a[44539] = 1;
	small_parse_table_2227(v);
}

void	small_parse_table_2227(t_small_parse_table_array *v)
{
	v->a[44540] = anon_sym_DOLLAR_LBRACE;
	v->a[44541] = actions(1580);
	v->a[44542] = 1;
	v->a[44543] = anon_sym_DOLLAR_LPAREN;
	v->a[44544] = actions(1582);
	v->a[44545] = 1;
	v->a[44546] = anon_sym_BQUOTE;
	v->a[44547] = actions(1584);
	v->a[44548] = 1;
	v->a[44549] = sym_variable_name;
	v->a[44550] = actions(1606);
	v->a[44551] = 1;
	v->a[44552] = anon_sym_RPAREN_RPAREN;
	v->a[44553] = actions(1566);
	v->a[44554] = 2;
	v->a[44555] = anon_sym_PLUS_PLUS;
	v->a[44556] = anon_sym_DASH_DASH;
	v->a[44557] = actions(1568);
	v->a[44558] = 2;
	v->a[44559] = anon_sym_DASH2;
	small_parse_table_2228(v);
}

void	small_parse_table_2228(t_small_parse_table_array *v)
{
	v->a[44560] = anon_sym_PLUS2;
	v->a[44561] = actions(1576);
	v->a[44562] = 2;
	v->a[44563] = sym_number;
	v->a[44564] = aux_sym__simple_variable_name_token1;
	v->a[44565] = state(255);
	v->a[44566] = 3;
	v->a[44567] = sym_string;
	v->a[44568] = sym_simple_expansion;
	v->a[44569] = sym_expansion;
	v->a[44570] = state(268);
	v->a[44571] = 8;
	v->a[44572] = sym__arithmetic_expression;
	v->a[44573] = sym_arithmetic_literal;
	v->a[44574] = sym_arithmetic_binary_expression;
	v->a[44575] = sym_arithmetic_ternary_expression;
	v->a[44576] = sym_arithmetic_unary_expression;
	v->a[44577] = sym_arithmetic_postfix_expression;
	v->a[44578] = sym_arithmetic_parenthesized_expression;
	v->a[44579] = sym_command_substitution;
	small_parse_table_2229(v);
}

void	small_parse_table_2229(t_small_parse_table_array *v)
{
	v->a[44580] = 16;
	v->a[44581] = actions(664);
	v->a[44582] = 1;
	v->a[44583] = sym_comment;
	v->a[44584] = actions(1560);
	v->a[44585] = 1;
	v->a[44586] = anon_sym_LPAREN;
	v->a[44587] = actions(1562);
	v->a[44588] = 1;
	v->a[44589] = anon_sym_BANG;
	v->a[44590] = actions(1570);
	v->a[44591] = 1;
	v->a[44592] = anon_sym_TILDE;
	v->a[44593] = actions(1572);
	v->a[44594] = 1;
	v->a[44595] = anon_sym_DOLLAR;
	v->a[44596] = actions(1574);
	v->a[44597] = 1;
	v->a[44598] = anon_sym_DQUOTE;
	v->a[44599] = actions(1578);
	small_parse_table_2230(v);
}

/* EOF small_parse_table_445.c */
