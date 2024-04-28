/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2276.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11380(t_small_parse_table_array *v)
{
	v->a[227600] = 1;
	v->a[227601] = anon_sym_BANG;
	v->a[227602] = actions(9906);
	v->a[227603] = 1;
	v->a[227604] = anon_sym_TILDE;
	v->a[227605] = actions(9908);
	v->a[227606] = 1;
	v->a[227607] = anon_sym_DOLLAR;
	v->a[227608] = actions(9910);
	v->a[227609] = 1;
	v->a[227610] = anon_sym_DQUOTE;
	v->a[227611] = actions(9912);
	v->a[227612] = 1;
	v->a[227613] = aux_sym_number_token1;
	v->a[227614] = actions(9914);
	v->a[227615] = 1;
	v->a[227616] = aux_sym_number_token2;
	v->a[227617] = actions(9916);
	v->a[227618] = 1;
	v->a[227619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11381(v);
}

void	small_parse_table_11381(t_small_parse_table_array *v)
{
	v->a[227620] = actions(9918);
	v->a[227621] = 1;
	v->a[227622] = anon_sym_DOLLAR_LPAREN;
	v->a[227623] = actions(9920);
	v->a[227624] = 1;
	v->a[227625] = anon_sym_BQUOTE;
	v->a[227626] = actions(9922);
	v->a[227627] = 1;
	v->a[227628] = anon_sym_DOLLAR_BQUOTE;
	v->a[227629] = actions(10810);
	v->a[227630] = 1;
	v->a[227631] = aux_sym__simple_variable_name_token1;
	v->a[227632] = state(3359);
	v->a[227633] = 1;
	v->a[227634] = sym__arithmetic_postfix_expression;
	v->a[227635] = state(3361);
	v->a[227636] = 1;
	v->a[227637] = sym__arithmetic_unary_expression;
	v->a[227638] = state(3367);
	v->a[227639] = 1;
	small_parse_table_11382(v);
}

void	small_parse_table_11382(t_small_parse_table_array *v)
{
	v->a[227640] = sym__arithmetic_ternary_expression;
	v->a[227641] = state(3375);
	v->a[227642] = 1;
	v->a[227643] = sym__arithmetic_binary_expression;
	v->a[227644] = actions(9902);
	v->a[227645] = 2;
	v->a[227646] = anon_sym_PLUS_PLUS2;
	v->a[227647] = anon_sym_DASH_DASH2;
	v->a[227648] = actions(9904);
	v->a[227649] = 2;
	v->a[227650] = anon_sym_DASH2;
	v->a[227651] = anon_sym_PLUS2;
	v->a[227652] = state(3261);
	v->a[227653] = 9;
	v->a[227654] = sym_subscript;
	v->a[227655] = sym__arithmetic_expression;
	v->a[227656] = sym__arithmetic_literal;
	v->a[227657] = sym__arithmetic_parenthesized_expression;
	v->a[227658] = sym_string;
	v->a[227659] = sym_number;
	small_parse_table_11383(v);
}

void	small_parse_table_11383(t_small_parse_table_array *v)
{
	v->a[227660] = sym_simple_expansion;
	v->a[227661] = sym_expansion;
	v->a[227662] = sym_command_substitution;
	v->a[227663] = 20;
	v->a[227664] = actions(71);
	v->a[227665] = 1;
	v->a[227666] = sym_comment;
	v->a[227667] = actions(1551);
	v->a[227668] = 1;
	v->a[227669] = anon_sym_DOLLAR;
	v->a[227670] = actions(1557);
	v->a[227671] = 1;
	v->a[227672] = aux_sym_number_token1;
	v->a[227673] = actions(1559);
	v->a[227674] = 1;
	v->a[227675] = aux_sym_number_token2;
	v->a[227676] = actions(1563);
	v->a[227677] = 1;
	v->a[227678] = anon_sym_DOLLAR_LPAREN;
	v->a[227679] = actions(1575);
	small_parse_table_11384(v);
}

void	small_parse_table_11384(t_small_parse_table_array *v)
{
	v->a[227680] = 1;
	v->a[227681] = sym__brace_start;
	v->a[227682] = actions(9198);
	v->a[227683] = 1;
	v->a[227684] = anon_sym_DOLLAR_LBRACK;
	v->a[227685] = actions(9200);
	v->a[227686] = 1;
	v->a[227687] = sym__special_character;
	v->a[227688] = actions(9202);
	v->a[227689] = 1;
	v->a[227690] = anon_sym_DQUOTE;
	v->a[227691] = actions(9206);
	v->a[227692] = 1;
	v->a[227693] = anon_sym_DOLLAR_LBRACE;
	v->a[227694] = actions(9208);
	v->a[227695] = 1;
	v->a[227696] = anon_sym_BQUOTE;
	v->a[227697] = actions(9210);
	v->a[227698] = 1;
	v->a[227699] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11385(v);
}

/* EOF small_parse_table_2276.c */
