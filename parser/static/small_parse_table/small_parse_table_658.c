/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_658.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3290(t_small_parse_table_array *v)
{
	v->a[65800] = 1;
	v->a[65801] = anon_sym_TILDE;
	v->a[65802] = actions(2013);
	v->a[65803] = 1;
	v->a[65804] = anon_sym_DOLLAR;
	v->a[65805] = actions(2015);
	v->a[65806] = 1;
	v->a[65807] = anon_sym_DQUOTE;
	v->a[65808] = actions(2019);
	v->a[65809] = 1;
	v->a[65810] = anon_sym_DOLLAR_LBRACE;
	v->a[65811] = actions(2021);
	v->a[65812] = 1;
	v->a[65813] = anon_sym_DOLLAR_LPAREN;
	v->a[65814] = actions(2023);
	v->a[65815] = 1;
	v->a[65816] = anon_sym_BQUOTE;
	v->a[65817] = actions(2025);
	v->a[65818] = 1;
	v->a[65819] = sym_variable_name;
	small_parse_table_3291(v);
}

void	small_parse_table_3291(t_small_parse_table_array *v)
{
	v->a[65820] = actions(2007);
	v->a[65821] = 2;
	v->a[65822] = anon_sym_PLUS_PLUS;
	v->a[65823] = anon_sym_DASH_DASH;
	v->a[65824] = actions(2009);
	v->a[65825] = 2;
	v->a[65826] = anon_sym_DASH2;
	v->a[65827] = anon_sym_PLUS2;
	v->a[65828] = actions(2017);
	v->a[65829] = 2;
	v->a[65830] = sym_number;
	v->a[65831] = aux_sym__simple_variable_name_token1;
	v->a[65832] = state(503);
	v->a[65833] = 3;
	v->a[65834] = sym_string;
	v->a[65835] = sym_simple_expansion;
	v->a[65836] = sym_expansion;
	v->a[65837] = state(592);
	v->a[65838] = 8;
	v->a[65839] = sym__arithmetic_expression;
	small_parse_table_3292(v);
}

void	small_parse_table_3292(t_small_parse_table_array *v)
{
	v->a[65840] = sym_arithmetic_literal;
	v->a[65841] = sym_arithmetic_binary_expression;
	v->a[65842] = sym_arithmetic_ternary_expression;
	v->a[65843] = sym_arithmetic_unary_expression;
	v->a[65844] = sym_arithmetic_postfix_expression;
	v->a[65845] = sym_arithmetic_parenthesized_expression;
	v->a[65846] = sym_command_substitution;
	v->a[65847] = 15;
	v->a[65848] = actions(1094);
	v->a[65849] = 1;
	v->a[65850] = sym_comment;
	v->a[65851] = actions(1869);
	v->a[65852] = 1;
	v->a[65853] = anon_sym_LPAREN;
	v->a[65854] = actions(1871);
	v->a[65855] = 1;
	v->a[65856] = anon_sym_BANG;
	v->a[65857] = actions(1879);
	v->a[65858] = 1;
	v->a[65859] = anon_sym_TILDE;
	small_parse_table_3293(v);
}

void	small_parse_table_3293(t_small_parse_table_array *v)
{
	v->a[65860] = actions(1881);
	v->a[65861] = 1;
	v->a[65862] = anon_sym_DOLLAR;
	v->a[65863] = actions(1883);
	v->a[65864] = 1;
	v->a[65865] = anon_sym_DQUOTE;
	v->a[65866] = actions(1887);
	v->a[65867] = 1;
	v->a[65868] = anon_sym_DOLLAR_LBRACE;
	v->a[65869] = actions(1889);
	v->a[65870] = 1;
	v->a[65871] = anon_sym_DOLLAR_LPAREN;
	v->a[65872] = actions(1891);
	v->a[65873] = 1;
	v->a[65874] = anon_sym_BQUOTE;
	v->a[65875] = actions(1893);
	v->a[65876] = 1;
	v->a[65877] = sym_variable_name;
	v->a[65878] = actions(1875);
	v->a[65879] = 2;
	small_parse_table_3294(v);
}

void	small_parse_table_3294(t_small_parse_table_array *v)
{
	v->a[65880] = anon_sym_PLUS_PLUS;
	v->a[65881] = anon_sym_DASH_DASH;
	v->a[65882] = actions(1877);
	v->a[65883] = 2;
	v->a[65884] = anon_sym_DASH2;
	v->a[65885] = anon_sym_PLUS2;
	v->a[65886] = actions(1885);
	v->a[65887] = 2;
	v->a[65888] = sym_number;
	v->a[65889] = aux_sym__simple_variable_name_token1;
	v->a[65890] = state(365);
	v->a[65891] = 3;
	v->a[65892] = sym_string;
	v->a[65893] = sym_simple_expansion;
	v->a[65894] = sym_expansion;
	v->a[65895] = state(402);
	v->a[65896] = 8;
	v->a[65897] = sym__arithmetic_expression;
	v->a[65898] = sym_arithmetic_literal;
	v->a[65899] = sym_arithmetic_binary_expression;
	small_parse_table_3295(v);
}

/* EOF small_parse_table_658.c */
