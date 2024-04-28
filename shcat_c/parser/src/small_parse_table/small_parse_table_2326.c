/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2326.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11630(t_small_parse_table_array *v)
{
	v->a[232600] = sym__arithmetic_literal;
	v->a[232601] = sym__arithmetic_parenthesized_expression;
	v->a[232602] = sym_string;
	v->a[232603] = sym_number;
	v->a[232604] = sym_simple_expansion;
	v->a[232605] = sym_expansion;
	v->a[232606] = sym_command_substitution;
	v->a[232607] = 21;
	v->a[232608] = actions(71);
	v->a[232609] = 1;
	v->a[232610] = sym_comment;
	v->a[232611] = actions(3600);
	v->a[232612] = 1;
	v->a[232613] = aux_sym__simple_variable_name_token1;
	v->a[232614] = actions(3602);
	v->a[232615] = 1;
	v->a[232616] = sym_variable_name;
	v->a[232617] = actions(9898);
	v->a[232618] = 1;
	v->a[232619] = anon_sym_LPAREN;
	small_parse_table_11631(v);
}

void	small_parse_table_11631(t_small_parse_table_array *v)
{
	v->a[232620] = actions(9900);
	v->a[232621] = 1;
	v->a[232622] = anon_sym_BANG;
	v->a[232623] = actions(9906);
	v->a[232624] = 1;
	v->a[232625] = anon_sym_TILDE;
	v->a[232626] = actions(9908);
	v->a[232627] = 1;
	v->a[232628] = anon_sym_DOLLAR;
	v->a[232629] = actions(9910);
	v->a[232630] = 1;
	v->a[232631] = anon_sym_DQUOTE;
	v->a[232632] = actions(9912);
	v->a[232633] = 1;
	v->a[232634] = aux_sym_number_token1;
	v->a[232635] = actions(9914);
	v->a[232636] = 1;
	v->a[232637] = aux_sym_number_token2;
	v->a[232638] = actions(9916);
	v->a[232639] = 1;
	small_parse_table_11632(v);
}

void	small_parse_table_11632(t_small_parse_table_array *v)
{
	v->a[232640] = anon_sym_DOLLAR_LBRACE;
	v->a[232641] = actions(9918);
	v->a[232642] = 1;
	v->a[232643] = anon_sym_DOLLAR_LPAREN;
	v->a[232644] = actions(9920);
	v->a[232645] = 1;
	v->a[232646] = anon_sym_BQUOTE;
	v->a[232647] = actions(9922);
	v->a[232648] = 1;
	v->a[232649] = anon_sym_DOLLAR_BQUOTE;
	v->a[232650] = state(3359);
	v->a[232651] = 1;
	v->a[232652] = sym__arithmetic_postfix_expression;
	v->a[232653] = state(3361);
	v->a[232654] = 1;
	v->a[232655] = sym__arithmetic_unary_expression;
	v->a[232656] = state(3367);
	v->a[232657] = 1;
	v->a[232658] = sym__arithmetic_ternary_expression;
	v->a[232659] = state(3375);
	small_parse_table_11633(v);
}

void	small_parse_table_11633(t_small_parse_table_array *v)
{
	v->a[232660] = 1;
	v->a[232661] = sym__arithmetic_binary_expression;
	v->a[232662] = actions(9902);
	v->a[232663] = 2;
	v->a[232664] = anon_sym_PLUS_PLUS2;
	v->a[232665] = anon_sym_DASH_DASH2;
	v->a[232666] = actions(9904);
	v->a[232667] = 2;
	v->a[232668] = anon_sym_DASH2;
	v->a[232669] = anon_sym_PLUS2;
	v->a[232670] = state(3281);
	v->a[232671] = 9;
	v->a[232672] = sym_subscript;
	v->a[232673] = sym__arithmetic_expression;
	v->a[232674] = sym__arithmetic_literal;
	v->a[232675] = sym__arithmetic_parenthesized_expression;
	v->a[232676] = sym_string;
	v->a[232677] = sym_number;
	v->a[232678] = sym_simple_expansion;
	v->a[232679] = sym_expansion;
	small_parse_table_11634(v);
}

void	small_parse_table_11634(t_small_parse_table_array *v)
{
	v->a[232680] = sym_command_substitution;
	v->a[232681] = 20;
	v->a[232682] = actions(71);
	v->a[232683] = 1;
	v->a[232684] = sym_comment;
	v->a[232685] = actions(9758);
	v->a[232686] = 1;
	v->a[232687] = anon_sym_DOLLAR_LBRACK;
	v->a[232688] = actions(9760);
	v->a[232689] = 1;
	v->a[232690] = anon_sym_DOLLAR;
	v->a[232691] = actions(9764);
	v->a[232692] = 1;
	v->a[232693] = anon_sym_DQUOTE;
	v->a[232694] = actions(9768);
	v->a[232695] = 1;
	v->a[232696] = aux_sym_number_token1;
	v->a[232697] = actions(9770);
	v->a[232698] = 1;
	v->a[232699] = aux_sym_number_token2;
	small_parse_table_11635(v);
}

/* EOF small_parse_table_2326.c */
