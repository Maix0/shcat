/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_508.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2540(t_small_parse_table_array *v)
{
	v->a[50800] = anon_sym_for;
	v->a[50801] = anon_sym_while;
	v->a[50802] = anon_sym_until;
	v->a[50803] = anon_sym_if;
	v->a[50804] = anon_sym_case;
	v->a[50805] = anon_sym_LPAREN;
	v->a[50806] = anon_sym_LBRACE;
	v->a[50807] = anon_sym_BANG;
	v->a[50808] = anon_sym_LT;
	v->a[50809] = anon_sym_GT;
	v->a[50810] = anon_sym_GT_GT;
	v->a[50811] = anon_sym_LT_AMP;
	v->a[50812] = anon_sym_GT_AMP;
	v->a[50813] = anon_sym_GT_PIPE;
	v->a[50814] = anon_sym_LT_GT;
	v->a[50815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50816] = anon_sym_DOLLAR;
	v->a[50817] = anon_sym_DQUOTE;
	v->a[50818] = sym_raw_string;
	v->a[50819] = sym_number;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_DOLLAR_LBRACE;
	v->a[50821] = anon_sym_DOLLAR_LPAREN;
	v->a[50822] = sym_word;
	v->a[50823] = 15;
	v->a[50824] = actions(680);
	v->a[50825] = 1;
	v->a[50826] = sym_comment;
	v->a[50827] = actions(1730);
	v->a[50828] = 1;
	v->a[50829] = anon_sym_LPAREN;
	v->a[50830] = actions(1732);
	v->a[50831] = 1;
	v->a[50832] = anon_sym_BANG;
	v->a[50833] = actions(1738);
	v->a[50834] = 1;
	v->a[50835] = anon_sym_TILDE;
	v->a[50836] = actions(1740);
	v->a[50837] = 1;
	v->a[50838] = anon_sym_DOLLAR;
	v->a[50839] = actions(1742);
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = 1;
	v->a[50841] = anon_sym_DQUOTE;
	v->a[50842] = actions(1746);
	v->a[50843] = 1;
	v->a[50844] = anon_sym_DOLLAR_LBRACE;
	v->a[50845] = actions(1748);
	v->a[50846] = 1;
	v->a[50847] = anon_sym_DOLLAR_LPAREN;
	v->a[50848] = actions(1750);
	v->a[50849] = 1;
	v->a[50850] = anon_sym_BQUOTE;
	v->a[50851] = actions(1752);
	v->a[50852] = 1;
	v->a[50853] = sym_variable_name;
	v->a[50854] = actions(1734);
	v->a[50855] = 2;
	v->a[50856] = anon_sym_PLUS_PLUS;
	v->a[50857] = anon_sym_DASH_DASH;
	v->a[50858] = actions(1736);
	v->a[50859] = 2;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = anon_sym_DASH2;
	v->a[50861] = anon_sym_PLUS2;
	v->a[50862] = actions(1744);
	v->a[50863] = 2;
	v->a[50864] = sym_number;
	v->a[50865] = aux_sym__simple_variable_name_token1;
	v->a[50866] = state(264);
	v->a[50867] = 3;
	v->a[50868] = sym_string;
	v->a[50869] = sym_simple_expansion;
	v->a[50870] = sym_expansion;
	v->a[50871] = state(283);
	v->a[50872] = 8;
	v->a[50873] = sym__arithmetic_expression;
	v->a[50874] = sym_arithmetic_literal;
	v->a[50875] = sym_arithmetic_binary_expression;
	v->a[50876] = sym_arithmetic_ternary_expression;
	v->a[50877] = sym_arithmetic_unary_expression;
	v->a[50878] = sym_arithmetic_postfix_expression;
	v->a[50879] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = sym_command_substitution;
	v->a[50881] = 6;
	v->a[50882] = actions(3);
	v->a[50883] = 1;
	v->a[50884] = sym_comment;
	v->a[50885] = actions(1760);
	v->a[50886] = 1;
	v->a[50887] = aux_sym_concatenation_token1;
	v->a[50888] = actions(1772);
	v->a[50889] = 1;
	v->a[50890] = sym__concat;
	v->a[50891] = state(836);
	v->a[50892] = 1;
	v->a[50893] = aux_sym_concatenation_repeat1;
	v->a[50894] = actions(1043);
	v->a[50895] = 2;
	v->a[50896] = sym_file_descriptor;
	v->a[50897] = sym__bare_dollar;
	v->a[50898] = actions(1045);
	v->a[50899] = 21;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
