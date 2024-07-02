/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_478.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2390(t_small_parse_table_array *v)
{
	v->a[47800] = 1;
	v->a[47801] = anon_sym_TILDE;
	v->a[47802] = actions(1740);
	v->a[47803] = 1;
	v->a[47804] = anon_sym_DOLLAR;
	v->a[47805] = actions(1742);
	v->a[47806] = 1;
	v->a[47807] = anon_sym_DQUOTE;
	v->a[47808] = actions(1746);
	v->a[47809] = 1;
	v->a[47810] = anon_sym_DOLLAR_LBRACE;
	v->a[47811] = actions(1748);
	v->a[47812] = 1;
	v->a[47813] = anon_sym_DOLLAR_LPAREN;
	v->a[47814] = actions(1750);
	v->a[47815] = 1;
	v->a[47816] = anon_sym_BQUOTE;
	v->a[47817] = actions(1752);
	v->a[47818] = 1;
	v->a[47819] = sym_variable_name;
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = actions(1734);
	v->a[47821] = 2;
	v->a[47822] = anon_sym_PLUS_PLUS;
	v->a[47823] = anon_sym_DASH_DASH;
	v->a[47824] = actions(1736);
	v->a[47825] = 2;
	v->a[47826] = anon_sym_DASH2;
	v->a[47827] = anon_sym_PLUS2;
	v->a[47828] = actions(1744);
	v->a[47829] = 2;
	v->a[47830] = sym_number;
	v->a[47831] = aux_sym__simple_variable_name_token1;
	v->a[47832] = state(264);
	v->a[47833] = 3;
	v->a[47834] = sym_string;
	v->a[47835] = sym_simple_expansion;
	v->a[47836] = sym_expansion;
	v->a[47837] = state(309);
	v->a[47838] = 8;
	v->a[47839] = sym__arithmetic_expression;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = sym_arithmetic_literal;
	v->a[47841] = sym_arithmetic_binary_expression;
	v->a[47842] = sym_arithmetic_ternary_expression;
	v->a[47843] = sym_arithmetic_unary_expression;
	v->a[47844] = sym_arithmetic_postfix_expression;
	v->a[47845] = sym_arithmetic_parenthesized_expression;
	v->a[47846] = sym_command_substitution;
	v->a[47847] = 15;
	v->a[47848] = actions(680);
	v->a[47849] = 1;
	v->a[47850] = sym_comment;
	v->a[47851] = actions(1730);
	v->a[47852] = 1;
	v->a[47853] = anon_sym_LPAREN;
	v->a[47854] = actions(1732);
	v->a[47855] = 1;
	v->a[47856] = anon_sym_BANG;
	v->a[47857] = actions(1738);
	v->a[47858] = 1;
	v->a[47859] = anon_sym_TILDE;
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = actions(1740);
	v->a[47861] = 1;
	v->a[47862] = anon_sym_DOLLAR;
	v->a[47863] = actions(1742);
	v->a[47864] = 1;
	v->a[47865] = anon_sym_DQUOTE;
	v->a[47866] = actions(1746);
	v->a[47867] = 1;
	v->a[47868] = anon_sym_DOLLAR_LBRACE;
	v->a[47869] = actions(1748);
	v->a[47870] = 1;
	v->a[47871] = anon_sym_DOLLAR_LPAREN;
	v->a[47872] = actions(1750);
	v->a[47873] = 1;
	v->a[47874] = anon_sym_BQUOTE;
	v->a[47875] = actions(1752);
	v->a[47876] = 1;
	v->a[47877] = sym_variable_name;
	v->a[47878] = actions(1734);
	v->a[47879] = 2;
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = anon_sym_PLUS_PLUS;
	v->a[47881] = anon_sym_DASH_DASH;
	v->a[47882] = actions(1736);
	v->a[47883] = 2;
	v->a[47884] = anon_sym_DASH2;
	v->a[47885] = anon_sym_PLUS2;
	v->a[47886] = actions(1744);
	v->a[47887] = 2;
	v->a[47888] = sym_number;
	v->a[47889] = aux_sym__simple_variable_name_token1;
	v->a[47890] = state(264);
	v->a[47891] = 3;
	v->a[47892] = sym_string;
	v->a[47893] = sym_simple_expansion;
	v->a[47894] = sym_expansion;
	v->a[47895] = state(311);
	v->a[47896] = 8;
	v->a[47897] = sym__arithmetic_expression;
	v->a[47898] = sym_arithmetic_literal;
	v->a[47899] = sym_arithmetic_binary_expression;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
