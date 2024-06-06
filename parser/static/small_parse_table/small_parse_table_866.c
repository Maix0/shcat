/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_866.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4330(t_small_parse_table_array *v)
{
	v->a[86600] = actions(4586);
	v->a[86601] = 1;
	v->a[86602] = anon_sym_BANG;
	v->a[86603] = actions(4592);
	v->a[86604] = 1;
	v->a[86605] = anon_sym_TILDE;
	v->a[86606] = actions(4594);
	v->a[86607] = 1;
	v->a[86608] = anon_sym_DOLLAR;
	v->a[86609] = actions(4596);
	v->a[86610] = 1;
	v->a[86611] = anon_sym_DQUOTE;
	v->a[86612] = actions(4598);
	v->a[86613] = 1;
	v->a[86614] = aux_sym_number_token1;
	v->a[86615] = actions(4600);
	v->a[86616] = 1;
	v->a[86617] = aux_sym_number_token2;
	v->a[86618] = actions(4602);
	v->a[86619] = 1;
	small_parse_table_4331(v);
}

void	small_parse_table_4331(t_small_parse_table_array *v)
{
	v->a[86620] = anon_sym_DOLLAR_LBRACE;
	v->a[86621] = actions(4604);
	v->a[86622] = 1;
	v->a[86623] = anon_sym_DOLLAR_LPAREN;
	v->a[86624] = actions(4606);
	v->a[86625] = 1;
	v->a[86626] = anon_sym_BQUOTE;
	v->a[86627] = actions(4608);
	v->a[86628] = 1;
	v->a[86629] = anon_sym_DOLLAR_BQUOTE;
	v->a[86630] = actions(4817);
	v->a[86631] = 1;
	v->a[86632] = aux_sym__simple_variable_name_token1;
	v->a[86633] = actions(4819);
	v->a[86634] = 1;
	v->a[86635] = sym_variable_name;
	v->a[86636] = state(1476);
	v->a[86637] = 1;
	v->a[86638] = sym__arithmetic_postfix_expression;
	v->a[86639] = state(1478);
	small_parse_table_4332(v);
}

void	small_parse_table_4332(t_small_parse_table_array *v)
{
	v->a[86640] = 1;
	v->a[86641] = sym__arithmetic_unary_expression;
	v->a[86642] = state(1490);
	v->a[86643] = 1;
	v->a[86644] = sym__arithmetic_ternary_expression;
	v->a[86645] = state(1511);
	v->a[86646] = 1;
	v->a[86647] = sym__arithmetic_binary_expression;
	v->a[86648] = actions(4588);
	v->a[86649] = 2;
	v->a[86650] = anon_sym_PLUS_PLUS;
	v->a[86651] = anon_sym_DASH_DASH;
	v->a[86652] = actions(4590);
	v->a[86653] = 2;
	v->a[86654] = anon_sym_DASH2;
	v->a[86655] = anon_sym_PLUS2;
	v->a[86656] = state(1667);
	v->a[86657] = 8;
	v->a[86658] = sym__arithmetic_expression;
	v->a[86659] = sym__arithmetic_literal;
	small_parse_table_4333(v);
}

void	small_parse_table_4333(t_small_parse_table_array *v)
{
	v->a[86660] = sym__arithmetic_parenthesized_expression;
	v->a[86661] = sym_string;
	v->a[86662] = sym_number;
	v->a[86663] = sym_simple_expansion;
	v->a[86664] = sym_expansion;
	v->a[86665] = sym_command_substitution;
	v->a[86666] = 21;
	v->a[86667] = actions(57);
	v->a[86668] = 1;
	v->a[86669] = sym_comment;
	v->a[86670] = actions(4584);
	v->a[86671] = 1;
	v->a[86672] = anon_sym_LPAREN;
	v->a[86673] = actions(4586);
	v->a[86674] = 1;
	v->a[86675] = anon_sym_BANG;
	v->a[86676] = actions(4592);
	v->a[86677] = 1;
	v->a[86678] = anon_sym_TILDE;
	v->a[86679] = actions(4594);
	small_parse_table_4334(v);
}

void	small_parse_table_4334(t_small_parse_table_array *v)
{
	v->a[86680] = 1;
	v->a[86681] = anon_sym_DOLLAR;
	v->a[86682] = actions(4596);
	v->a[86683] = 1;
	v->a[86684] = anon_sym_DQUOTE;
	v->a[86685] = actions(4598);
	v->a[86686] = 1;
	v->a[86687] = aux_sym_number_token1;
	v->a[86688] = actions(4600);
	v->a[86689] = 1;
	v->a[86690] = aux_sym_number_token2;
	v->a[86691] = actions(4602);
	v->a[86692] = 1;
	v->a[86693] = anon_sym_DOLLAR_LBRACE;
	v->a[86694] = actions(4604);
	v->a[86695] = 1;
	v->a[86696] = anon_sym_DOLLAR_LPAREN;
	v->a[86697] = actions(4606);
	v->a[86698] = 1;
	v->a[86699] = anon_sym_BQUOTE;
	small_parse_table_4335(v);
}

/* EOF small_parse_table_866.c */
