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
	v->a[49500] = 1;
	v->a[49501] = anon_sym_LPAREN;
	v->a[49502] = actions(1576);
	v->a[49503] = 1;
	v->a[49504] = anon_sym_BANG;
	v->a[49505] = actions(1584);
	v->a[49506] = 1;
	v->a[49507] = anon_sym_TILDE;
	v->a[49508] = actions(1586);
	v->a[49509] = 1;
	v->a[49510] = anon_sym_DOLLAR;
	v->a[49511] = actions(1588);
	v->a[49512] = 1;
	v->a[49513] = anon_sym_DQUOTE;
	v->a[49514] = actions(1592);
	v->a[49515] = 1;
	v->a[49516] = anon_sym_DOLLAR_LBRACE;
	v->a[49517] = actions(1594);
	v->a[49518] = 1;
	v->a[49519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2476(v);
}

void	small_parse_table_2476(t_small_parse_table_array *v)
{
	v->a[49520] = actions(1596);
	v->a[49521] = 1;
	v->a[49522] = anon_sym_BQUOTE;
	v->a[49523] = actions(1598);
	v->a[49524] = 1;
	v->a[49525] = sym_variable_name;
	v->a[49526] = actions(1580);
	v->a[49527] = 2;
	v->a[49528] = anon_sym_PLUS_PLUS;
	v->a[49529] = anon_sym_DASH_DASH;
	v->a[49530] = actions(1582);
	v->a[49531] = 2;
	v->a[49532] = anon_sym_DASH2;
	v->a[49533] = anon_sym_PLUS2;
	v->a[49534] = actions(1590);
	v->a[49535] = 2;
	v->a[49536] = sym_number;
	v->a[49537] = aux_sym__simple_variable_name_token1;
	v->a[49538] = state(238);
	v->a[49539] = 3;
	small_parse_table_2477(v);
}

void	small_parse_table_2477(t_small_parse_table_array *v)
{
	v->a[49540] = sym_string;
	v->a[49541] = sym_simple_expansion;
	v->a[49542] = sym_expansion;
	v->a[49543] = state(222);
	v->a[49544] = 8;
	v->a[49545] = sym__arithmetic_expression;
	v->a[49546] = sym_arithmetic_literal;
	v->a[49547] = sym_arithmetic_binary_expression;
	v->a[49548] = sym_arithmetic_ternary_expression;
	v->a[49549] = sym_arithmetic_unary_expression;
	v->a[49550] = sym_arithmetic_postfix_expression;
	v->a[49551] = sym_arithmetic_parenthesized_expression;
	v->a[49552] = sym_command_substitution;
	v->a[49553] = 15;
	v->a[49554] = actions(680);
	v->a[49555] = 1;
	v->a[49556] = sym_comment;
	v->a[49557] = actions(1574);
	v->a[49558] = 1;
	v->a[49559] = anon_sym_LPAREN;
	small_parse_table_2478(v);
}

void	small_parse_table_2478(t_small_parse_table_array *v)
{
	v->a[49560] = actions(1576);
	v->a[49561] = 1;
	v->a[49562] = anon_sym_BANG;
	v->a[49563] = actions(1584);
	v->a[49564] = 1;
	v->a[49565] = anon_sym_TILDE;
	v->a[49566] = actions(1586);
	v->a[49567] = 1;
	v->a[49568] = anon_sym_DOLLAR;
	v->a[49569] = actions(1588);
	v->a[49570] = 1;
	v->a[49571] = anon_sym_DQUOTE;
	v->a[49572] = actions(1592);
	v->a[49573] = 1;
	v->a[49574] = anon_sym_DOLLAR_LBRACE;
	v->a[49575] = actions(1594);
	v->a[49576] = 1;
	v->a[49577] = anon_sym_DOLLAR_LPAREN;
	v->a[49578] = actions(1596);
	v->a[49579] = 1;
	small_parse_table_2479(v);
}

void	small_parse_table_2479(t_small_parse_table_array *v)
{
	v->a[49580] = anon_sym_BQUOTE;
	v->a[49581] = actions(1598);
	v->a[49582] = 1;
	v->a[49583] = sym_variable_name;
	v->a[49584] = actions(1580);
	v->a[49585] = 2;
	v->a[49586] = anon_sym_PLUS_PLUS;
	v->a[49587] = anon_sym_DASH_DASH;
	v->a[49588] = actions(1582);
	v->a[49589] = 2;
	v->a[49590] = anon_sym_DASH2;
	v->a[49591] = anon_sym_PLUS2;
	v->a[49592] = actions(1590);
	v->a[49593] = 2;
	v->a[49594] = sym_number;
	v->a[49595] = aux_sym__simple_variable_name_token1;
	v->a[49596] = state(238);
	v->a[49597] = 3;
	v->a[49598] = sym_string;
	v->a[49599] = sym_simple_expansion;
	small_parse_table_2480(v);
}

/* EOF small_parse_table_495.c */
