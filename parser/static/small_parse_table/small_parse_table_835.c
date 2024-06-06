/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_835.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4175(t_small_parse_table_array *v)
{
	v->a[83500] = state(1478);
	v->a[83501] = 1;
	v->a[83502] = sym__arithmetic_unary_expression;
	v->a[83503] = state(1490);
	v->a[83504] = 1;
	v->a[83505] = sym__arithmetic_ternary_expression;
	v->a[83506] = state(1511);
	v->a[83507] = 1;
	v->a[83508] = sym__arithmetic_binary_expression;
	v->a[83509] = actions(4588);
	v->a[83510] = 2;
	v->a[83511] = anon_sym_PLUS_PLUS;
	v->a[83512] = anon_sym_DASH_DASH;
	v->a[83513] = actions(4590);
	v->a[83514] = 2;
	v->a[83515] = anon_sym_DASH2;
	v->a[83516] = anon_sym_PLUS2;
	v->a[83517] = state(1489);
	v->a[83518] = 8;
	v->a[83519] = sym__arithmetic_expression;
	small_parse_table_4176(v);
}

void	small_parse_table_4176(t_small_parse_table_array *v)
{
	v->a[83520] = sym__arithmetic_literal;
	v->a[83521] = sym__arithmetic_parenthesized_expression;
	v->a[83522] = sym_string;
	v->a[83523] = sym_number;
	v->a[83524] = sym_simple_expansion;
	v->a[83525] = sym_expansion;
	v->a[83526] = sym_command_substitution;
	v->a[83527] = 21;
	v->a[83528] = actions(57);
	v->a[83529] = 1;
	v->a[83530] = sym_comment;
	v->a[83531] = actions(4328);
	v->a[83532] = 1;
	v->a[83533] = sym_word;
	v->a[83534] = actions(4340);
	v->a[83535] = 1;
	v->a[83536] = anon_sym_DOLLAR;
	v->a[83537] = actions(4346);
	v->a[83538] = 1;
	v->a[83539] = aux_sym_number_token1;
	small_parse_table_4177(v);
}

void	small_parse_table_4177(t_small_parse_table_array *v)
{
	v->a[83540] = actions(4348);
	v->a[83541] = 1;
	v->a[83542] = aux_sym_number_token2;
	v->a[83543] = actions(4352);
	v->a[83544] = 1;
	v->a[83545] = anon_sym_DOLLAR_LPAREN;
	v->a[83546] = actions(4360);
	v->a[83547] = 1;
	v->a[83548] = sym_extglob_pattern;
	v->a[83549] = actions(4362);
	v->a[83550] = 1;
	v->a[83551] = sym__brace_start;
	v->a[83552] = actions(4548);
	v->a[83553] = 1;
	v->a[83554] = anon_sym_LPAREN;
	v->a[83555] = actions(4550);
	v->a[83556] = 1;
	v->a[83557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83558] = actions(4552);
	v->a[83559] = 1;
	small_parse_table_4178(v);
}

void	small_parse_table_4178(t_small_parse_table_array *v)
{
	v->a[83560] = sym__special_character;
	v->a[83561] = actions(4554);
	v->a[83562] = 1;
	v->a[83563] = anon_sym_DQUOTE;
	v->a[83564] = actions(4556);
	v->a[83565] = 1;
	v->a[83566] = anon_sym_DOLLAR_LBRACE;
	v->a[83567] = actions(4558);
	v->a[83568] = 1;
	v->a[83569] = anon_sym_BQUOTE;
	v->a[83570] = actions(4560);
	v->a[83571] = 1;
	v->a[83572] = anon_sym_DOLLAR_BQUOTE;
	v->a[83573] = state(3393);
	v->a[83574] = 1;
	v->a[83575] = aux_sym__literal_repeat1;
	v->a[83576] = state(3862);
	v->a[83577] = 1;
	v->a[83578] = sym_last_case_item;
	v->a[83579] = actions(4358);
	small_parse_table_4179(v);
}

void	small_parse_table_4179(t_small_parse_table_array *v)
{
	v->a[83580] = 2;
	v->a[83581] = sym_test_operator;
	v->a[83582] = sym_raw_string;
	v->a[83583] = state(1881);
	v->a[83584] = 2;
	v->a[83585] = sym_case_item;
	v->a[83586] = aux_sym_case_statement_repeat1;
	v->a[83587] = state(3472);
	v->a[83588] = 2;
	v->a[83589] = sym_concatenation;
	v->a[83590] = sym__extglob_blob;
	v->a[83591] = state(3295);
	v->a[83592] = 7;
	v->a[83593] = sym_arithmetic_expansion;
	v->a[83594] = sym_brace_expression;
	v->a[83595] = sym_string;
	v->a[83596] = sym_number;
	v->a[83597] = sym_simple_expansion;
	v->a[83598] = sym_expansion;
	v->a[83599] = sym_command_substitution;
	small_parse_table_4180(v);
}

/* EOF small_parse_table_835.c */
