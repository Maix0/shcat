/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2168.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10840(t_small_parse_table_array *v)
{
	v->a[216800] = 1;
	v->a[216801] = aux_sym_number_token1;
	v->a[216802] = actions(3375);
	v->a[216803] = 1;
	v->a[216804] = aux_sym_number_token2;
	v->a[216805] = actions(3379);
	v->a[216806] = 1;
	v->a[216807] = anon_sym_DOLLAR_LPAREN;
	v->a[216808] = actions(3389);
	v->a[216809] = 1;
	v->a[216810] = sym__brace_start;
	v->a[216811] = actions(9802);
	v->a[216812] = 1;
	v->a[216813] = anon_sym_DOLLAR_LBRACK;
	v->a[216814] = actions(9806);
	v->a[216815] = 1;
	v->a[216816] = anon_sym_DQUOTE;
	v->a[216817] = actions(9810);
	v->a[216818] = 1;
	v->a[216819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10841(v);
}

void	small_parse_table_10841(t_small_parse_table_array *v)
{
	v->a[216820] = actions(9812);
	v->a[216821] = 1;
	v->a[216822] = anon_sym_BQUOTE;
	v->a[216823] = actions(9814);
	v->a[216824] = 1;
	v->a[216825] = anon_sym_DOLLAR_BQUOTE;
	v->a[216826] = actions(10330);
	v->a[216827] = 1;
	v->a[216828] = sym_word;
	v->a[216829] = actions(10332);
	v->a[216830] = 1;
	v->a[216831] = anon_sym_DOLLAR;
	v->a[216832] = actions(10338);
	v->a[216833] = 1;
	v->a[216834] = sym__comment_word;
	v->a[216835] = actions(9800);
	v->a[216836] = 2;
	v->a[216837] = anon_sym_LPAREN_LPAREN;
	v->a[216838] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216839] = actions(9816);
	small_parse_table_10842(v);
}

void	small_parse_table_10842(t_small_parse_table_array *v)
{
	v->a[216840] = 2;
	v->a[216841] = anon_sym_LT_LPAREN;
	v->a[216842] = anon_sym_GT_LPAREN;
	v->a[216843] = actions(10334);
	v->a[216844] = 2;
	v->a[216845] = sym_test_operator;
	v->a[216846] = sym__special_character;
	v->a[216847] = actions(10336);
	v->a[216848] = 3;
	v->a[216849] = sym__bare_dollar;
	v->a[216850] = sym_raw_string;
	v->a[216851] = sym_ansi_c_string;
	v->a[216852] = state(4532);
	v->a[216853] = 9;
	v->a[216854] = sym_arithmetic_expansion;
	v->a[216855] = sym_brace_expression;
	v->a[216856] = sym_string;
	v->a[216857] = sym_translated_string;
	v->a[216858] = sym_number;
	v->a[216859] = sym_simple_expansion;
	small_parse_table_10843(v);
}

void	small_parse_table_10843(t_small_parse_table_array *v)
{
	v->a[216860] = sym_expansion;
	v->a[216861] = sym_command_substitution;
	v->a[216862] = sym_process_substitution;
	v->a[216863] = 20;
	v->a[216864] = actions(71);
	v->a[216865] = 1;
	v->a[216866] = sym_comment;
	v->a[216867] = actions(9118);
	v->a[216868] = 1;
	v->a[216869] = anon_sym_DOLLAR_LBRACK;
	v->a[216870] = actions(9120);
	v->a[216871] = 1;
	v->a[216872] = anon_sym_DOLLAR;
	v->a[216873] = actions(9122);
	v->a[216874] = 1;
	v->a[216875] = sym__special_character;
	v->a[216876] = actions(9124);
	v->a[216877] = 1;
	v->a[216878] = anon_sym_DQUOTE;
	v->a[216879] = actions(9128);
	small_parse_table_10844(v);
}

void	small_parse_table_10844(t_small_parse_table_array *v)
{
	v->a[216880] = 1;
	v->a[216881] = aux_sym_number_token1;
	v->a[216882] = actions(9130);
	v->a[216883] = 1;
	v->a[216884] = aux_sym_number_token2;
	v->a[216885] = actions(9132);
	v->a[216886] = 1;
	v->a[216887] = anon_sym_DOLLAR_LBRACE;
	v->a[216888] = actions(9134);
	v->a[216889] = 1;
	v->a[216890] = anon_sym_DOLLAR_LPAREN;
	v->a[216891] = actions(9136);
	v->a[216892] = 1;
	v->a[216893] = anon_sym_BQUOTE;
	v->a[216894] = actions(9138);
	v->a[216895] = 1;
	v->a[216896] = anon_sym_DOLLAR_BQUOTE;
	v->a[216897] = actions(9144);
	v->a[216898] = 1;
	v->a[216899] = sym__brace_start;
	small_parse_table_10845(v);
}

/* EOF small_parse_table_2168.c */
