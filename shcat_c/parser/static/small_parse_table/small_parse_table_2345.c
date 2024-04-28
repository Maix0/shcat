/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2345.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11725(t_small_parse_table_array *v)
{
	v->a[234500] = actions(9378);
	v->a[234501] = 1;
	v->a[234502] = aux_sym_number_token1;
	v->a[234503] = actions(9380);
	v->a[234504] = 1;
	v->a[234505] = aux_sym_number_token2;
	v->a[234506] = actions(9382);
	v->a[234507] = 1;
	v->a[234508] = anon_sym_DOLLAR_LBRACE;
	v->a[234509] = actions(9384);
	v->a[234510] = 1;
	v->a[234511] = anon_sym_DOLLAR_LPAREN;
	v->a[234512] = actions(9386);
	v->a[234513] = 1;
	v->a[234514] = anon_sym_BQUOTE;
	v->a[234515] = actions(9388);
	v->a[234516] = 1;
	v->a[234517] = anon_sym_DOLLAR_BQUOTE;
	v->a[234518] = actions(9392);
	v->a[234519] = 1;
	small_parse_table_11726(v);
}

void	small_parse_table_11726(t_small_parse_table_array *v)
{
	v->a[234520] = sym_variable_name;
	v->a[234521] = actions(11064);
	v->a[234522] = 1;
	v->a[234523] = aux_sym__simple_variable_name_token1;
	v->a[234524] = state(3391);
	v->a[234525] = 1;
	v->a[234526] = sym__arithmetic_binary_expression;
	v->a[234527] = state(3396);
	v->a[234528] = 1;
	v->a[234529] = sym__arithmetic_ternary_expression;
	v->a[234530] = state(3398);
	v->a[234531] = 1;
	v->a[234532] = sym__arithmetic_unary_expression;
	v->a[234533] = state(3400);
	v->a[234534] = 1;
	v->a[234535] = sym__arithmetic_postfix_expression;
	v->a[234536] = actions(9368);
	v->a[234537] = 2;
	v->a[234538] = anon_sym_PLUS_PLUS2;
	v->a[234539] = anon_sym_DASH_DASH2;
	small_parse_table_11727(v);
}

void	small_parse_table_11727(t_small_parse_table_array *v)
{
	v->a[234540] = actions(9370);
	v->a[234541] = 2;
	v->a[234542] = anon_sym_DASH2;
	v->a[234543] = anon_sym_PLUS2;
	v->a[234544] = state(3421);
	v->a[234545] = 9;
	v->a[234546] = sym_subscript;
	v->a[234547] = sym__arithmetic_expression;
	v->a[234548] = sym__arithmetic_literal;
	v->a[234549] = sym__arithmetic_parenthesized_expression;
	v->a[234550] = sym_string;
	v->a[234551] = sym_number;
	v->a[234552] = sym_simple_expansion;
	v->a[234553] = sym_expansion;
	v->a[234554] = sym_command_substitution;
	v->a[234555] = 21;
	v->a[234556] = actions(71);
	v->a[234557] = 1;
	v->a[234558] = sym_comment;
	v->a[234559] = actions(9364);
	small_parse_table_11728(v);
}

void	small_parse_table_11728(t_small_parse_table_array *v)
{
	v->a[234560] = 1;
	v->a[234561] = anon_sym_LPAREN;
	v->a[234562] = actions(9366);
	v->a[234563] = 1;
	v->a[234564] = anon_sym_BANG;
	v->a[234565] = actions(9372);
	v->a[234566] = 1;
	v->a[234567] = anon_sym_TILDE;
	v->a[234568] = actions(9374);
	v->a[234569] = 1;
	v->a[234570] = anon_sym_DOLLAR;
	v->a[234571] = actions(9376);
	v->a[234572] = 1;
	v->a[234573] = anon_sym_DQUOTE;
	v->a[234574] = actions(9378);
	v->a[234575] = 1;
	v->a[234576] = aux_sym_number_token1;
	v->a[234577] = actions(9380);
	v->a[234578] = 1;
	v->a[234579] = aux_sym_number_token2;
	small_parse_table_11729(v);
}

void	small_parse_table_11729(t_small_parse_table_array *v)
{
	v->a[234580] = actions(9382);
	v->a[234581] = 1;
	v->a[234582] = anon_sym_DOLLAR_LBRACE;
	v->a[234583] = actions(9384);
	v->a[234584] = 1;
	v->a[234585] = anon_sym_DOLLAR_LPAREN;
	v->a[234586] = actions(9386);
	v->a[234587] = 1;
	v->a[234588] = anon_sym_BQUOTE;
	v->a[234589] = actions(9388);
	v->a[234590] = 1;
	v->a[234591] = anon_sym_DOLLAR_BQUOTE;
	v->a[234592] = actions(9392);
	v->a[234593] = 1;
	v->a[234594] = sym_variable_name;
	v->a[234595] = actions(11066);
	v->a[234596] = 1;
	v->a[234597] = aux_sym__simple_variable_name_token1;
	v->a[234598] = state(3391);
	v->a[234599] = 1;
	small_parse_table_11730(v);
}

/* EOF small_parse_table_2345.c */
