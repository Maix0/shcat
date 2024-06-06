/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_846.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4230(t_small_parse_table_array *v)
{
	v->a[84600] = sym_last_case_item;
	v->a[84601] = actions(4358);
	v->a[84602] = 2;
	v->a[84603] = sym_test_operator;
	v->a[84604] = sym_raw_string;
	v->a[84605] = state(1881);
	v->a[84606] = 2;
	v->a[84607] = sym_case_item;
	v->a[84608] = aux_sym_case_statement_repeat1;
	v->a[84609] = state(3472);
	v->a[84610] = 2;
	v->a[84611] = sym_concatenation;
	v->a[84612] = sym__extglob_blob;
	v->a[84613] = state(3295);
	v->a[84614] = 7;
	v->a[84615] = sym_arithmetic_expansion;
	v->a[84616] = sym_brace_expression;
	v->a[84617] = sym_string;
	v->a[84618] = sym_number;
	v->a[84619] = sym_simple_expansion;
	small_parse_table_4231(v);
}

void	small_parse_table_4231(t_small_parse_table_array *v)
{
	v->a[84620] = sym_expansion;
	v->a[84621] = sym_command_substitution;
	v->a[84622] = 21;
	v->a[84623] = actions(57);
	v->a[84624] = 1;
	v->a[84625] = sym_comment;
	v->a[84626] = actions(4584);
	v->a[84627] = 1;
	v->a[84628] = anon_sym_LPAREN;
	v->a[84629] = actions(4586);
	v->a[84630] = 1;
	v->a[84631] = anon_sym_BANG;
	v->a[84632] = actions(4592);
	v->a[84633] = 1;
	v->a[84634] = anon_sym_TILDE;
	v->a[84635] = actions(4594);
	v->a[84636] = 1;
	v->a[84637] = anon_sym_DOLLAR;
	v->a[84638] = actions(4596);
	v->a[84639] = 1;
	small_parse_table_4232(v);
}

void	small_parse_table_4232(t_small_parse_table_array *v)
{
	v->a[84640] = anon_sym_DQUOTE;
	v->a[84641] = actions(4598);
	v->a[84642] = 1;
	v->a[84643] = aux_sym_number_token1;
	v->a[84644] = actions(4600);
	v->a[84645] = 1;
	v->a[84646] = aux_sym_number_token2;
	v->a[84647] = actions(4602);
	v->a[84648] = 1;
	v->a[84649] = anon_sym_DOLLAR_LBRACE;
	v->a[84650] = actions(4604);
	v->a[84651] = 1;
	v->a[84652] = anon_sym_DOLLAR_LPAREN;
	v->a[84653] = actions(4606);
	v->a[84654] = 1;
	v->a[84655] = anon_sym_BQUOTE;
	v->a[84656] = actions(4608);
	v->a[84657] = 1;
	v->a[84658] = anon_sym_DOLLAR_BQUOTE;
	v->a[84659] = actions(4713);
	small_parse_table_4233(v);
}

void	small_parse_table_4233(t_small_parse_table_array *v)
{
	v->a[84660] = 1;
	v->a[84661] = aux_sym__simple_variable_name_token1;
	v->a[84662] = actions(4715);
	v->a[84663] = 1;
	v->a[84664] = sym_variable_name;
	v->a[84665] = state(1476);
	v->a[84666] = 1;
	v->a[84667] = sym__arithmetic_postfix_expression;
	v->a[84668] = state(1478);
	v->a[84669] = 1;
	v->a[84670] = sym__arithmetic_unary_expression;
	v->a[84671] = state(1490);
	v->a[84672] = 1;
	v->a[84673] = sym__arithmetic_ternary_expression;
	v->a[84674] = state(1511);
	v->a[84675] = 1;
	v->a[84676] = sym__arithmetic_binary_expression;
	v->a[84677] = actions(4588);
	v->a[84678] = 2;
	v->a[84679] = anon_sym_PLUS_PLUS;
	small_parse_table_4234(v);
}

void	small_parse_table_4234(t_small_parse_table_array *v)
{
	v->a[84680] = anon_sym_DASH_DASH;
	v->a[84681] = actions(4590);
	v->a[84682] = 2;
	v->a[84683] = anon_sym_DASH2;
	v->a[84684] = anon_sym_PLUS2;
	v->a[84685] = state(1505);
	v->a[84686] = 8;
	v->a[84687] = sym__arithmetic_expression;
	v->a[84688] = sym__arithmetic_literal;
	v->a[84689] = sym__arithmetic_parenthesized_expression;
	v->a[84690] = sym_string;
	v->a[84691] = sym_number;
	v->a[84692] = sym_simple_expansion;
	v->a[84693] = sym_expansion;
	v->a[84694] = sym_command_substitution;
	v->a[84695] = 21;
	v->a[84696] = actions(57);
	v->a[84697] = 1;
	v->a[84698] = sym_comment;
	v->a[84699] = actions(4328);
	small_parse_table_4235(v);
}

/* EOF small_parse_table_846.c */
