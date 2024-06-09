/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_558.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2790(t_small_parse_table_array *v)
{
	v->a[55800] = aux_sym_number_token2;
	v->a[55801] = actions(1999);
	v->a[55802] = 1;
	v->a[55803] = anon_sym_DOLLAR_LBRACE;
	v->a[55804] = actions(2001);
	v->a[55805] = 1;
	v->a[55806] = anon_sym_DOLLAR_LPAREN;
	v->a[55807] = actions(2003);
	v->a[55808] = 1;
	v->a[55809] = anon_sym_BQUOTE;
	v->a[55810] = actions(2005);
	v->a[55811] = 1;
	v->a[55812] = aux_sym__simple_variable_name_token1;
	v->a[55813] = actions(2007);
	v->a[55814] = 1;
	v->a[55815] = sym_variable_name;
	v->a[55816] = actions(2061);
	v->a[55817] = 1;
	v->a[55818] = anon_sym_RPAREN_RPAREN;
	v->a[55819] = actions(1985);
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = 2;
	v->a[55821] = anon_sym_PLUS_PLUS;
	v->a[55822] = anon_sym_DASH_DASH;
	v->a[55823] = actions(1987);
	v->a[55824] = 2;
	v->a[55825] = anon_sym_DASH2;
	v->a[55826] = anon_sym_PLUS2;
	v->a[55827] = state(530);
	v->a[55828] = 4;
	v->a[55829] = sym_string;
	v->a[55830] = sym_number;
	v->a[55831] = sym_simple_expansion;
	v->a[55832] = sym_expansion;
	v->a[55833] = state(578);
	v->a[55834] = 8;
	v->a[55835] = sym__arithmetic_expression;
	v->a[55836] = sym_arithmetic_literal;
	v->a[55837] = sym_arithmetic_binary_expression;
	v->a[55838] = sym_arithmetic_ternary_expression;
	v->a[55839] = sym_arithmetic_unary_expression;
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = sym_arithmetic_postfix_expression;
	v->a[55841] = sym_arithmetic_parenthesized_expression;
	v->a[55842] = sym_command_substitution;
	v->a[55843] = 3;
	v->a[55844] = actions(3);
	v->a[55845] = 1;
	v->a[55846] = sym_comment;
	v->a[55847] = actions(1319);
	v->a[55848] = 3;
	v->a[55849] = sym_file_descriptor;
	v->a[55850] = sym__concat;
	v->a[55851] = sym_variable_name;
	v->a[55852] = actions(1317);
	v->a[55853] = 26;
	v->a[55854] = anon_sym_PIPE;
	v->a[55855] = anon_sym_AMP_AMP;
	v->a[55856] = anon_sym_PIPE_PIPE;
	v->a[55857] = anon_sym_LT;
	v->a[55858] = anon_sym_GT;
	v->a[55859] = anon_sym_GT_GT;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = anon_sym_AMP_GT;
	v->a[55861] = anon_sym_AMP_GT_GT;
	v->a[55862] = anon_sym_LT_AMP;
	v->a[55863] = anon_sym_GT_AMP;
	v->a[55864] = anon_sym_GT_PIPE;
	v->a[55865] = anon_sym_LT_AMP_DASH;
	v->a[55866] = anon_sym_GT_AMP_DASH;
	v->a[55867] = anon_sym_LT_LT;
	v->a[55868] = anon_sym_LT_LT_DASH;
	v->a[55869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55870] = aux_sym_concatenation_token1;
	v->a[55871] = anon_sym_DOLLAR;
	v->a[55872] = anon_sym_DQUOTE;
	v->a[55873] = sym_raw_string;
	v->a[55874] = aux_sym_number_token1;
	v->a[55875] = aux_sym_number_token2;
	v->a[55876] = anon_sym_DOLLAR_LBRACE;
	v->a[55877] = anon_sym_DOLLAR_LPAREN;
	v->a[55878] = anon_sym_BQUOTE;
	v->a[55879] = sym_word;
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = 18;
	v->a[55881] = actions(1404);
	v->a[55882] = 1;
	v->a[55883] = sym_comment;
	v->a[55884] = actions(1979);
	v->a[55885] = 1;
	v->a[55886] = anon_sym_LPAREN;
	v->a[55887] = actions(1981);
	v->a[55888] = 1;
	v->a[55889] = anon_sym_BANG;
	v->a[55890] = actions(1989);
	v->a[55891] = 1;
	v->a[55892] = anon_sym_TILDE;
	v->a[55893] = actions(1991);
	v->a[55894] = 1;
	v->a[55895] = anon_sym_DOLLAR;
	v->a[55896] = actions(1993);
	v->a[55897] = 1;
	v->a[55898] = anon_sym_DQUOTE;
	v->a[55899] = actions(1995);
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
