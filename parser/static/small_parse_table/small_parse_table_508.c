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
	v->a[50800] = sym_comment;
	v->a[50801] = actions(1047);
	v->a[50802] = 1;
	v->a[50803] = sym_file_descriptor;
	v->a[50804] = actions(1315);
	v->a[50805] = 1;
	v->a[50806] = aux_sym_concatenation_token1;
	v->a[50807] = actions(1772);
	v->a[50808] = 1;
	v->a[50809] = sym__concat;
	v->a[50810] = state(476);
	v->a[50811] = 1;
	v->a[50812] = aux_sym_concatenation_repeat1;
	v->a[50813] = actions(1043);
	v->a[50814] = 22;
	v->a[50815] = anon_sym_PIPE;
	v->a[50816] = anon_sym_AMP_AMP;
	v->a[50817] = anon_sym_PIPE_PIPE;
	v->a[50818] = anon_sym_LT;
	v->a[50819] = anon_sym_GT;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_GT_GT;
	v->a[50821] = anon_sym_LT_AMP;
	v->a[50822] = anon_sym_GT_AMP;
	v->a[50823] = anon_sym_GT_PIPE;
	v->a[50824] = anon_sym_LT_GT;
	v->a[50825] = anon_sym_LT_LT;
	v->a[50826] = anon_sym_LT_LT_DASH;
	v->a[50827] = aux_sym_heredoc_redirect_token1;
	v->a[50828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50829] = anon_sym_DOLLAR;
	v->a[50830] = anon_sym_DQUOTE;
	v->a[50831] = sym_raw_string;
	v->a[50832] = sym_number;
	v->a[50833] = anon_sym_DOLLAR_LBRACE;
	v->a[50834] = anon_sym_DOLLAR_LPAREN;
	v->a[50835] = anon_sym_BQUOTE;
	v->a[50836] = sym_word;
	v->a[50837] = 15;
	v->a[50838] = actions(664);
	v->a[50839] = 1;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = sym_comment;
	v->a[50841] = actions(1560);
	v->a[50842] = 1;
	v->a[50843] = anon_sym_LPAREN;
	v->a[50844] = actions(1562);
	v->a[50845] = 1;
	v->a[50846] = anon_sym_BANG;
	v->a[50847] = actions(1570);
	v->a[50848] = 1;
	v->a[50849] = anon_sym_TILDE;
	v->a[50850] = actions(1572);
	v->a[50851] = 1;
	v->a[50852] = anon_sym_DOLLAR;
	v->a[50853] = actions(1574);
	v->a[50854] = 1;
	v->a[50855] = anon_sym_DQUOTE;
	v->a[50856] = actions(1578);
	v->a[50857] = 1;
	v->a[50858] = anon_sym_DOLLAR_LBRACE;
	v->a[50859] = actions(1580);
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = 1;
	v->a[50861] = anon_sym_DOLLAR_LPAREN;
	v->a[50862] = actions(1582);
	v->a[50863] = 1;
	v->a[50864] = anon_sym_BQUOTE;
	v->a[50865] = actions(1584);
	v->a[50866] = 1;
	v->a[50867] = sym_variable_name;
	v->a[50868] = actions(1566);
	v->a[50869] = 2;
	v->a[50870] = anon_sym_PLUS_PLUS;
	v->a[50871] = anon_sym_DASH_DASH;
	v->a[50872] = actions(1568);
	v->a[50873] = 2;
	v->a[50874] = anon_sym_DASH2;
	v->a[50875] = anon_sym_PLUS2;
	v->a[50876] = actions(1576);
	v->a[50877] = 2;
	v->a[50878] = sym_number;
	v->a[50879] = aux_sym__simple_variable_name_token1;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = state(255);
	v->a[50881] = 3;
	v->a[50882] = sym_string;
	v->a[50883] = sym_simple_expansion;
	v->a[50884] = sym_expansion;
	v->a[50885] = state(221);
	v->a[50886] = 8;
	v->a[50887] = sym__arithmetic_expression;
	v->a[50888] = sym_arithmetic_literal;
	v->a[50889] = sym_arithmetic_binary_expression;
	v->a[50890] = sym_arithmetic_ternary_expression;
	v->a[50891] = sym_arithmetic_unary_expression;
	v->a[50892] = sym_arithmetic_postfix_expression;
	v->a[50893] = sym_arithmetic_parenthesized_expression;
	v->a[50894] = sym_command_substitution;
	v->a[50895] = 3;
	v->a[50896] = actions(3);
	v->a[50897] = 1;
	v->a[50898] = sym_comment;
	v->a[50899] = actions(1201);
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
