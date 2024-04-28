/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2296.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11480(t_small_parse_table_array *v)
{
	v->a[229600] = actions(9780);
	v->a[229601] = 2;
	v->a[229602] = anon_sym_LT_LPAREN;
	v->a[229603] = anon_sym_GT_LPAREN;
	v->a[229604] = actions(10876);
	v->a[229605] = 2;
	v->a[229606] = sym_raw_string;
	v->a[229607] = sym_ansi_c_string;
	v->a[229608] = state(6202);
	v->a[229609] = 9;
	v->a[229610] = sym_arithmetic_expansion;
	v->a[229611] = sym_brace_expression;
	v->a[229612] = sym_string;
	v->a[229613] = sym_translated_string;
	v->a[229614] = sym_number;
	v->a[229615] = sym_simple_expansion;
	v->a[229616] = sym_expansion;
	v->a[229617] = sym_command_substitution;
	v->a[229618] = sym_process_substitution;
	v->a[229619] = 21;
	small_parse_table_11481(v);
}

void	small_parse_table_11481(t_small_parse_table_array *v)
{
	v->a[229620] = actions(71);
	v->a[229621] = 1;
	v->a[229622] = sym_comment;
	v->a[229623] = actions(9364);
	v->a[229624] = 1;
	v->a[229625] = anon_sym_LPAREN;
	v->a[229626] = actions(9366);
	v->a[229627] = 1;
	v->a[229628] = anon_sym_BANG;
	v->a[229629] = actions(9372);
	v->a[229630] = 1;
	v->a[229631] = anon_sym_TILDE;
	v->a[229632] = actions(9374);
	v->a[229633] = 1;
	v->a[229634] = anon_sym_DOLLAR;
	v->a[229635] = actions(9376);
	v->a[229636] = 1;
	v->a[229637] = anon_sym_DQUOTE;
	v->a[229638] = actions(9378);
	v->a[229639] = 1;
	small_parse_table_11482(v);
}

void	small_parse_table_11482(t_small_parse_table_array *v)
{
	v->a[229640] = aux_sym_number_token1;
	v->a[229641] = actions(9380);
	v->a[229642] = 1;
	v->a[229643] = aux_sym_number_token2;
	v->a[229644] = actions(9382);
	v->a[229645] = 1;
	v->a[229646] = anon_sym_DOLLAR_LBRACE;
	v->a[229647] = actions(9384);
	v->a[229648] = 1;
	v->a[229649] = anon_sym_DOLLAR_LPAREN;
	v->a[229650] = actions(9386);
	v->a[229651] = 1;
	v->a[229652] = anon_sym_BQUOTE;
	v->a[229653] = actions(9388);
	v->a[229654] = 1;
	v->a[229655] = anon_sym_DOLLAR_BQUOTE;
	v->a[229656] = actions(9392);
	v->a[229657] = 1;
	v->a[229658] = sym_variable_name;
	v->a[229659] = actions(10880);
	small_parse_table_11483(v);
}

void	small_parse_table_11483(t_small_parse_table_array *v)
{
	v->a[229660] = 1;
	v->a[229661] = aux_sym__simple_variable_name_token1;
	v->a[229662] = state(3391);
	v->a[229663] = 1;
	v->a[229664] = sym__arithmetic_binary_expression;
	v->a[229665] = state(3396);
	v->a[229666] = 1;
	v->a[229667] = sym__arithmetic_ternary_expression;
	v->a[229668] = state(3398);
	v->a[229669] = 1;
	v->a[229670] = sym__arithmetic_unary_expression;
	v->a[229671] = state(3400);
	v->a[229672] = 1;
	v->a[229673] = sym__arithmetic_postfix_expression;
	v->a[229674] = actions(9368);
	v->a[229675] = 2;
	v->a[229676] = anon_sym_PLUS_PLUS2;
	v->a[229677] = anon_sym_DASH_DASH2;
	v->a[229678] = actions(9370);
	v->a[229679] = 2;
	small_parse_table_11484(v);
}

void	small_parse_table_11484(t_small_parse_table_array *v)
{
	v->a[229680] = anon_sym_DASH2;
	v->a[229681] = anon_sym_PLUS2;
	v->a[229682] = state(3284);
	v->a[229683] = 9;
	v->a[229684] = sym_subscript;
	v->a[229685] = sym__arithmetic_expression;
	v->a[229686] = sym__arithmetic_literal;
	v->a[229687] = sym__arithmetic_parenthesized_expression;
	v->a[229688] = sym_string;
	v->a[229689] = sym_number;
	v->a[229690] = sym_simple_expansion;
	v->a[229691] = sym_expansion;
	v->a[229692] = sym_command_substitution;
	v->a[229693] = 18;
	v->a[229694] = actions(3);
	v->a[229695] = 1;
	v->a[229696] = sym_comment;
	v->a[229697] = actions(314);
	v->a[229698] = 1;
	v->a[229699] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11485(v);
}

/* EOF small_parse_table_2296.c */
