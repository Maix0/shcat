/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2108.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10540(t_small_parse_table_array *v)
{
	v->a[210800] = actions(10006);
	v->a[210801] = 1;
	v->a[210802] = anon_sym_DOLLAR;
	v->a[210803] = actions(5403);
	v->a[210804] = 2;
	v->a[210805] = anon_sym_LPAREN_LPAREN;
	v->a[210806] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210807] = actions(5427);
	v->a[210808] = 2;
	v->a[210809] = anon_sym_LT_LPAREN;
	v->a[210810] = anon_sym_GT_LPAREN;
	v->a[210811] = actions(9962);
	v->a[210812] = 2;
	v->a[210813] = sym_test_operator;
	v->a[210814] = sym__special_character;
	v->a[210815] = actions(9964);
	v->a[210816] = 3;
	v->a[210817] = sym__bare_dollar;
	v->a[210818] = sym_raw_string;
	v->a[210819] = sym_ansi_c_string;
	small_parse_table_10541(v);
}

void	small_parse_table_10541(t_small_parse_table_array *v)
{
	v->a[210820] = state(5541);
	v->a[210821] = 9;
	v->a[210822] = sym_arithmetic_expansion;
	v->a[210823] = sym_brace_expression;
	v->a[210824] = sym_string;
	v->a[210825] = sym_translated_string;
	v->a[210826] = sym_number;
	v->a[210827] = sym_simple_expansion;
	v->a[210828] = sym_expansion;
	v->a[210829] = sym_command_substitution;
	v->a[210830] = sym_process_substitution;
	v->a[210831] = 21;
	v->a[210832] = actions(71);
	v->a[210833] = 1;
	v->a[210834] = sym_comment;
	v->a[210835] = actions(9364);
	v->a[210836] = 1;
	v->a[210837] = anon_sym_LPAREN;
	v->a[210838] = actions(9366);
	v->a[210839] = 1;
	small_parse_table_10542(v);
}

void	small_parse_table_10542(t_small_parse_table_array *v)
{
	v->a[210840] = anon_sym_BANG;
	v->a[210841] = actions(9372);
	v->a[210842] = 1;
	v->a[210843] = anon_sym_TILDE;
	v->a[210844] = actions(9374);
	v->a[210845] = 1;
	v->a[210846] = anon_sym_DOLLAR;
	v->a[210847] = actions(9376);
	v->a[210848] = 1;
	v->a[210849] = anon_sym_DQUOTE;
	v->a[210850] = actions(9378);
	v->a[210851] = 1;
	v->a[210852] = aux_sym_number_token1;
	v->a[210853] = actions(9380);
	v->a[210854] = 1;
	v->a[210855] = aux_sym_number_token2;
	v->a[210856] = actions(9382);
	v->a[210857] = 1;
	v->a[210858] = anon_sym_DOLLAR_LBRACE;
	v->a[210859] = actions(9384);
	small_parse_table_10543(v);
}

void	small_parse_table_10543(t_small_parse_table_array *v)
{
	v->a[210860] = 1;
	v->a[210861] = anon_sym_DOLLAR_LPAREN;
	v->a[210862] = actions(9386);
	v->a[210863] = 1;
	v->a[210864] = anon_sym_BQUOTE;
	v->a[210865] = actions(9388);
	v->a[210866] = 1;
	v->a[210867] = anon_sym_DOLLAR_BQUOTE;
	v->a[210868] = actions(9392);
	v->a[210869] = 1;
	v->a[210870] = sym_variable_name;
	v->a[210871] = actions(10008);
	v->a[210872] = 1;
	v->a[210873] = aux_sym__simple_variable_name_token1;
	v->a[210874] = state(3391);
	v->a[210875] = 1;
	v->a[210876] = sym__arithmetic_binary_expression;
	v->a[210877] = state(3396);
	v->a[210878] = 1;
	v->a[210879] = sym__arithmetic_ternary_expression;
	small_parse_table_10544(v);
}

void	small_parse_table_10544(t_small_parse_table_array *v)
{
	v->a[210880] = state(3398);
	v->a[210881] = 1;
	v->a[210882] = sym__arithmetic_unary_expression;
	v->a[210883] = state(3400);
	v->a[210884] = 1;
	v->a[210885] = sym__arithmetic_postfix_expression;
	v->a[210886] = actions(9368);
	v->a[210887] = 2;
	v->a[210888] = anon_sym_PLUS_PLUS2;
	v->a[210889] = anon_sym_DASH_DASH2;
	v->a[210890] = actions(9370);
	v->a[210891] = 2;
	v->a[210892] = anon_sym_DASH2;
	v->a[210893] = anon_sym_PLUS2;
	v->a[210894] = state(3366);
	v->a[210895] = 9;
	v->a[210896] = sym_subscript;
	v->a[210897] = sym__arithmetic_expression;
	v->a[210898] = sym__arithmetic_literal;
	v->a[210899] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10545(v);
}

/* EOF small_parse_table_2108.c */
