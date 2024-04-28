/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2776.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13880(t_small_parse_table_array *v)
{
	v->a[277600] = actions(12185);
	v->a[277601] = 1;
	v->a[277602] = anon_sym_DOLLAR_BQUOTE;
	v->a[277603] = actions(12484);
	v->a[277604] = 1;
	v->a[277605] = aux_sym__c_word_token1;
	v->a[277606] = state(3442);
	v->a[277607] = 1;
	v->a[277608] = sym__c_unary_expression;
	v->a[277609] = state(3443);
	v->a[277610] = 1;
	v->a[277611] = sym__c_binary_expression;
	v->a[277612] = state(3444);
	v->a[277613] = 1;
	v->a[277614] = sym__c_postfix_expression;
	v->a[277615] = actions(12165);
	v->a[277616] = 2;
	v->a[277617] = anon_sym_PLUS_PLUS;
	v->a[277618] = anon_sym_DASH_DASH;
	v->a[277619] = state(3402);
	small_parse_table_13881(v);
}

void	small_parse_table_13881(t_small_parse_table_array *v)
{
	v->a[277620] = 7;
	v->a[277621] = sym__c_expression_not_assignment;
	v->a[277622] = sym__c_parenthesized_expression;
	v->a[277623] = sym_string;
	v->a[277624] = sym_number;
	v->a[277625] = sym_simple_expansion;
	v->a[277626] = sym_expansion;
	v->a[277627] = sym_command_substitution;
	v->a[277628] = 16;
	v->a[277629] = actions(71);
	v->a[277630] = 1;
	v->a[277631] = sym_comment;
	v->a[277632] = actions(12167);
	v->a[277633] = 1;
	v->a[277634] = anon_sym_LPAREN;
	v->a[277635] = actions(12171);
	v->a[277636] = 1;
	v->a[277637] = anon_sym_DOLLAR;
	v->a[277638] = actions(12173);
	v->a[277639] = 1;
	small_parse_table_13882(v);
}

void	small_parse_table_13882(t_small_parse_table_array *v)
{
	v->a[277640] = anon_sym_DQUOTE;
	v->a[277641] = actions(12175);
	v->a[277642] = 1;
	v->a[277643] = aux_sym_number_token1;
	v->a[277644] = actions(12177);
	v->a[277645] = 1;
	v->a[277646] = aux_sym_number_token2;
	v->a[277647] = actions(12179);
	v->a[277648] = 1;
	v->a[277649] = anon_sym_DOLLAR_LBRACE;
	v->a[277650] = actions(12181);
	v->a[277651] = 1;
	v->a[277652] = anon_sym_DOLLAR_LPAREN;
	v->a[277653] = actions(12183);
	v->a[277654] = 1;
	v->a[277655] = anon_sym_BQUOTE;
	v->a[277656] = actions(12185);
	v->a[277657] = 1;
	v->a[277658] = anon_sym_DOLLAR_BQUOTE;
	v->a[277659] = actions(12486);
	small_parse_table_13883(v);
}

void	small_parse_table_13883(t_small_parse_table_array *v)
{
	v->a[277660] = 1;
	v->a[277661] = aux_sym__c_word_token1;
	v->a[277662] = state(3442);
	v->a[277663] = 1;
	v->a[277664] = sym__c_unary_expression;
	v->a[277665] = state(3443);
	v->a[277666] = 1;
	v->a[277667] = sym__c_binary_expression;
	v->a[277668] = state(3444);
	v->a[277669] = 1;
	v->a[277670] = sym__c_postfix_expression;
	v->a[277671] = actions(12165);
	v->a[277672] = 2;
	v->a[277673] = anon_sym_PLUS_PLUS;
	v->a[277674] = anon_sym_DASH_DASH;
	v->a[277675] = state(3399);
	v->a[277676] = 7;
	v->a[277677] = sym__c_expression_not_assignment;
	v->a[277678] = sym__c_parenthesized_expression;
	v->a[277679] = sym_string;
	small_parse_table_13884(v);
}

void	small_parse_table_13884(t_small_parse_table_array *v)
{
	v->a[277680] = sym_number;
	v->a[277681] = sym_simple_expansion;
	v->a[277682] = sym_expansion;
	v->a[277683] = sym_command_substitution;
	v->a[277684] = 16;
	v->a[277685] = actions(71);
	v->a[277686] = 1;
	v->a[277687] = sym_comment;
	v->a[277688] = actions(12167);
	v->a[277689] = 1;
	v->a[277690] = anon_sym_LPAREN;
	v->a[277691] = actions(12171);
	v->a[277692] = 1;
	v->a[277693] = anon_sym_DOLLAR;
	v->a[277694] = actions(12173);
	v->a[277695] = 1;
	v->a[277696] = anon_sym_DQUOTE;
	v->a[277697] = actions(12175);
	v->a[277698] = 1;
	v->a[277699] = aux_sym_number_token1;
	small_parse_table_13885(v);
}

/* EOF small_parse_table_2776.c */
