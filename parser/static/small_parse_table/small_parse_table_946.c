/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_946.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4730(t_small_parse_table_array *v)
{
	v->a[94600] = sym_expansion;
	v->a[94601] = sym_command_substitution;
	v->a[94602] = 4;
	v->a[94603] = actions(3);
	v->a[94604] = 1;
	v->a[94605] = sym_comment;
	v->a[94606] = actions(429);
	v->a[94607] = 1;
	v->a[94608] = sym_variable_name;
	v->a[94609] = actions(427);
	v->a[94610] = 2;
	v->a[94611] = aux_sym__simple_variable_name_token1;
	v->a[94612] = aux_sym__multiline_variable_name_token1;
	v->a[94613] = actions(425);
	v->a[94614] = 9;
	v->a[94615] = anon_sym_BANG;
	v->a[94616] = anon_sym_DASH;
	v->a[94617] = anon_sym_STAR;
	v->a[94618] = anon_sym_QMARK;
	v->a[94619] = anon_sym_DOLLAR;
	small_parse_table_4731(v);
}

void	small_parse_table_4731(t_small_parse_table_array *v)
{
	v->a[94620] = anon_sym_POUND;
	v->a[94621] = anon_sym_AT;
	v->a[94622] = anon_sym_0;
	v->a[94623] = anon_sym__;
	v->a[94624] = 10;
	v->a[94625] = actions(3);
	v->a[94626] = 1;
	v->a[94627] = sym_comment;
	v->a[94628] = actions(3856);
	v->a[94629] = 1;
	v->a[94630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94631] = actions(3862);
	v->a[94632] = 1;
	v->a[94633] = sym_string_content;
	v->a[94634] = actions(3864);
	v->a[94635] = 1;
	v->a[94636] = anon_sym_DOLLAR_LBRACE;
	v->a[94637] = actions(3866);
	v->a[94638] = 1;
	v->a[94639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4732(v);
}

void	small_parse_table_4732(t_small_parse_table_array *v)
{
	v->a[94640] = actions(3868);
	v->a[94641] = 1;
	v->a[94642] = anon_sym_BQUOTE;
	v->a[94643] = actions(3882);
	v->a[94644] = 1;
	v->a[94645] = anon_sym_DOLLAR;
	v->a[94646] = actions(3884);
	v->a[94647] = 1;
	v->a[94648] = anon_sym_DQUOTE;
	v->a[94649] = state(1987);
	v->a[94650] = 1;
	v->a[94651] = aux_sym_string_repeat1;
	v->a[94652] = state(2107);
	v->a[94653] = 4;
	v->a[94654] = sym_arithmetic_expansion;
	v->a[94655] = sym_simple_expansion;
	v->a[94656] = sym_expansion;
	v->a[94657] = sym_command_substitution;
	v->a[94658] = 10;
	v->a[94659] = actions(3);
	small_parse_table_4733(v);
}

void	small_parse_table_4733(t_small_parse_table_array *v)
{
	v->a[94660] = 1;
	v->a[94661] = sym_comment;
	v->a[94662] = actions(3856);
	v->a[94663] = 1;
	v->a[94664] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94665] = actions(3862);
	v->a[94666] = 1;
	v->a[94667] = sym_string_content;
	v->a[94668] = actions(3864);
	v->a[94669] = 1;
	v->a[94670] = anon_sym_DOLLAR_LBRACE;
	v->a[94671] = actions(3866);
	v->a[94672] = 1;
	v->a[94673] = anon_sym_DOLLAR_LPAREN;
	v->a[94674] = actions(3868);
	v->a[94675] = 1;
	v->a[94676] = anon_sym_BQUOTE;
	v->a[94677] = actions(3886);
	v->a[94678] = 1;
	v->a[94679] = anon_sym_DOLLAR;
	small_parse_table_4734(v);
}

void	small_parse_table_4734(t_small_parse_table_array *v)
{
	v->a[94680] = actions(3888);
	v->a[94681] = 1;
	v->a[94682] = anon_sym_DQUOTE;
	v->a[94683] = state(1955);
	v->a[94684] = 1;
	v->a[94685] = aux_sym_string_repeat1;
	v->a[94686] = state(2107);
	v->a[94687] = 4;
	v->a[94688] = sym_arithmetic_expansion;
	v->a[94689] = sym_simple_expansion;
	v->a[94690] = sym_expansion;
	v->a[94691] = sym_command_substitution;
	v->a[94692] = 6;
	v->a[94693] = actions(1094);
	v->a[94694] = 1;
	v->a[94695] = sym_comment;
	v->a[94696] = actions(3896);
	v->a[94697] = 1;
	v->a[94698] = anon_sym_LT_LT;
	v->a[94699] = actions(3898);
	small_parse_table_4735(v);
}

/* EOF small_parse_table_946.c */
