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
	v->a[56600] = sym_arithmetic_binary_expression;
	v->a[56601] = sym_arithmetic_ternary_expression;
	v->a[56602] = sym_arithmetic_unary_expression;
	v->a[56603] = sym_arithmetic_postfix_expression;
	v->a[56604] = sym_arithmetic_parenthesized_expression;
	v->a[56605] = sym_command_substitution;
	v->a[56606] = 16;
	v->a[56607] = actions(1074);
	v->a[56608] = 1;
	v->a[56609] = sym_comment;
	v->a[56610] = actions(1831);
	v->a[56611] = 1;
	v->a[56612] = anon_sym_LPAREN;
	v->a[56613] = actions(1833);
	v->a[56614] = 1;
	v->a[56615] = anon_sym_BANG;
	v->a[56616] = actions(1841);
	v->a[56617] = 1;
	v->a[56618] = anon_sym_TILDE;
	v->a[56619] = actions(1843);
	small_parse_table_2831(v);
}

void	small_parse_table_2831(t_small_parse_table_array *v)
{
	v->a[56620] = 1;
	v->a[56621] = anon_sym_DOLLAR;
	v->a[56622] = actions(1845);
	v->a[56623] = 1;
	v->a[56624] = anon_sym_DQUOTE;
	v->a[56625] = actions(1849);
	v->a[56626] = 1;
	v->a[56627] = anon_sym_DOLLAR_LBRACE;
	v->a[56628] = actions(1851);
	v->a[56629] = 1;
	v->a[56630] = anon_sym_DOLLAR_LPAREN;
	v->a[56631] = actions(1853);
	v->a[56632] = 1;
	v->a[56633] = anon_sym_BQUOTE;
	v->a[56634] = actions(1855);
	v->a[56635] = 1;
	v->a[56636] = sym_variable_name;
	v->a[56637] = actions(1925);
	v->a[56638] = 1;
	v->a[56639] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2832(v);
}

void	small_parse_table_2832(t_small_parse_table_array *v)
{
	v->a[56640] = actions(1837);
	v->a[56641] = 2;
	v->a[56642] = anon_sym_PLUS_PLUS;
	v->a[56643] = anon_sym_DASH_DASH;
	v->a[56644] = actions(1839);
	v->a[56645] = 2;
	v->a[56646] = anon_sym_DASH2;
	v->a[56647] = anon_sym_PLUS2;
	v->a[56648] = actions(1847);
	v->a[56649] = 2;
	v->a[56650] = sym_number;
	v->a[56651] = aux_sym__simple_variable_name_token1;
	v->a[56652] = state(370);
	v->a[56653] = 3;
	v->a[56654] = sym_string;
	v->a[56655] = sym_simple_expansion;
	v->a[56656] = sym_expansion;
	v->a[56657] = state(535);
	v->a[56658] = 8;
	v->a[56659] = sym__arithmetic_expression;
	small_parse_table_2833(v);
}

void	small_parse_table_2833(t_small_parse_table_array *v)
{
	v->a[56660] = sym_arithmetic_literal;
	v->a[56661] = sym_arithmetic_binary_expression;
	v->a[56662] = sym_arithmetic_ternary_expression;
	v->a[56663] = sym_arithmetic_unary_expression;
	v->a[56664] = sym_arithmetic_postfix_expression;
	v->a[56665] = sym_arithmetic_parenthesized_expression;
	v->a[56666] = sym_command_substitution;
	v->a[56667] = 3;
	v->a[56668] = actions(3);
	v->a[56669] = 1;
	v->a[56670] = sym_comment;
	v->a[56671] = actions(1122);
	v->a[56672] = 2;
	v->a[56673] = sym_file_descriptor;
	v->a[56674] = sym__concat;
	v->a[56675] = actions(1120);
	v->a[56676] = 25;
	v->a[56677] = anon_sym_PIPE;
	v->a[56678] = anon_sym_AMP_AMP;
	v->a[56679] = anon_sym_PIPE_PIPE;
	small_parse_table_2834(v);
}

void	small_parse_table_2834(t_small_parse_table_array *v)
{
	v->a[56680] = anon_sym_LT;
	v->a[56681] = anon_sym_GT;
	v->a[56682] = anon_sym_GT_GT;
	v->a[56683] = anon_sym_AMP_GT;
	v->a[56684] = anon_sym_AMP_GT_GT;
	v->a[56685] = anon_sym_LT_AMP;
	v->a[56686] = anon_sym_GT_AMP;
	v->a[56687] = anon_sym_GT_PIPE;
	v->a[56688] = anon_sym_LT_AMP_DASH;
	v->a[56689] = anon_sym_GT_AMP_DASH;
	v->a[56690] = anon_sym_LT_LT;
	v->a[56691] = anon_sym_LT_LT_DASH;
	v->a[56692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56693] = aux_sym_concatenation_token1;
	v->a[56694] = anon_sym_DOLLAR;
	v->a[56695] = anon_sym_DQUOTE;
	v->a[56696] = sym_raw_string;
	v->a[56697] = sym_number;
	v->a[56698] = anon_sym_DOLLAR_LBRACE;
	v->a[56699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2835(v);
}

/* EOF small_parse_table_566.c */
