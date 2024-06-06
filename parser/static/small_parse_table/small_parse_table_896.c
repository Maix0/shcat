/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_896.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4480(t_small_parse_table_array *v)
{
	v->a[89600] = actions(4594);
	v->a[89601] = 1;
	v->a[89602] = anon_sym_DOLLAR;
	v->a[89603] = actions(4596);
	v->a[89604] = 1;
	v->a[89605] = anon_sym_DQUOTE;
	v->a[89606] = actions(4598);
	v->a[89607] = 1;
	v->a[89608] = aux_sym_number_token1;
	v->a[89609] = actions(4600);
	v->a[89610] = 1;
	v->a[89611] = aux_sym_number_token2;
	v->a[89612] = actions(4602);
	v->a[89613] = 1;
	v->a[89614] = anon_sym_DOLLAR_LBRACE;
	v->a[89615] = actions(4604);
	v->a[89616] = 1;
	v->a[89617] = anon_sym_DOLLAR_LPAREN;
	v->a[89618] = actions(4606);
	v->a[89619] = 1;
	small_parse_table_4481(v);
}

void	small_parse_table_4481(t_small_parse_table_array *v)
{
	v->a[89620] = anon_sym_BQUOTE;
	v->a[89621] = actions(4608);
	v->a[89622] = 1;
	v->a[89623] = anon_sym_DOLLAR_BQUOTE;
	v->a[89624] = actions(4945);
	v->a[89625] = 1;
	v->a[89626] = aux_sym__simple_variable_name_token1;
	v->a[89627] = actions(4947);
	v->a[89628] = 1;
	v->a[89629] = sym_variable_name;
	v->a[89630] = state(1476);
	v->a[89631] = 1;
	v->a[89632] = sym__arithmetic_postfix_expression;
	v->a[89633] = state(1478);
	v->a[89634] = 1;
	v->a[89635] = sym__arithmetic_unary_expression;
	v->a[89636] = state(1490);
	v->a[89637] = 1;
	v->a[89638] = sym__arithmetic_ternary_expression;
	v->a[89639] = state(1511);
	small_parse_table_4482(v);
}

void	small_parse_table_4482(t_small_parse_table_array *v)
{
	v->a[89640] = 1;
	v->a[89641] = sym__arithmetic_binary_expression;
	v->a[89642] = actions(4588);
	v->a[89643] = 2;
	v->a[89644] = anon_sym_PLUS_PLUS;
	v->a[89645] = anon_sym_DASH_DASH;
	v->a[89646] = actions(4590);
	v->a[89647] = 2;
	v->a[89648] = anon_sym_DASH2;
	v->a[89649] = anon_sym_PLUS2;
	v->a[89650] = state(1429);
	v->a[89651] = 8;
	v->a[89652] = sym__arithmetic_expression;
	v->a[89653] = sym__arithmetic_literal;
	v->a[89654] = sym__arithmetic_parenthesized_expression;
	v->a[89655] = sym_string;
	v->a[89656] = sym_number;
	v->a[89657] = sym_simple_expansion;
	v->a[89658] = sym_expansion;
	v->a[89659] = sym_command_substitution;
	small_parse_table_4483(v);
}

void	small_parse_table_4483(t_small_parse_table_array *v)
{
	v->a[89660] = 21;
	v->a[89661] = actions(57);
	v->a[89662] = 1;
	v->a[89663] = sym_comment;
	v->a[89664] = actions(4584);
	v->a[89665] = 1;
	v->a[89666] = anon_sym_LPAREN;
	v->a[89667] = actions(4586);
	v->a[89668] = 1;
	v->a[89669] = anon_sym_BANG;
	v->a[89670] = actions(4592);
	v->a[89671] = 1;
	v->a[89672] = anon_sym_TILDE;
	v->a[89673] = actions(4594);
	v->a[89674] = 1;
	v->a[89675] = anon_sym_DOLLAR;
	v->a[89676] = actions(4596);
	v->a[89677] = 1;
	v->a[89678] = anon_sym_DQUOTE;
	v->a[89679] = actions(4598);
	small_parse_table_4484(v);
}

void	small_parse_table_4484(t_small_parse_table_array *v)
{
	v->a[89680] = 1;
	v->a[89681] = aux_sym_number_token1;
	v->a[89682] = actions(4600);
	v->a[89683] = 1;
	v->a[89684] = aux_sym_number_token2;
	v->a[89685] = actions(4602);
	v->a[89686] = 1;
	v->a[89687] = anon_sym_DOLLAR_LBRACE;
	v->a[89688] = actions(4604);
	v->a[89689] = 1;
	v->a[89690] = anon_sym_DOLLAR_LPAREN;
	v->a[89691] = actions(4606);
	v->a[89692] = 1;
	v->a[89693] = anon_sym_BQUOTE;
	v->a[89694] = actions(4608);
	v->a[89695] = 1;
	v->a[89696] = anon_sym_DOLLAR_BQUOTE;
	v->a[89697] = actions(4949);
	v->a[89698] = 1;
	v->a[89699] = aux_sym__simple_variable_name_token1;
	small_parse_table_4485(v);
}

/* EOF small_parse_table_896.c */
