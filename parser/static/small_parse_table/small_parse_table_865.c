/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_865.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4325(t_small_parse_table_array *v)
{
	v->a[86500] = 1;
	v->a[86501] = sym__arithmetic_binary_expression;
	v->a[86502] = actions(4588);
	v->a[86503] = 2;
	v->a[86504] = anon_sym_PLUS_PLUS;
	v->a[86505] = anon_sym_DASH_DASH;
	v->a[86506] = actions(4590);
	v->a[86507] = 2;
	v->a[86508] = anon_sym_DASH2;
	v->a[86509] = anon_sym_PLUS2;
	v->a[86510] = state(1503);
	v->a[86511] = 8;
	v->a[86512] = sym__arithmetic_expression;
	v->a[86513] = sym__arithmetic_literal;
	v->a[86514] = sym__arithmetic_parenthesized_expression;
	v->a[86515] = sym_string;
	v->a[86516] = sym_number;
	v->a[86517] = sym_simple_expansion;
	v->a[86518] = sym_expansion;
	v->a[86519] = sym_command_substitution;
	small_parse_table_4326(v);
}

void	small_parse_table_4326(t_small_parse_table_array *v)
{
	v->a[86520] = 21;
	v->a[86521] = actions(57);
	v->a[86522] = 1;
	v->a[86523] = sym_comment;
	v->a[86524] = actions(4614);
	v->a[86525] = 1;
	v->a[86526] = anon_sym_LPAREN;
	v->a[86527] = actions(4616);
	v->a[86528] = 1;
	v->a[86529] = anon_sym_BANG;
	v->a[86530] = actions(4622);
	v->a[86531] = 1;
	v->a[86532] = anon_sym_TILDE;
	v->a[86533] = actions(4624);
	v->a[86534] = 1;
	v->a[86535] = anon_sym_DOLLAR;
	v->a[86536] = actions(4626);
	v->a[86537] = 1;
	v->a[86538] = anon_sym_DQUOTE;
	v->a[86539] = actions(4628);
	small_parse_table_4327(v);
}

void	small_parse_table_4327(t_small_parse_table_array *v)
{
	v->a[86540] = 1;
	v->a[86541] = aux_sym_number_token1;
	v->a[86542] = actions(4630);
	v->a[86543] = 1;
	v->a[86544] = aux_sym_number_token2;
	v->a[86545] = actions(4632);
	v->a[86546] = 1;
	v->a[86547] = anon_sym_DOLLAR_LBRACE;
	v->a[86548] = actions(4634);
	v->a[86549] = 1;
	v->a[86550] = anon_sym_DOLLAR_LPAREN;
	v->a[86551] = actions(4636);
	v->a[86552] = 1;
	v->a[86553] = anon_sym_BQUOTE;
	v->a[86554] = actions(4638);
	v->a[86555] = 1;
	v->a[86556] = anon_sym_DOLLAR_BQUOTE;
	v->a[86557] = actions(4813);
	v->a[86558] = 1;
	v->a[86559] = aux_sym__simple_variable_name_token1;
	small_parse_table_4328(v);
}

void	small_parse_table_4328(t_small_parse_table_array *v)
{
	v->a[86560] = actions(4815);
	v->a[86561] = 1;
	v->a[86562] = sym_variable_name;
	v->a[86563] = state(1637);
	v->a[86564] = 1;
	v->a[86565] = sym__arithmetic_postfix_expression;
	v->a[86566] = state(1638);
	v->a[86567] = 1;
	v->a[86568] = sym__arithmetic_unary_expression;
	v->a[86569] = state(1640);
	v->a[86570] = 1;
	v->a[86571] = sym__arithmetic_ternary_expression;
	v->a[86572] = state(1642);
	v->a[86573] = 1;
	v->a[86574] = sym__arithmetic_binary_expression;
	v->a[86575] = actions(4618);
	v->a[86576] = 2;
	v->a[86577] = anon_sym_PLUS_PLUS;
	v->a[86578] = anon_sym_DASH_DASH;
	v->a[86579] = actions(4620);
	small_parse_table_4329(v);
}

void	small_parse_table_4329(t_small_parse_table_array *v)
{
	v->a[86580] = 2;
	v->a[86581] = anon_sym_DASH2;
	v->a[86582] = anon_sym_PLUS2;
	v->a[86583] = state(1606);
	v->a[86584] = 8;
	v->a[86585] = sym__arithmetic_expression;
	v->a[86586] = sym__arithmetic_literal;
	v->a[86587] = sym__arithmetic_parenthesized_expression;
	v->a[86588] = sym_string;
	v->a[86589] = sym_number;
	v->a[86590] = sym_simple_expansion;
	v->a[86591] = sym_expansion;
	v->a[86592] = sym_command_substitution;
	v->a[86593] = 21;
	v->a[86594] = actions(57);
	v->a[86595] = 1;
	v->a[86596] = sym_comment;
	v->a[86597] = actions(4584);
	v->a[86598] = 1;
	v->a[86599] = anon_sym_LPAREN;
	small_parse_table_4330(v);
}

/* EOF small_parse_table_865.c */
