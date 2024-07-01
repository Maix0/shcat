/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_456.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2280(t_small_parse_table_array *v)
{
	v->a[45600] = 1;
	v->a[45601] = anon_sym_TILDE;
	v->a[45602] = actions(1572);
	v->a[45603] = 1;
	v->a[45604] = anon_sym_DOLLAR;
	v->a[45605] = actions(1574);
	v->a[45606] = 1;
	v->a[45607] = anon_sym_DQUOTE;
	v->a[45608] = actions(1578);
	v->a[45609] = 1;
	v->a[45610] = anon_sym_DOLLAR_LBRACE;
	v->a[45611] = actions(1580);
	v->a[45612] = 1;
	v->a[45613] = anon_sym_DOLLAR_LPAREN;
	v->a[45614] = actions(1582);
	v->a[45615] = 1;
	v->a[45616] = anon_sym_BQUOTE;
	v->a[45617] = actions(1584);
	v->a[45618] = 1;
	v->a[45619] = sym_variable_name;
	small_parse_table_2281(v);
}

void	small_parse_table_2281(t_small_parse_table_array *v)
{
	v->a[45620] = actions(1687);
	v->a[45621] = 1;
	v->a[45622] = anon_sym_RPAREN_RPAREN;
	v->a[45623] = actions(1566);
	v->a[45624] = 2;
	v->a[45625] = anon_sym_PLUS_PLUS;
	v->a[45626] = anon_sym_DASH_DASH;
	v->a[45627] = actions(1568);
	v->a[45628] = 2;
	v->a[45629] = anon_sym_DASH2;
	v->a[45630] = anon_sym_PLUS2;
	v->a[45631] = actions(1576);
	v->a[45632] = 2;
	v->a[45633] = sym_number;
	v->a[45634] = aux_sym__simple_variable_name_token1;
	v->a[45635] = state(255);
	v->a[45636] = 3;
	v->a[45637] = sym_string;
	v->a[45638] = sym_simple_expansion;
	v->a[45639] = sym_expansion;
	small_parse_table_2282(v);
}

void	small_parse_table_2282(t_small_parse_table_array *v)
{
	v->a[45640] = state(328);
	v->a[45641] = 8;
	v->a[45642] = sym__arithmetic_expression;
	v->a[45643] = sym_arithmetic_literal;
	v->a[45644] = sym_arithmetic_binary_expression;
	v->a[45645] = sym_arithmetic_ternary_expression;
	v->a[45646] = sym_arithmetic_unary_expression;
	v->a[45647] = sym_arithmetic_postfix_expression;
	v->a[45648] = sym_arithmetic_parenthesized_expression;
	v->a[45649] = sym_command_substitution;
	v->a[45650] = 18;
	v->a[45651] = actions(3);
	v->a[45652] = 1;
	v->a[45653] = sym_comment;
	v->a[45654] = actions(1634);
	v->a[45655] = 1;
	v->a[45656] = anon_sym_LPAREN;
	v->a[45657] = actions(1638);
	v->a[45658] = 1;
	v->a[45659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2283(v);
}

void	small_parse_table_2283(t_small_parse_table_array *v)
{
	v->a[45660] = actions(1640);
	v->a[45661] = 1;
	v->a[45662] = anon_sym_DOLLAR;
	v->a[45663] = actions(1642);
	v->a[45664] = 1;
	v->a[45665] = anon_sym_DQUOTE;
	v->a[45666] = actions(1644);
	v->a[45667] = 1;
	v->a[45668] = anon_sym_DOLLAR_LBRACE;
	v->a[45669] = actions(1646);
	v->a[45670] = 1;
	v->a[45671] = anon_sym_DOLLAR_LPAREN;
	v->a[45672] = actions(1648);
	v->a[45673] = 1;
	v->a[45674] = anon_sym_BQUOTE;
	v->a[45675] = actions(1650);
	v->a[45676] = 1;
	v->a[45677] = sym_extglob_pattern;
	v->a[45678] = actions(1689);
	v->a[45679] = 1;
	small_parse_table_2284(v);
}

void	small_parse_table_2284(t_small_parse_table_array *v)
{
	v->a[45680] = anon_sym_esac;
	v->a[45681] = state(994);
	v->a[45682] = 1;
	v->a[45683] = sym_terminator;
	v->a[45684] = state(1086);
	v->a[45685] = 1;
	v->a[45686] = aux_sym_case_statement_repeat1;
	v->a[45687] = state(1713);
	v->a[45688] = 1;
	v->a[45689] = sym_case_item;
	v->a[45690] = state(1964);
	v->a[45691] = 1;
	v->a[45692] = sym__case_item_last;
	v->a[45693] = state(1871);
	v->a[45694] = 2;
	v->a[45695] = sym_concatenation;
	v->a[45696] = sym__extglob_blob;
	v->a[45697] = actions(1630);
	v->a[45698] = 3;
	v->a[45699] = sym_raw_string;
	small_parse_table_2285(v);
}

/* EOF small_parse_table_456.c */
