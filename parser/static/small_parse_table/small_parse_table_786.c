/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_786.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3930(t_small_parse_table_array *v)
{
	v->a[78600] = 1;
	v->a[78601] = sym_string_content;
	v->a[78602] = actions(3112);
	v->a[78603] = 1;
	v->a[78604] = anon_sym_DOLLAR_LBRACE;
	v->a[78605] = actions(3114);
	v->a[78606] = 1;
	v->a[78607] = anon_sym_DOLLAR_LPAREN;
	v->a[78608] = actions(3116);
	v->a[78609] = 1;
	v->a[78610] = anon_sym_BQUOTE;
	v->a[78611] = actions(3358);
	v->a[78612] = 1;
	v->a[78613] = anon_sym_DOLLAR;
	v->a[78614] = actions(3360);
	v->a[78615] = 1;
	v->a[78616] = anon_sym_DQUOTE;
	v->a[78617] = state(1620);
	v->a[78618] = 1;
	v->a[78619] = aux_sym_string_repeat1;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = state(1748);
	v->a[78621] = 4;
	v->a[78622] = sym_arithmetic_expansion;
	v->a[78623] = sym_simple_expansion;
	v->a[78624] = sym_expansion;
	v->a[78625] = sym_command_substitution;
	v->a[78626] = 4;
	v->a[78627] = actions(3);
	v->a[78628] = 1;
	v->a[78629] = sym_comment;
	v->a[78630] = actions(3364);
	v->a[78631] = 1;
	v->a[78632] = anon_sym_esac;
	v->a[78633] = actions(3366);
	v->a[78634] = 1;
	v->a[78635] = sym_extglob_pattern;
	v->a[78636] = actions(3362);
	v->a[78637] = 10;
	v->a[78638] = anon_sym_LPAREN;
	v->a[78639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = anon_sym_DOLLAR;
	v->a[78641] = anon_sym_DQUOTE;
	v->a[78642] = sym_raw_string;
	v->a[78643] = sym_number;
	v->a[78644] = anon_sym_DOLLAR_LBRACE;
	v->a[78645] = anon_sym_DOLLAR_LPAREN;
	v->a[78646] = anon_sym_BQUOTE;
	v->a[78647] = sym_word;
	v->a[78648] = 4;
	v->a[78649] = actions(3);
	v->a[78650] = 1;
	v->a[78651] = sym_comment;
	v->a[78652] = actions(399);
	v->a[78653] = 1;
	v->a[78654] = sym_variable_name;
	v->a[78655] = actions(397);
	v->a[78656] = 2;
	v->a[78657] = aux_sym__simple_variable_name_token1;
	v->a[78658] = aux_sym__multiline_variable_name_token1;
	v->a[78659] = actions(395);
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = 9;
	v->a[78661] = anon_sym_BANG;
	v->a[78662] = anon_sym_DASH;
	v->a[78663] = anon_sym_STAR;
	v->a[78664] = anon_sym_QMARK;
	v->a[78665] = anon_sym_DOLLAR;
	v->a[78666] = anon_sym_POUND;
	v->a[78667] = anon_sym_AT;
	v->a[78668] = anon_sym_0;
	v->a[78669] = anon_sym__;
	v->a[78670] = 10;
	v->a[78671] = actions(3);
	v->a[78672] = 1;
	v->a[78673] = sym_comment;
	v->a[78674] = actions(3104);
	v->a[78675] = 1;
	v->a[78676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78677] = actions(3110);
	v->a[78678] = 1;
	v->a[78679] = sym_string_content;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = actions(3112);
	v->a[78681] = 1;
	v->a[78682] = anon_sym_DOLLAR_LBRACE;
	v->a[78683] = actions(3114);
	v->a[78684] = 1;
	v->a[78685] = anon_sym_DOLLAR_LPAREN;
	v->a[78686] = actions(3116);
	v->a[78687] = 1;
	v->a[78688] = anon_sym_BQUOTE;
	v->a[78689] = actions(3368);
	v->a[78690] = 1;
	v->a[78691] = anon_sym_DOLLAR;
	v->a[78692] = actions(3370);
	v->a[78693] = 1;
	v->a[78694] = anon_sym_DQUOTE;
	v->a[78695] = state(1661);
	v->a[78696] = 1;
	v->a[78697] = aux_sym_string_repeat1;
	v->a[78698] = state(1748);
	v->a[78699] = 4;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
