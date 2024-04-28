/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2348.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11740(t_small_parse_table_array *v)
{
	v->a[234800] = 1;
	v->a[234801] = aux_sym_number_token2;
	v->a[234802] = actions(9382);
	v->a[234803] = 1;
	v->a[234804] = anon_sym_DOLLAR_LBRACE;
	v->a[234805] = actions(9384);
	v->a[234806] = 1;
	v->a[234807] = anon_sym_DOLLAR_LPAREN;
	v->a[234808] = actions(9386);
	v->a[234809] = 1;
	v->a[234810] = anon_sym_BQUOTE;
	v->a[234811] = actions(9388);
	v->a[234812] = 1;
	v->a[234813] = anon_sym_DOLLAR_BQUOTE;
	v->a[234814] = actions(9392);
	v->a[234815] = 1;
	v->a[234816] = sym_variable_name;
	v->a[234817] = actions(11072);
	v->a[234818] = 1;
	v->a[234819] = aux_sym__simple_variable_name_token1;
	small_parse_table_11741(v);
}

void	small_parse_table_11741(t_small_parse_table_array *v)
{
	v->a[234820] = state(3391);
	v->a[234821] = 1;
	v->a[234822] = sym__arithmetic_binary_expression;
	v->a[234823] = state(3396);
	v->a[234824] = 1;
	v->a[234825] = sym__arithmetic_ternary_expression;
	v->a[234826] = state(3398);
	v->a[234827] = 1;
	v->a[234828] = sym__arithmetic_unary_expression;
	v->a[234829] = state(3400);
	v->a[234830] = 1;
	v->a[234831] = sym__arithmetic_postfix_expression;
	v->a[234832] = actions(9368);
	v->a[234833] = 2;
	v->a[234834] = anon_sym_PLUS_PLUS2;
	v->a[234835] = anon_sym_DASH_DASH2;
	v->a[234836] = actions(9370);
	v->a[234837] = 2;
	v->a[234838] = anon_sym_DASH2;
	v->a[234839] = anon_sym_PLUS2;
	small_parse_table_11742(v);
}

void	small_parse_table_11742(t_small_parse_table_array *v)
{
	v->a[234840] = state(3409);
	v->a[234841] = 9;
	v->a[234842] = sym_subscript;
	v->a[234843] = sym__arithmetic_expression;
	v->a[234844] = sym__arithmetic_literal;
	v->a[234845] = sym__arithmetic_parenthesized_expression;
	v->a[234846] = sym_string;
	v->a[234847] = sym_number;
	v->a[234848] = sym_simple_expansion;
	v->a[234849] = sym_expansion;
	v->a[234850] = sym_command_substitution;
	v->a[234851] = 20;
	v->a[234852] = actions(71);
	v->a[234853] = 1;
	v->a[234854] = sym_comment;
	v->a[234855] = actions(1551);
	v->a[234856] = 1;
	v->a[234857] = anon_sym_DOLLAR;
	v->a[234858] = actions(1557);
	v->a[234859] = 1;
	small_parse_table_11743(v);
}

void	small_parse_table_11743(t_small_parse_table_array *v)
{
	v->a[234860] = aux_sym_number_token1;
	v->a[234861] = actions(1559);
	v->a[234862] = 1;
	v->a[234863] = aux_sym_number_token2;
	v->a[234864] = actions(1563);
	v->a[234865] = 1;
	v->a[234866] = anon_sym_DOLLAR_LPAREN;
	v->a[234867] = actions(1575);
	v->a[234868] = 1;
	v->a[234869] = sym__brace_start;
	v->a[234870] = actions(9198);
	v->a[234871] = 1;
	v->a[234872] = anon_sym_DOLLAR_LBRACK;
	v->a[234873] = actions(9202);
	v->a[234874] = 1;
	v->a[234875] = anon_sym_DQUOTE;
	v->a[234876] = actions(9206);
	v->a[234877] = 1;
	v->a[234878] = anon_sym_DOLLAR_LBRACE;
	v->a[234879] = actions(9208);
	small_parse_table_11744(v);
}

void	small_parse_table_11744(t_small_parse_table_array *v)
{
	v->a[234880] = 1;
	v->a[234881] = anon_sym_BQUOTE;
	v->a[234882] = actions(9210);
	v->a[234883] = 1;
	v->a[234884] = anon_sym_DOLLAR_BQUOTE;
	v->a[234885] = actions(9262);
	v->a[234886] = 1;
	v->a[234887] = sym__special_character;
	v->a[234888] = actions(11074);
	v->a[234889] = 1;
	v->a[234890] = sym_word;
	v->a[234891] = actions(11078);
	v->a[234892] = 1;
	v->a[234893] = sym_test_operator;
	v->a[234894] = state(1401);
	v->a[234895] = 1;
	v->a[234896] = aux_sym__literal_repeat1;
	v->a[234897] = state(1573);
	v->a[234898] = 1;
	v->a[234899] = sym_concatenation;
	small_parse_table_11745(v);
}

/* EOF small_parse_table_2348.c */
