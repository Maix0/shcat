/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2346.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11730(t_small_parse_table_array *v)
{
	v->a[234600] = sym__arithmetic_binary_expression;
	v->a[234601] = state(3396);
	v->a[234602] = 1;
	v->a[234603] = sym__arithmetic_ternary_expression;
	v->a[234604] = state(3398);
	v->a[234605] = 1;
	v->a[234606] = sym__arithmetic_unary_expression;
	v->a[234607] = state(3400);
	v->a[234608] = 1;
	v->a[234609] = sym__arithmetic_postfix_expression;
	v->a[234610] = actions(9368);
	v->a[234611] = 2;
	v->a[234612] = anon_sym_PLUS_PLUS2;
	v->a[234613] = anon_sym_DASH_DASH2;
	v->a[234614] = actions(9370);
	v->a[234615] = 2;
	v->a[234616] = anon_sym_DASH2;
	v->a[234617] = anon_sym_PLUS2;
	v->a[234618] = state(3413);
	v->a[234619] = 9;
	small_parse_table_11731(v);
}

void	small_parse_table_11731(t_small_parse_table_array *v)
{
	v->a[234620] = sym_subscript;
	v->a[234621] = sym__arithmetic_expression;
	v->a[234622] = sym__arithmetic_literal;
	v->a[234623] = sym__arithmetic_parenthesized_expression;
	v->a[234624] = sym_string;
	v->a[234625] = sym_number;
	v->a[234626] = sym_simple_expansion;
	v->a[234627] = sym_expansion;
	v->a[234628] = sym_command_substitution;
	v->a[234629] = 21;
	v->a[234630] = actions(71);
	v->a[234631] = 1;
	v->a[234632] = sym_comment;
	v->a[234633] = actions(9364);
	v->a[234634] = 1;
	v->a[234635] = anon_sym_LPAREN;
	v->a[234636] = actions(9366);
	v->a[234637] = 1;
	v->a[234638] = anon_sym_BANG;
	v->a[234639] = actions(9372);
	small_parse_table_11732(v);
}

void	small_parse_table_11732(t_small_parse_table_array *v)
{
	v->a[234640] = 1;
	v->a[234641] = anon_sym_TILDE;
	v->a[234642] = actions(9374);
	v->a[234643] = 1;
	v->a[234644] = anon_sym_DOLLAR;
	v->a[234645] = actions(9376);
	v->a[234646] = 1;
	v->a[234647] = anon_sym_DQUOTE;
	v->a[234648] = actions(9378);
	v->a[234649] = 1;
	v->a[234650] = aux_sym_number_token1;
	v->a[234651] = actions(9380);
	v->a[234652] = 1;
	v->a[234653] = aux_sym_number_token2;
	v->a[234654] = actions(9382);
	v->a[234655] = 1;
	v->a[234656] = anon_sym_DOLLAR_LBRACE;
	v->a[234657] = actions(9384);
	v->a[234658] = 1;
	v->a[234659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11733(v);
}

void	small_parse_table_11733(t_small_parse_table_array *v)
{
	v->a[234660] = actions(9386);
	v->a[234661] = 1;
	v->a[234662] = anon_sym_BQUOTE;
	v->a[234663] = actions(9388);
	v->a[234664] = 1;
	v->a[234665] = anon_sym_DOLLAR_BQUOTE;
	v->a[234666] = actions(9392);
	v->a[234667] = 1;
	v->a[234668] = sym_variable_name;
	v->a[234669] = actions(11068);
	v->a[234670] = 1;
	v->a[234671] = aux_sym__simple_variable_name_token1;
	v->a[234672] = state(3391);
	v->a[234673] = 1;
	v->a[234674] = sym__arithmetic_binary_expression;
	v->a[234675] = state(3396);
	v->a[234676] = 1;
	v->a[234677] = sym__arithmetic_ternary_expression;
	v->a[234678] = state(3398);
	v->a[234679] = 1;
	small_parse_table_11734(v);
}

void	small_parse_table_11734(t_small_parse_table_array *v)
{
	v->a[234680] = sym__arithmetic_unary_expression;
	v->a[234681] = state(3400);
	v->a[234682] = 1;
	v->a[234683] = sym__arithmetic_postfix_expression;
	v->a[234684] = actions(9368);
	v->a[234685] = 2;
	v->a[234686] = anon_sym_PLUS_PLUS2;
	v->a[234687] = anon_sym_DASH_DASH2;
	v->a[234688] = actions(9370);
	v->a[234689] = 2;
	v->a[234690] = anon_sym_DASH2;
	v->a[234691] = anon_sym_PLUS2;
	v->a[234692] = state(3412);
	v->a[234693] = 9;
	v->a[234694] = sym_subscript;
	v->a[234695] = sym__arithmetic_expression;
	v->a[234696] = sym__arithmetic_literal;
	v->a[234697] = sym__arithmetic_parenthesized_expression;
	v->a[234698] = sym_string;
	v->a[234699] = sym_number;
	small_parse_table_11735(v);
}

/* EOF small_parse_table_2346.c */
