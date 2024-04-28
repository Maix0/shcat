/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2226.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11130(t_small_parse_table_array *v)
{
	v->a[222600] = anon_sym_DOLLAR;
	v->a[222601] = actions(8848);
	v->a[222602] = 2;
	v->a[222603] = anon_sym_LPAREN_LPAREN;
	v->a[222604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222605] = actions(8864);
	v->a[222606] = 2;
	v->a[222607] = anon_sym_LT_LPAREN;
	v->a[222608] = anon_sym_GT_LPAREN;
	v->a[222609] = actions(9520);
	v->a[222610] = 2;
	v->a[222611] = sym_test_operator;
	v->a[222612] = sym__special_character;
	v->a[222613] = actions(9522);
	v->a[222614] = 3;
	v->a[222615] = sym__bare_dollar;
	v->a[222616] = sym_raw_string;
	v->a[222617] = sym_ansi_c_string;
	v->a[222618] = state(2210);
	v->a[222619] = 9;
	small_parse_table_11131(v);
}

void	small_parse_table_11131(t_small_parse_table_array *v)
{
	v->a[222620] = sym_arithmetic_expansion;
	v->a[222621] = sym_brace_expression;
	v->a[222622] = sym_string;
	v->a[222623] = sym_translated_string;
	v->a[222624] = sym_number;
	v->a[222625] = sym_simple_expansion;
	v->a[222626] = sym_expansion;
	v->a[222627] = sym_command_substitution;
	v->a[222628] = sym_process_substitution;
	v->a[222629] = 21;
	v->a[222630] = actions(71);
	v->a[222631] = 1;
	v->a[222632] = sym_comment;
	v->a[222633] = actions(3602);
	v->a[222634] = 1;
	v->a[222635] = sym_variable_name;
	v->a[222636] = actions(9898);
	v->a[222637] = 1;
	v->a[222638] = anon_sym_LPAREN;
	v->a[222639] = actions(9900);
	small_parse_table_11132(v);
}

void	small_parse_table_11132(t_small_parse_table_array *v)
{
	v->a[222640] = 1;
	v->a[222641] = anon_sym_BANG;
	v->a[222642] = actions(9906);
	v->a[222643] = 1;
	v->a[222644] = anon_sym_TILDE;
	v->a[222645] = actions(9908);
	v->a[222646] = 1;
	v->a[222647] = anon_sym_DOLLAR;
	v->a[222648] = actions(9910);
	v->a[222649] = 1;
	v->a[222650] = anon_sym_DQUOTE;
	v->a[222651] = actions(9912);
	v->a[222652] = 1;
	v->a[222653] = aux_sym_number_token1;
	v->a[222654] = actions(9914);
	v->a[222655] = 1;
	v->a[222656] = aux_sym_number_token2;
	v->a[222657] = actions(9916);
	v->a[222658] = 1;
	v->a[222659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11133(v);
}

void	small_parse_table_11133(t_small_parse_table_array *v)
{
	v->a[222660] = actions(9918);
	v->a[222661] = 1;
	v->a[222662] = anon_sym_DOLLAR_LPAREN;
	v->a[222663] = actions(9920);
	v->a[222664] = 1;
	v->a[222665] = anon_sym_BQUOTE;
	v->a[222666] = actions(9922);
	v->a[222667] = 1;
	v->a[222668] = anon_sym_DOLLAR_BQUOTE;
	v->a[222669] = actions(10634);
	v->a[222670] = 1;
	v->a[222671] = aux_sym__simple_variable_name_token1;
	v->a[222672] = state(3359);
	v->a[222673] = 1;
	v->a[222674] = sym__arithmetic_postfix_expression;
	v->a[222675] = state(3361);
	v->a[222676] = 1;
	v->a[222677] = sym__arithmetic_unary_expression;
	v->a[222678] = state(3367);
	v->a[222679] = 1;
	small_parse_table_11134(v);
}

void	small_parse_table_11134(t_small_parse_table_array *v)
{
	v->a[222680] = sym__arithmetic_ternary_expression;
	v->a[222681] = state(3375);
	v->a[222682] = 1;
	v->a[222683] = sym__arithmetic_binary_expression;
	v->a[222684] = actions(9902);
	v->a[222685] = 2;
	v->a[222686] = anon_sym_PLUS_PLUS2;
	v->a[222687] = anon_sym_DASH_DASH2;
	v->a[222688] = actions(9904);
	v->a[222689] = 2;
	v->a[222690] = anon_sym_DASH2;
	v->a[222691] = anon_sym_PLUS2;
	v->a[222692] = state(3408);
	v->a[222693] = 9;
	v->a[222694] = sym_subscript;
	v->a[222695] = sym__arithmetic_expression;
	v->a[222696] = sym__arithmetic_literal;
	v->a[222697] = sym__arithmetic_parenthesized_expression;
	v->a[222698] = sym_string;
	v->a[222699] = sym_number;
	small_parse_table_11135(v);
}

/* EOF small_parse_table_2226.c */
