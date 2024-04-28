/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1168.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5840(t_small_parse_table_array *v)
{
	v->a[116800] = actions(1103);
	v->a[116801] = 1;
	v->a[116802] = anon_sym_TILDE;
	v->a[116803] = actions(5809);
	v->a[116804] = 1;
	v->a[116805] = anon_sym_BQUOTE;
	v->a[116806] = actions(5916);
	v->a[116807] = 1;
	v->a[116808] = sym__special_character;
	v->a[116809] = actions(6409);
	v->a[116810] = 1;
	v->a[116811] = sym_word;
	v->a[116812] = actions(6413);
	v->a[116813] = 1;
	v->a[116814] = sym_test_operator;
	v->a[116815] = state(2552);
	v->a[116816] = 1;
	v->a[116817] = aux_sym__literal_repeat1;
	v->a[116818] = state(3397);
	v->a[116819] = 1;
	small_parse_table_5841(v);
}

void	small_parse_table_5841(t_small_parse_table_array *v)
{
	v->a[116820] = sym__expression;
	v->a[116821] = actions(352);
	v->a[116822] = 2;
	v->a[116823] = anon_sym_LPAREN_LPAREN;
	v->a[116824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116825] = actions(387);
	v->a[116826] = 2;
	v->a[116827] = anon_sym_LT_LPAREN;
	v->a[116828] = anon_sym_GT_LPAREN;
	v->a[116829] = actions(1099);
	v->a[116830] = 2;
	v->a[116831] = anon_sym_PLUS_PLUS2;
	v->a[116832] = anon_sym_DASH_DASH2;
	v->a[116833] = actions(1101);
	v->a[116834] = 2;
	v->a[116835] = anon_sym_DASH2;
	v->a[116836] = anon_sym_PLUS2;
	v->a[116837] = actions(6411);
	v->a[116838] = 2;
	v->a[116839] = sym_raw_string;
	small_parse_table_5842(v);
}

void	small_parse_table_5842(t_small_parse_table_array *v)
{
	v->a[116840] = sym_ansi_c_string;
	v->a[116841] = state(2594);
	v->a[116842] = 2;
	v->a[116843] = sym_ternary_expression;
	v->a[116844] = sym_postfix_expression;
	v->a[116845] = state(2808);
	v->a[116846] = 4;
	v->a[116847] = sym_binary_expression;
	v->a[116848] = sym_unary_expression;
	v->a[116849] = sym_parenthesized_expression;
	v->a[116850] = sym_concatenation;
	v->a[116851] = state(2549);
	v->a[116852] = 9;
	v->a[116853] = sym_arithmetic_expansion;
	v->a[116854] = sym_brace_expression;
	v->a[116855] = sym_string;
	v->a[116856] = sym_translated_string;
	v->a[116857] = sym_number;
	v->a[116858] = sym_simple_expansion;
	v->a[116859] = sym_expansion;
	small_parse_table_5843(v);
}

void	small_parse_table_5843(t_small_parse_table_array *v)
{
	v->a[116860] = sym_command_substitution;
	v->a[116861] = sym_process_substitution;
	v->a[116862] = 26;
	v->a[116863] = actions(71);
	v->a[116864] = 1;
	v->a[116865] = sym_comment;
	v->a[116866] = actions(107);
	v->a[116867] = 1;
	v->a[116868] = anon_sym_TILDE;
	v->a[116869] = actions(237);
	v->a[116870] = 1;
	v->a[116871] = sym_word;
	v->a[116872] = actions(248);
	v->a[116873] = 1;
	v->a[116874] = anon_sym_LPAREN;
	v->a[116875] = actions(250);
	v->a[116876] = 1;
	v->a[116877] = anon_sym_BANG;
	v->a[116878] = actions(258);
	v->a[116879] = 1;
	small_parse_table_5844(v);
}

void	small_parse_table_5844(t_small_parse_table_array *v)
{
	v->a[116880] = anon_sym_DOLLAR;
	v->a[116881] = actions(264);
	v->a[116882] = 1;
	v->a[116883] = aux_sym_number_token1;
	v->a[116884] = actions(266);
	v->a[116885] = 1;
	v->a[116886] = aux_sym_number_token2;
	v->a[116887] = actions(270);
	v->a[116888] = 1;
	v->a[116889] = anon_sym_DOLLAR_LPAREN;
	v->a[116890] = actions(282);
	v->a[116891] = 1;
	v->a[116892] = sym_test_operator;
	v->a[116893] = actions(284);
	v->a[116894] = 1;
	v->a[116895] = sym__brace_start;
	v->a[116896] = actions(1075);
	v->a[116897] = 1;
	v->a[116898] = anon_sym_DOLLAR_LBRACK;
	v->a[116899] = actions(1079);
	small_parse_table_5845(v);
}

/* EOF small_parse_table_1168.c */
