/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_976.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4880(t_small_parse_table_array *v)
{
	v->a[97600] = 1;
	v->a[97601] = anon_sym_DOLLAR;
	v->a[97602] = actions(4248);
	v->a[97603] = 1;
	v->a[97604] = anon_sym_DQUOTE;
	v->a[97605] = state(1971);
	v->a[97606] = 1;
	v->a[97607] = aux_sym_string_repeat1;
	v->a[97608] = state(2107);
	v->a[97609] = 4;
	v->a[97610] = sym_arithmetic_expansion;
	v->a[97611] = sym_simple_expansion;
	v->a[97612] = sym_expansion;
	v->a[97613] = sym_command_substitution;
	v->a[97614] = 4;
	v->a[97615] = actions(3);
	v->a[97616] = 1;
	v->a[97617] = sym_comment;
	v->a[97618] = actions(745);
	v->a[97619] = 1;
	small_parse_table_4881(v);
}

void	small_parse_table_4881(t_small_parse_table_array *v)
{
	v->a[97620] = sym_variable_name;
	v->a[97621] = actions(743);
	v->a[97622] = 2;
	v->a[97623] = aux_sym__simple_variable_name_token1;
	v->a[97624] = aux_sym__multiline_variable_name_token1;
	v->a[97625] = actions(741);
	v->a[97626] = 9;
	v->a[97627] = anon_sym_BANG;
	v->a[97628] = anon_sym_DASH;
	v->a[97629] = anon_sym_STAR;
	v->a[97630] = anon_sym_QMARK;
	v->a[97631] = anon_sym_DOLLAR;
	v->a[97632] = anon_sym_POUND;
	v->a[97633] = anon_sym_AT;
	v->a[97634] = anon_sym_0;
	v->a[97635] = anon_sym__;
	v->a[97636] = 10;
	v->a[97637] = actions(3);
	v->a[97638] = 1;
	v->a[97639] = sym_comment;
	small_parse_table_4882(v);
}

void	small_parse_table_4882(t_small_parse_table_array *v)
{
	v->a[97640] = actions(3856);
	v->a[97641] = 1;
	v->a[97642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97643] = actions(3862);
	v->a[97644] = 1;
	v->a[97645] = sym_string_content;
	v->a[97646] = actions(3864);
	v->a[97647] = 1;
	v->a[97648] = anon_sym_DOLLAR_LBRACE;
	v->a[97649] = actions(3866);
	v->a[97650] = 1;
	v->a[97651] = anon_sym_DOLLAR_LPAREN;
	v->a[97652] = actions(3868);
	v->a[97653] = 1;
	v->a[97654] = anon_sym_BQUOTE;
	v->a[97655] = actions(4250);
	v->a[97656] = 1;
	v->a[97657] = anon_sym_DOLLAR;
	v->a[97658] = actions(4252);
	v->a[97659] = 1;
	small_parse_table_4883(v);
}

void	small_parse_table_4883(t_small_parse_table_array *v)
{
	v->a[97660] = anon_sym_DQUOTE;
	v->a[97661] = state(2046);
	v->a[97662] = 1;
	v->a[97663] = aux_sym_string_repeat1;
	v->a[97664] = state(2107);
	v->a[97665] = 4;
	v->a[97666] = sym_arithmetic_expansion;
	v->a[97667] = sym_simple_expansion;
	v->a[97668] = sym_expansion;
	v->a[97669] = sym_command_substitution;
	v->a[97670] = 10;
	v->a[97671] = actions(3);
	v->a[97672] = 1;
	v->a[97673] = sym_comment;
	v->a[97674] = actions(3856);
	v->a[97675] = 1;
	v->a[97676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97677] = actions(3862);
	v->a[97678] = 1;
	v->a[97679] = sym_string_content;
	small_parse_table_4884(v);
}

void	small_parse_table_4884(t_small_parse_table_array *v)
{
	v->a[97680] = actions(3864);
	v->a[97681] = 1;
	v->a[97682] = anon_sym_DOLLAR_LBRACE;
	v->a[97683] = actions(3866);
	v->a[97684] = 1;
	v->a[97685] = anon_sym_DOLLAR_LPAREN;
	v->a[97686] = actions(3868);
	v->a[97687] = 1;
	v->a[97688] = anon_sym_BQUOTE;
	v->a[97689] = actions(4254);
	v->a[97690] = 1;
	v->a[97691] = anon_sym_DOLLAR;
	v->a[97692] = actions(4256);
	v->a[97693] = 1;
	v->a[97694] = anon_sym_DQUOTE;
	v->a[97695] = state(2047);
	v->a[97696] = 1;
	v->a[97697] = aux_sym_string_repeat1;
	v->a[97698] = state(2107);
	v->a[97699] = 4;
	small_parse_table_4885(v);
}

/* EOF small_parse_table_976.c */
