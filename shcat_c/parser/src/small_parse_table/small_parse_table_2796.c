/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2796.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13980(t_small_parse_table_array *v)
{
	v->a[279600] = 1;
	v->a[279601] = aux_sym__simple_variable_name_token1;
	v->a[279602] = state(5429);
	v->a[279603] = 1;
	v->a[279604] = sym_simple_expansion;
	v->a[279605] = state(6266);
	v->a[279606] = 1;
	v->a[279607] = sym__expansion_max_length_binary_expression;
	v->a[279608] = state(6470);
	v->a[279609] = 1;
	v->a[279610] = sym__expansion_max_length_expression;
	v->a[279611] = actions(12541);
	v->a[279612] = 2;
	v->a[279613] = anon_sym_LPAREN_LPAREN;
	v->a[279614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[279615] = state(6260);
	v->a[279616] = 2;
	v->a[279617] = sym_number;
	v->a[279618] = sym_expansion;
	v->a[279619] = state(6798);
	small_parse_table_13981(v);
}

void	small_parse_table_13981(t_small_parse_table_array *v)
{
	v->a[279620] = 3;
	v->a[279621] = sym_parenthesized_expression;
	v->a[279622] = sym_arithmetic_expansion;
	v->a[279623] = sym_command_substitution;
	v->a[279624] = 16;
	v->a[279625] = actions(71);
	v->a[279626] = 1;
	v->a[279627] = sym_comment;
	v->a[279628] = actions(11256);
	v->a[279629] = 1;
	v->a[279630] = anon_sym_DOLLAR;
	v->a[279631] = actions(11262);
	v->a[279632] = 1;
	v->a[279633] = aux_sym_number_token2;
	v->a[279634] = actions(12233);
	v->a[279635] = 1;
	v->a[279636] = anon_sym_LPAREN;
	v->a[279637] = actions(12237);
	v->a[279638] = 1;
	v->a[279639] = anon_sym_DQUOTE;
	small_parse_table_13982(v);
}

void	small_parse_table_13982(t_small_parse_table_array *v)
{
	v->a[279640] = actions(12239);
	v->a[279641] = 1;
	v->a[279642] = aux_sym_number_token1;
	v->a[279643] = actions(12241);
	v->a[279644] = 1;
	v->a[279645] = anon_sym_DOLLAR_LBRACE;
	v->a[279646] = actions(12243);
	v->a[279647] = 1;
	v->a[279648] = anon_sym_DOLLAR_LPAREN;
	v->a[279649] = actions(12245);
	v->a[279650] = 1;
	v->a[279651] = anon_sym_BQUOTE;
	v->a[279652] = actions(12247);
	v->a[279653] = 1;
	v->a[279654] = anon_sym_DOLLAR_BQUOTE;
	v->a[279655] = actions(12608);
	v->a[279656] = 1;
	v->a[279657] = aux_sym__c_word_token1;
	v->a[279658] = state(3113);
	v->a[279659] = 1;
	small_parse_table_13983(v);
}

void	small_parse_table_13983(t_small_parse_table_array *v)
{
	v->a[279660] = sym__c_postfix_expression;
	v->a[279661] = state(3116);
	v->a[279662] = 1;
	v->a[279663] = sym__c_binary_expression;
	v->a[279664] = state(3118);
	v->a[279665] = 1;
	v->a[279666] = sym__c_unary_expression;
	v->a[279667] = actions(12231);
	v->a[279668] = 2;
	v->a[279669] = anon_sym_PLUS_PLUS;
	v->a[279670] = anon_sym_DASH_DASH;
	v->a[279671] = state(2948);
	v->a[279672] = 7;
	v->a[279673] = sym__c_expression_not_assignment;
	v->a[279674] = sym__c_parenthesized_expression;
	v->a[279675] = sym_string;
	v->a[279676] = sym_number;
	v->a[279677] = sym_simple_expansion;
	v->a[279678] = sym_expansion;
	v->a[279679] = sym_command_substitution;
	small_parse_table_13984(v);
}

void	small_parse_table_13984(t_small_parse_table_array *v)
{
	v->a[279680] = 16;
	v->a[279681] = actions(71);
	v->a[279682] = 1;
	v->a[279683] = sym_comment;
	v->a[279684] = actions(11256);
	v->a[279685] = 1;
	v->a[279686] = anon_sym_DOLLAR;
	v->a[279687] = actions(11262);
	v->a[279688] = 1;
	v->a[279689] = aux_sym_number_token2;
	v->a[279690] = actions(12233);
	v->a[279691] = 1;
	v->a[279692] = anon_sym_LPAREN;
	v->a[279693] = actions(12237);
	v->a[279694] = 1;
	v->a[279695] = anon_sym_DQUOTE;
	v->a[279696] = actions(12239);
	v->a[279697] = 1;
	v->a[279698] = aux_sym_number_token1;
	v->a[279699] = actions(12241);
	small_parse_table_13985(v);
}

/* EOF small_parse_table_2796.c */
