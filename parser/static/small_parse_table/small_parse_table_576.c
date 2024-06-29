/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_576.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2880(t_small_parse_table_array *v)
{
	v->a[57600] = 1;
	v->a[57601] = anon_sym_DOLLAR_LPAREN;
	v->a[57602] = actions(1853);
	v->a[57603] = 1;
	v->a[57604] = anon_sym_BQUOTE;
	v->a[57605] = actions(1855);
	v->a[57606] = 1;
	v->a[57607] = sym_variable_name;
	v->a[57608] = actions(1947);
	v->a[57609] = 1;
	v->a[57610] = anon_sym_RPAREN_RPAREN;
	v->a[57611] = actions(1837);
	v->a[57612] = 2;
	v->a[57613] = anon_sym_PLUS_PLUS;
	v->a[57614] = anon_sym_DASH_DASH;
	v->a[57615] = actions(1839);
	v->a[57616] = 2;
	v->a[57617] = anon_sym_DASH2;
	v->a[57618] = anon_sym_PLUS2;
	v->a[57619] = actions(1847);
	small_parse_table_2881(v);
}

void	small_parse_table_2881(t_small_parse_table_array *v)
{
	v->a[57620] = 2;
	v->a[57621] = sym_number;
	v->a[57622] = aux_sym__simple_variable_name_token1;
	v->a[57623] = state(370);
	v->a[57624] = 3;
	v->a[57625] = sym_string;
	v->a[57626] = sym_simple_expansion;
	v->a[57627] = sym_expansion;
	v->a[57628] = state(478);
	v->a[57629] = 8;
	v->a[57630] = sym__arithmetic_expression;
	v->a[57631] = sym_arithmetic_literal;
	v->a[57632] = sym_arithmetic_binary_expression;
	v->a[57633] = sym_arithmetic_ternary_expression;
	v->a[57634] = sym_arithmetic_unary_expression;
	v->a[57635] = sym_arithmetic_postfix_expression;
	v->a[57636] = sym_arithmetic_parenthesized_expression;
	v->a[57637] = sym_command_substitution;
	v->a[57638] = 16;
	v->a[57639] = actions(1074);
	small_parse_table_2882(v);
}

void	small_parse_table_2882(t_small_parse_table_array *v)
{
	v->a[57640] = 1;
	v->a[57641] = sym_comment;
	v->a[57642] = actions(1831);
	v->a[57643] = 1;
	v->a[57644] = anon_sym_LPAREN;
	v->a[57645] = actions(1833);
	v->a[57646] = 1;
	v->a[57647] = anon_sym_BANG;
	v->a[57648] = actions(1841);
	v->a[57649] = 1;
	v->a[57650] = anon_sym_TILDE;
	v->a[57651] = actions(1843);
	v->a[57652] = 1;
	v->a[57653] = anon_sym_DOLLAR;
	v->a[57654] = actions(1845);
	v->a[57655] = 1;
	v->a[57656] = anon_sym_DQUOTE;
	v->a[57657] = actions(1849);
	v->a[57658] = 1;
	v->a[57659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2883(v);
}

void	small_parse_table_2883(t_small_parse_table_array *v)
{
	v->a[57660] = actions(1851);
	v->a[57661] = 1;
	v->a[57662] = anon_sym_DOLLAR_LPAREN;
	v->a[57663] = actions(1853);
	v->a[57664] = 1;
	v->a[57665] = anon_sym_BQUOTE;
	v->a[57666] = actions(1855);
	v->a[57667] = 1;
	v->a[57668] = sym_variable_name;
	v->a[57669] = actions(1949);
	v->a[57670] = 1;
	v->a[57671] = anon_sym_RPAREN_RPAREN;
	v->a[57672] = actions(1837);
	v->a[57673] = 2;
	v->a[57674] = anon_sym_PLUS_PLUS;
	v->a[57675] = anon_sym_DASH_DASH;
	v->a[57676] = actions(1839);
	v->a[57677] = 2;
	v->a[57678] = anon_sym_DASH2;
	v->a[57679] = anon_sym_PLUS2;
	small_parse_table_2884(v);
}

void	small_parse_table_2884(t_small_parse_table_array *v)
{
	v->a[57680] = actions(1847);
	v->a[57681] = 2;
	v->a[57682] = sym_number;
	v->a[57683] = aux_sym__simple_variable_name_token1;
	v->a[57684] = state(370);
	v->a[57685] = 3;
	v->a[57686] = sym_string;
	v->a[57687] = sym_simple_expansion;
	v->a[57688] = sym_expansion;
	v->a[57689] = state(584);
	v->a[57690] = 8;
	v->a[57691] = sym__arithmetic_expression;
	v->a[57692] = sym_arithmetic_literal;
	v->a[57693] = sym_arithmetic_binary_expression;
	v->a[57694] = sym_arithmetic_ternary_expression;
	v->a[57695] = sym_arithmetic_unary_expression;
	v->a[57696] = sym_arithmetic_postfix_expression;
	v->a[57697] = sym_arithmetic_parenthesized_expression;
	v->a[57698] = sym_command_substitution;
	v->a[57699] = 3;
	small_parse_table_2885(v);
}

/* EOF small_parse_table_576.c */
