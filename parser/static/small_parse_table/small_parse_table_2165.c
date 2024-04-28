/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2165.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10825(t_small_parse_table_array *v)
{
	v->a[216500] = anon_sym_PLUS_PLUS2;
	v->a[216501] = anon_sym_DASH_DASH2;
	v->a[216502] = actions(9370);
	v->a[216503] = 2;
	v->a[216504] = anon_sym_DASH2;
	v->a[216505] = anon_sym_PLUS2;
	v->a[216506] = state(3324);
	v->a[216507] = 9;
	v->a[216508] = sym_subscript;
	v->a[216509] = sym__arithmetic_expression;
	v->a[216510] = sym__arithmetic_literal;
	v->a[216511] = sym__arithmetic_parenthesized_expression;
	v->a[216512] = sym_string;
	v->a[216513] = sym_number;
	v->a[216514] = sym_simple_expansion;
	v->a[216515] = sym_expansion;
	v->a[216516] = sym_command_substitution;
	v->a[216517] = 21;
	v->a[216518] = actions(71);
	v->a[216519] = 1;
	small_parse_table_10826(v);
}

void	small_parse_table_10826(t_small_parse_table_array *v)
{
	v->a[216520] = sym_comment;
	v->a[216521] = actions(9364);
	v->a[216522] = 1;
	v->a[216523] = anon_sym_LPAREN;
	v->a[216524] = actions(9366);
	v->a[216525] = 1;
	v->a[216526] = anon_sym_BANG;
	v->a[216527] = actions(9372);
	v->a[216528] = 1;
	v->a[216529] = anon_sym_TILDE;
	v->a[216530] = actions(9374);
	v->a[216531] = 1;
	v->a[216532] = anon_sym_DOLLAR;
	v->a[216533] = actions(9376);
	v->a[216534] = 1;
	v->a[216535] = anon_sym_DQUOTE;
	v->a[216536] = actions(9378);
	v->a[216537] = 1;
	v->a[216538] = aux_sym_number_token1;
	v->a[216539] = actions(9380);
	small_parse_table_10827(v);
}

void	small_parse_table_10827(t_small_parse_table_array *v)
{
	v->a[216540] = 1;
	v->a[216541] = aux_sym_number_token2;
	v->a[216542] = actions(9382);
	v->a[216543] = 1;
	v->a[216544] = anon_sym_DOLLAR_LBRACE;
	v->a[216545] = actions(9384);
	v->a[216546] = 1;
	v->a[216547] = anon_sym_DOLLAR_LPAREN;
	v->a[216548] = actions(9386);
	v->a[216549] = 1;
	v->a[216550] = anon_sym_BQUOTE;
	v->a[216551] = actions(9388);
	v->a[216552] = 1;
	v->a[216553] = anon_sym_DOLLAR_BQUOTE;
	v->a[216554] = actions(9392);
	v->a[216555] = 1;
	v->a[216556] = sym_variable_name;
	v->a[216557] = actions(10328);
	v->a[216558] = 1;
	v->a[216559] = aux_sym__simple_variable_name_token1;
	small_parse_table_10828(v);
}

void	small_parse_table_10828(t_small_parse_table_array *v)
{
	v->a[216560] = state(3391);
	v->a[216561] = 1;
	v->a[216562] = sym__arithmetic_binary_expression;
	v->a[216563] = state(3396);
	v->a[216564] = 1;
	v->a[216565] = sym__arithmetic_ternary_expression;
	v->a[216566] = state(3398);
	v->a[216567] = 1;
	v->a[216568] = sym__arithmetic_unary_expression;
	v->a[216569] = state(3400);
	v->a[216570] = 1;
	v->a[216571] = sym__arithmetic_postfix_expression;
	v->a[216572] = actions(9368);
	v->a[216573] = 2;
	v->a[216574] = anon_sym_PLUS_PLUS2;
	v->a[216575] = anon_sym_DASH_DASH2;
	v->a[216576] = actions(9370);
	v->a[216577] = 2;
	v->a[216578] = anon_sym_DASH2;
	v->a[216579] = anon_sym_PLUS2;
	small_parse_table_10829(v);
}

void	small_parse_table_10829(t_small_parse_table_array *v)
{
	v->a[216580] = state(3372);
	v->a[216581] = 9;
	v->a[216582] = sym_subscript;
	v->a[216583] = sym__arithmetic_expression;
	v->a[216584] = sym__arithmetic_literal;
	v->a[216585] = sym__arithmetic_parenthesized_expression;
	v->a[216586] = sym_string;
	v->a[216587] = sym_number;
	v->a[216588] = sym_simple_expansion;
	v->a[216589] = sym_expansion;
	v->a[216590] = sym_command_substitution;
	v->a[216591] = 18;
	v->a[216592] = actions(3);
	v->a[216593] = 1;
	v->a[216594] = sym_comment;
	v->a[216595] = actions(1761);
	v->a[216596] = 1;
	v->a[216597] = anon_sym_DOLLAR;
	v->a[216598] = actions(1767);
	v->a[216599] = 1;
	small_parse_table_10830(v);
}

/* EOF small_parse_table_2165.c */
