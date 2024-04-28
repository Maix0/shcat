/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2135.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10675(t_small_parse_table_array *v)
{
	v->a[213500] = sym__arithmetic_unary_expression;
	v->a[213501] = state(2825);
	v->a[213502] = 1;
	v->a[213503] = sym__arithmetic_postfix_expression;
	v->a[213504] = actions(9282);
	v->a[213505] = 2;
	v->a[213506] = anon_sym_PLUS_PLUS2;
	v->a[213507] = anon_sym_DASH_DASH2;
	v->a[213508] = actions(9284);
	v->a[213509] = 2;
	v->a[213510] = anon_sym_DASH2;
	v->a[213511] = anon_sym_PLUS2;
	v->a[213512] = state(2794);
	v->a[213513] = 9;
	v->a[213514] = sym_subscript;
	v->a[213515] = sym__arithmetic_expression;
	v->a[213516] = sym__arithmetic_literal;
	v->a[213517] = sym__arithmetic_parenthesized_expression;
	v->a[213518] = sym_string;
	v->a[213519] = sym_number;
	small_parse_table_10676(v);
}

void	small_parse_table_10676(t_small_parse_table_array *v)
{
	v->a[213520] = sym_simple_expansion;
	v->a[213521] = sym_expansion;
	v->a[213522] = sym_command_substitution;
	v->a[213523] = 21;
	v->a[213524] = actions(71);
	v->a[213525] = 1;
	v->a[213526] = sym_comment;
	v->a[213527] = actions(9364);
	v->a[213528] = 1;
	v->a[213529] = anon_sym_LPAREN;
	v->a[213530] = actions(9366);
	v->a[213531] = 1;
	v->a[213532] = anon_sym_BANG;
	v->a[213533] = actions(9372);
	v->a[213534] = 1;
	v->a[213535] = anon_sym_TILDE;
	v->a[213536] = actions(9374);
	v->a[213537] = 1;
	v->a[213538] = anon_sym_DOLLAR;
	v->a[213539] = actions(9376);
	small_parse_table_10677(v);
}

void	small_parse_table_10677(t_small_parse_table_array *v)
{
	v->a[213540] = 1;
	v->a[213541] = anon_sym_DQUOTE;
	v->a[213542] = actions(9378);
	v->a[213543] = 1;
	v->a[213544] = aux_sym_number_token1;
	v->a[213545] = actions(9380);
	v->a[213546] = 1;
	v->a[213547] = aux_sym_number_token2;
	v->a[213548] = actions(9382);
	v->a[213549] = 1;
	v->a[213550] = anon_sym_DOLLAR_LBRACE;
	v->a[213551] = actions(9384);
	v->a[213552] = 1;
	v->a[213553] = anon_sym_DOLLAR_LPAREN;
	v->a[213554] = actions(9386);
	v->a[213555] = 1;
	v->a[213556] = anon_sym_BQUOTE;
	v->a[213557] = actions(9388);
	v->a[213558] = 1;
	v->a[213559] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10678(v);
}

void	small_parse_table_10678(t_small_parse_table_array *v)
{
	v->a[213560] = actions(9392);
	v->a[213561] = 1;
	v->a[213562] = sym_variable_name;
	v->a[213563] = actions(10170);
	v->a[213564] = 1;
	v->a[213565] = aux_sym__simple_variable_name_token1;
	v->a[213566] = state(3391);
	v->a[213567] = 1;
	v->a[213568] = sym__arithmetic_binary_expression;
	v->a[213569] = state(3396);
	v->a[213570] = 1;
	v->a[213571] = sym__arithmetic_ternary_expression;
	v->a[213572] = state(3398);
	v->a[213573] = 1;
	v->a[213574] = sym__arithmetic_unary_expression;
	v->a[213575] = state(3400);
	v->a[213576] = 1;
	v->a[213577] = sym__arithmetic_postfix_expression;
	v->a[213578] = actions(9368);
	v->a[213579] = 2;
	small_parse_table_10679(v);
}

void	small_parse_table_10679(t_small_parse_table_array *v)
{
	v->a[213580] = anon_sym_PLUS_PLUS2;
	v->a[213581] = anon_sym_DASH_DASH2;
	v->a[213582] = actions(9370);
	v->a[213583] = 2;
	v->a[213584] = anon_sym_DASH2;
	v->a[213585] = anon_sym_PLUS2;
	v->a[213586] = state(3371);
	v->a[213587] = 9;
	v->a[213588] = sym_subscript;
	v->a[213589] = sym__arithmetic_expression;
	v->a[213590] = sym__arithmetic_literal;
	v->a[213591] = sym__arithmetic_parenthesized_expression;
	v->a[213592] = sym_string;
	v->a[213593] = sym_number;
	v->a[213594] = sym_simple_expansion;
	v->a[213595] = sym_expansion;
	v->a[213596] = sym_command_substitution;
	v->a[213597] = 18;
	v->a[213598] = actions(3);
	v->a[213599] = 1;
	small_parse_table_10680(v);
}

/* EOF small_parse_table_2135.c */
