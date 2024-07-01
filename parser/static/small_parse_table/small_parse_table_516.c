/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_516.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2580(t_small_parse_table_array *v)
{
	v->a[51600] = 1;
	v->a[51601] = anon_sym_BANG;
	v->a[51602] = actions(1754);
	v->a[51603] = 1;
	v->a[51604] = anon_sym_TILDE;
	v->a[51605] = actions(1756);
	v->a[51606] = 1;
	v->a[51607] = anon_sym_DOLLAR;
	v->a[51608] = actions(1758);
	v->a[51609] = 1;
	v->a[51610] = anon_sym_DQUOTE;
	v->a[51611] = actions(1762);
	v->a[51612] = 1;
	v->a[51613] = anon_sym_DOLLAR_LBRACE;
	v->a[51614] = actions(1764);
	v->a[51615] = 1;
	v->a[51616] = anon_sym_DOLLAR_LPAREN;
	v->a[51617] = actions(1766);
	v->a[51618] = 1;
	v->a[51619] = anon_sym_BQUOTE;
	small_parse_table_2581(v);
}

void	small_parse_table_2581(t_small_parse_table_array *v)
{
	v->a[51620] = actions(1768);
	v->a[51621] = 1;
	v->a[51622] = sym_variable_name;
	v->a[51623] = actions(1822);
	v->a[51624] = 1;
	v->a[51625] = anon_sym_RPAREN_RPAREN;
	v->a[51626] = actions(1750);
	v->a[51627] = 2;
	v->a[51628] = anon_sym_PLUS_PLUS;
	v->a[51629] = anon_sym_DASH_DASH;
	v->a[51630] = actions(1752);
	v->a[51631] = 2;
	v->a[51632] = anon_sym_DASH2;
	v->a[51633] = anon_sym_PLUS2;
	v->a[51634] = actions(1760);
	v->a[51635] = 2;
	v->a[51636] = sym_number;
	v->a[51637] = aux_sym__simple_variable_name_token1;
	v->a[51638] = state(271);
	v->a[51639] = 3;
	small_parse_table_2582(v);
}

void	small_parse_table_2582(t_small_parse_table_array *v)
{
	v->a[51640] = sym_string;
	v->a[51641] = sym_simple_expansion;
	v->a[51642] = sym_expansion;
	v->a[51643] = state(328);
	v->a[51644] = 8;
	v->a[51645] = sym__arithmetic_expression;
	v->a[51646] = sym_arithmetic_literal;
	v->a[51647] = sym_arithmetic_binary_expression;
	v->a[51648] = sym_arithmetic_ternary_expression;
	v->a[51649] = sym_arithmetic_unary_expression;
	v->a[51650] = sym_arithmetic_postfix_expression;
	v->a[51651] = sym_arithmetic_parenthesized_expression;
	v->a[51652] = sym_command_substitution;
	v->a[51653] = 16;
	v->a[51654] = actions(870);
	v->a[51655] = 1;
	v->a[51656] = sym_comment;
	v->a[51657] = actions(1744);
	v->a[51658] = 1;
	v->a[51659] = anon_sym_LPAREN;
	small_parse_table_2583(v);
}

void	small_parse_table_2583(t_small_parse_table_array *v)
{
	v->a[51660] = actions(1746);
	v->a[51661] = 1;
	v->a[51662] = anon_sym_BANG;
	v->a[51663] = actions(1754);
	v->a[51664] = 1;
	v->a[51665] = anon_sym_TILDE;
	v->a[51666] = actions(1756);
	v->a[51667] = 1;
	v->a[51668] = anon_sym_DOLLAR;
	v->a[51669] = actions(1758);
	v->a[51670] = 1;
	v->a[51671] = anon_sym_DQUOTE;
	v->a[51672] = actions(1762);
	v->a[51673] = 1;
	v->a[51674] = anon_sym_DOLLAR_LBRACE;
	v->a[51675] = actions(1764);
	v->a[51676] = 1;
	v->a[51677] = anon_sym_DOLLAR_LPAREN;
	v->a[51678] = actions(1766);
	v->a[51679] = 1;
	small_parse_table_2584(v);
}

void	small_parse_table_2584(t_small_parse_table_array *v)
{
	v->a[51680] = anon_sym_BQUOTE;
	v->a[51681] = actions(1768);
	v->a[51682] = 1;
	v->a[51683] = sym_variable_name;
	v->a[51684] = actions(1824);
	v->a[51685] = 1;
	v->a[51686] = anon_sym_RPAREN_RPAREN;
	v->a[51687] = actions(1750);
	v->a[51688] = 2;
	v->a[51689] = anon_sym_PLUS_PLUS;
	v->a[51690] = anon_sym_DASH_DASH;
	v->a[51691] = actions(1752);
	v->a[51692] = 2;
	v->a[51693] = anon_sym_DASH2;
	v->a[51694] = anon_sym_PLUS2;
	v->a[51695] = actions(1760);
	v->a[51696] = 2;
	v->a[51697] = sym_number;
	v->a[51698] = aux_sym__simple_variable_name_token1;
	v->a[51699] = state(271);
	small_parse_table_2585(v);
}

/* EOF small_parse_table_516.c */
