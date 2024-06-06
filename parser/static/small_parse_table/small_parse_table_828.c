/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_828.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4140(t_small_parse_table_array *v)
{
	v->a[82800] = anon_sym_DOLLAR_LBRACE;
	v->a[82801] = actions(4634);
	v->a[82802] = 1;
	v->a[82803] = anon_sym_DOLLAR_LPAREN;
	v->a[82804] = actions(4636);
	v->a[82805] = 1;
	v->a[82806] = anon_sym_BQUOTE;
	v->a[82807] = actions(4638);
	v->a[82808] = 1;
	v->a[82809] = anon_sym_DOLLAR_BQUOTE;
	v->a[82810] = actions(4656);
	v->a[82811] = 1;
	v->a[82812] = aux_sym__simple_variable_name_token1;
	v->a[82813] = actions(4658);
	v->a[82814] = 1;
	v->a[82815] = sym_variable_name;
	v->a[82816] = state(1637);
	v->a[82817] = 1;
	v->a[82818] = sym__arithmetic_postfix_expression;
	v->a[82819] = state(1638);
	small_parse_table_4141(v);
}

void	small_parse_table_4141(t_small_parse_table_array *v)
{
	v->a[82820] = 1;
	v->a[82821] = sym__arithmetic_unary_expression;
	v->a[82822] = state(1640);
	v->a[82823] = 1;
	v->a[82824] = sym__arithmetic_ternary_expression;
	v->a[82825] = state(1642);
	v->a[82826] = 1;
	v->a[82827] = sym__arithmetic_binary_expression;
	v->a[82828] = actions(4618);
	v->a[82829] = 2;
	v->a[82830] = anon_sym_PLUS_PLUS;
	v->a[82831] = anon_sym_DASH_DASH;
	v->a[82832] = actions(4620);
	v->a[82833] = 2;
	v->a[82834] = anon_sym_DASH2;
	v->a[82835] = anon_sym_PLUS2;
	v->a[82836] = state(1619);
	v->a[82837] = 8;
	v->a[82838] = sym__arithmetic_expression;
	v->a[82839] = sym__arithmetic_literal;
	small_parse_table_4142(v);
}

void	small_parse_table_4142(t_small_parse_table_array *v)
{
	v->a[82840] = sym__arithmetic_parenthesized_expression;
	v->a[82841] = sym_string;
	v->a[82842] = sym_number;
	v->a[82843] = sym_simple_expansion;
	v->a[82844] = sym_expansion;
	v->a[82845] = sym_command_substitution;
	v->a[82846] = 21;
	v->a[82847] = actions(57);
	v->a[82848] = 1;
	v->a[82849] = sym_comment;
	v->a[82850] = actions(4614);
	v->a[82851] = 1;
	v->a[82852] = anon_sym_LPAREN;
	v->a[82853] = actions(4616);
	v->a[82854] = 1;
	v->a[82855] = anon_sym_BANG;
	v->a[82856] = actions(4622);
	v->a[82857] = 1;
	v->a[82858] = anon_sym_TILDE;
	v->a[82859] = actions(4624);
	small_parse_table_4143(v);
}

void	small_parse_table_4143(t_small_parse_table_array *v)
{
	v->a[82860] = 1;
	v->a[82861] = anon_sym_DOLLAR;
	v->a[82862] = actions(4626);
	v->a[82863] = 1;
	v->a[82864] = anon_sym_DQUOTE;
	v->a[82865] = actions(4628);
	v->a[82866] = 1;
	v->a[82867] = aux_sym_number_token1;
	v->a[82868] = actions(4630);
	v->a[82869] = 1;
	v->a[82870] = aux_sym_number_token2;
	v->a[82871] = actions(4632);
	v->a[82872] = 1;
	v->a[82873] = anon_sym_DOLLAR_LBRACE;
	v->a[82874] = actions(4634);
	v->a[82875] = 1;
	v->a[82876] = anon_sym_DOLLAR_LPAREN;
	v->a[82877] = actions(4636);
	v->a[82878] = 1;
	v->a[82879] = anon_sym_BQUOTE;
	small_parse_table_4144(v);
}

void	small_parse_table_4144(t_small_parse_table_array *v)
{
	v->a[82880] = actions(4638);
	v->a[82881] = 1;
	v->a[82882] = anon_sym_DOLLAR_BQUOTE;
	v->a[82883] = actions(4660);
	v->a[82884] = 1;
	v->a[82885] = aux_sym__simple_variable_name_token1;
	v->a[82886] = actions(4662);
	v->a[82887] = 1;
	v->a[82888] = sym_variable_name;
	v->a[82889] = state(1637);
	v->a[82890] = 1;
	v->a[82891] = sym__arithmetic_postfix_expression;
	v->a[82892] = state(1638);
	v->a[82893] = 1;
	v->a[82894] = sym__arithmetic_unary_expression;
	v->a[82895] = state(1640);
	v->a[82896] = 1;
	v->a[82897] = sym__arithmetic_ternary_expression;
	v->a[82898] = state(1642);
	v->a[82899] = 1;
	small_parse_table_4145(v);
}

/* EOF small_parse_table_828.c */
