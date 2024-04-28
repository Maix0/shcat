/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2216.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11080(t_small_parse_table_array *v)
{
	v->a[221600] = anon_sym_DOLLAR_LPAREN;
	v->a[221601] = actions(9300);
	v->a[221602] = 1;
	v->a[221603] = anon_sym_BQUOTE;
	v->a[221604] = actions(9302);
	v->a[221605] = 1;
	v->a[221606] = anon_sym_DOLLAR_BQUOTE;
	v->a[221607] = actions(10604);
	v->a[221608] = 1;
	v->a[221609] = aux_sym__simple_variable_name_token1;
	v->a[221610] = state(2801);
	v->a[221611] = 1;
	v->a[221612] = sym__arithmetic_binary_expression;
	v->a[221613] = state(2803);
	v->a[221614] = 1;
	v->a[221615] = sym__arithmetic_ternary_expression;
	v->a[221616] = state(2809);
	v->a[221617] = 1;
	v->a[221618] = sym__arithmetic_unary_expression;
	v->a[221619] = state(2825);
	small_parse_table_11081(v);
}

void	small_parse_table_11081(t_small_parse_table_array *v)
{
	v->a[221620] = 1;
	v->a[221621] = sym__arithmetic_postfix_expression;
	v->a[221622] = actions(9282);
	v->a[221623] = 2;
	v->a[221624] = anon_sym_PLUS_PLUS2;
	v->a[221625] = anon_sym_DASH_DASH2;
	v->a[221626] = actions(9284);
	v->a[221627] = 2;
	v->a[221628] = anon_sym_DASH2;
	v->a[221629] = anon_sym_PLUS2;
	v->a[221630] = state(2880);
	v->a[221631] = 9;
	v->a[221632] = sym_subscript;
	v->a[221633] = sym__arithmetic_expression;
	v->a[221634] = sym__arithmetic_literal;
	v->a[221635] = sym__arithmetic_parenthesized_expression;
	v->a[221636] = sym_string;
	v->a[221637] = sym_number;
	v->a[221638] = sym_simple_expansion;
	v->a[221639] = sym_expansion;
	small_parse_table_11082(v);
}

void	small_parse_table_11082(t_small_parse_table_array *v)
{
	v->a[221640] = sym_command_substitution;
	v->a[221641] = 21;
	v->a[221642] = actions(71);
	v->a[221643] = 1;
	v->a[221644] = sym_comment;
	v->a[221645] = actions(9364);
	v->a[221646] = 1;
	v->a[221647] = anon_sym_LPAREN;
	v->a[221648] = actions(9366);
	v->a[221649] = 1;
	v->a[221650] = anon_sym_BANG;
	v->a[221651] = actions(9372);
	v->a[221652] = 1;
	v->a[221653] = anon_sym_TILDE;
	v->a[221654] = actions(9374);
	v->a[221655] = 1;
	v->a[221656] = anon_sym_DOLLAR;
	v->a[221657] = actions(9376);
	v->a[221658] = 1;
	v->a[221659] = anon_sym_DQUOTE;
	small_parse_table_11083(v);
}

void	small_parse_table_11083(t_small_parse_table_array *v)
{
	v->a[221660] = actions(9378);
	v->a[221661] = 1;
	v->a[221662] = aux_sym_number_token1;
	v->a[221663] = actions(9380);
	v->a[221664] = 1;
	v->a[221665] = aux_sym_number_token2;
	v->a[221666] = actions(9382);
	v->a[221667] = 1;
	v->a[221668] = anon_sym_DOLLAR_LBRACE;
	v->a[221669] = actions(9384);
	v->a[221670] = 1;
	v->a[221671] = anon_sym_DOLLAR_LPAREN;
	v->a[221672] = actions(9386);
	v->a[221673] = 1;
	v->a[221674] = anon_sym_BQUOTE;
	v->a[221675] = actions(9388);
	v->a[221676] = 1;
	v->a[221677] = anon_sym_DOLLAR_BQUOTE;
	v->a[221678] = actions(9392);
	v->a[221679] = 1;
	small_parse_table_11084(v);
}

void	small_parse_table_11084(t_small_parse_table_array *v)
{
	v->a[221680] = sym_variable_name;
	v->a[221681] = actions(10606);
	v->a[221682] = 1;
	v->a[221683] = aux_sym__simple_variable_name_token1;
	v->a[221684] = state(3391);
	v->a[221685] = 1;
	v->a[221686] = sym__arithmetic_binary_expression;
	v->a[221687] = state(3396);
	v->a[221688] = 1;
	v->a[221689] = sym__arithmetic_ternary_expression;
	v->a[221690] = state(3398);
	v->a[221691] = 1;
	v->a[221692] = sym__arithmetic_unary_expression;
	v->a[221693] = state(3400);
	v->a[221694] = 1;
	v->a[221695] = sym__arithmetic_postfix_expression;
	v->a[221696] = actions(9368);
	v->a[221697] = 2;
	v->a[221698] = anon_sym_PLUS_PLUS2;
	v->a[221699] = anon_sym_DASH_DASH2;
	small_parse_table_11085(v);
}

/* EOF small_parse_table_2216.c */
