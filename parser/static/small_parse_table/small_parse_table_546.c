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
	v->a[54600] = sym_string;
	v->a[54601] = sym_simple_expansion;
	v->a[54602] = sym_expansion;
	v->a[54603] = state(295);
	v->a[54604] = 8;
	v->a[54605] = sym__arithmetic_expression;
	v->a[54606] = sym_arithmetic_literal;
	v->a[54607] = sym_arithmetic_binary_expression;
	v->a[54608] = sym_arithmetic_ternary_expression;
	v->a[54609] = sym_arithmetic_unary_expression;
	v->a[54610] = sym_arithmetic_postfix_expression;
	v->a[54611] = sym_arithmetic_parenthesized_expression;
	v->a[54612] = sym_command_substitution;
	v->a[54613] = 15;
	v->a[54614] = actions(870);
	v->a[54615] = 1;
	v->a[54616] = sym_comment;
	v->a[54617] = actions(1744);
	v->a[54618] = 1;
	v->a[54619] = anon_sym_LPAREN;
	small_parse_table_2731(v);
}

void	small_parse_table_2731(t_small_parse_table_array *v)
{
	v->a[54620] = actions(1746);
	v->a[54621] = 1;
	v->a[54622] = anon_sym_BANG;
	v->a[54623] = actions(1754);
	v->a[54624] = 1;
	v->a[54625] = anon_sym_TILDE;
	v->a[54626] = actions(1756);
	v->a[54627] = 1;
	v->a[54628] = anon_sym_DOLLAR;
	v->a[54629] = actions(1758);
	v->a[54630] = 1;
	v->a[54631] = anon_sym_DQUOTE;
	v->a[54632] = actions(1762);
	v->a[54633] = 1;
	v->a[54634] = anon_sym_DOLLAR_LBRACE;
	v->a[54635] = actions(1764);
	v->a[54636] = 1;
	v->a[54637] = anon_sym_DOLLAR_LPAREN;
	v->a[54638] = actions(1766);
	v->a[54639] = 1;
	small_parse_table_2732(v);
}

void	small_parse_table_2732(t_small_parse_table_array *v)
{
	v->a[54640] = anon_sym_BQUOTE;
	v->a[54641] = actions(1768);
	v->a[54642] = 1;
	v->a[54643] = sym_variable_name;
	v->a[54644] = actions(1750);
	v->a[54645] = 2;
	v->a[54646] = anon_sym_PLUS_PLUS;
	v->a[54647] = anon_sym_DASH_DASH;
	v->a[54648] = actions(1752);
	v->a[54649] = 2;
	v->a[54650] = anon_sym_DASH2;
	v->a[54651] = anon_sym_PLUS2;
	v->a[54652] = actions(1760);
	v->a[54653] = 2;
	v->a[54654] = sym_number;
	v->a[54655] = aux_sym__simple_variable_name_token1;
	v->a[54656] = state(271);
	v->a[54657] = 3;
	v->a[54658] = sym_string;
	v->a[54659] = sym_simple_expansion;
	small_parse_table_2733(v);
}

void	small_parse_table_2733(t_small_parse_table_array *v)
{
	v->a[54660] = sym_expansion;
	v->a[54661] = state(259);
	v->a[54662] = 8;
	v->a[54663] = sym__arithmetic_expression;
	v->a[54664] = sym_arithmetic_literal;
	v->a[54665] = sym_arithmetic_binary_expression;
	v->a[54666] = sym_arithmetic_ternary_expression;
	v->a[54667] = sym_arithmetic_unary_expression;
	v->a[54668] = sym_arithmetic_postfix_expression;
	v->a[54669] = sym_arithmetic_parenthesized_expression;
	v->a[54670] = sym_command_substitution;
	v->a[54671] = 6;
	v->a[54672] = actions(3);
	v->a[54673] = 1;
	v->a[54674] = sym_comment;
	v->a[54675] = actions(379);
	v->a[54676] = 1;
	v->a[54677] = sym_file_descriptor;
	v->a[54678] = actions(1949);
	v->a[54679] = 1;
	small_parse_table_2734(v);
}

void	small_parse_table_2734(t_small_parse_table_array *v)
{
	v->a[54680] = sym_variable_name;
	v->a[54681] = actions(1947);
	v->a[54682] = 2;
	v->a[54683] = aux_sym__simple_variable_name_token1;
	v->a[54684] = aux_sym__multiline_variable_name_token1;
	v->a[54685] = actions(1945);
	v->a[54686] = 9;
	v->a[54687] = anon_sym_BANG;
	v->a[54688] = anon_sym_DASH;
	v->a[54689] = anon_sym_STAR;
	v->a[54690] = anon_sym_QMARK;
	v->a[54691] = anon_sym_DOLLAR;
	v->a[54692] = anon_sym_POUND;
	v->a[54693] = anon_sym_AT;
	v->a[54694] = anon_sym_0;
	v->a[54695] = anon_sym__;
	v->a[54696] = actions(381);
	v->a[54697] = 13;
	v->a[54698] = anon_sym_PIPE;
	v->a[54699] = anon_sym_AMP_AMP;
	small_parse_table_2735(v);
}

/* EOF small_parse_table_546.c */
