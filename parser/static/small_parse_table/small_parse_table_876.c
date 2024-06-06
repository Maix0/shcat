/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_876.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4380(t_small_parse_table_array *v)
{
	v->a[87600] = state(1490);
	v->a[87601] = 1;
	v->a[87602] = sym__arithmetic_ternary_expression;
	v->a[87603] = state(1511);
	v->a[87604] = 1;
	v->a[87605] = sym__arithmetic_binary_expression;
	v->a[87606] = actions(4588);
	v->a[87607] = 2;
	v->a[87608] = anon_sym_PLUS_PLUS;
	v->a[87609] = anon_sym_DASH_DASH;
	v->a[87610] = actions(4590);
	v->a[87611] = 2;
	v->a[87612] = anon_sym_DASH2;
	v->a[87613] = anon_sym_PLUS2;
	v->a[87614] = state(1407);
	v->a[87615] = 8;
	v->a[87616] = sym__arithmetic_expression;
	v->a[87617] = sym__arithmetic_literal;
	v->a[87618] = sym__arithmetic_parenthesized_expression;
	v->a[87619] = sym_string;
	small_parse_table_4381(v);
}

void	small_parse_table_4381(t_small_parse_table_array *v)
{
	v->a[87620] = sym_number;
	v->a[87621] = sym_simple_expansion;
	v->a[87622] = sym_expansion;
	v->a[87623] = sym_command_substitution;
	v->a[87624] = 21;
	v->a[87625] = actions(57);
	v->a[87626] = 1;
	v->a[87627] = sym_comment;
	v->a[87628] = actions(4614);
	v->a[87629] = 1;
	v->a[87630] = anon_sym_LPAREN;
	v->a[87631] = actions(4616);
	v->a[87632] = 1;
	v->a[87633] = anon_sym_BANG;
	v->a[87634] = actions(4622);
	v->a[87635] = 1;
	v->a[87636] = anon_sym_TILDE;
	v->a[87637] = actions(4624);
	v->a[87638] = 1;
	v->a[87639] = anon_sym_DOLLAR;
	small_parse_table_4382(v);
}

void	small_parse_table_4382(t_small_parse_table_array *v)
{
	v->a[87640] = actions(4626);
	v->a[87641] = 1;
	v->a[87642] = anon_sym_DQUOTE;
	v->a[87643] = actions(4628);
	v->a[87644] = 1;
	v->a[87645] = aux_sym_number_token1;
	v->a[87646] = actions(4630);
	v->a[87647] = 1;
	v->a[87648] = aux_sym_number_token2;
	v->a[87649] = actions(4632);
	v->a[87650] = 1;
	v->a[87651] = anon_sym_DOLLAR_LBRACE;
	v->a[87652] = actions(4634);
	v->a[87653] = 1;
	v->a[87654] = anon_sym_DOLLAR_LPAREN;
	v->a[87655] = actions(4636);
	v->a[87656] = 1;
	v->a[87657] = anon_sym_BQUOTE;
	v->a[87658] = actions(4638);
	v->a[87659] = 1;
	small_parse_table_4383(v);
}

void	small_parse_table_4383(t_small_parse_table_array *v)
{
	v->a[87660] = anon_sym_DOLLAR_BQUOTE;
	v->a[87661] = actions(4861);
	v->a[87662] = 1;
	v->a[87663] = aux_sym__simple_variable_name_token1;
	v->a[87664] = actions(4863);
	v->a[87665] = 1;
	v->a[87666] = sym_variable_name;
	v->a[87667] = state(1637);
	v->a[87668] = 1;
	v->a[87669] = sym__arithmetic_postfix_expression;
	v->a[87670] = state(1638);
	v->a[87671] = 1;
	v->a[87672] = sym__arithmetic_unary_expression;
	v->a[87673] = state(1640);
	v->a[87674] = 1;
	v->a[87675] = sym__arithmetic_ternary_expression;
	v->a[87676] = state(1642);
	v->a[87677] = 1;
	v->a[87678] = sym__arithmetic_binary_expression;
	v->a[87679] = actions(4618);
	small_parse_table_4384(v);
}

void	small_parse_table_4384(t_small_parse_table_array *v)
{
	v->a[87680] = 2;
	v->a[87681] = anon_sym_PLUS_PLUS;
	v->a[87682] = anon_sym_DASH_DASH;
	v->a[87683] = actions(4620);
	v->a[87684] = 2;
	v->a[87685] = anon_sym_DASH2;
	v->a[87686] = anon_sym_PLUS2;
	v->a[87687] = state(1673);
	v->a[87688] = 8;
	v->a[87689] = sym__arithmetic_expression;
	v->a[87690] = sym__arithmetic_literal;
	v->a[87691] = sym__arithmetic_parenthesized_expression;
	v->a[87692] = sym_string;
	v->a[87693] = sym_number;
	v->a[87694] = sym_simple_expansion;
	v->a[87695] = sym_expansion;
	v->a[87696] = sym_command_substitution;
	v->a[87697] = 21;
	v->a[87698] = actions(57);
	v->a[87699] = 1;
	small_parse_table_4385(v);
}

/* EOF small_parse_table_876.c */
