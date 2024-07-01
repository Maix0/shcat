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
	v->a[49500] = actions(1754);
	v->a[49501] = 2;
	v->a[49502] = sym_number;
	v->a[49503] = aux_sym__simple_variable_name_token1;
	v->a[49504] = state(260);
	v->a[49505] = 3;
	v->a[49506] = sym_string;
	v->a[49507] = sym_simple_expansion;
	v->a[49508] = sym_expansion;
	v->a[49509] = state(303);
	v->a[49510] = 8;
	v->a[49511] = sym__arithmetic_expression;
	v->a[49512] = sym_arithmetic_literal;
	v->a[49513] = sym_arithmetic_binary_expression;
	v->a[49514] = sym_arithmetic_ternary_expression;
	v->a[49515] = sym_arithmetic_unary_expression;
	v->a[49516] = sym_arithmetic_postfix_expression;
	v->a[49517] = sym_arithmetic_parenthesized_expression;
	v->a[49518] = sym_command_substitution;
	v->a[49519] = 4;
	small_parse_table_2476(v);
}

void	small_parse_table_2476(t_small_parse_table_array *v)
{
	v->a[49520] = actions(3);
	v->a[49521] = 1;
	v->a[49522] = sym_comment;
	v->a[49523] = actions(1439);
	v->a[49524] = 1;
	v->a[49525] = anon_sym_BQUOTE;
	v->a[49526] = actions(1441);
	v->a[49527] = 2;
	v->a[49528] = sym_file_descriptor;
	v->a[49529] = sym_variable_name;
	v->a[49530] = actions(1437);
	v->a[49531] = 23;
	v->a[49532] = anon_sym_for;
	v->a[49533] = anon_sym_while;
	v->a[49534] = anon_sym_until;
	v->a[49535] = anon_sym_if;
	v->a[49536] = anon_sym_case;
	v->a[49537] = anon_sym_LPAREN;
	v->a[49538] = anon_sym_LBRACE;
	v->a[49539] = anon_sym_BANG;
	small_parse_table_2477(v);
}

void	small_parse_table_2477(t_small_parse_table_array *v)
{
	v->a[49540] = anon_sym_LT;
	v->a[49541] = anon_sym_GT;
	v->a[49542] = anon_sym_GT_GT;
	v->a[49543] = anon_sym_LT_AMP;
	v->a[49544] = anon_sym_GT_AMP;
	v->a[49545] = anon_sym_GT_PIPE;
	v->a[49546] = anon_sym_LT_GT;
	v->a[49547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49548] = anon_sym_DOLLAR;
	v->a[49549] = anon_sym_DQUOTE;
	v->a[49550] = sym_raw_string;
	v->a[49551] = sym_number;
	v->a[49552] = anon_sym_DOLLAR_LBRACE;
	v->a[49553] = anon_sym_DOLLAR_LPAREN;
	v->a[49554] = sym_word;
	v->a[49555] = 15;
	v->a[49556] = actions(664);
	v->a[49557] = 1;
	v->a[49558] = sym_comment;
	v->a[49559] = actions(1740);
	small_parse_table_2478(v);
}

void	small_parse_table_2478(t_small_parse_table_array *v)
{
	v->a[49560] = 1;
	v->a[49561] = anon_sym_LPAREN;
	v->a[49562] = actions(1742);
	v->a[49563] = 1;
	v->a[49564] = anon_sym_BANG;
	v->a[49565] = actions(1748);
	v->a[49566] = 1;
	v->a[49567] = anon_sym_TILDE;
	v->a[49568] = actions(1750);
	v->a[49569] = 1;
	v->a[49570] = anon_sym_DOLLAR;
	v->a[49571] = actions(1752);
	v->a[49572] = 1;
	v->a[49573] = anon_sym_DQUOTE;
	v->a[49574] = actions(1756);
	v->a[49575] = 1;
	v->a[49576] = anon_sym_DOLLAR_LBRACE;
	v->a[49577] = actions(1758);
	v->a[49578] = 1;
	v->a[49579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2479(v);
}

void	small_parse_table_2479(t_small_parse_table_array *v)
{
	v->a[49580] = actions(1760);
	v->a[49581] = 1;
	v->a[49582] = anon_sym_BQUOTE;
	v->a[49583] = actions(1762);
	v->a[49584] = 1;
	v->a[49585] = sym_variable_name;
	v->a[49586] = actions(1744);
	v->a[49587] = 2;
	v->a[49588] = anon_sym_PLUS_PLUS;
	v->a[49589] = anon_sym_DASH_DASH;
	v->a[49590] = actions(1746);
	v->a[49591] = 2;
	v->a[49592] = anon_sym_DASH2;
	v->a[49593] = anon_sym_PLUS2;
	v->a[49594] = actions(1754);
	v->a[49595] = 2;
	v->a[49596] = sym_number;
	v->a[49597] = aux_sym__simple_variable_name_token1;
	v->a[49598] = state(260);
	v->a[49599] = 3;
	small_parse_table_2480(v);
}

/* EOF small_parse_table_495.c */
