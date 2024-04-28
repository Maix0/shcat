/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2586.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12930(t_small_parse_table_array *v)
{
	v->a[258600] = anon_sym_GT_PIPE;
	v->a[258601] = anon_sym_LT_AMP_DASH;
	v->a[258602] = anon_sym_GT_AMP_DASH;
	v->a[258603] = anon_sym_LT_LT_DASH;
	v->a[258604] = 16;
	v->a[258605] = actions(3);
	v->a[258606] = 1;
	v->a[258607] = sym_comment;
	v->a[258608] = actions(11760);
	v->a[258609] = 1;
	v->a[258610] = anon_sym_BANG2;
	v->a[258611] = actions(11764);
	v->a[258612] = 1;
	v->a[258613] = anon_sym_DOLLAR_LPAREN;
	v->a[258614] = actions(11766);
	v->a[258615] = 1;
	v->a[258616] = anon_sym_BQUOTE;
	v->a[258617] = actions(11768);
	v->a[258618] = 1;
	v->a[258619] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12931(v);
}

void	small_parse_table_12931(t_small_parse_table_array *v)
{
	v->a[258620] = actions(11770);
	v->a[258621] = 1;
	v->a[258622] = aux_sym__simple_variable_name_token1;
	v->a[258623] = actions(11772);
	v->a[258624] = 1;
	v->a[258625] = sym_variable_name;
	v->a[258626] = actions(11905);
	v->a[258627] = 1;
	v->a[258628] = anon_sym_RBRACE3;
	v->a[258629] = state(3532);
	v->a[258630] = 1;
	v->a[258631] = sym_subscript;
	v->a[258632] = state(6428);
	v->a[258633] = 1;
	v->a[258634] = aux_sym__expansion_body_repeat1;
	v->a[258635] = state(6472);
	v->a[258636] = 1;
	v->a[258637] = sym_command_substitution;
	v->a[258638] = state(7271);
	v->a[258639] = 1;
	small_parse_table_12932(v);
}

void	small_parse_table_12932(t_small_parse_table_array *v)
{
	v->a[258640] = sym__expansion_body;
	v->a[258641] = actions(11762);
	v->a[258642] = 2;
	v->a[258643] = anon_sym_POUND2;
	v->a[258644] = anon_sym_EQ2;
	v->a[258645] = actions(8050);
	v->a[258646] = 3;
	v->a[258647] = sym__external_expansion_sym_hash;
	v->a[258648] = sym__external_expansion_sym_bang;
	v->a[258649] = sym__external_expansion_sym_equal;
	v->a[258650] = actions(11754);
	v->a[258651] = 4;
	v->a[258652] = anon_sym_DASH;
	v->a[258653] = anon_sym_STAR;
	v->a[258654] = anon_sym_QMARK;
	v->a[258655] = anon_sym_AT2;
	v->a[258656] = actions(11756);
	v->a[258657] = 5;
	v->a[258658] = anon_sym_BANG;
	v->a[258659] = anon_sym_DOLLAR;
	small_parse_table_12933(v);
}

void	small_parse_table_12933(t_small_parse_table_array *v)
{
	v->a[258660] = anon_sym_POUND;
	v->a[258661] = anon_sym_0;
	v->a[258662] = anon_sym__;
	v->a[258663] = 16;
	v->a[258664] = actions(3);
	v->a[258665] = 1;
	v->a[258666] = sym_comment;
	v->a[258667] = actions(11760);
	v->a[258668] = 1;
	v->a[258669] = anon_sym_BANG2;
	v->a[258670] = actions(11764);
	v->a[258671] = 1;
	v->a[258672] = anon_sym_DOLLAR_LPAREN;
	v->a[258673] = actions(11766);
	v->a[258674] = 1;
	v->a[258675] = anon_sym_BQUOTE;
	v->a[258676] = actions(11768);
	v->a[258677] = 1;
	v->a[258678] = anon_sym_DOLLAR_BQUOTE;
	v->a[258679] = actions(11770);
	small_parse_table_12934(v);
}

void	small_parse_table_12934(t_small_parse_table_array *v)
{
	v->a[258680] = 1;
	v->a[258681] = aux_sym__simple_variable_name_token1;
	v->a[258682] = actions(11772);
	v->a[258683] = 1;
	v->a[258684] = sym_variable_name;
	v->a[258685] = actions(11907);
	v->a[258686] = 1;
	v->a[258687] = anon_sym_RBRACE3;
	v->a[258688] = state(3532);
	v->a[258689] = 1;
	v->a[258690] = sym_subscript;
	v->a[258691] = state(6428);
	v->a[258692] = 1;
	v->a[258693] = aux_sym__expansion_body_repeat1;
	v->a[258694] = state(6472);
	v->a[258695] = 1;
	v->a[258696] = sym_command_substitution;
	v->a[258697] = state(7082);
	v->a[258698] = 1;
	v->a[258699] = sym__expansion_body;
	small_parse_table_12935(v);
}

/* EOF small_parse_table_2586.c */
