/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_495.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2475(t_small_parse_table_array *v)
{
	v->a[49500] = sym_string;
	v->a[49501] = sym_simple_expansion;
	v->a[49502] = sym_expansion;
	v->a[49503] = state(226);
	v->a[49504] = 8;
	v->a[49505] = sym__arithmetic_expression;
	v->a[49506] = sym_arithmetic_literal;
	v->a[49507] = sym_arithmetic_binary_expression;
	v->a[49508] = sym_arithmetic_ternary_expression;
	v->a[49509] = sym_arithmetic_unary_expression;
	v->a[49510] = sym_arithmetic_postfix_expression;
	v->a[49511] = sym_arithmetic_parenthesized_expression;
	v->a[49512] = sym_command_substitution;
	v->a[49513] = 15;
	v->a[49514] = actions(501);
	v->a[49515] = 1;
	v->a[49516] = sym_comment;
	v->a[49517] = actions(1469);
	v->a[49518] = 1;
	v->a[49519] = anon_sym_LPAREN;
	small_parse_table_2476(v);
}

void	small_parse_table_2476(t_small_parse_table_array *v)
{
	v->a[49520] = actions(1471);
	v->a[49521] = 1;
	v->a[49522] = anon_sym_BANG;
	v->a[49523] = actions(1479);
	v->a[49524] = 1;
	v->a[49525] = anon_sym_TILDE;
	v->a[49526] = actions(1481);
	v->a[49527] = 1;
	v->a[49528] = anon_sym_DOLLAR;
	v->a[49529] = actions(1483);
	v->a[49530] = 1;
	v->a[49531] = anon_sym_DQUOTE;
	v->a[49532] = actions(1487);
	v->a[49533] = 1;
	v->a[49534] = anon_sym_DOLLAR_LBRACE;
	v->a[49535] = actions(1489);
	v->a[49536] = 1;
	v->a[49537] = anon_sym_DOLLAR_LPAREN;
	v->a[49538] = actions(1491);
	v->a[49539] = 1;
	small_parse_table_2477(v);
}

void	small_parse_table_2477(t_small_parse_table_array *v)
{
	v->a[49540] = anon_sym_BQUOTE;
	v->a[49541] = actions(1493);
	v->a[49542] = 1;
	v->a[49543] = sym_variable_name;
	v->a[49544] = actions(1475);
	v->a[49545] = 2;
	v->a[49546] = anon_sym_PLUS_PLUS;
	v->a[49547] = anon_sym_DASH_DASH;
	v->a[49548] = actions(1477);
	v->a[49549] = 2;
	v->a[49550] = anon_sym_DASH2;
	v->a[49551] = anon_sym_PLUS2;
	v->a[49552] = actions(1485);
	v->a[49553] = 2;
	v->a[49554] = sym_number;
	v->a[49555] = aux_sym__simple_variable_name_token1;
	v->a[49556] = state(194);
	v->a[49557] = 3;
	v->a[49558] = sym_string;
	v->a[49559] = sym_simple_expansion;
	small_parse_table_2478(v);
}

void	small_parse_table_2478(t_small_parse_table_array *v)
{
	v->a[49560] = sym_expansion;
	v->a[49561] = state(219);
	v->a[49562] = 8;
	v->a[49563] = sym__arithmetic_expression;
	v->a[49564] = sym_arithmetic_literal;
	v->a[49565] = sym_arithmetic_binary_expression;
	v->a[49566] = sym_arithmetic_ternary_expression;
	v->a[49567] = sym_arithmetic_unary_expression;
	v->a[49568] = sym_arithmetic_postfix_expression;
	v->a[49569] = sym_arithmetic_parenthesized_expression;
	v->a[49570] = sym_command_substitution;
	v->a[49571] = 15;
	v->a[49572] = actions(501);
	v->a[49573] = 1;
	v->a[49574] = sym_comment;
	v->a[49575] = actions(1469);
	v->a[49576] = 1;
	v->a[49577] = anon_sym_LPAREN;
	v->a[49578] = actions(1471);
	v->a[49579] = 1;
	small_parse_table_2479(v);
}

void	small_parse_table_2479(t_small_parse_table_array *v)
{
	v->a[49580] = anon_sym_BANG;
	v->a[49581] = actions(1479);
	v->a[49582] = 1;
	v->a[49583] = anon_sym_TILDE;
	v->a[49584] = actions(1481);
	v->a[49585] = 1;
	v->a[49586] = anon_sym_DOLLAR;
	v->a[49587] = actions(1483);
	v->a[49588] = 1;
	v->a[49589] = anon_sym_DQUOTE;
	v->a[49590] = actions(1487);
	v->a[49591] = 1;
	v->a[49592] = anon_sym_DOLLAR_LBRACE;
	v->a[49593] = actions(1489);
	v->a[49594] = 1;
	v->a[49595] = anon_sym_DOLLAR_LPAREN;
	v->a[49596] = actions(1491);
	v->a[49597] = 1;
	v->a[49598] = anon_sym_BQUOTE;
	v->a[49599] = actions(1493);
	small_parse_table_2480(v);
}

/* EOF small_parse_table_495.c */
