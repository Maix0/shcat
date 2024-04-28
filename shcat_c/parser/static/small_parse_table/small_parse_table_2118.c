/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2118.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10590(t_small_parse_table_array *v)
{
	v->a[211800] = 1;
	v->a[211801] = aux_sym__simple_variable_name_token1;
	v->a[211802] = state(3391);
	v->a[211803] = 1;
	v->a[211804] = sym__arithmetic_binary_expression;
	v->a[211805] = state(3396);
	v->a[211806] = 1;
	v->a[211807] = sym__arithmetic_ternary_expression;
	v->a[211808] = state(3398);
	v->a[211809] = 1;
	v->a[211810] = sym__arithmetic_unary_expression;
	v->a[211811] = state(3400);
	v->a[211812] = 1;
	v->a[211813] = sym__arithmetic_postfix_expression;
	v->a[211814] = actions(9368);
	v->a[211815] = 2;
	v->a[211816] = anon_sym_PLUS_PLUS2;
	v->a[211817] = anon_sym_DASH_DASH2;
	v->a[211818] = actions(9370);
	v->a[211819] = 2;
	small_parse_table_10591(v);
}

void	small_parse_table_10591(t_small_parse_table_array *v)
{
	v->a[211820] = anon_sym_DASH2;
	v->a[211821] = anon_sym_PLUS2;
	v->a[211822] = state(3370);
	v->a[211823] = 9;
	v->a[211824] = sym_subscript;
	v->a[211825] = sym__arithmetic_expression;
	v->a[211826] = sym__arithmetic_literal;
	v->a[211827] = sym__arithmetic_parenthesized_expression;
	v->a[211828] = sym_string;
	v->a[211829] = sym_number;
	v->a[211830] = sym_simple_expansion;
	v->a[211831] = sym_expansion;
	v->a[211832] = sym_command_substitution;
	v->a[211833] = 18;
	v->a[211834] = actions(3);
	v->a[211835] = 1;
	v->a[211836] = sym_comment;
	v->a[211837] = actions(9118);
	v->a[211838] = 1;
	v->a[211839] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10592(v);
}

void	small_parse_table_10592(t_small_parse_table_array *v)
{
	v->a[211840] = actions(9124);
	v->a[211841] = 1;
	v->a[211842] = anon_sym_DQUOTE;
	v->a[211843] = actions(9128);
	v->a[211844] = 1;
	v->a[211845] = aux_sym_number_token1;
	v->a[211846] = actions(9130);
	v->a[211847] = 1;
	v->a[211848] = aux_sym_number_token2;
	v->a[211849] = actions(9132);
	v->a[211850] = 1;
	v->a[211851] = anon_sym_DOLLAR_LBRACE;
	v->a[211852] = actions(9134);
	v->a[211853] = 1;
	v->a[211854] = anon_sym_DOLLAR_LPAREN;
	v->a[211855] = actions(9136);
	v->a[211856] = 1;
	v->a[211857] = anon_sym_BQUOTE;
	v->a[211858] = actions(9138);
	v->a[211859] = 1;
	small_parse_table_10593(v);
}

void	small_parse_table_10593(t_small_parse_table_array *v)
{
	v->a[211860] = anon_sym_DOLLAR_BQUOTE;
	v->a[211861] = actions(9144);
	v->a[211862] = 1;
	v->a[211863] = sym__brace_start;
	v->a[211864] = actions(9442);
	v->a[211865] = 1;
	v->a[211866] = sym_word;
	v->a[211867] = actions(9448);
	v->a[211868] = 1;
	v->a[211869] = sym__comment_word;
	v->a[211870] = actions(10048);
	v->a[211871] = 1;
	v->a[211872] = anon_sym_DOLLAR;
	v->a[211873] = actions(9116);
	v->a[211874] = 2;
	v->a[211875] = anon_sym_LPAREN_LPAREN;
	v->a[211876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211877] = actions(9140);
	v->a[211878] = 2;
	v->a[211879] = anon_sym_LT_LPAREN;
	small_parse_table_10594(v);
}

void	small_parse_table_10594(t_small_parse_table_array *v)
{
	v->a[211880] = anon_sym_GT_LPAREN;
	v->a[211881] = actions(9444);
	v->a[211882] = 2;
	v->a[211883] = sym_test_operator;
	v->a[211884] = sym__special_character;
	v->a[211885] = actions(9446);
	v->a[211886] = 3;
	v->a[211887] = sym__bare_dollar;
	v->a[211888] = sym_raw_string;
	v->a[211889] = sym_ansi_c_string;
	v->a[211890] = state(2401);
	v->a[211891] = 9;
	v->a[211892] = sym_arithmetic_expansion;
	v->a[211893] = sym_brace_expression;
	v->a[211894] = sym_string;
	v->a[211895] = sym_translated_string;
	v->a[211896] = sym_number;
	v->a[211897] = sym_simple_expansion;
	v->a[211898] = sym_expansion;
	v->a[211899] = sym_command_substitution;
	small_parse_table_10595(v);
}

/* EOF small_parse_table_2118.c */
