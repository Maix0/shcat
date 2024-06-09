/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_556.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2780(t_small_parse_table_array *v)
{
	v->a[55600] = aux_sym_number_token2;
	v->a[55601] = anon_sym_DOLLAR_LBRACE;
	v->a[55602] = anon_sym_DOLLAR_LPAREN;
	v->a[55603] = anon_sym_BQUOTE;
	v->a[55604] = sym_word;
	v->a[55605] = 18;
	v->a[55606] = actions(1404);
	v->a[55607] = 1;
	v->a[55608] = sym_comment;
	v->a[55609] = actions(1979);
	v->a[55610] = 1;
	v->a[55611] = anon_sym_LPAREN;
	v->a[55612] = actions(1981);
	v->a[55613] = 1;
	v->a[55614] = anon_sym_BANG;
	v->a[55615] = actions(1989);
	v->a[55616] = 1;
	v->a[55617] = anon_sym_TILDE;
	v->a[55618] = actions(1991);
	v->a[55619] = 1;
	small_parse_table_2781(v);
}

void	small_parse_table_2781(t_small_parse_table_array *v)
{
	v->a[55620] = anon_sym_DOLLAR;
	v->a[55621] = actions(1993);
	v->a[55622] = 1;
	v->a[55623] = anon_sym_DQUOTE;
	v->a[55624] = actions(1995);
	v->a[55625] = 1;
	v->a[55626] = aux_sym_number_token1;
	v->a[55627] = actions(1997);
	v->a[55628] = 1;
	v->a[55629] = aux_sym_number_token2;
	v->a[55630] = actions(1999);
	v->a[55631] = 1;
	v->a[55632] = anon_sym_DOLLAR_LBRACE;
	v->a[55633] = actions(2001);
	v->a[55634] = 1;
	v->a[55635] = anon_sym_DOLLAR_LPAREN;
	v->a[55636] = actions(2003);
	v->a[55637] = 1;
	v->a[55638] = anon_sym_BQUOTE;
	v->a[55639] = actions(2005);
	small_parse_table_2782(v);
}

void	small_parse_table_2782(t_small_parse_table_array *v)
{
	v->a[55640] = 1;
	v->a[55641] = aux_sym__simple_variable_name_token1;
	v->a[55642] = actions(2007);
	v->a[55643] = 1;
	v->a[55644] = sym_variable_name;
	v->a[55645] = actions(2057);
	v->a[55646] = 1;
	v->a[55647] = anon_sym_RPAREN_RPAREN;
	v->a[55648] = actions(1985);
	v->a[55649] = 2;
	v->a[55650] = anon_sym_PLUS_PLUS;
	v->a[55651] = anon_sym_DASH_DASH;
	v->a[55652] = actions(1987);
	v->a[55653] = 2;
	v->a[55654] = anon_sym_DASH2;
	v->a[55655] = anon_sym_PLUS2;
	v->a[55656] = state(530);
	v->a[55657] = 4;
	v->a[55658] = sym_string;
	v->a[55659] = sym_number;
	small_parse_table_2783(v);
}

void	small_parse_table_2783(t_small_parse_table_array *v)
{
	v->a[55660] = sym_simple_expansion;
	v->a[55661] = sym_expansion;
	v->a[55662] = state(591);
	v->a[55663] = 8;
	v->a[55664] = sym__arithmetic_expression;
	v->a[55665] = sym_arithmetic_literal;
	v->a[55666] = sym_arithmetic_binary_expression;
	v->a[55667] = sym_arithmetic_ternary_expression;
	v->a[55668] = sym_arithmetic_unary_expression;
	v->a[55669] = sym_arithmetic_postfix_expression;
	v->a[55670] = sym_arithmetic_parenthesized_expression;
	v->a[55671] = sym_command_substitution;
	v->a[55672] = 18;
	v->a[55673] = actions(1404);
	v->a[55674] = 1;
	v->a[55675] = sym_comment;
	v->a[55676] = actions(1979);
	v->a[55677] = 1;
	v->a[55678] = anon_sym_LPAREN;
	v->a[55679] = actions(1981);
	small_parse_table_2784(v);
}

void	small_parse_table_2784(t_small_parse_table_array *v)
{
	v->a[55680] = 1;
	v->a[55681] = anon_sym_BANG;
	v->a[55682] = actions(1989);
	v->a[55683] = 1;
	v->a[55684] = anon_sym_TILDE;
	v->a[55685] = actions(1991);
	v->a[55686] = 1;
	v->a[55687] = anon_sym_DOLLAR;
	v->a[55688] = actions(1993);
	v->a[55689] = 1;
	v->a[55690] = anon_sym_DQUOTE;
	v->a[55691] = actions(1995);
	v->a[55692] = 1;
	v->a[55693] = aux_sym_number_token1;
	v->a[55694] = actions(1997);
	v->a[55695] = 1;
	v->a[55696] = aux_sym_number_token2;
	v->a[55697] = actions(1999);
	v->a[55698] = 1;
	v->a[55699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2785(v);
}

/* EOF small_parse_table_556.c */
