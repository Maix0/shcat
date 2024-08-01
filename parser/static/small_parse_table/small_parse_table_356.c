/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_356.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1780(t_small_parse_table_array *v)
{
	v->a[35600] = 2;
	v->a[35601] = sym_number;
	v->a[35602] = aux_sym__simple_variable_name_token1;
	v->a[35603] = state(1312);
	v->a[35604] = 3;
	v->a[35605] = sym_string;
	v->a[35606] = sym_simple_expansion;
	v->a[35607] = sym_expansion;
	v->a[35608] = state(1368);
	v->a[35609] = 7;
	v->a[35610] = sym__arithmetic_expression;
	v->a[35611] = sym_arithmetic_literal;
	v->a[35612] = sym_arithmetic_binary_expression;
	v->a[35613] = sym_arithmetic_ternary_expression;
	v->a[35614] = sym_arithmetic_unary_expression;
	v->a[35615] = sym_arithmetic_postfix_expression;
	v->a[35616] = sym_arithmetic_parenthesized_expression;
	v->a[35617] = 3;
	v->a[35618] = actions(3);
	v->a[35619] = 1;
	small_parse_table_1781(v);
}

void	small_parse_table_1781(t_small_parse_table_array *v)
{
	v->a[35620] = sym_comment;
	v->a[35621] = actions(981);
	v->a[35622] = 2;
	v->a[35623] = sym__concat;
	v->a[35624] = sym_variable_name;
	v->a[35625] = actions(973);
	v->a[35626] = 17;
	v->a[35627] = anon_sym_PIPE;
	v->a[35628] = anon_sym_AMP_AMP;
	v->a[35629] = anon_sym_PIPE_PIPE;
	v->a[35630] = anon_sym_LT;
	v->a[35631] = anon_sym_GT;
	v->a[35632] = anon_sym_GT_GT;
	v->a[35633] = anon_sym_LT_LT;
	v->a[35634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35635] = aux_sym_concatenation_token1;
	v->a[35636] = anon_sym_DOLLAR;
	v->a[35637] = anon_sym_DQUOTE;
	v->a[35638] = sym_raw_string;
	v->a[35639] = sym_number;
	small_parse_table_1782(v);
}

void	small_parse_table_1782(t_small_parse_table_array *v)
{
	v->a[35640] = anon_sym_DOLLAR_LBRACE;
	v->a[35641] = anon_sym_DOLLAR_LPAREN;
	v->a[35642] = anon_sym_BQUOTE;
	v->a[35643] = sym_word;
	v->a[35644] = 10;
	v->a[35645] = actions(1424);
	v->a[35646] = 1;
	v->a[35647] = anon_sym_LPAREN;
	v->a[35648] = actions(1428);
	v->a[35649] = 1;
	v->a[35650] = anon_sym_DOLLAR;
	v->a[35651] = actions(1430);
	v->a[35652] = 1;
	v->a[35653] = anon_sym_DQUOTE;
	v->a[35654] = actions(1434);
	v->a[35655] = 1;
	v->a[35656] = anon_sym_DOLLAR_LBRACE;
	v->a[35657] = actions(1436);
	v->a[35658] = 1;
	v->a[35659] = sym_comment;
	small_parse_table_1783(v);
}

void	small_parse_table_1783(t_small_parse_table_array *v)
{
	v->a[35660] = actions(1438);
	v->a[35661] = 1;
	v->a[35662] = sym_variable_name;
	v->a[35663] = actions(1426);
	v->a[35664] = 2;
	v->a[35665] = anon_sym_DASH2;
	v->a[35666] = anon_sym_PLUS2;
	v->a[35667] = actions(1432);
	v->a[35668] = 2;
	v->a[35669] = sym_number;
	v->a[35670] = aux_sym__simple_variable_name_token1;
	v->a[35671] = state(1312);
	v->a[35672] = 3;
	v->a[35673] = sym_string;
	v->a[35674] = sym_simple_expansion;
	v->a[35675] = sym_expansion;
	v->a[35676] = state(1348);
	v->a[35677] = 7;
	v->a[35678] = sym__arithmetic_expression;
	v->a[35679] = sym_arithmetic_literal;
	small_parse_table_1784(v);
}

void	small_parse_table_1784(t_small_parse_table_array *v)
{
	v->a[35680] = sym_arithmetic_binary_expression;
	v->a[35681] = sym_arithmetic_ternary_expression;
	v->a[35682] = sym_arithmetic_unary_expression;
	v->a[35683] = sym_arithmetic_postfix_expression;
	v->a[35684] = sym_arithmetic_parenthesized_expression;
	v->a[35685] = 10;
	v->a[35686] = actions(1424);
	v->a[35687] = 1;
	v->a[35688] = anon_sym_LPAREN;
	v->a[35689] = actions(1428);
	v->a[35690] = 1;
	v->a[35691] = anon_sym_DOLLAR;
	v->a[35692] = actions(1430);
	v->a[35693] = 1;
	v->a[35694] = anon_sym_DQUOTE;
	v->a[35695] = actions(1434);
	v->a[35696] = 1;
	v->a[35697] = anon_sym_DOLLAR_LBRACE;
	v->a[35698] = actions(1436);
	v->a[35699] = 1;
	small_parse_table_1785(v);
}

/* EOF small_parse_table_356.c */
