/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_596.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2980(t_small_parse_table_array *v)
{
	v->a[59600] = sym_arithmetic_ternary_expression;
	v->a[59601] = sym_arithmetic_unary_expression;
	v->a[59602] = sym_arithmetic_postfix_expression;
	v->a[59603] = sym_arithmetic_parenthesized_expression;
	v->a[59604] = sym_command_substitution;
	v->a[59605] = 15;
	v->a[59606] = actions(1074);
	v->a[59607] = 1;
	v->a[59608] = sym_comment;
	v->a[59609] = actions(1831);
	v->a[59610] = 1;
	v->a[59611] = anon_sym_LPAREN;
	v->a[59612] = actions(1833);
	v->a[59613] = 1;
	v->a[59614] = anon_sym_BANG;
	v->a[59615] = actions(1841);
	v->a[59616] = 1;
	v->a[59617] = anon_sym_TILDE;
	v->a[59618] = actions(1843);
	v->a[59619] = 1;
	small_parse_table_2981(v);
}

void	small_parse_table_2981(t_small_parse_table_array *v)
{
	v->a[59620] = anon_sym_DOLLAR;
	v->a[59621] = actions(1845);
	v->a[59622] = 1;
	v->a[59623] = anon_sym_DQUOTE;
	v->a[59624] = actions(1849);
	v->a[59625] = 1;
	v->a[59626] = anon_sym_DOLLAR_LBRACE;
	v->a[59627] = actions(1851);
	v->a[59628] = 1;
	v->a[59629] = anon_sym_DOLLAR_LPAREN;
	v->a[59630] = actions(1853);
	v->a[59631] = 1;
	v->a[59632] = anon_sym_BQUOTE;
	v->a[59633] = actions(1855);
	v->a[59634] = 1;
	v->a[59635] = sym_variable_name;
	v->a[59636] = actions(1837);
	v->a[59637] = 2;
	v->a[59638] = anon_sym_PLUS_PLUS;
	v->a[59639] = anon_sym_DASH_DASH;
	small_parse_table_2982(v);
}

void	small_parse_table_2982(t_small_parse_table_array *v)
{
	v->a[59640] = actions(1839);
	v->a[59641] = 2;
	v->a[59642] = anon_sym_DASH2;
	v->a[59643] = anon_sym_PLUS2;
	v->a[59644] = actions(1847);
	v->a[59645] = 2;
	v->a[59646] = sym_number;
	v->a[59647] = aux_sym__simple_variable_name_token1;
	v->a[59648] = state(370);
	v->a[59649] = 3;
	v->a[59650] = sym_string;
	v->a[59651] = sym_simple_expansion;
	v->a[59652] = sym_expansion;
	v->a[59653] = state(406);
	v->a[59654] = 8;
	v->a[59655] = sym__arithmetic_expression;
	v->a[59656] = sym_arithmetic_literal;
	v->a[59657] = sym_arithmetic_binary_expression;
	v->a[59658] = sym_arithmetic_ternary_expression;
	v->a[59659] = sym_arithmetic_unary_expression;
	small_parse_table_2983(v);
}

void	small_parse_table_2983(t_small_parse_table_array *v)
{
	v->a[59660] = sym_arithmetic_postfix_expression;
	v->a[59661] = sym_arithmetic_parenthesized_expression;
	v->a[59662] = sym_command_substitution;
	v->a[59663] = 3;
	v->a[59664] = actions(3);
	v->a[59665] = 1;
	v->a[59666] = sym_comment;
	v->a[59667] = actions(1118);
	v->a[59668] = 5;
	v->a[59669] = sym_file_descriptor;
	v->a[59670] = sym__concat;
	v->a[59671] = sym_variable_name;
	v->a[59672] = ts_builtin_sym_end;
	v->a[59673] = aux_sym_heredoc_redirect_token1;
	v->a[59674] = actions(1116);
	v->a[59675] = 21;
	v->a[59676] = anon_sym_PIPE;
	v->a[59677] = anon_sym_RPAREN;
	v->a[59678] = anon_sym_SEMI_SEMI;
	v->a[59679] = anon_sym_AMP_AMP;
	small_parse_table_2984(v);
}

void	small_parse_table_2984(t_small_parse_table_array *v)
{
	v->a[59680] = anon_sym_PIPE_PIPE;
	v->a[59681] = anon_sym_LT;
	v->a[59682] = anon_sym_GT;
	v->a[59683] = anon_sym_GT_GT;
	v->a[59684] = anon_sym_AMP_GT;
	v->a[59685] = anon_sym_AMP_GT_GT;
	v->a[59686] = anon_sym_LT_AMP;
	v->a[59687] = anon_sym_GT_AMP;
	v->a[59688] = anon_sym_GT_PIPE;
	v->a[59689] = anon_sym_LT_AMP_DASH;
	v->a[59690] = anon_sym_GT_AMP_DASH;
	v->a[59691] = anon_sym_LT_LT;
	v->a[59692] = anon_sym_LT_LT_DASH;
	v->a[59693] = anon_sym_AMP;
	v->a[59694] = aux_sym_concatenation_token1;
	v->a[59695] = anon_sym_BQUOTE;
	v->a[59696] = anon_sym_SEMI;
	v->a[59697] = 15;
	v->a[59698] = actions(1074);
	v->a[59699] = 1;
	small_parse_table_2985(v);
}

/* EOF small_parse_table_596.c */
