/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_825.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4125(t_small_parse_table_array *v)
{
	v->a[82500] = actions(4628);
	v->a[82501] = 1;
	v->a[82502] = aux_sym_number_token1;
	v->a[82503] = actions(4630);
	v->a[82504] = 1;
	v->a[82505] = aux_sym_number_token2;
	v->a[82506] = actions(4632);
	v->a[82507] = 1;
	v->a[82508] = anon_sym_DOLLAR_LBRACE;
	v->a[82509] = actions(4634);
	v->a[82510] = 1;
	v->a[82511] = anon_sym_DOLLAR_LPAREN;
	v->a[82512] = actions(4636);
	v->a[82513] = 1;
	v->a[82514] = anon_sym_BQUOTE;
	v->a[82515] = actions(4638);
	v->a[82516] = 1;
	v->a[82517] = anon_sym_DOLLAR_BQUOTE;
	v->a[82518] = actions(4640);
	v->a[82519] = 1;
	small_parse_table_4126(v);
}

void	small_parse_table_4126(t_small_parse_table_array *v)
{
	v->a[82520] = aux_sym__simple_variable_name_token1;
	v->a[82521] = actions(4642);
	v->a[82522] = 1;
	v->a[82523] = sym_variable_name;
	v->a[82524] = state(1637);
	v->a[82525] = 1;
	v->a[82526] = sym__arithmetic_postfix_expression;
	v->a[82527] = state(1638);
	v->a[82528] = 1;
	v->a[82529] = sym__arithmetic_unary_expression;
	v->a[82530] = state(1640);
	v->a[82531] = 1;
	v->a[82532] = sym__arithmetic_ternary_expression;
	v->a[82533] = state(1642);
	v->a[82534] = 1;
	v->a[82535] = sym__arithmetic_binary_expression;
	v->a[82536] = actions(4618);
	v->a[82537] = 2;
	v->a[82538] = anon_sym_PLUS_PLUS;
	v->a[82539] = anon_sym_DASH_DASH;
	small_parse_table_4127(v);
}

void	small_parse_table_4127(t_small_parse_table_array *v)
{
	v->a[82540] = actions(4620);
	v->a[82541] = 2;
	v->a[82542] = anon_sym_DASH2;
	v->a[82543] = anon_sym_PLUS2;
	v->a[82544] = state(1615);
	v->a[82545] = 8;
	v->a[82546] = sym__arithmetic_expression;
	v->a[82547] = sym__arithmetic_literal;
	v->a[82548] = sym__arithmetic_parenthesized_expression;
	v->a[82549] = sym_string;
	v->a[82550] = sym_number;
	v->a[82551] = sym_simple_expansion;
	v->a[82552] = sym_expansion;
	v->a[82553] = sym_command_substitution;
	v->a[82554] = 21;
	v->a[82555] = actions(57);
	v->a[82556] = 1;
	v->a[82557] = sym_comment;
	v->a[82558] = actions(4614);
	v->a[82559] = 1;
	small_parse_table_4128(v);
}

void	small_parse_table_4128(t_small_parse_table_array *v)
{
	v->a[82560] = anon_sym_LPAREN;
	v->a[82561] = actions(4616);
	v->a[82562] = 1;
	v->a[82563] = anon_sym_BANG;
	v->a[82564] = actions(4622);
	v->a[82565] = 1;
	v->a[82566] = anon_sym_TILDE;
	v->a[82567] = actions(4624);
	v->a[82568] = 1;
	v->a[82569] = anon_sym_DOLLAR;
	v->a[82570] = actions(4626);
	v->a[82571] = 1;
	v->a[82572] = anon_sym_DQUOTE;
	v->a[82573] = actions(4628);
	v->a[82574] = 1;
	v->a[82575] = aux_sym_number_token1;
	v->a[82576] = actions(4630);
	v->a[82577] = 1;
	v->a[82578] = aux_sym_number_token2;
	v->a[82579] = actions(4632);
	small_parse_table_4129(v);
}

void	small_parse_table_4129(t_small_parse_table_array *v)
{
	v->a[82580] = 1;
	v->a[82581] = anon_sym_DOLLAR_LBRACE;
	v->a[82582] = actions(4634);
	v->a[82583] = 1;
	v->a[82584] = anon_sym_DOLLAR_LPAREN;
	v->a[82585] = actions(4636);
	v->a[82586] = 1;
	v->a[82587] = anon_sym_BQUOTE;
	v->a[82588] = actions(4638);
	v->a[82589] = 1;
	v->a[82590] = anon_sym_DOLLAR_BQUOTE;
	v->a[82591] = actions(4644);
	v->a[82592] = 1;
	v->a[82593] = aux_sym__simple_variable_name_token1;
	v->a[82594] = actions(4646);
	v->a[82595] = 1;
	v->a[82596] = sym_variable_name;
	v->a[82597] = state(1637);
	v->a[82598] = 1;
	v->a[82599] = sym__arithmetic_postfix_expression;
	small_parse_table_4130(v);
}

/* EOF small_parse_table_825.c */
