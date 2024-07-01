/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_566.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2830(t_small_parse_table_array *v)
{
	v->a[56600] = 1;
	v->a[56601] = sym_variable_name;
	v->a[56602] = actions(1925);
	v->a[56603] = 2;
	v->a[56604] = anon_sym_PLUS_PLUS;
	v->a[56605] = anon_sym_DASH_DASH;
	v->a[56606] = actions(1927);
	v->a[56607] = 2;
	v->a[56608] = anon_sym_DASH2;
	v->a[56609] = anon_sym_PLUS2;
	v->a[56610] = actions(1935);
	v->a[56611] = 2;
	v->a[56612] = sym_number;
	v->a[56613] = aux_sym__simple_variable_name_token1;
	v->a[56614] = state(334);
	v->a[56615] = 3;
	v->a[56616] = sym_string;
	v->a[56617] = sym_simple_expansion;
	v->a[56618] = sym_expansion;
	v->a[56619] = state(313);
	small_parse_table_2831(v);
}

void	small_parse_table_2831(t_small_parse_table_array *v)
{
	v->a[56620] = 8;
	v->a[56621] = sym__arithmetic_expression;
	v->a[56622] = sym_arithmetic_literal;
	v->a[56623] = sym_arithmetic_binary_expression;
	v->a[56624] = sym_arithmetic_ternary_expression;
	v->a[56625] = sym_arithmetic_unary_expression;
	v->a[56626] = sym_arithmetic_postfix_expression;
	v->a[56627] = sym_arithmetic_parenthesized_expression;
	v->a[56628] = sym_command_substitution;
	v->a[56629] = 15;
	v->a[56630] = actions(870);
	v->a[56631] = 1;
	v->a[56632] = sym_comment;
	v->a[56633] = actions(1921);
	v->a[56634] = 1;
	v->a[56635] = anon_sym_LPAREN;
	v->a[56636] = actions(1923);
	v->a[56637] = 1;
	v->a[56638] = anon_sym_BANG;
	v->a[56639] = actions(1929);
	small_parse_table_2832(v);
}

void	small_parse_table_2832(t_small_parse_table_array *v)
{
	v->a[56640] = 1;
	v->a[56641] = anon_sym_TILDE;
	v->a[56642] = actions(1931);
	v->a[56643] = 1;
	v->a[56644] = anon_sym_DOLLAR;
	v->a[56645] = actions(1933);
	v->a[56646] = 1;
	v->a[56647] = anon_sym_DQUOTE;
	v->a[56648] = actions(1937);
	v->a[56649] = 1;
	v->a[56650] = anon_sym_DOLLAR_LBRACE;
	v->a[56651] = actions(1939);
	v->a[56652] = 1;
	v->a[56653] = anon_sym_DOLLAR_LPAREN;
	v->a[56654] = actions(1941);
	v->a[56655] = 1;
	v->a[56656] = anon_sym_BQUOTE;
	v->a[56657] = actions(1943);
	v->a[56658] = 1;
	v->a[56659] = sym_variable_name;
	small_parse_table_2833(v);
}

void	small_parse_table_2833(t_small_parse_table_array *v)
{
	v->a[56660] = actions(1925);
	v->a[56661] = 2;
	v->a[56662] = anon_sym_PLUS_PLUS;
	v->a[56663] = anon_sym_DASH_DASH;
	v->a[56664] = actions(1927);
	v->a[56665] = 2;
	v->a[56666] = anon_sym_DASH2;
	v->a[56667] = anon_sym_PLUS2;
	v->a[56668] = actions(1935);
	v->a[56669] = 2;
	v->a[56670] = sym_number;
	v->a[56671] = aux_sym__simple_variable_name_token1;
	v->a[56672] = state(334);
	v->a[56673] = 3;
	v->a[56674] = sym_string;
	v->a[56675] = sym_simple_expansion;
	v->a[56676] = sym_expansion;
	v->a[56677] = state(346);
	v->a[56678] = 8;
	v->a[56679] = sym__arithmetic_expression;
	small_parse_table_2834(v);
}

void	small_parse_table_2834(t_small_parse_table_array *v)
{
	v->a[56680] = sym_arithmetic_literal;
	v->a[56681] = sym_arithmetic_binary_expression;
	v->a[56682] = sym_arithmetic_ternary_expression;
	v->a[56683] = sym_arithmetic_unary_expression;
	v->a[56684] = sym_arithmetic_postfix_expression;
	v->a[56685] = sym_arithmetic_parenthesized_expression;
	v->a[56686] = sym_command_substitution;
	v->a[56687] = 15;
	v->a[56688] = actions(870);
	v->a[56689] = 1;
	v->a[56690] = sym_comment;
	v->a[56691] = actions(1921);
	v->a[56692] = 1;
	v->a[56693] = anon_sym_LPAREN;
	v->a[56694] = actions(1923);
	v->a[56695] = 1;
	v->a[56696] = anon_sym_BANG;
	v->a[56697] = actions(1929);
	v->a[56698] = 1;
	v->a[56699] = anon_sym_TILDE;
	small_parse_table_2835(v);
}

/* EOF small_parse_table_566.c */
