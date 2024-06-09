/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_546.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2730(t_small_parse_table_array *v)
{
	v->a[54600] = 8;
	v->a[54601] = sym__arithmetic_expression;
	v->a[54602] = sym_arithmetic_literal;
	v->a[54603] = sym_arithmetic_binary_expression;
	v->a[54604] = sym_arithmetic_ternary_expression;
	v->a[54605] = sym_arithmetic_unary_expression;
	v->a[54606] = sym_arithmetic_postfix_expression;
	v->a[54607] = sym_arithmetic_parenthesized_expression;
	v->a[54608] = sym_command_substitution;
	v->a[54609] = 18;
	v->a[54610] = actions(1404);
	v->a[54611] = 1;
	v->a[54612] = sym_comment;
	v->a[54613] = actions(1979);
	v->a[54614] = 1;
	v->a[54615] = anon_sym_LPAREN;
	v->a[54616] = actions(1981);
	v->a[54617] = 1;
	v->a[54618] = anon_sym_BANG;
	v->a[54619] = actions(1989);
	small_parse_table_2731(v);
}

void	small_parse_table_2731(t_small_parse_table_array *v)
{
	v->a[54620] = 1;
	v->a[54621] = anon_sym_TILDE;
	v->a[54622] = actions(1991);
	v->a[54623] = 1;
	v->a[54624] = anon_sym_DOLLAR;
	v->a[54625] = actions(1993);
	v->a[54626] = 1;
	v->a[54627] = anon_sym_DQUOTE;
	v->a[54628] = actions(1995);
	v->a[54629] = 1;
	v->a[54630] = aux_sym_number_token1;
	v->a[54631] = actions(1997);
	v->a[54632] = 1;
	v->a[54633] = aux_sym_number_token2;
	v->a[54634] = actions(1999);
	v->a[54635] = 1;
	v->a[54636] = anon_sym_DOLLAR_LBRACE;
	v->a[54637] = actions(2001);
	v->a[54638] = 1;
	v->a[54639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2732(v);
}

void	small_parse_table_2732(t_small_parse_table_array *v)
{
	v->a[54640] = actions(2003);
	v->a[54641] = 1;
	v->a[54642] = anon_sym_BQUOTE;
	v->a[54643] = actions(2005);
	v->a[54644] = 1;
	v->a[54645] = aux_sym__simple_variable_name_token1;
	v->a[54646] = actions(2007);
	v->a[54647] = 1;
	v->a[54648] = sym_variable_name;
	v->a[54649] = actions(2031);
	v->a[54650] = 1;
	v->a[54651] = anon_sym_RPAREN_RPAREN;
	v->a[54652] = actions(1985);
	v->a[54653] = 2;
	v->a[54654] = anon_sym_PLUS_PLUS;
	v->a[54655] = anon_sym_DASH_DASH;
	v->a[54656] = actions(1987);
	v->a[54657] = 2;
	v->a[54658] = anon_sym_DASH2;
	v->a[54659] = anon_sym_PLUS2;
	small_parse_table_2733(v);
}

void	small_parse_table_2733(t_small_parse_table_array *v)
{
	v->a[54660] = state(530);
	v->a[54661] = 4;
	v->a[54662] = sym_string;
	v->a[54663] = sym_number;
	v->a[54664] = sym_simple_expansion;
	v->a[54665] = sym_expansion;
	v->a[54666] = state(571);
	v->a[54667] = 8;
	v->a[54668] = sym__arithmetic_expression;
	v->a[54669] = sym_arithmetic_literal;
	v->a[54670] = sym_arithmetic_binary_expression;
	v->a[54671] = sym_arithmetic_ternary_expression;
	v->a[54672] = sym_arithmetic_unary_expression;
	v->a[54673] = sym_arithmetic_postfix_expression;
	v->a[54674] = sym_arithmetic_parenthesized_expression;
	v->a[54675] = sym_command_substitution;
	v->a[54676] = 18;
	v->a[54677] = actions(1404);
	v->a[54678] = 1;
	v->a[54679] = sym_comment;
	small_parse_table_2734(v);
}

void	small_parse_table_2734(t_small_parse_table_array *v)
{
	v->a[54680] = actions(1979);
	v->a[54681] = 1;
	v->a[54682] = anon_sym_LPAREN;
	v->a[54683] = actions(1981);
	v->a[54684] = 1;
	v->a[54685] = anon_sym_BANG;
	v->a[54686] = actions(1989);
	v->a[54687] = 1;
	v->a[54688] = anon_sym_TILDE;
	v->a[54689] = actions(1991);
	v->a[54690] = 1;
	v->a[54691] = anon_sym_DOLLAR;
	v->a[54692] = actions(1993);
	v->a[54693] = 1;
	v->a[54694] = anon_sym_DQUOTE;
	v->a[54695] = actions(1995);
	v->a[54696] = 1;
	v->a[54697] = aux_sym_number_token1;
	v->a[54698] = actions(1997);
	v->a[54699] = 1;
	small_parse_table_2735(v);
}

/* EOF small_parse_table_546.c */
