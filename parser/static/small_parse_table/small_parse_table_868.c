/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_868.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4340(t_small_parse_table_array *v)
{
	v->a[86800] = 2;
	v->a[86801] = sym_concatenation;
	v->a[86802] = sym__extglob_blob;
	v->a[86803] = state(3295);
	v->a[86804] = 7;
	v->a[86805] = sym_arithmetic_expansion;
	v->a[86806] = sym_brace_expression;
	v->a[86807] = sym_string;
	v->a[86808] = sym_number;
	v->a[86809] = sym_simple_expansion;
	v->a[86810] = sym_expansion;
	v->a[86811] = sym_command_substitution;
	v->a[86812] = 21;
	v->a[86813] = actions(57);
	v->a[86814] = 1;
	v->a[86815] = sym_comment;
	v->a[86816] = actions(4614);
	v->a[86817] = 1;
	v->a[86818] = anon_sym_LPAREN;
	v->a[86819] = actions(4616);
	small_parse_table_4341(v);
}

void	small_parse_table_4341(t_small_parse_table_array *v)
{
	v->a[86820] = 1;
	v->a[86821] = anon_sym_BANG;
	v->a[86822] = actions(4622);
	v->a[86823] = 1;
	v->a[86824] = anon_sym_TILDE;
	v->a[86825] = actions(4624);
	v->a[86826] = 1;
	v->a[86827] = anon_sym_DOLLAR;
	v->a[86828] = actions(4626);
	v->a[86829] = 1;
	v->a[86830] = anon_sym_DQUOTE;
	v->a[86831] = actions(4628);
	v->a[86832] = 1;
	v->a[86833] = aux_sym_number_token1;
	v->a[86834] = actions(4630);
	v->a[86835] = 1;
	v->a[86836] = aux_sym_number_token2;
	v->a[86837] = actions(4632);
	v->a[86838] = 1;
	v->a[86839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4342(v);
}

void	small_parse_table_4342(t_small_parse_table_array *v)
{
	v->a[86840] = actions(4634);
	v->a[86841] = 1;
	v->a[86842] = anon_sym_DOLLAR_LPAREN;
	v->a[86843] = actions(4636);
	v->a[86844] = 1;
	v->a[86845] = anon_sym_BQUOTE;
	v->a[86846] = actions(4638);
	v->a[86847] = 1;
	v->a[86848] = anon_sym_DOLLAR_BQUOTE;
	v->a[86849] = actions(4825);
	v->a[86850] = 1;
	v->a[86851] = aux_sym__simple_variable_name_token1;
	v->a[86852] = actions(4827);
	v->a[86853] = 1;
	v->a[86854] = sym_variable_name;
	v->a[86855] = state(1637);
	v->a[86856] = 1;
	v->a[86857] = sym__arithmetic_postfix_expression;
	v->a[86858] = state(1638);
	v->a[86859] = 1;
	small_parse_table_4343(v);
}

void	small_parse_table_4343(t_small_parse_table_array *v)
{
	v->a[86860] = sym__arithmetic_unary_expression;
	v->a[86861] = state(1640);
	v->a[86862] = 1;
	v->a[86863] = sym__arithmetic_ternary_expression;
	v->a[86864] = state(1642);
	v->a[86865] = 1;
	v->a[86866] = sym__arithmetic_binary_expression;
	v->a[86867] = actions(4618);
	v->a[86868] = 2;
	v->a[86869] = anon_sym_PLUS_PLUS;
	v->a[86870] = anon_sym_DASH_DASH;
	v->a[86871] = actions(4620);
	v->a[86872] = 2;
	v->a[86873] = anon_sym_DASH2;
	v->a[86874] = anon_sym_PLUS2;
	v->a[86875] = state(1671);
	v->a[86876] = 8;
	v->a[86877] = sym__arithmetic_expression;
	v->a[86878] = sym__arithmetic_literal;
	v->a[86879] = sym__arithmetic_parenthesized_expression;
	small_parse_table_4344(v);
}

void	small_parse_table_4344(t_small_parse_table_array *v)
{
	v->a[86880] = sym_string;
	v->a[86881] = sym_number;
	v->a[86882] = sym_simple_expansion;
	v->a[86883] = sym_expansion;
	v->a[86884] = sym_command_substitution;
	v->a[86885] = 21;
	v->a[86886] = actions(57);
	v->a[86887] = 1;
	v->a[86888] = sym_comment;
	v->a[86889] = actions(4584);
	v->a[86890] = 1;
	v->a[86891] = anon_sym_LPAREN;
	v->a[86892] = actions(4586);
	v->a[86893] = 1;
	v->a[86894] = anon_sym_BANG;
	v->a[86895] = actions(4592);
	v->a[86896] = 1;
	v->a[86897] = anon_sym_TILDE;
	v->a[86898] = actions(4594);
	v->a[86899] = 1;
	small_parse_table_4345(v);
}

/* EOF small_parse_table_868.c */
