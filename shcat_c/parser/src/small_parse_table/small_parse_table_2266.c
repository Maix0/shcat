/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2266.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11330(t_small_parse_table_array *v)
{
	v->a[226600] = 1;
	v->a[226601] = aux_sym_number_token2;
	v->a[226602] = actions(9382);
	v->a[226603] = 1;
	v->a[226604] = anon_sym_DOLLAR_LBRACE;
	v->a[226605] = actions(9384);
	v->a[226606] = 1;
	v->a[226607] = anon_sym_DOLLAR_LPAREN;
	v->a[226608] = actions(9386);
	v->a[226609] = 1;
	v->a[226610] = anon_sym_BQUOTE;
	v->a[226611] = actions(9388);
	v->a[226612] = 1;
	v->a[226613] = anon_sym_DOLLAR_BQUOTE;
	v->a[226614] = actions(9392);
	v->a[226615] = 1;
	v->a[226616] = sym_variable_name;
	v->a[226617] = actions(10768);
	v->a[226618] = 1;
	v->a[226619] = aux_sym__simple_variable_name_token1;
	small_parse_table_11331(v);
}

void	small_parse_table_11331(t_small_parse_table_array *v)
{
	v->a[226620] = state(3391);
	v->a[226621] = 1;
	v->a[226622] = sym__arithmetic_binary_expression;
	v->a[226623] = state(3396);
	v->a[226624] = 1;
	v->a[226625] = sym__arithmetic_ternary_expression;
	v->a[226626] = state(3398);
	v->a[226627] = 1;
	v->a[226628] = sym__arithmetic_unary_expression;
	v->a[226629] = state(3400);
	v->a[226630] = 1;
	v->a[226631] = sym__arithmetic_postfix_expression;
	v->a[226632] = actions(9368);
	v->a[226633] = 2;
	v->a[226634] = anon_sym_PLUS_PLUS2;
	v->a[226635] = anon_sym_DASH_DASH2;
	v->a[226636] = actions(9370);
	v->a[226637] = 2;
	v->a[226638] = anon_sym_DASH2;
	v->a[226639] = anon_sym_PLUS2;
	small_parse_table_11332(v);
}

void	small_parse_table_11332(t_small_parse_table_array *v)
{
	v->a[226640] = state(3299);
	v->a[226641] = 9;
	v->a[226642] = sym_subscript;
	v->a[226643] = sym__arithmetic_expression;
	v->a[226644] = sym__arithmetic_literal;
	v->a[226645] = sym__arithmetic_parenthesized_expression;
	v->a[226646] = sym_string;
	v->a[226647] = sym_number;
	v->a[226648] = sym_simple_expansion;
	v->a[226649] = sym_expansion;
	v->a[226650] = sym_command_substitution;
	v->a[226651] = 18;
	v->a[226652] = actions(3);
	v->a[226653] = 1;
	v->a[226654] = sym_comment;
	v->a[226655] = actions(3191);
	v->a[226656] = 1;
	v->a[226657] = aux_sym_number_token1;
	v->a[226658] = actions(3193);
	v->a[226659] = 1;
	small_parse_table_11333(v);
}

void	small_parse_table_11333(t_small_parse_table_array *v)
{
	v->a[226660] = aux_sym_number_token2;
	v->a[226661] = actions(3197);
	v->a[226662] = 1;
	v->a[226663] = anon_sym_DOLLAR_LPAREN;
	v->a[226664] = actions(3209);
	v->a[226665] = 1;
	v->a[226666] = sym__brace_start;
	v->a[226667] = actions(9674);
	v->a[226668] = 1;
	v->a[226669] = sym_word;
	v->a[226670] = actions(9678);
	v->a[226671] = 1;
	v->a[226672] = anon_sym_DOLLAR_LBRACK;
	v->a[226673] = actions(9682);
	v->a[226674] = 1;
	v->a[226675] = anon_sym_DQUOTE;
	v->a[226676] = actions(9686);
	v->a[226677] = 1;
	v->a[226678] = anon_sym_DOLLAR_LBRACE;
	v->a[226679] = actions(9688);
	small_parse_table_11334(v);
}

void	small_parse_table_11334(t_small_parse_table_array *v)
{
	v->a[226680] = 1;
	v->a[226681] = anon_sym_BQUOTE;
	v->a[226682] = actions(9690);
	v->a[226683] = 1;
	v->a[226684] = anon_sym_DOLLAR_BQUOTE;
	v->a[226685] = actions(9694);
	v->a[226686] = 1;
	v->a[226687] = sym__comment_word;
	v->a[226688] = actions(10770);
	v->a[226689] = 1;
	v->a[226690] = anon_sym_DOLLAR;
	v->a[226691] = actions(9676);
	v->a[226692] = 2;
	v->a[226693] = anon_sym_LPAREN_LPAREN;
	v->a[226694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226695] = actions(9680);
	v->a[226696] = 2;
	v->a[226697] = sym_test_operator;
	v->a[226698] = sym__special_character;
	v->a[226699] = actions(9692);
	small_parse_table_11335(v);
}

/* EOF small_parse_table_2266.c */
