/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_875.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4375(t_small_parse_table_array *v)
{
	v->a[87500] = state(1477);
	v->a[87501] = 8;
	v->a[87502] = sym__arithmetic_expression;
	v->a[87503] = sym__arithmetic_literal;
	v->a[87504] = sym__arithmetic_parenthesized_expression;
	v->a[87505] = sym_string;
	v->a[87506] = sym_number;
	v->a[87507] = sym_simple_expansion;
	v->a[87508] = sym_expansion;
	v->a[87509] = sym_command_substitution;
	v->a[87510] = 5;
	v->a[87511] = actions(57);
	v->a[87512] = 1;
	v->a[87513] = sym_comment;
	v->a[87514] = state(1782);
	v->a[87515] = 1;
	v->a[87516] = aux_sym_concatenation_repeat1;
	v->a[87517] = actions(4795);
	v->a[87518] = 2;
	v->a[87519] = sym__concat;
	small_parse_table_4376(v);
}

void	small_parse_table_4376(t_small_parse_table_array *v)
{
	v->a[87520] = aux_sym_concatenation_token1;
	v->a[87521] = actions(1388);
	v->a[87522] = 11;
	v->a[87523] = anon_sym_LT;
	v->a[87524] = anon_sym_GT;
	v->a[87525] = anon_sym_AMP_GT;
	v->a[87526] = anon_sym_LT_AMP;
	v->a[87527] = anon_sym_GT_AMP;
	v->a[87528] = anon_sym_DOLLAR;
	v->a[87529] = aux_sym_number_token1;
	v->a[87530] = aux_sym_number_token2;
	v->a[87531] = anon_sym_DOLLAR_LPAREN;
	v->a[87532] = anon_sym_BQUOTE;
	v->a[87533] = sym_word;
	v->a[87534] = actions(1390);
	v->a[87535] = 15;
	v->a[87536] = sym_file_descriptor;
	v->a[87537] = sym_variable_name;
	v->a[87538] = sym_test_operator;
	v->a[87539] = sym__brace_start;
	small_parse_table_4377(v);
}

void	small_parse_table_4377(t_small_parse_table_array *v)
{
	v->a[87540] = anon_sym_GT_GT;
	v->a[87541] = anon_sym_AMP_GT_GT;
	v->a[87542] = anon_sym_GT_PIPE;
	v->a[87543] = anon_sym_LT_AMP_DASH;
	v->a[87544] = anon_sym_GT_AMP_DASH;
	v->a[87545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87546] = sym__special_character;
	v->a[87547] = anon_sym_DQUOTE;
	v->a[87548] = sym_raw_string;
	v->a[87549] = anon_sym_DOLLAR_LBRACE;
	v->a[87550] = anon_sym_DOLLAR_BQUOTE;
	v->a[87551] = 21;
	v->a[87552] = actions(57);
	v->a[87553] = 1;
	v->a[87554] = sym_comment;
	v->a[87555] = actions(4584);
	v->a[87556] = 1;
	v->a[87557] = anon_sym_LPAREN;
	v->a[87558] = actions(4586);
	v->a[87559] = 1;
	small_parse_table_4378(v);
}

void	small_parse_table_4378(t_small_parse_table_array *v)
{
	v->a[87560] = anon_sym_BANG;
	v->a[87561] = actions(4592);
	v->a[87562] = 1;
	v->a[87563] = anon_sym_TILDE;
	v->a[87564] = actions(4594);
	v->a[87565] = 1;
	v->a[87566] = anon_sym_DOLLAR;
	v->a[87567] = actions(4596);
	v->a[87568] = 1;
	v->a[87569] = anon_sym_DQUOTE;
	v->a[87570] = actions(4598);
	v->a[87571] = 1;
	v->a[87572] = aux_sym_number_token1;
	v->a[87573] = actions(4600);
	v->a[87574] = 1;
	v->a[87575] = aux_sym_number_token2;
	v->a[87576] = actions(4602);
	v->a[87577] = 1;
	v->a[87578] = anon_sym_DOLLAR_LBRACE;
	v->a[87579] = actions(4604);
	small_parse_table_4379(v);
}

void	small_parse_table_4379(t_small_parse_table_array *v)
{
	v->a[87580] = 1;
	v->a[87581] = anon_sym_DOLLAR_LPAREN;
	v->a[87582] = actions(4606);
	v->a[87583] = 1;
	v->a[87584] = anon_sym_BQUOTE;
	v->a[87585] = actions(4608);
	v->a[87586] = 1;
	v->a[87587] = anon_sym_DOLLAR_BQUOTE;
	v->a[87588] = actions(4857);
	v->a[87589] = 1;
	v->a[87590] = aux_sym__simple_variable_name_token1;
	v->a[87591] = actions(4859);
	v->a[87592] = 1;
	v->a[87593] = sym_variable_name;
	v->a[87594] = state(1476);
	v->a[87595] = 1;
	v->a[87596] = sym__arithmetic_postfix_expression;
	v->a[87597] = state(1478);
	v->a[87598] = 1;
	v->a[87599] = sym__arithmetic_unary_expression;
	small_parse_table_4380(v);
}

/* EOF small_parse_table_875.c */
